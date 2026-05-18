/*
 * XREFs of sub_1801254D0 @ 0x1801254D0
 * Callers:
 *     <none>
 * Callees:
 *     _o_pow @ 0x180125A60 (_o_pow.c)
 *     _o_sin @ 0x180125A6C (_o_sin.c)
 */

double __fastcall sub_1801254D0(__int64 a1, double a2)
{
  double result; // xmm0_8
  double v3; // xmm9_8

  if ( a2 >= 1.0 )
    return 1.0;
  result = 0.0;
  if ( a2 > 0.0 )
  {
    v3 = o_sin();
    if ( a2 + a2 >= 1.0 )
      return o_pow() * v3 * 0.5 + 1.0;
    else
      return o_pow() * v3 * -0.5;
  }
  return result;
}
