/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802B89A4
 * Callers:
 *     ?RequestCloseAsync@ViewWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1802B8A10 (-RequestCloseAsync@ViewWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult@View.c)
 *     ?RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1802C69C0 (-RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult@Vi.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180024DA4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1802B70BC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequest.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 3;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::GetFeaturePropertyCache'::`2'::data,
    0x98878Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
