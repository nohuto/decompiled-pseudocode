/*
 * XREFs of sub_1801258E0 @ 0x1801258E0
 * Callers:
 *     <none>
 * Callees:
 *     _o_cos @ 0x180125A42 (_o_cos.c)
 */

double __fastcall sub_1801258E0(__int64 a1, double a2)
{
  double result; // xmm0_8

  if ( a2 >= 1.0 )
    return 1.0;
  result = 0.0;
  if ( a2 > 0.0 )
    return (o_cos() - 1.0) * -0.5;
  return result;
}
