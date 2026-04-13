/*
 * XREFs of ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@SA_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@2@_N@Z @ 0x18001474C
 * Callers:
 *     _lambda_67d3978e1092d2b882811411f68ad6cb_::operator() @ 0x18000B8AC (_lambda_67d3978e1092d2b882811411f68ad6cb_--operator().c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HEW4wil_VariantReportingKind@@_K@Z @ 0x180005E6C (-wil_details_FeaturePropertyCache_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureVariant.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@CA?AW4Variant_YourPhoneTaskbarIcon@@XZ @ 0x180014AB8 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@CA-AW4V.c)
 */

bool wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::__private_IsVariantEqual()
{
  char CachedVariantState; // di
  int v2; // [rsp+30h] [rbp-10h] BYREF
  __int16 v3; // [rsp+34h] [rbp-Ch]
  __int16 v4; // [rsp+7Ch] [rbp+3Ch]

  CachedVariantState = wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState();
  if ( (`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState();
  LOBYTE(v4) = 3;
  v2 = 2;
  v3 = v4;
  wil_details_FeaturePropertyCache_ReportVariantUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeatureVariantPropertyCache'::`2'::data,
    0xF81202u,
    (const struct FEATURE_LOGGED_TRAITS *)&v2,
    CachedVariantState == 3,
    3u,
    2);
  if ( !CachedVariantState )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState();
    LOBYTE(v4) = 3;
    v3 = v4;
    v2 = 2;
    wil_details_FeaturePropertyCache_ReportVariantUsageToService(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeatureVariantPropertyCache'::`2'::data,
      0xF81202u,
      (const struct FEATURE_LOGGED_TRAITS *)&v2,
      1,
      0,
      2);
  }
  return CachedVariantState == 3;
}
