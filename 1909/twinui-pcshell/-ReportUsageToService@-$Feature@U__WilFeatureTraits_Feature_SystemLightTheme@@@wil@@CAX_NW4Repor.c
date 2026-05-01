/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SystemLightTheme@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1803338DC
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180331F00 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x18042AAFC (-GetContrastForParams@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18042AD24 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ?InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x18042C140 (-InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@.c)
 *     ?ShouldUseDarkTheme@ImmersiveContextMenuHelper@@YA_NW4ImmersiveContextMenuOptions@@@Z @ 0x180438574 (-ShouldUseDarkTheme@ImmersiveContextMenuHelper@@YA_NW4ImmersiveContextMenuOptions@@@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180024DA4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SystemLightTheme@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18032E770 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SystemLightTheme@@@wil@@CA-A.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 3;
  v4 = 1;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetFeaturePropertyCache'::`2'::data,
    0x1191BDDu,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
