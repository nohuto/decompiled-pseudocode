/*
 * XREFs of ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0174124
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C0160DB0 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0172D00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C01765D0 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C016955C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C016E15C (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C017422C (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0174564 (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1C0175E68 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeTarget(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        const struct CInputDest *a4,
        int a5,
        const struct tagPOINT *a6,
        int a7,
        unsigned int a8,
        int a9,
        int a10)
{
  struct CPointerInfoNode *v12; // rbx
  int v13; // edi
  CTouchProcessor *v14; // rcx

  v12 = CTouchProcessor::LookupNode(this, a2, a3);
  v13 = (*((_DWORD *)gptiCurrent + 306) >> 13) & 1;
  CTouchProcessor::SetPointerInfoNodeTargetInt((CTouchProcessor *)a8, v12, a4, a5, a6, a7, a8, v13, a10);
  if ( a9 && (unsigned int)CPointerInfoNode::GetHistoryCount(v12) > 1 )
    CTouchProcessor::UpdateHistoryWithTarget(this, a2, v12, a4, a5, a6, a7, v13, a10);
  if ( a7 )
  {
    if ( !v13 )
      CTouchProcessor::SetQFrameNonCoalescable(v14, a2, v12);
  }
}
