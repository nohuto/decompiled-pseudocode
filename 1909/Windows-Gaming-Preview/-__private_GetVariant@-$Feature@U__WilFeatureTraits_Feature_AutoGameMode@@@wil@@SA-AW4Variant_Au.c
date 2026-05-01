/*
 * XREFs of ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_AutoGameMode@@@wil@@SA?AW4Variant_AutoGameMode@@W4VariantReportingKind@2@_N@Z @ 0x180039A20
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180038004 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_AutoGameMode@@@wil@@CA?AW4Variant_AutoGameMode@@XZ @ 0x1800398D0 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_AutoGameMode@@@wil@@CA-AW4Variant_A.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::__private_GetVariant()
{
  char CachedVariantState; // bl

  CachedVariantState = wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState();
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState();
  return CachedVariantState;
}
