/*
 * XREFs of ?PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z @ 0x1C016D770
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A3CD8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0164560 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::PrepareMakePointerMessage(
        CTouchProcessor *this,
        __int64 a2,
        struct tagPOINT *a3,
        int *a4,
        int *a5,
        int *a6)
{
  struct CPointerInputFrame *FrameById; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct CPointerInputFrame *v13; // rdi
  __int64 v14; // rcx
  _DWORD *v15; // rsi
  _DWORD *v16; // rdi
  CInpLockGuard *v18; // [rsp+20h] [rbp-18h] BYREF
  int v19; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v18,
    (CTouchProcessor *)((char *)this + 48));
  if ( a2 && (FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28)), (v13 = FrameById) != 0LL) )
  {
    v14 = *(unsigned int *)(a2 + 32);
    if ( (unsigned int)v14 >= *((_DWORD *)FrameById + 12) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v11, v12);
      v14 = *(unsigned int *)(a2 + 32);
    }
    v15 = (_DWORD *)(*((_QWORD *)v13 + 16) + 496LL * (unsigned int)v14);
    v16 = v15 + 44;
    if ( v15[45] != *(unsigned __int16 *)(a2 + 16) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v11, v12);
    *a3 = *(struct tagPOINT *)(v15 + 39);
    *a4 = v15[38];
    *a5 = -__CFSHR__(*v15, 18);
    *a6 = -__CFSHR__(*v15, 19);
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v19 )
    CInpLockGuard::UnLock(v18);
  return (const struct tagPOINTER_INFO *)v16;
}
