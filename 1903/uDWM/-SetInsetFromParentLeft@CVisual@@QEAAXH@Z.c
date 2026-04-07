/*
 * XREFs of ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18003A444
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x1800204E0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003F450 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180044AD8 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x180094EAC (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18009A6A0 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18009ABF0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ @ 0x18009B57C (-_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18009E63C (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18009EC10 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009F324 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x18009F878 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x18009FCA0 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800A6E1C (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetInsetFromParentLeft(CVisual *this, int a2)
{
  __int64 v2; // rax

  if ( *((_DWORD *)this + 32) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((_DWORD *)this + 32) = a2;
    (*(void (__fastcall **)(CVisual *, __int64))(v2 + 24))(this, 2LL);
  }
}
