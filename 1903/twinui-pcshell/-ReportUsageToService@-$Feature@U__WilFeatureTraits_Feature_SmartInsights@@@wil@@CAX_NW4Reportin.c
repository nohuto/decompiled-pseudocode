/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SmartInsights@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801B98B8
 * Callers:
 *     ?Launch@CInsightsExperienceManager@@EEAAJXZ @ 0x1801B8B10 (-Launch@CInsightsExperienceManager@@EEAAJXZ.c)
 *     ?OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B8E20 (-OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@P.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003B8E0 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SmartInsights@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801B83F4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SmartInsights@@@wil@@CA-AW4w.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_SmartInsights>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SmartInsights>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SmartInsights>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 0;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_SmartInsights>::GetFeaturePropertyCache'::`2'::data,
    0x119E4D2u,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    0,
    3);
}
