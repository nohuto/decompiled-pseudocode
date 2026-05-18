/*
 * XREFs of sub_180125410 @ 0x180125410
 * Callers:
 *     <none>
 * Callees:
 *     sub_180125198 @ 0x180125198 (sub_180125198.c)
 */

double __fastcall sub_180125410(__int64 a1, double a2)
{
  double result; // xmm0_8

  result = 1.0;
  if ( a2 < 1.0 )
  {
    result = 0.0;
    if ( a2 > 0.0 )
      return sub_180125198(a2);
  }
  return result;
}
