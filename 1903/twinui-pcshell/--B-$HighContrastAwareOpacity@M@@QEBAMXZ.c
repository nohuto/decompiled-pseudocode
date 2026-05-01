/*
 * XREFs of ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x18036BBA0
 * Callers:
 *     ??8?$HighContrastAwareOpacity@M@@QEBA_NAEBU0@@Z @ 0x18036BB64 (--8-$HighContrastAwareOpacity@M@@QEBA_NAEBU0@@Z.c)
 *     _lambda_b322da6b43750fc8b19fab06879e6370_::operator() @ 0x18036BBCC (_lambda_b322da6b43750fc8b19fab06879e6370_--operator().c)
 *     ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x18036C098 (-CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDC.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x18036CEC4 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x1803706E4 (-_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ.c)
 *     _lambda_3620ca84e17db7610b457f2d5c27bd2d_::operator() @ 0x180374120 (_lambda_3620ca84e17db7610b457f2d5c27bd2d_--operator().c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x180377984 (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x180385C50 (-AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@I.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x180050800 (-IsHighContrast@@YAHXZ.c)
 */

float __fastcall HighContrastAwareOpacity<float>::operator float(float *a1)
{
  if ( (unsigned int)IsHighContrast() )
    return a1[1];
  else
    return *a1;
}
