/*
 * XREFs of ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019F10
 * Callers:
 *     ?OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z @ 0x18000FE60 (-OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800102A0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017D78 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800196D4 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180025680 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180027988 (-UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FCB8 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x1800449B4 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180044A4C (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?EndTransition@CThumbnailVisual@@UEAAXXZ @ 0x18008C980 (-EndTransition@CThumbnailVisual@@UEAAXXZ.c)
 *     ?Hide@CAnimatedGlassSheet@@QEAAXXZ @ 0x180093DC8 (-Hide@CAnimatedGlassSheet@@QEAAXXZ.c)
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18009487C (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x180099EF8 (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18009A00C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x18009A1E0 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z @ 0x18009A204 (-UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18009A270 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x18009A4C8 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18009A6A0 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x18009AB40 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18009ABF0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x18009B410 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x18009D580 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x18009D5F8 (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18009E6F0 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 *     ?Stop@CPenBarrelKeyVisual@@UEAAXXZ @ 0x18009E780 (-Stop@CPenBarrelKeyVisual@@UEAAXXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18009EC10 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x18009F070 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x18009F18C (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009F324 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x18009F500 (-Stop@CPenPressHoldVisual@@UEAAXXZ.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x18009F878 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x18009FC00 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x1800A0098 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800A6D10 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800A6E8C (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800AFA84 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?Initialize@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800B0CA0 (-Initialize@CTouchPressHoldVisual@@MEAAJXZ.c)
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800B1250 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800B133C (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetOpacity(CVisual *this, double a2)
{
  float v2; // xmm0_4
  double v3; // rax

  v2 = a2;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)this + 23) - v2)) & _xmm) > 0.0000011920929 )
  {
    v3 = *(double *)this;
    *((double *)this + 23) = a2;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)&v3 + 24LL))(this, 32LL);
  }
}
