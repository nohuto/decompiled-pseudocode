/*
 * XREFs of exp @ 0x1800EC5EC
 * Callers:
 *     ?EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z @ 0x18001EB00 (-EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x1801D8F50 (-EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl exp(double X)
{
  return _o_exp(X);
}
