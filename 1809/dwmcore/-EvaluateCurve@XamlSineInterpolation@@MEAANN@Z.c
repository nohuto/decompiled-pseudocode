/*
 * XREFs of ?EvaluateCurve@XamlSineInterpolation@@MEAANN@Z @ 0x1801D9010
 * Callers:
 *     <none>
 * Callees:
 *     _o_sin_0 @ 0x1800EC634 (_o_sin_0.c)
 */

double __fastcall XamlSineInterpolation::EvaluateCurve(XamlSineInterpolation *this, double a2)
{
  return 1.0 - o_sin_0((1.0 - a2) * 3.141592741012573 * 0.5);
}
