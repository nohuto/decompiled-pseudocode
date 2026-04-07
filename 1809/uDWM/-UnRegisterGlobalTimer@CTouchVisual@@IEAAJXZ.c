/*
 * XREFs of ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18004BB90
 * Callers:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180045CB0 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x180096120 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?StopTimer@CTextTetherVisual@@MEAAJXZ @ 0x180096A20 (-StopTimer@CTextTetherVisual@@MEAAJXZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x180098BD0 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?StopTimer@CTouchDragVisual@@MEAAJXZ @ 0x180098C30 (-StopTimer@CTouchDragVisual@@MEAAJXZ.c)
 *     ?StopDelayTimer@CTetherVisual@@IEAAXXZ @ 0x180099620 (-StopDelayTimer@CTetherVisual@@IEAAXXZ.c)
 *     ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x180099670 (-StopTimer@CTetherVisual@@MEAAJXZ.c)
 *     ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x18009A770 (-StopTimer@CFlickVisual@@MEAAJXZ.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x18009ABE0 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x18009B300 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800A2560 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x1800A2650 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800A2720 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800ACF70 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800AD040 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800AD6A0 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037974 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTouchVisual::UnRegisterGlobalTimer(CTouchVisual *this)
{
  if ( *((_BYTE *)this + 280) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    *((_BYTE *)this + 280) = 0;
  }
  return 0LL;
}
