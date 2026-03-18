/*
 * XREFs of ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C01339A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C002F1D4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00703C0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C013826C (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C013B078 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01451DC (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x1C0145464 (-SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::AdjustEdgyFrameInputDest(
        __int64 a1,
        const struct CPointerInputFrame *NextFrame,
        const struct tagINPUTDEST *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  CInputDest *v9; // rax
  struct CPointerInfoNode *v10; // rbx
  __int64 v11; // rbp
  unsigned __int64 Queue; // rax
  CInpLockGuard *v13[6]; // [rsp+50h] [rbp-1D8h] BYREF
  _BYTE v14[192]; // [rsp+80h] [rbp-1A8h] BYREF
  _DWORD v15[48]; // [rsp+140h] [rbp-E8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v13, (struct CInpLockGuard *)(a1 + 56), 0LL);
  CInputDest::CInputDest((CInputDest *)v15, a3);
  if ( !v15[0] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v9 = CInputDest::CInputDest((CInputDest *)v14, (const struct CInputDest *)v15);
  CTouchProcessor::SetPointerInputCapture(a1, *(unsigned __int16 *)(*((_QWORD *)NextFrame + 13) + 236LL), v9);
  do
  {
    v10 = (struct CPointerInfoNode *)*((_QWORD *)NextFrame + 13);
    if ( (unsigned int)CPointerInfoNode::IsValid(v10) )
    {
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        NextFrame,
        0,
        (const struct CInputDest *)v15,
        1,
        0LL,
        0,
        1,
        0,
        0);
      v11 = *((_QWORD *)NextFrame + 14);
      if ( *(_QWORD *)(v11 + 8) == -1LL )
      {
        Queue = CInputDest::GetQueue((CInputDest *)v15, 2);
        CTouchProcessor::EndQFrameNodeDeferment(
          (CTouchProcessor *)a1,
          (struct CPointerQFrame *)v11,
          v10,
          NextFrame,
          Queue);
      }
      NextFrame = CTouchProcessor::GetNextFrame((CTouchProcessor *)a1, NextFrame, (struct _LIST_ENTRY *)(a1 + 72));
    }
  }
  while ( NextFrame );
  CInputDest::SetEmpty((CInputDest *)v15);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v13);
}
