/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800A4A44
 * Callers:
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NW4ReportingKind@2@@Z @ 0x1800A54B8 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NW4R.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NXZ @ 0x1800A54E0 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003B8E0 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800A2B3C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::ReportUsageToService(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3)
{
  unsigned __int8 v4; // di
  __int16 v5; // [rsp+54h] [rbp+1Ch]
  int v6; // [rsp+58h] [rbp+20h] BYREF
  __int16 v7; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v5) = BYTE5(a3);
  v4 = a1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v5) = 2;
  v6 = 0;
  v7 = v5;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::GetFeaturePropertyCache'::`2'::data,
    0x135AED7u,
    (const struct FEATURE_LOGGED_TRAITS *)&v6,
    v4,
    a2);
}
