/*
 * XREFs of NtUserGetProcessDpiAwarenessContext @ 0x1C008A770
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002581C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetProcessDpiAwarenessContext(char *Handle, __int64 a2, __int64 a3)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rsi
  __int64 v11; // rcx
  PVOID v12; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v21; // r8
  NTSTATUS v22; // eax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v24[32]; // [rsp+38h] [rbp-30h] BYREF

  CurrentThreadDpiAwarenessContext = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Handle, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v24, 1);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v24);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&Object);
  while ( 1 )
  {
    v10 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v17 = *v10;
    v10[2] = 0LL;
    if ( !*(_DWORD *)(v17 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v21);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v10);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock((tagObjLock *)Object);
  v12 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    goto LABEL_7;
  }
  v22 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v12 = Object;
  if ( v22 < 0 )
  {
    UserSetLastError(87LL);
    goto LABEL_11;
  }
  if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
  {
    CurrentProcessWin32Process = PsGetProcessWin32Process(v12);
LABEL_7:
    v15 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process == PsGetCurrentProcessWin32Process(v14) )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    }
    else if ( v15 )
    {
      CurrentThreadDpiAwarenessContext = *(_DWORD *)(v15 + 280);
      if ( !CurrentThreadDpiAwarenessContext )
        CurrentThreadDpiAwarenessContext = 24592;
    }
    goto LABEL_9;
  }
  UserSetLastError(87LL);
LABEL_9:
  if ( v12 )
    ObfDereferenceObject(v12);
LABEL_11:
  UserSessionSwitchLeaveCrit();
  return CurrentThreadDpiAwarenessContext;
}
