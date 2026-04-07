/*
 * XREFs of ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800A69E4
 * Callers:
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A6490 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A661C (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A67A0 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800A69B0 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x1800A6AA0 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800A6B70 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800A6A04 (-StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800A6A6C (-StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 */

void __fastcall CIndirectTouchVisual::StopAllTimelines(CIndirectTouchVisual *this)
{
  CIndirectTouchVisual *v1; // rcx
  CIndirectTouchVisual *v2; // rcx

  CIndirectTouchVisual::StopFrameTimeline(this);
  CIndirectTouchVisual::StopTimeoutTimeline(v1);
  CIndirectTouchVisual::StopOpacityTimeline(v2);
}
