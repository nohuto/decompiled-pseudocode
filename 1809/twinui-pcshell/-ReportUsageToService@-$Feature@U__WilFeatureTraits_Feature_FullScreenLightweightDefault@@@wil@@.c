/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FullScreenLightweightDefault@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801425D0
 * Callers:
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180141CB0 (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FullScreenLightweightDefault@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18014137C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FullScreenLightweightDefault.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_FullScreenLightweightDefault>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_FullScreenLightweightDefault>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_FullScreenLightweightDefault>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 0;
  v4 = 0;
  v5 = v3;
  wil::details::ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_FullScreenLightweightDefault>::GetFeaturePropertyCache'::`2'::data,
    16862609LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    0,
    3);
}
