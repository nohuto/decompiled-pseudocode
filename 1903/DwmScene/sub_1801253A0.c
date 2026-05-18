/*
 * XREFs of sub_1801253A0 @ 0x1801253A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180125198 @ 0x180125198 (sub_180125198.c)
 */

double __fastcall sub_1801253A0(__int64 a1, double a2)
{
  double v2; // xmm3_8
  double result; // xmm0_8
  double v4; // xmm2_8
  double v5; // xmm0_8
  double v6; // xmm4_8
  double v7; // xmm0_8
  double v8; // xmm4_8

  v2 = 1.0;
  if ( a2 >= 1.0 )
    return v2;
  result = 0.0;
  if ( a2 > 0.0 )
  {
    v4 = a2 + a2;
    if ( a2 < 0.5 )
    {
      v5 = sub_180125198(1.0 - v4);
      return (1.0 - v5) * v6;
    }
    v7 = sub_180125198(v4 - 1.0);
    return v7 * v8 + v8;
  }
  return result;
}
