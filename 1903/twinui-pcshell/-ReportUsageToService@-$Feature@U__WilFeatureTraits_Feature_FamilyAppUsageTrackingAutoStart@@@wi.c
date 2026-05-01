/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800A4AB4
 * Callers:
 *     ?PerformDelayedInitialization@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x1800A3FA0 (-PerformDelayedInitialization@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEA.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003B8E0 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800A2C00 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoSt.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 0;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart>::GetFeaturePropertyCache'::`2'::data,
    0x14E0EF0u,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    0,
    3);
}
