/*
 * XREFs of NtMITGetCursorUpdateHandle @ 0x1C007A6A0
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
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     GetCursorUpdateHandle @ 0x1C007A80C (GetCursorUpdateHandle.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITGetCursorUpdateHandle(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // rdi
  CInputThread *v9; // rdi
  bool v10; // bl
  __int64 v11; // rdi
  int v12; // ebx
  __int64 CursorUpdateHandle; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v19; // r8
  tagObjLock *v20; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v21[32]; // [rsp+28h] [rbp-30h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v21, 1);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v21);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v20);
  while ( 1 )
  {
    v8 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v15 = *v8;
    v8[2] = 0LL;
    if ( !*(_DWORD *)(v15 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v8);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v20);
  v9 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v9, 0LL);
  v10 = CInputThread::_CalledOnInputThread(v9);
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  if ( !v10
    || (v11 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v11, 0LL),
        v12 = *(_DWORD *)(v11 + 16),
        ExReleasePushLockSharedEx(v11, 0LL),
        KeLeaveCriticalRegion(),
        v12 == 2) )
  {
    CursorUpdateHandle = -1LL;
    UserSetLastError(5LL);
  }
  else
  {
    CursorUpdateHandle = GetCursorUpdateHandle();
  }
  UserSessionSwitchLeaveCrit();
  return CursorUpdateHandle;
}
