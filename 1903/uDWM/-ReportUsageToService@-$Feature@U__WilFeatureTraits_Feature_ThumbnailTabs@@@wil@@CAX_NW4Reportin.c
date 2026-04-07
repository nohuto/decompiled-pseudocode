/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180025178
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180025AE0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x180029A30 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x18008D460 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x18009374C (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002299C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800341A0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CA-AW4w.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_ThumbnailTabs>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ThumbnailTabs>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ThumbnailTabs>::GetCachedFeatureEnabledState();
  LOBYTE(v3) = 1;
  v4 = 1;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_ThumbnailTabs>::GetFeaturePropertyCache'::`2'::data,
    17317009LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    0,
    3);
}
