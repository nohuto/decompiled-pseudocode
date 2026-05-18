/*
 * XREFs of sub_180125520 @ 0x180125520
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801252A8 @ 0x1801252A8 (sub_1801252A8.c)
 */

double __fastcall sub_180125520(__int64 a1, double a2)
{
  double result; // xmm0_8

  result = 1.0;
  if ( a2 < 1.0 )
  {
    result = 0.0;
    if ( a2 > 0.0 )
      return sub_1801252A8(a2);
  }
  return result;
}
