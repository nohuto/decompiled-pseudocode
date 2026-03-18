/*
 * XREFs of ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1C016DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C01602C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0166760 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMsgRedirected(CTouchProcessor *this, __int64 a2, int *a3)
{
  struct CPointerInputFrame *FrameById; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct CPointerInputFrame *v9; // rsi
  __int64 v10; // rcx
  CPointerInfoNode *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  CInpLockGuard *v17; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v17, (CTouchProcessor *)((char *)this + 48));
  *a3 = 0;
  if ( a2 && (FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28)), (v9 = FrameById) != 0LL) )
  {
    v10 = *(unsigned int *)(a2 + 32);
    if ( (unsigned int)v10 >= *((_DWORD *)FrameById + 12) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v7, v8);
      LODWORD(v10) = *(_DWORD *)(a2 + 32);
    }
    v11 = (CPointerInfoNode *)(*((_QWORD *)v9 + 16) + 496LL * (unsigned int)v10);
    if ( !(unsigned int)CPointerInfoNode::IsValid(v11) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
    if ( *((_DWORD *)v11 + 45) != *(unsigned __int16 *)(a2 + 16) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
    if ( (*((_DWORD *)v11 + 1) & 0x80u) != 0 )
      *a3 = 1;
    v15 = -__CFSHR__(*(_DWORD *)v11, 11);
  }
  else
  {
    v15 = 0;
  }
  if ( !v18 )
    CInpLockGuard::UnLock(v17);
  return v15;
}
