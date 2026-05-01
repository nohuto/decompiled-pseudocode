/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18000B938
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18000B8B4 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicHShellTaskmanOve.c)
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@SA_NXZ @ 0x18018F1C0 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@SA_NXZ.c)
 *     ?ShouldHandleFrameworkViewTypeChange@HolographicPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1801B4FB0 (-ShouldHandleFrameworkViewTypeChange@HolographicPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWO.c)
 *     ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801B5C60 (-SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1802ABDAC (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicDesktopMultitask.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicDesktopHotkeyFunctionalityHiding@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1802E7DF0 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicDesktopHotkeyFun.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18018E63C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::ReportUsageToService(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3)
{
  __int16 v5; // [rsp+54h] [rbp+1Ch]
  int v6; // [rsp+58h] [rbp+20h] BYREF
  __int16 v7; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v5) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetCachedFeatureEnabledState();
  LOBYTE(v5) = 3;
  v6 = 0;
  v7 = v5;
  return wil::details::ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data,
           8933771LL,
           &v6,
           1LL,
           a2);
}
