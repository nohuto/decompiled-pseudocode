/*
 * XREFs of ChangeAcquireResourceType @ 0x1C00898D0
 * Callers:
 *     <none>
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

void __fastcall ChangeAcquireResourceType(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  LARGE_INTEGER *v6; // rbx
  struct tagTHREADINFO *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // rdi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v13; // rbx
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v20; // r8
  int v21; // [rsp+38h] [rbp-39h] BYREF
  tagObjLock *v22; // [rsp+40h] [rbp-31h] BYREF
  __int128 v23; // [rsp+48h] [rbp-29h]
  _BYTE v24[32]; // [rsp+58h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+27h] BYREF
  int *v27; // [rsp+A8h] [rbp+37h]
  int v28; // [rsp+B0h] [rbp+3Fh]
  int v29; // [rsp+B4h] [rbp+43h]

  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
    v13 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v14 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      v15 = *(_DWORD *)(v13 + 44) == 0;
      v21 = v14;
      if ( (!v15 || *(_DWORD *)(v13 + 48) || v14 > 0)
        && dword_1C01C7F10 > 6u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
      {
        TlgCreateWsz(&pDesc, L"LeaveCrit");
        v29 = 0;
        v27 = &v21;
        v28 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D471, (LPCGUID)(v13 + 28), 0LL, 4u, &pData);
      }
      *(_DWORD *)(v13 + 44) = 0;
      v23 = 0uLL;
      *(_OWORD *)(v13 + 28) = 0uLL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  v6 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4, v3, v5);
  if ( v6 )
    v6[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v24, 1);
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v24);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v22);
  while ( 1 )
  {
    v11 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v16 = *v11;
    v11[2] = 0LL;
    if ( !*(_DWORD *)(v16 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v11);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v22);
  gptiCurrent = v7;
}
