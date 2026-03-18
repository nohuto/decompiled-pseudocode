/*
 * XREFs of ?EvaluateCurve@XamlBackInterpolation@@MEAANN@Z @ 0x180208A40
 * Callers:
 *     <none>
 * Callees:
 *     pow @ 0x1800E8E1C (pow.c)
 *     _o_sin_0 @ 0x1800E8E34 (_o_sin_0.c)
 */

double __fastcall XamlBackInterpolation::EvaluateCurve(XamlBackInterpolation *this, double a2)
{
  double v2; // xmm7_8
  double v3; // xmm6_8

  v2 = *((float *)this + 8);
  v3 = pow(a2, 3.0);
  return v3 - o_sin_0(a2 * 3.141592741012573) * (v2 * a2);
}
