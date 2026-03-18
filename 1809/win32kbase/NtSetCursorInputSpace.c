/*
 * XREFs of NtSetCursorInputSpace @ 0x1C00EDFA0
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
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?CheckCapability@@YAJPEBG@Z @ 0x1C00EC684 (-CheckCapability@@YAJPEBG@Z.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01533C8 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtSetCursorInputSpace(struct _LUID a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  LARGE_INTEGER *v5; // rbx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v14; // r8
  __int64 *v15; // r14
  __int64 v16; // rcx
  PVOID CurrentProcess; // rax
  CInputConfig *v18; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  tagObjLock *v23; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v24[32]; // [rsp+28h] [rbp-30h] BYREF

  v4 = 0LL;
  v5 = (LARGE_INTEGER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))PsGetCurrentThreadWin32Thread)(a1, a2, a3);
  if ( v5 )
    v5[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v24, 1);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v24);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v23);
  while ( 1 )
  {
    v15 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v10 = *v15;
    v15[2] = 0LL;
    if ( !*(_DWORD *)(v10 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v15);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v23);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v16);
  if ( CurrentProcess && CurrentProcess == g_pepDwm )
  {
LABEL_17:
    v19 = CInputConfig::BindMouse(v18, a1);
    if ( v19 >= 0 )
    {
      v4 = 1LL;
      goto LABEL_19;
    }
    goto LABEL_13;
  }
  v19 = CheckCapability((const unsigned __int16 *)v18);
  if ( v19 >= 0 )
  {
    v18 = (CInputConfig *)*(unsigned int *)(PsGetCurrentProcessWin32Process(v20) + 820);
    if ( ((unsigned __int8)v18 & 0x30) == 0 )
    {
      v21 = 5LL;
      goto LABEL_14;
    }
    goto LABEL_17;
  }
LABEL_13:
  v21 = RtlNtStatusToDosError(v19);
LABEL_14:
  UserSetLastError(v21);
LABEL_19:
  UserSessionSwitchLeaveCrit();
  return v4;
}
