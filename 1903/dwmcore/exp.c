/*
 * XREFs of exp @ 0x1800E7F3C
 * Callers:
 *     ?EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z @ 0x18001FFB0 (-EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x18020A330 (-EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl exp(double X)
{
  return _o_exp(X);
}
