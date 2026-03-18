/*
 * XREFs of UserProcessFreezeCallout @ 0x1C005A850
 * Callers:
 *     W32CalloutDispatch @ 0x1C005A060 (W32CalloutDispatch.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserProcessFreezeCallout(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 i; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v23; // rdx
  tagObjLock *v24; // [rsp+48h] [rbp+10h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v9, v8, v10);
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v24);
  while ( 1 )
  {
    v13 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v19 = *v13;
    v13[2] = 0LL;
    if ( !*(_DWORD *)(v19 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
    DomainLockRef = GetDomainLockRef(8LL, v11);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v13);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v23);
  }
  tagObjLock::UnLock(v24);
  ProcessWin32Process = PsGetProcessWin32Process(a1);
  v16 = ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    for ( i = *(_QWORD *)(ProcessWin32Process + 320); i; i = *(_QWORD *)(i + 656) )
    {
      if ( (int)IsSuspendThreadQueueSupported() >= 0 )
        SuspendThreadQueue(i);
    }
    *(_DWORD *)(v16 + 812) |= 0x400u;
    if ( (int)IsFreezeThawTimersSupported() >= 0 )
      FreezeThawTimers();
  }
  UserSessionSwitchLeaveCrit(v15);
  return 0LL;
}
