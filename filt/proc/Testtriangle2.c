#include <stdio.h>

#include <rsf.h>

#include "triangle2.h"

int main(void) {
    float dot1[2], dot2[2];
    static int n1=100, n2=100, f1=10, f2=5;

    triangle2_init(f1, f2, n1, n2);
    sf_dot_test(triangle2_lop, n1*n2, n1*n2, dot1, dot2);
    triangle2_close();

    printf ("%12.8f ? %12.8f\n",dot1[0],dot1[1]);
    printf ("%12.8f ? %12.8f\n",dot2[0],dot2[1]);

    exit(0);
}
