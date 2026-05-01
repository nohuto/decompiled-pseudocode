/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18025B1E4
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x18025A060 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWi.c)
 *     ?PerformDelayedInitialization@XamlExplorerHostShellComponent@@UEAAJXZ @ 0x18025AF00 (-PerformDelayedInitialization@XamlExplorerHostShellComponent@@UEAAJXZ.c)
 *     ?RecycleXamlExplorerWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindow@@@Z @ 0x18025B0F0 (-RecycleXamlExplorerWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindow@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18025A2B0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CA.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::GetCachedFeatureEnabledState(a1);
  v4 = 4;
  LOBYTE(v3) = 3;
  v5 = v3;
  wil::details::ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::GetFeaturePropertyCache'::`2'::data,
    13076897LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
