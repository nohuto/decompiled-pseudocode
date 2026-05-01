/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18001E0D4
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180014D04 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18001DF4C (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18000BAFC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@wi.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_VisionReactive_OnScreen>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_VisionReactive_OnScreen>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_VisionReactive_OnScreen>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v4) = 0;
  v5 = 0;
  v6 = v4;
  return wil::details::ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_VisionReactive_OnScreen>::GetFeaturePropertyCache'::`2'::data,
           10980073LL,
           &v5,
           0LL,
           3);
}
