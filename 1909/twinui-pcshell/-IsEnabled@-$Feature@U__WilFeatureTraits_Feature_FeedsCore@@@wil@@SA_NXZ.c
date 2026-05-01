/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@SA_NXZ @ 0x18009D600
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@SA_NXZ @ 0x18009FDA8 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@SA_NXZ.c)
 */

bool wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::IsEnabled()
{
  return (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::__private_IsEnabled() != 0;
}
