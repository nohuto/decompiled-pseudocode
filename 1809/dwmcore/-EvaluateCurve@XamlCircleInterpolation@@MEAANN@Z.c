/*
 * XREFs of ?EvaluateCurve@XamlCircleInterpolation@@MEAANN@Z @ 0x1800E7350
 * Callers:
 *     <none>
 * Callees:
 *     sqrt @ 0x1800EC640 (sqrt.c)
 */

double __fastcall XamlCircleInterpolation::EvaluateCurve(XamlCircleInterpolation *this, double a2)
{
  return 1.0 - sqrt(1.0 - a2 * a2);
}
