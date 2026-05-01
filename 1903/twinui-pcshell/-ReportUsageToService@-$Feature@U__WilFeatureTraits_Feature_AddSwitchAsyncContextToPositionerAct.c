/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180132244
 * Callers:
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x180136BA4 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003B8E0 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180130C6C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AddSwitchAsyncContextToPosit.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 3;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::GetFeaturePropertyCache'::`2'::data,
    0x92369Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
