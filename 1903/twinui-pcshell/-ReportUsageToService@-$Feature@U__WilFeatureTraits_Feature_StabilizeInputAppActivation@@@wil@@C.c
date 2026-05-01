/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StabilizeInputAppActivation@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180313FF8
 * Callers:
 *     _lambda_be51cf16fbf0031c38a94162e4d6f864_::operator() @ 0x18009DAC0 (_lambda_be51cf16fbf0031c38a94162e4d6f864_--operator().c)
 *     _anonymous_namespace_::GetTaskApartment @ 0x18030FEAC (_anonymous_namespace_--GetTaskApartment.c)
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803127C0 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803129F0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x180314544 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z.c)
 *     ?OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x1803230C0 (-OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 *     ?RequestShow@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x1803247B8 (-RequestShow@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeyboardPositionA.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003B8E0 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StabilizeInputAppActivation@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18030F124 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_StabilizeInputAppActivation@.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_StabilizeInputAppActivation>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_StabilizeInputAppActivation>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_StabilizeInputAppActivation>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 3;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_StabilizeInputAppActivation>::GetFeaturePropertyCache'::`2'::data,
    0x10E6671u,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
