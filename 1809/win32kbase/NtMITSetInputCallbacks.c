/*
 * XREFs of NtMITSetInputCallbacks @ 0x1C0083BC0
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
 *     UserSetMITInputCallbacks @ 0x1C0083D6C (UserSetMITInputCallbacks.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITSetInputCallbacks(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rdi
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  int v12; // esi
  CInputThread *v14; // rdi
  bool v15; // bl
  CInputThread *v16; // rdi
  bool v17; // bl
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v22; // r8
  tagObjLock *v23; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v24[32]; // [rsp+28h] [rbp-30h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v24, 1);
  v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v24);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v23);
  while ( 1 )
  {
    v9 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v18 = *v9;
    v9[2] = 0LL;
    if ( !*(_DWORD *)(v18 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v22);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v9);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v23);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v10);
  if ( CurrentProcess
    && CurrentProcess == g_pepDwm
    && (v14 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v14, 0LL),
        v15 = CInputThread::_CalledOnInputThread(v14),
        ExReleasePushLockSharedEx(v14, 0LL),
        KeLeaveCriticalRegion(),
        !v15) )
  {
    v12 = UserSetMITInputCallbacks(a1);
    if ( v12 )
    {
      v16 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v16, 0LL);
      v17 = CInputThread::_CalledOnInputThread(v16);
      ExReleasePushLockSharedEx(v16, 0LL);
      KeLeaveCriticalRegion();
      if ( !v17 )
        MicrosoftTelemetryAssertTriggeredMsgKM("Either we failed initialization or (if success) this thread must be marked as Master Input Thread");
    }
  }
  else
  {
    v12 = 0;
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit();
  return v12;
}
