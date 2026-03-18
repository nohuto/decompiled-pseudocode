/*
 * XREFs of DxgkReleaseHandleDataCB @ 0x1C00F3030
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0010C80 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 */

void __fastcall DxgkReleaseHandleDataCB(__int64 a1)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 *ThreadProperty; // rax
  __int64 *v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  int CurrentProcessSessionId; // ebp
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  int v18; // r9d
  int v19; // eax
  struct _EX_RUNDOWN_REF *v20; // rsi
  __int64 v21; // rax
  struct _EX_RUNDOWN_REF *v22; // rcx
  __int64 v23; // rcx
  _QWORD *v25; // rax
  struct _EX_RUNDOWN_REF *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  char v29[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  if ( *(_QWORD *)a1 )
  {
    DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v29);
    CurrentProcess = PsGetCurrentProcess();
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v5 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v7 = ThreadProperty;
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
          v5 = *v7;
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v9 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v9 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v9);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v13 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v13 = 0LL;
    }
    v14 = v5 + 208;
    if ( v14 && *(struct _KTHREAD **)(v14 + 8) == KeGetCurrentThread() )
    {
      v15 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v15 + 24) = 1309LL;
      WdLogEvent5_WdAssertion(v15);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v18 = *(_DWORD *)(v14 + 16);
        if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v16, &EventBlockThread, v17, v18);
      }
      ExAcquirePushLockSharedEx(v14, 0LL);
    }
    v19 = *(_DWORD *)(a1 + 8);
    if ( v19 == 1 )
    {
      v20 = *(struct _EX_RUNDOWN_REF **)a1;
      if ( !v20 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v16);
        *(_QWORD *)(v21 + 24) = 327LL;
        WdLogEvent5_WdAssertion(v21);
      }
      v22 = v20 + 11;
    }
    else
    {
      if ( v19 != 2 )
      {
        v28 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v28 + 24) = *(int *)(a1 + 8);
        WdLogEvent5_WdError(v28);
LABEL_36:
        ExReleasePushLockSharedEx(v14, 0LL);
        KeLeaveCriticalRegion();
        if ( v29[0] )
          KeUnstackDetachProcess(&ApcState);
        return;
      }
      v26 = *(struct _EX_RUNDOWN_REF **)a1;
      if ( !v26 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v16);
        *(_QWORD *)(v27 + 24) = 348LL;
        WdLogEvent5_WdAssertion(v27);
      }
      DXGFASTMUTEX::Release((struct _KTHREAD **)&v26[10]);
      v22 = v26 + 9;
    }
    ExReleaseRundownProtection(v22);
    if ( v13 )
    {
      if ( --*(_DWORD *)(v13 + 136) < 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23);
        v25[3] = 275LL;
        v25[4] = 38LL;
        v25[5] = *(int *)(v13 + 136);
        v25[6] = 0LL;
        v25[7] = 0LL;
        WdLogEvent5_WdCriticalError(v25);
      }
    }
    goto LABEL_36;
  }
}
