/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008D6CC
 * Callers:
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800318E0 (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 *     ?_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180203B24 (-_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x180205F00 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostI.c)
 *     ?SetBoundsForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBUtagRECT@@AEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180289D50 (-SetBoundsForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBUtagRECT@@AEBUAPPLICATION_VIEW_DATA@@.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003B8E0 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180143BFC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetCachedFeatureEnabledState();
  LOBYTE(v3) = 3;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data,
    0x8DFABCu,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
