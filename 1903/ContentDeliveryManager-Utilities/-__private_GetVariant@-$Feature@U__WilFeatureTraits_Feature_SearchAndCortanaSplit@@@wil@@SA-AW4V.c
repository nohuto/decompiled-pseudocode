/*
 * XREFs of ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@SA?AW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@2@_N@Z @ 0x18009687C
 * Callers:
 *     ?IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ @ 0x180095D44 (-IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HEW4wil_VariantReportingKind@@_K@Z @ 0x180005E6C (-wil_details_FeaturePropertyCache_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureVariant.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CA?AW4Variant_SearchAndCortanaSplit@@XZ @ 0x1800968E8 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CA-AW4.c)
 */

unsigned __int8 wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::__private_GetVariant()
{
  unsigned __int8 CachedVariantState; // bl
  __int16 v2; // [rsp+54h] [rbp+1Ch]
  int v3; // [rsp+58h] [rbp+20h] BYREF
  __int16 v4; // [rsp+5Ch] [rbp+24h]

  CachedVariantState = wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetCachedVariantState();
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetCachedVariantState();
  LOBYTE(v2) = 3;
  v3 = 2;
  v4 = v2;
  wil_details_FeaturePropertyCache_ReportVariantUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeatureVariantPropertyCache'::`2'::data,
    0x1126927u,
    (const struct FEATURE_LOGGED_TRAITS *)&v3,
    1,
    CachedVariantState,
    2);
  return CachedVariantState;
}
