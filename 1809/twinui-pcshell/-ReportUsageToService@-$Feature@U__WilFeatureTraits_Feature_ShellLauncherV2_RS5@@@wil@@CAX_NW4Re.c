/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008A110
 * Callers:
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@SA_NXZ @ 0x18008A440 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@SA_NXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180089FB8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@C.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_ShellLauncherV2_RS5>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int8 v3; // bl
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  v3 = a1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ShellLauncherV2_RS5>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ShellLauncherV2_RS5>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v4) = 2;
  v5 = 0;
  v6 = v4;
  wil::details::ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_ShellLauncherV2_RS5>::GetFeaturePropertyCache'::`2'::data,
    25807907LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v5,
    v3,
    3);
}
