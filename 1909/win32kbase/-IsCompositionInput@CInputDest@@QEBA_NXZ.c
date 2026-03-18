/*
 * XREFs of ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0037FDC
 * Callers:
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0037E48 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C009DB88 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C016C9CC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0190550 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C0191068 (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 * Callees:
 *     ApiSetEditionIsCompositionInputWindow @ 0x1C0038008 (ApiSetEditionIsCompositionInputWindow.c)
 */

bool __fastcall CInputDest::IsCompositionInput(CInputDest *this)
{
  if ( *((_DWORD *)this + 23) == 2 )
    return (unsigned int)ApiSetEditionIsCompositionInputWindow(*((_QWORD *)this + 10)) == 1;
  else
    return *(_DWORD *)this != 0;
}
