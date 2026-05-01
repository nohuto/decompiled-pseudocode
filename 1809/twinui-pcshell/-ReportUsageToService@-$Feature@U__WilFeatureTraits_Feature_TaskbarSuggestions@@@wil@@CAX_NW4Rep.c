/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1803ABA44
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1803A94B0 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1803A9B6C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@wil@@CA.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 3;
  v4 = 0;
  v5 = v3;
  wil::details::ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::GetFeaturePropertyCache'::`2'::data,
    6258161LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
