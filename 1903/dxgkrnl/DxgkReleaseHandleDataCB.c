/*
 * XREFs of DxgkReleaseHandleDataCB @ 0x1C01344D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013BEC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 */

void __fastcall DxgkReleaseHandleDataCB(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 *ThreadProperty; // rax
  __int64 *v11; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  const GUID *v23; // r8
  int v24; // r9d
  __int64 v25; // rsi
  struct _EX_RUNDOWN_REF *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rax
  char v32[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v32);
    CurrentProcess = PsGetCurrentProcess(v4, v3);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v9 = ProcessDxgProcess;
    if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v11 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v11;
      }
    }
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v13 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v13);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v18 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v18 = 0LL;
    }
    v19 = v9 + 184;
    if ( v19 && *(struct _KTHREAD **)(v19 + 8) == KeGetCurrentThread() )
    {
      v20 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v20 + 24) = 1448LL;
      WdLogEvent5_WdAssertion(v20);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v19, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v24 = *(_DWORD *)(v19 + 16);
        if ( v24 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v22, &EventBlockThread, v23, v24);
      }
      ExAcquirePushLockSharedEx(v19, 0LL);
    }
    v25 = *((int *)a1 + 2);
    if ( (_DWORD)v25 == 1 )
    {
      v26 = (struct _EX_RUNDOWN_REF *)(v1 + 88);
    }
    else
    {
      if ( (_DWORD)v25 != 2 )
      {
        v31 = WdLogNewEntry5_WdError(v22, v21, v23);
        *(_QWORD *)(v31 + 24) = v25;
        WdLogEvent5_WdError(v31);
LABEL_32:
        ExReleasePushLockSharedEx(v19, 0LL);
        KeLeaveCriticalRegion();
        if ( v32[0] )
          KeUnstackDetachProcess(&ApcState);
        return;
      }
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v1 + 80));
      v26 = (struct _EX_RUNDOWN_REF *)(v1 + 72);
    }
    ExReleaseRundownProtection(v26);
    if ( v18 )
    {
      if ( --*(_DWORD *)(v18 + 136) < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
        v30[3] = 275LL;
        v30[4] = 38LL;
        v30[5] = *(int *)(v18 + 136);
        v30[6] = 0LL;
        v30[7] = 0LL;
        WdLogEvent5_WdCriticalError(v30);
      }
    }
    goto LABEL_32;
  }
}
