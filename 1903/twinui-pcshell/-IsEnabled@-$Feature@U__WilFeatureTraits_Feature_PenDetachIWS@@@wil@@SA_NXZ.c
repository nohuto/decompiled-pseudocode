/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_PenDetachIWS@@@wil@@SA_NXZ @ 0x180093C20
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_PenDetachIWS@@@wil@@SA_NXZ @ 0x180093CFC (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_PenDetachIWS@@@wil@@SA_NXZ.c)
 */

bool wil::Feature<__WilFeatureTraits_Feature_PenDetachIWS>::IsEnabled()
{
  return (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_PenDetachIWS>::__private_IsEnabled() != 0;
}
