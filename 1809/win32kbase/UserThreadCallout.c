/*
 * XREFs of UserThreadCallout @ 0x1C002ABF0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 *     RtlGetExpWinVer @ 0x1C002D1D8 (RtlGetExpWinVer.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     GreCleanDC @ 0x1C0075BA0 (GreCleanDC.c)
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, int a2)
{
  unsigned int ThreadInfo; // ebp
  __int64 v4; // rbx
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v6; // rdi
  __int64 ProcessSectionBaseAddress; // rax
  LARGE_INTEGER *v8; // rbx
  struct tagTHREADINFO *v9; // rbx
  _QWORD *j; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v13; // rbx
  _QWORD *i; // rdi
  __int64 ThreadWin32Thread; // rbx
  int v16; // eax
  __int64 v17; // rax
  __int64 *DomainLockRef; // rbx
  __int64 v19; // rax
  __int64 *v20; // rbx
  tagObjLock *v21; // [rsp+20h] [rbp-78h] BYREF
  tagObjLock *v22; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v23[32]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v24[32]; // [rsp+50h] [rbp-48h] BYREF

  ThreadInfo = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return ThreadInfo;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v23, 1);
    v13 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v23);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v13;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v21);
    for ( i = (_QWORD *)gpducstulHead; gpducstulHead; i = (_QWORD *)gpducstulHead )
    {
      gpducstulHead = i[2];
      v17 = *i;
      i[2] = 0LL;
      if ( !*(_DWORD *)(v17 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      DomainLockRef = GetDomainLockRef(8);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*i);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
    }
    tagObjLock::UnLock(v21);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
    *(_DWORD *)(ThreadWin32Thread + 488) |= 1u;
    if ( (int)IsxxxFullScreenCleanupSupported() >= 0 )
      xxxFullScreenCleanup();
    if ( gbVideoInitialized || !gbRemoteSession )
      GreCleanDC(*(HDC *)(gpDispInfo + 56));
    v16 = *(_DWORD *)(ThreadWin32Thread + 1208);
    if ( (v16 & 2) != 0 )
    {
      LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = 0;
      v16 = *(_DWORD *)(ThreadWin32Thread + 1208);
    }
    if ( (v16 & 1) == 0 )
    {
      if ( (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 )
        GetAppCompatFlags2QuadWord(gptiCurrent);
      xxxDestroyThreadInfo();
    }
LABEL_14:
    UserSessionSwitchLeaveCrit();
    return ThreadInfo;
  }
  if ( !gbNoMorePowerCallouts )
  {
    if ( !gbUserInitialized )
    {
      _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread((__int64)Thread) + 1208), 0);
      return ThreadInfo;
    }
    v4 = W32GetThreadWin32Thread((__int64)Thread);
    if ( v4 )
    {
      ThreadProcess = PsGetThreadProcess(Thread);
      v6 = ThreadProcess;
      if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v6);
        *(_DWORD *)(v4 + 632) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(v4 + 632) = 0;
      }
    }
    v8 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v8 )
      v8[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v24, 1);
    v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v24);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v9;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v22);
    for ( j = (_QWORD *)gpducstulHead; gpducstulHead; j = (_QWORD *)gpducstulHead )
    {
      gpducstulHead = j[2];
      v19 = *j;
      j[2] = 0LL;
      if ( !*(_DWORD *)(v19 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v20 = GetDomainLockRef(8);
      if ( v20 == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      tagObjLock::UnLock((tagObjLock *)v20);
      HMUnlockObject(*j);
      tagObjLock::LockExclusive((struct _KTHREAD **)v20);
    }
    tagObjLock::UnLock(v22);
    ThreadInfo = xxxCreateThreadInfo(Thread);
    if ( (ThreadInfo & 0x80000000) == 0 && (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 )
      GetAppCompatFlags2QuadWord(gptiCurrent);
    goto LABEL_14;
  }
  return 3221225473LL;
}
