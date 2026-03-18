/*
 * XREFs of exp @ 0x1800E8DEC
 * Callers:
 *     ?EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z @ 0x18001E060 (-EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x180208C40 (-EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl exp(double X)
{
  return _o_exp(X);
}
