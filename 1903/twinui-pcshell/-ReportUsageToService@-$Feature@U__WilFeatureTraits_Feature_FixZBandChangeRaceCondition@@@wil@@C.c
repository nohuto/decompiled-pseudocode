/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800729A0
 * Callers:
 *     ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1800728D0 (-ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANG.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18003BBC0 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1802F721C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::ReportUsageToService(
        __int64 a1,
        char a2,
        __int64 a3)
{
  int v3; // [rsp+68h] [rbp+10h] BYREF
  __int64 v4; // [rsp+70h] [rbp+18h]
  int v5; // [rsp+78h] [rbp+20h] BYREF
  __int16 v6; // [rsp+7Ch] [rbp+24h]

  v4 = a3;
  LOBYTE(v3) = a2;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetCachedFeatureEnabledState();
  BYTE4(v4) = 3;
  LODWORD(v4) = 0;
  v6 = WORD2(v4);
  v5 = 0;
  v3 = 3;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetFeaturePropertyCache'::`2'::data,
                       0x9738C9u,
                       2,
                       0) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x9738C9u,
        (const struct FEATURE_LOGGED_TRAITS *)&v5,
        0LL,
        1,
        (const enum wil_ReportingKind *)&v3,
        0LL,
        0,
        1uLL);
  }
}
