/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018FB8C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18018EFB0 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CA-AW4.c)
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@SA_NXZ @ 0x18018F2C0 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@SA_NXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlTaskbar@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18025A4AC (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlTaskbar@@@wil@@CA-AW4wi.c)
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1802E0194 (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x1802E0EB0 (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1802E908C (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CA-AW.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1802E911C (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@wil@@C.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18018EB60 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CA-A.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsageToService(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetCachedFeatureEnabledState(a1);
  v5 = 4;
  LOBYTE(v4) = 3;
  v6 = v4;
  wil::details::ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetFeaturePropertyCache'::`2'::data,
    7382860LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v5,
    1,
    a2);
}
