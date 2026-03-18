/*
 * XREFs of xxxCreateSystemThreads @ 0x1C00A7C10
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     VideoPortCalloutThread @ 0x1C00A5C78 (VideoPortCalloutThread.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C00A7AB4 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCreateSystemThreads(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v18; // rdx
  __int64 *v19; // rdi
  tagObjLock *v21; // [rsp+40h] [rbp+8h] BYREF
  void *v22; // [rsp+48h] [rbp+10h] BYREF

  if ( (PVOID)PsGetCurrentProcess(a1) == gpepCSRSS && (unsigned int)CSTPop((unsigned int *)&v21, &v22) )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
    switch ( (_DWORD)v21 )
    {
      case 1:
        if ( (int)IsxxxDesktopThreadSupported() >= 0 )
          xxxDesktopThread(v22);
        break;
      case 2:
        if ( (int)IsRawInputThreadSupported() >= 0 )
          RawInputThread(v22);
        break;
      case 4:
        VideoPortCalloutThread((PRKEVENT *)v22);
        break;
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2, v1, v3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v5 = 0LL;
    while ( 1 )
    {
      v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v6 )
        v5 = *v6;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v7);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v5 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v10, v9, v11);
    gptiCurrent = v5;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v21);
    while ( 1 )
    {
      v19 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v14 = *v19;
      v19[2] = 0LL;
      if ( !*(_DWORD *)(v14 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
      DomainLockRef = GetDomainLockRef(8LL, v12);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v19);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v18);
    }
    tagObjLock::UnLock(v21);
  }
  return 1LL;
}
