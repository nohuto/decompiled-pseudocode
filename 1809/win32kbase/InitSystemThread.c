/*
 * XREFs of InitSystemThread @ 0x1C00904B0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00E2B60 (VideoPortCalloutThread.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     InitClientInfo @ 0x1C002C00C (InitClientInfo.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     ClearAppStarting @ 0x1C0033B80 (ClearAppStarting.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // rsi
  __int64 ThreadWin32Thread; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v22; // r8
  tagObjLock *v23; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v24[32]; // [rsp+28h] [rbp-30h] BYREF

  PsGetThreadProcess(KeGetCurrentThread());
  v5 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3, v2, v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v24, 1);
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v24);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v23);
  while ( 1 )
  {
    v11 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v18 = *v11;
    v11[2] = 0LL;
    if ( !*(_DWORD *)(v18 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v22);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v11);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v23);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = Win32AllocPoolWithQuota(264LL, 0x69637355u);
  *(_QWORD *)(ThreadWin32Thread + 480) = v13;
  if ( v13 )
  {
    *(_DWORD *)(ThreadWin32Thread + 488) = *(_DWORD *)(ThreadWin32Thread + 488) & 0xFFFFFFF3 | 4;
    if ( (unsigned int)InitClientInfo(ThreadWin32Thread) )
    {
      if ( a1 )
      {
        v14 = *(_QWORD *)(ThreadWin32Thread + 496);
        if ( v14 )
          Win32FreePool(v14);
        v15 = Win32AllocPoolWithQuota(*(unsigned __int16 *)a1 + 18LL, 0x78747355u);
        *(_QWORD *)(ThreadWin32Thread + 496) = v15;
        if ( v15 )
        {
          *(_QWORD *)(v15 + 8) = v15 + 16;
          memmove(*(void **)(*(_QWORD *)(ThreadWin32Thread + 496) + 8LL), a1[1], *(unsigned __int16 *)a1);
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 496) + 8LL)
                   + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
          *(_WORD *)(*(_QWORD *)(ThreadWin32Thread + 496) + 2LL) = *(_WORD *)a1 + 2;
          **(_WORD **)(ThreadWin32Thread + 496) = *(_WORD *)a1;
        }
      }
      v16 = *(_QWORD *)(ThreadWin32Thread + 424);
      if ( v16 && (*(_DWORD *)(v16 + 12) & 0x40) != 0 )
        ClearAppStarting(v16);
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
