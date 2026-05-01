/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18006D888
 * Callers:
 *     ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18006D7C0 (-ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANG.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18029F18C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetCachedFeatureEnabledState();
  LOBYTE(v4) = 3;
  v5 = 0;
  v6 = v4;
  return wil::details::ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetFeaturePropertyCache'::`2'::data,
           9910473LL,
           &v5,
           1LL,
           3);
}
