/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0097CC0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C00F3300 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     GreLockDwmState @ 0x1C002A9E0 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C002AA20 (GreUnlockDwmState.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     xxxDwmControl @ 0x1C0097E60 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0097FBC (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0098000 (GreSfmCleanupPresentHistory.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(unsigned int a1)
{
  unsigned int v2; // esi
  unsigned int v3; // r14d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  unsigned int CurrentProcessId; // eax
  struct tagTHREADINFO *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *i; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  LARGE_INTEGER *v23; // rbx
  struct tagTHREADINFO *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *j; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *v32; // rbx
  __int64 v33; // r8
  __int64 v34; // [rsp+38h] [rbp-38h] BYREF
  tagObjLock *v35; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v36[32]; // [rsp+48h] [rbp-28h] BYREF

  v34 = 0LL;
  v2 = 0;
  if ( (int)DxgkGetSessionTokenManager(&v34) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 88LL))(v34);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 192LL))(v34);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
  }
  v3 = a1;
  if ( g_bDwmIsShuttingDown )
    v3 = 0;
  if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
    v2 = xxxDwmStopRedirection(a1);
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  GreSfmCleanupPresentHistory();
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, v4, v6);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v36, 1);
  v10 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v36);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v35);
  for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
  {
    gpducstulHead = i[2];
    v15 = *i;
    i[2] = 0LL;
    if ( !*(_DWORD *)(v15 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*i);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v35);
  GreLockDwmState();
  SetDwmApiPort(0LL);
  if ( g_pepDwm )
  {
    ObfDereferenceObject(g_pepDwm);
    g_pepDwm = 0LL;
  }
  GreUnlockDwmState();
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    UserSessionSwitchLeaveCrit();
    v2 = UserEnableConsoleMode(1LL);
    v23 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v21, v20, v22);
    if ( v23 )
      v23[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v36, 1);
    v24 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v36);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v24;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v35);
    for ( j = (__int64 *)gpducstulHead; gpducstulHead; j = (__int64 *)gpducstulHead )
    {
      gpducstulHead = j[2];
      v29 = *j;
      j[2] = 0LL;
      if ( !*(_DWORD *)(v29 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
      v32 = GetDomainLockRef(8);
      if ( v32 == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v33);
      tagObjLock::UnLock((tagObjLock *)v32);
      HMUnlockObject(*j);
      tagObjLock::LockExclusive((struct _KTHREAD **)v32);
    }
    tagObjLock::UnLock(v35);
  }
  g_bDwmIsShuttingDown = 0;
  if ( v3 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    xxxDwmControl(1036LL, CurrentProcessId);
  }
  return v2;
}
