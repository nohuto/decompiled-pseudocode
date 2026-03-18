/*
 * XREFs of ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x1C01673A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A3CD8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C016F384 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0173210 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetHwndReference(
        CTouchProcessor *this,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  const struct CPointerInputFrame *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rbx
  CInpLockGuard *v20; // [rsp+20h] [rbp-28h] BYREF
  int v21; // [rsp+28h] [rbp-20h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v20,
    (CTouchProcessor *)((char *)this + 48));
  if ( a2 && (v10 = CTouchProcessor::ReferenceFrame(this, *(_DWORD *)(a2 + 28))) != 0LL )
  {
    v12 = *(unsigned int *)(a2 + 32);
    if ( (unsigned int)v12 >= *((_DWORD *)v10 + 12) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v11);
      v12 = *(unsigned int *)(a2 + 32);
    }
    v13 = *((_QWORD *)v10 + 16) + 496 * v12;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v13) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    v17 = *(unsigned __int16 *)(a2 + 16);
    if ( *(_DWORD *)(v13 + 180) != v17 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
      LOWORD(v17) = *(_WORD *)(a2 + 16);
    }
    *a3 = v17;
    *a4 = *((_DWORD *)v10 + 12);
    v18 = *(_QWORD *)(v13 + 200);
    CTouchProcessor::UnreferenceFrame(this, v10);
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v21 )
    CInpLockGuard::UnLock(v20);
  return v18;
}
