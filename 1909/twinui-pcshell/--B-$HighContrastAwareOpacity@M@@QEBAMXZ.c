/*
 * XREFs of ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x18038B480
 * Callers:
 *     ??8?$HighContrastAwareOpacity@M@@QEBA_NAEBU0@@Z @ 0x18038B444 (--8-$HighContrastAwareOpacity@M@@QEBA_NAEBU0@@Z.c)
 *     _lambda_b322da6b43750fc8b19fab06879e6370_::operator() @ 0x18038B4AC (_lambda_b322da6b43750fc8b19fab06879e6370_--operator().c)
 *     ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x18038B978 (-CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDC.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x18038C7A4 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x18038FFC4 (-_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ.c)
 *     _lambda_3620ca84e17db7610b457f2d5c27bd2d_::operator() @ 0x180393A10 (_lambda_3620ca84e17db7610b457f2d5c27bd2d_--operator().c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x180397274 (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1803A55C0 (-AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@I.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x180051124 (-IsHighContrast@@YAHXZ.c)
 */

float __fastcall HighContrastAwareOpacity<float>::operator float(float *a1)
{
  if ( (unsigned int)IsHighContrast() )
    return a1[1];
  else
    return *a1;
}
