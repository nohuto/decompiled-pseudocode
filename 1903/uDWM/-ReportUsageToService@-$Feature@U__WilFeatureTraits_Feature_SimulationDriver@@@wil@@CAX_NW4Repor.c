/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180041C20
 * Callers:
 *     ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x180041B1C (-DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002299C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180041C80 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CA-A.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_SimulationDriver>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SimulationDriver>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SimulationDriver>::GetCachedFeatureEnabledState();
  LOBYTE(v3) = 3;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SimulationDriver>::GetFeaturePropertyCache'::`2'::data,
    14363547LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
