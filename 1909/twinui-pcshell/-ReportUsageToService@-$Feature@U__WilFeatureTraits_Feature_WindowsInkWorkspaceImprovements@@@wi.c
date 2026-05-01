/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802018B4
 * Callers:
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1802005F0 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180024DA4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801FF964 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowsInkWorkspaceImproveme.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 3;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements>::GetFeaturePropertyCache'::`2'::data,
    0xF2149Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
