/*
 * XREFs of ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C0169AF0
 * Callers:
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C0169A60 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C01602C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C01667CC (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorIdFromMsgData(CTouchProcessor *this, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int16 v9; // bx
  struct CInputPointerNode *NodeById; // rax
  unsigned int v11; // ebx
  CInpLockGuard *v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v13, (CTouchProcessor *)((char *)this + 48));
  if ( a2 )
  {
    v9 = *(_WORD *)(a2 + 16);
    if ( v9 )
      goto LABEL_5;
  }
  else
  {
    v9 = 0;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
LABEL_5:
  NodeById = CTouchProcessor::FindNodeById(this, v9, 0, 0);
  if ( NodeById )
  {
    v11 = 1;
    *a3 = *((unsigned __int16 *)NodeById + 17);
  }
  else
  {
    v11 = 0;
  }
  if ( !v14 )
    CInpLockGuard::UnLock(v13);
  return v11;
}
