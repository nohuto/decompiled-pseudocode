/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_GameCoreCP@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180035428
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18000C8C0 (-HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 *     ?DecideRoutingModeFromHitTestResult@@YA?AW4INPUT_DESTINATION_ROUTING_MODE@@_N0PEBU_InputHitTestRequest@@@Z @ 0x1800C3180 (-DecideRoutingModeFromHitTestResult@@YA-AW4INPUT_DESTINATION_ROUTING_MODE@@_N0PEBU_InputHitTestR.c)
 *     ??1ContextualProcessorManager@@MEAA@XZ @ 0x1800F91DC (--1ContextualProcessorManager@@MEAA@XZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001D4EC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GameCoreCP@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001D7EC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GameCoreCP@@@wil@@CA-AW4wil_.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_GameCoreCP>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GameCoreCP>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GameCoreCP>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 3;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_GameCoreCP>::GetFeaturePropertyCache'::`2'::data,
    18977415LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
