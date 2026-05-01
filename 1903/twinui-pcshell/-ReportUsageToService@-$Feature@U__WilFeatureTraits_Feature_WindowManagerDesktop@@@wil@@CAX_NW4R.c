/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180116B3C
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@SA_NXZ @ 0x180093C40 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@SA_NXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1801122B4 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDeskto.c)
 *     ?IsFeature_WindowManagerDesktopDisabled@@YA_NXZ @ 0x1801D5BE0 (-IsFeature_WindowManagerDesktopDisabled@@YA_NXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003B8E0 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180111E14 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::ReportUsageToService(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v4) = 3;
  v5 = 0;
  v6 = v4;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::GetFeaturePropertyCache'::`2'::data,
    0xD5457Bu,
    (const struct FEATURE_LOGGED_TRAITS *)&v5,
    1,
    a2);
}
