/*
 * XREFs of sub_180125360 @ 0x180125360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __fastcall sub_180125360(__int64 a1, double a2)
{
  double result; // xmm0_8

  result = 1.0;
  if ( a2 < 1.0 )
  {
    result = 0.0;
    if ( a2 > 0.0 )
      return (a2 * 2.70158 - 1.70158) * (a2 * a2);
  }
  return result;
}
