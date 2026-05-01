/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FullScreenAnimation@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180142574
 * Callers:
 *     ?PerformDelayedInitialization@FullScreenPositioner@@UEAAJXZ @ 0x180141F80 (-PerformDelayedInitialization@FullScreenPositioner@@UEAAJXZ.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180141FF0 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801432B0 (-UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FullScreenAnimation@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801412C0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FullScreenAnimation@@@wil@@C.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_FullScreenAnimation>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_FullScreenAnimation>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_FullScreenAnimation>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 0;
  v4 = 0;
  v5 = v3;
  wil::details::ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_FullScreenAnimation>::GetFeaturePropertyCache'::`2'::data,
    13133713LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    0,
    3);
}
