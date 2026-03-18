/*
 * XREFs of NtMITUninitMinuserThread @ 0x1C00EDD50
 * Callers:
 *     <none>
 * Callees:
 *     ProtectHandle @ 0x1C0017508 (ProtectHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITUninitMinuserThread(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v12; // r8
  __int64 v13; // rdi
  int v14; // edx
  __int64 ThreadWin32Thread; // rbx
  int v16; // eax
  void *v17; // rcx
  tagObjLock *v19; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v20[32]; // [rsp+28h] [rbp-30h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v20, 1);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v20);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v19);
  while ( 1 )
  {
    v13 = gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v8 = *(_QWORD *)v13;
    *(_QWORD *)(v13 + 16) = 0LL;
    if ( !*(_DWORD *)(v8 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*(_QWORD *)v13);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v19);
  RIMLockExclusive((__int64)&gInputLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v16 = *(_DWORD *)(ThreadWin32Thread + 1208);
  if ( (v16 & 0x1000000) != 0 )
  {
    v17 = *(void **)(ThreadWin32Thread + 728);
    *(_DWORD *)(ThreadWin32Thread + 1208) = v16 & 0xFEFFFFFF;
    ProtectHandle(v17, v14, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
    ObfDereferenceObject(*(PVOID *)(ThreadWin32Thread + 736));
    *(_QWORD *)(ThreadWin32Thread + 736) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 728) = 0LL;
    v13 = 1LL;
  }
  qword_1C01D0C90 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit();
  return v13;
}
