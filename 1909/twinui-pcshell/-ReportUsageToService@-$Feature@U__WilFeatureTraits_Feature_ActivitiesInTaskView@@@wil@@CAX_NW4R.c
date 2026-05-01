/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802ECD64
 * Callers:
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator() @ 0x1802E47D4 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--operator().c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180024DA4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1802E873C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@wil@@.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_ActivitiesInTaskView>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ActivitiesInTaskView>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ActivitiesInTaskView>::GetCachedFeatureEnabledState(a1);
  v4 = 4;
  LOBYTE(v3) = 3;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_ActivitiesInTaskView>::GetFeaturePropertyCache'::`2'::data,
    0x8C7EE1u,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
