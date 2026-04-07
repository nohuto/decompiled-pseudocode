/*
 * XREFs of ?Initialize@CVisual@@MEAAJXZ @ 0x1800252E0
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180004D00 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180024C00 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJXZ @ 0x1800252B0 (-Initialize@CAtlasedRectsVisual@@MEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x1800267C0 (-Initialize@CTopLevelWindow3D@@MEAAJXZ.c)
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJXZ @ 0x180032CB0 (-Initialize@CAnimatedTransitionVisual@@MEAAJXZ.c)
 *     ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x180038F20 (-Initialize@CThumbnailVisual@@MEAAJXZ.c)
 *     ?Initialize@CImage@@EEAAJXZ @ 0x180039CA0 (-Initialize@CImage@@EEAAJXZ.c)
 *     ?Initialize@CAccent@@MEAAJXZ @ 0x18003C880 (-Initialize@CAccent@@MEAAJXZ.c)
 *     ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ @ 0x180040580 (-Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x1800447F0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180044CF0 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x18004A520 (-Initialize@CLivePreview@@MEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18008308C (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?Initialize@CAccentBlurBehind@@EEAAJXZ @ 0x18008BE00 (-Initialize@CAccentBlurBehind@@EEAAJXZ.c)
 *     ?Initialize@CRippleEffect@@IEAAJPEAPEAVCBitmapSource@@@Z @ 0x180094CD8 (-Initialize@CRippleEffect@@IEAAJPEAPEAVCBitmapSource@@@Z.c)
 *     ?Initialize@CContactStationaryVisual@@MEAAJXZ @ 0x18009A5B0 (-Initialize@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJXZ @ 0x18009B0B0 (-Initialize@CTextTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x18009CEC0 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x18009DE00 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x18009E520 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Initialize@CFlickVisual@@MEAAJXZ @ 0x18009EB50 (-Initialize@CFlickVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJXZ @ 0x18009F280 (-Initialize@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x18009F6B0 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x18009FF80 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800A65F0 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CDesktopThumbnailBase@@MEAAJXZ @ 0x1800AF510 (-Initialize@CDesktopThumbnailBase@@MEAAJXZ.c)
 *     ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ @ 0x1800AF610 (-Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800B0CA0 (-Initialize@CTouchPressHoldVisual@@MEAAJXZ.c)
 *     ?Initialize@UdwmBottomVisual@@MEAAJXZ @ 0x1800B3880 (-Initialize@UdwmBottomVisual@@MEAAJXZ.c)
 *     ?Initialize@UdwmTopVisual@@MEAAJXZ @ 0x1800B38C0 (-Initialize@UdwmTopVisual@@MEAAJXZ.c)
 * Callees:
 *     ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x180018410 (--$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisual::Initialize(CVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  void *v4; // [rsp+28h] [rbp-10h]

  v1 = CCompositor::CreateProxy<CVisualProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         (__int64 *)this + 2);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x4Cu, v4);
  return v2;
}
