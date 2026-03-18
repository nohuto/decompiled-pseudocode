/*
 * XREFs of ?EvaluateCurve@XamlPowerInterpolation@@MEAANN@Z @ 0x1800DBAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __fastcall XamlPowerInterpolation::EvaluateCurve(XamlPowerInterpolation *this, double a2)
{
  return pow(a2, *((float *)this + 8));
}
