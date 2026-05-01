/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180333704
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180331F00 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OnRequestShowKeyboard@AccessibilityExperienceManager@@UEAAJXZ @ 0x1803529B0 (-OnRequestShowKeyboard@AccessibilityExperienceManager@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x180352C18 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180024DA4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18032E390 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@wi.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 0;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::GetFeaturePropertyCache'::`2'::data,
    0xC72237u,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    0,
    3);
}
