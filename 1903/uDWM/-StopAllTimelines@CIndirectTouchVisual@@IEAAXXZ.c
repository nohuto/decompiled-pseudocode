/*
 * XREFs of ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800A6D44
 * Callers:
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A67F0 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A697C (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A6B00 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800A6D10 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x1800A6E00 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800A6ED0 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800A6D64 (-StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800A6DCC (-StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 */

void __fastcall CIndirectTouchVisual::StopAllTimelines(CIndirectTouchVisual *this)
{
  CIndirectTouchVisual *v1; // rcx
  CIndirectTouchVisual *v2; // rcx

  CIndirectTouchVisual::StopFrameTimeline(this);
  CIndirectTouchVisual::StopTimeoutTimeline(v1);
  CIndirectTouchVisual::StopOpacityTimeline(v2);
}
