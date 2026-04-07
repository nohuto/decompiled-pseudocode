/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003F10C
 * Callers:
 *     ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x18003EFC8 (-DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18003F16C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CA-A.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18004D640 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_SimulationDriver>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SimulationDriver>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SimulationDriver>::GetCachedFeatureEnabledState();
  LOBYTE(v4) = 3;
  v5 = 0;
  v6 = v4;
  return wil::details::ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_SimulationDriver>::GetFeaturePropertyCache'::`2'::data,
           14363547LL,
           &v5,
           1LL,
           3);
}
