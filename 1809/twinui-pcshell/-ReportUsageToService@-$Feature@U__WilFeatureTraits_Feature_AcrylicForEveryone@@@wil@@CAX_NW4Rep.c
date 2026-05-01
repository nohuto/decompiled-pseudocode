/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800E70F4
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@SA_NXZ @ 0x1800E6580 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@SA_NXZ.c)
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E7380 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x1800E76B8 (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 *     ?ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@6@PEAPEAUIShellTab@89Internal@6@@Z @ 0x1801D8EC8 (-ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Founda.c)
 *     ?EnableAcrylicForView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801DAF7C (-EnableAcrylicForView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?InitializePrivilegedOperations@TabViewManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801DDFC0 (-InitializePrivilegedOperations@TabViewManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800E62E0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CA.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 3;
  v4 = 3;
  v5 = v3;
  wil::details::ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::GetFeaturePropertyCache'::`2'::data,
    15343832LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
