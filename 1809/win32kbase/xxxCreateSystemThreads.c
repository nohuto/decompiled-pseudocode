/*
 * XREFs of xxxCreateSystemThreads @ 0x1C0060990
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
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C0060AF8 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     VideoPortCalloutThread @ 0x1C00E2B60 (VideoPortCalloutThread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCreateSystemThreads(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v15; // r8
  tagObjLock *v16; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v18[32]; // [rsp+40h] [rbp-38h] BYREF

  if ( (PVOID)PsGetCurrentProcess(a1) == gpepCSRSS && (unsigned int)CSTPop(&v17, (void **)&v16) )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    switch ( v17 )
    {
      case 1u:
        if ( (int)IsxxxDesktopThreadSupported() >= 0 )
          xxxDesktopThread(v16);
        break;
      case 2u:
        if ( (int)IsRawInputThreadSupported() >= 0 )
          RawInputThread(v16);
        break;
      case 4u:
        VideoPortCalloutThread(v16);
        break;
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2, v1, v3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v18, 1);
    v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v18);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v5;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v16);
    while ( 1 )
    {
      v9 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v11 = *v9;
      v9[2] = 0LL;
      if ( !*(_DWORD *)(v11 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
      DomainLockRef = GetDomainLockRef(8);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v9);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
    }
    tagObjLock::UnLock(v16);
  }
  return 1LL;
}
