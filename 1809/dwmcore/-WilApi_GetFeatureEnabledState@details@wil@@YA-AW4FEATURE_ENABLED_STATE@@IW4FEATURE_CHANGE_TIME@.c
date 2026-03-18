/*
 * XREFs of ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x180087E9C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800103C8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180086234 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@wil@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180088014 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CA-AW4wil_de.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x180088180 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA-AW4.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MitLoopInversion@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800881E4 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MitLoopInversion@@@wil@@CA-.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x180088248 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameS.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800882AC (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA-AW4wi.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x180088310 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CA-A.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180088424 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180088654 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA-AW4wi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800887D4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA-AW.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180156C54 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CA.c)
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
