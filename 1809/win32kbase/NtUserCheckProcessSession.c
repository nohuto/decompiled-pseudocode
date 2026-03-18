/*
 * XREFs of NtUserCheckProcessSession @ 0x1C007BBA0
 * Callers:
 *     <none>
 * Callees:
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
 *     xxxDwmCheckProcessSession @ 0x1C007BCC0 (xxxDwmCheckProcessSession.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserCheckProcessSession(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rsi
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v20; // r8
  tagObjLock *v21; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v22[32]; // [rsp+28h] [rbp-30h] BYREF

  v3 = a1;
  v4 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v22, 1);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v22);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v21);
  while ( 1 )
  {
    v10 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v16 = *v10;
    v10[2] = 0LL;
    if ( !*(_DWORD *)(v16 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v10);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v21);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v11);
  if ( CurrentProcess && CurrentProcess == g_pepDwm )
  {
    v15 = xxxDwmCheckProcessSession(v3);
    if ( v15 >= 0 )
    {
      v4 = 1LL;
      goto LABEL_9;
    }
    v13 = RtlNtStatusToDosError(v15);
  }
  else
  {
    v13 = 5LL;
  }
  UserSetLastError(v13);
LABEL_9:
  UserSessionSwitchLeaveCrit();
  return v4;
}
