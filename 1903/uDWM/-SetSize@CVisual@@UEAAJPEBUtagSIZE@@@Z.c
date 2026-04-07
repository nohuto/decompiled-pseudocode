/*
 * XREFs of ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180036950
 * Callers:
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18003F780 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18003FA74 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180044AD8 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180044CF0 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800832E0 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z @ 0x18009434C (-OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z.c)
 *     ?Initialize@CRippleEffect@@IEAAJPEAPEAVCBitmapSource@@@Z @ 0x180094CD8 (-Initialize@CRippleEffect@@IEAAJPEAPEAVCBitmapSource@@@Z.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x180094EAC (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18009A6A0 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18009ABF0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJXZ @ 0x18009B0B0 (-Initialize@CTextTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x18009E520 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18009EC10 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009F324 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x18009F6B0 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x18009F878 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x18009FCA0 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800A65F0 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetSize(CVisual *this, const struct tagSIZE *a2)
{
  bool v3; // zf

  if ( *((_DWORD *)this + 30) != a2->cx || *((_DWORD *)this + 31) != a2->cy )
  {
    v3 = (*((_BYTE *)this + 84) & 1) == 0;
    *((struct tagSIZE *)this + 15) = *a2;
    if ( !v3 )
      (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 2LL);
  }
  return 0LL;
}
