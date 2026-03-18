/*
 * XREFs of ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x1800AC564
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800131F4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_VailSuperWetInk@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180014758 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_VailSuperWetInk@@@wil@@CA-AW.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800AA678 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@wil@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800ACFAC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CA-AW4wil_de.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800AD110 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CA-A.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800AD174 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA-AW4wi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800E59A8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA-AW.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800E5A78 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800E5E04 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameS.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TreeDumping@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18015A3F4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TreeDumping@@@wil@@CA-AW4wil.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18017C07C (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@C.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x180215740 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA-AW4wi.c)
 * Callees:
 *     <none>
 */

enum FEATURE_ENABLED_STATE (*__fastcall wil::details::WilApi_GetFeatureEnabledState(
        wil::details *this,
        __int64 a2,
        __int64 a3))(unsigned int, enum FEATURE_CHANGE_TIME)
{
  enum FEATURE_ENABLED_STATE (*result)(unsigned int, enum FEATURE_CHANGE_TIME); // rax

  result = g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState )
    return (enum FEATURE_ENABLED_STATE (*)(unsigned int, enum FEATURE_CHANGE_TIME))((__int64 (__fastcall *)(wil::details *, _QWORD, __int64))result)(
                                                                                     this,
                                                                                     0LL,
                                                                                     a3);
  result = g_wil_details_apiGetFeatureEnabledState;
  if ( g_wil_details_apiGetFeatureEnabledState )
    return (enum FEATURE_ENABLED_STATE (*)(unsigned int, enum FEATURE_CHANGE_TIME))((__int64 (__fastcall *)(wil::details *, _QWORD, __int64))result)(
                                                                                     this,
                                                                                     0LL,
                                                                                     a3);
  return result;
}
