/*
 * XREFs of ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003A888
 * Callers:
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180013D64 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180045A8C (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x18007D140 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18008DF2C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateTransition@CRippleEffect@@AEAAJXZ @ 0x1800904B0 (-UpdateTransition@CRippleEffect@@AEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800955A4 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x180095C50 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x1800961A0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180096660 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ @ 0x180096B2C (-_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x180099D70 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18009A2A4 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009A9C8 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateTransition@CPenPressHoldVisual@@MEAAJXZ @ 0x18009AC30 (-UpdateTransition@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x18009AF28 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800A26DC (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CImage::SetBitmapSource(CImage *this, struct CBitmapSource *a2)
{
  CBaseObject *v4; // rcx

  v4 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v4 != a2 )
  {
    if ( v4 )
      CBaseObject::Release(v4);
    *((_QWORD *)this + 35) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    CVisual::SetDirtyFlags(this, 4096);
  }
  return 0LL;
}
