/*
 * XREFs of ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1801EA7C0
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801EA0EC (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801EB560 (-ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801EB6C4 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801EC5E0 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1801ED050 (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     <none>
 */

bool __fastcall CManipulationFrame::IsMousewheelFrame(CManipulationFrame *this)
{
  bool result; // al

  result = 1;
  if ( *((_DWORD *)this + 4) != 1 || (*((_DWORD *)this + 27) & 0x180000) == 0 )
    return 0;
  return result;
}
