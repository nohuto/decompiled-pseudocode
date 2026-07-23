/*
 * XREFs of sin_piby4 @ 0x1800934D8
 * Callers:
 *     cos @ 0x180092C70 (cos.c)
 *     sin @ 0x180093090 (sin.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sin_piby4(double a1, double a2)
{
  __int128 v2; // xmm4
  double v3; // xmm5_8
  double v4; // xmm3_8
  __int128 v5; // xmm2

  *((double *)&v2 + 1) = *(&a1 + 1);
  v3 = a1 * a1;
  *((double *)&v5 + 1) = *(&a1 + 1);
  v4 = a1 * a1 * a1;
  *(double *)&v5 = (((a1 * a1 * 1.591814430448591e-10 - 0.0000000250511320680217) * (a1 * a1) + 0.00000275573161037288)
                  * (a1
                   * a1)
                  - 0.0001984126983676113)
                 * (a1
                  * a1)
                 + 0.00833333333333095;
  if ( a2 == 0.0 )
  {
    *(double *)&v5 = (*(double *)&v5 * v3 - 0.1666666666666667) * v4 + a1;
    return (__m128)v5;
  }
  else
  {
    *(double *)&v2 = a1 - ((a2 * 0.5 - *(double *)&v5 * v4) * v3 - a2 - v4 * -0.1666666666666667);
    return (__m128)v2;
  }
}
