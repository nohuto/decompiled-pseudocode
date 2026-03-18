/*
 * XREFs of NtMITEnableMouseIntercept @ 0x1C00ED180
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
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C0157ACC (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITEnableMouseIntercept(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v13; // r8
  __int64 *v14; // rdi
  CInputThread *v15; // rdi
  bool v16; // bl
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // ebx
  tagObjLock *v21; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v22[32]; // [rsp+28h] [rbp-30h] BYREF

  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v22, 1);
  v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v22);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v21);
  while ( 1 )
  {
    v14 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v9 = *v14;
    v14[2] = 0LL;
    if ( !*(_DWORD *)(v9 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v14);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v21);
  v15 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v15, 0LL);
  v16 = CInputThread::_CalledOnInputThread(v15);
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( !v16 )
  {
    v17 = 5LL;
LABEL_18:
    v19 = 0;
    UserSetLastError(v17);
    goto LABEL_19;
  }
  if ( (v3 & 0xFFFFFFFE) != 0 )
  {
    v17 = 87LL;
    goto LABEL_18;
  }
  v18 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  if ( v18 )
    LOBYTE(v18) = CMouseProcessor::MouseInterceptState::Enable(v18 + 2744, v3);
  v19 = (unsigned __int8)v18;
  if ( !(_BYTE)v18 )
  {
    v17 = 5023LL;
    goto LABEL_18;
  }
LABEL_19:
  UserSessionSwitchLeaveCrit();
  return v19;
}
