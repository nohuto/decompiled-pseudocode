/*
 * XREFs of sub_180125290 @ 0x180125290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __fastcall sub_180125290(__int64 a1, double a2)
{
  double result; // xmm0_8
  double v3; // xmm1_8
  double v4; // xmm0_8

  result = 1.0;
  if ( a2 < 1.0 )
  {
    if ( a2 > 0.0 )
    {
      v3 = a2 + a2;
      if ( v3 >= 1.0 )
        v4 = ((v3 + -2.0) * 3.5949095 + 2.5949095) * ((v3 + -2.0) * (v3 + -2.0)) + 2.0;
      else
        v4 = (v3 * 3.5949095 - 2.5949095) * (v3 * v3);
      return v4 * 0.5;
    }
    else
    {
      return 0.0;
    }
  }
  return result;
}
