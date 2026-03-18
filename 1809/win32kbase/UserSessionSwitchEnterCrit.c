/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x1C002BCB0
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C00157E0 (NtUserEnumDisplayDevices.c)
 *     NtUserEnumDisplaySettings @ 0x1C0080600 (NtUserEnumDisplaySettings.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C0091070 (AcquireCriticalSectionAndCheckState.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0028BA8 (EtwTraceReleaseUserCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 UserSessionSwitchEnterCrit()
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v1; // rbx
  _QWORD *v2; // rdi
  tagObjLock *i; // rcx
  PVOID CurrentProcess; // rax
  LARGE_INTEGER *v6; // rbx
  struct tagTHREADINFO *v7; // rbx
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 *DomainLockRef; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  __int64 *v15; // rbx
  int v16; // [rsp+38h] [rbp-69h] BYREF
  tagObjLock *v17; // [rsp+40h] [rbp-61h] BYREF
  tagObjLock *v18; // [rsp+48h] [rbp-59h] BYREF
  __int128 v19; // [rsp+50h] [rbp-51h]
  _BYTE v20[32]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v21[40]; // [rsp+80h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp+27h] BYREF
  int *v24; // [rsp+D8h] [rbp+37h]
  __int64 v25; // [rsp+E0h] [rbp+3Fh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v20, 1);
  v1 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v20);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v1;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v17);
  while ( 1 )
  {
    v2 = (_QWORD *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v9 = *v2;
    v2[2] = 0LL;
    if ( !*(_DWORD *)(v9 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v2);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  for ( i = v17; ; i = v18 )
  {
    tagObjLock::UnLock(i);
    if ( !LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
      break;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    ++gcSwitchInProgressWaiters;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    {
      v11 = PsGetCurrentThreadWin32Thread();
      v12 = v11;
      if ( v11 )
      {
        v13 = *(_DWORD *)(v11 + 24);
        v16 = v13;
        if ( (*(_DWORD *)(v12 + 44) || *(_DWORD *)(v12 + 48) || v13 > 0)
          && dword_1C01C7F10 > 6u
          && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
        {
          TlgCreateWsz(&pDesc, L"LeaveCrit");
          v25 = 4LL;
          v24 = &v16;
          TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D471, (LPCGUID)(v12 + 28), 0LL, 4u, &pData);
        }
        *(_DWORD *)(v12 + 44) = 0;
        v19 = 0uLL;
        *(_OWORD *)(v12 + 28) = 0uLL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemSwitchInProgressWaiters, UserRequest, 0, 0, 0LL);
    v6 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v6 )
      v6[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v21, 1);
    v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v21);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v7;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v18);
    while ( 1 )
    {
      v8 = (_QWORD *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v14 = *v8;
      v8[2] = 0LL;
      if ( !*(_DWORD *)(v14 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v15 = GetDomainLockRef(8);
      if ( v15 == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      tagObjLock::UnLock((tagObjLock *)v15);
      HMUnlockObject(*v8);
      tagObjLock::LockExclusive((struct _KTHREAD **)v15);
    }
  }
  return 0LL;
}
