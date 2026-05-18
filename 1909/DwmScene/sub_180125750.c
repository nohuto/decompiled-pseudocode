/*
 * XREFs of sub_180125750 @ 0x180125750
 * Callers:
 *     <none>
 * Callees:
 *     _o_pow @ 0x180125B70 (_o_pow.c)
 */

double __fastcall sub_180125750(__int64 a1, double a2)
{
  double result; // xmm0_8
  double v3; // xmm7_8

  if ( a2 >= 1.0 )
    return 1.0;
  result = 0.0;
  if ( a2 > 0.0 )
  {
    v3 = o_pow();
    return (o_pow() - v3) / (1.0 - v3);
  }
  return result;
}
