/*
 * XREFs of UserThreadCallout @ 0x1C0033E20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     GreCleanDC @ 0x1C0064110 (GreCleanDC.c)
 *     RtlGetExpWinVer @ 0x1C0064744 (RtlGetExpWinVer.c)
 *     xxxCreateThreadInfo @ 0x1C006F538 (xxxCreateThreadInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, __int64 a2, __int64 a3)
{
  unsigned int ThreadInfo; // ebp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *i; // rdi
  __int64 ThreadWin32Thread; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r8
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v24; // rdi
  __int64 ProcessSectionBaseAddress; // rax
  LARGE_INTEGER *v26; // rbx
  struct tagTHREADINFO *v27; // rbx
  struct tagTHREADINFO **v28; // rax
  PVOID v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *j; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 *v44; // rbx
  __int64 v45; // rdx
  tagObjLock *v46; // [rsp+60h] [rbp+18h] BYREF
  tagObjLock *v47; // [rsp+68h] [rbp+20h] BYREF

  ThreadInfo = 0;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return ThreadInfo;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Thread, a2, a3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v6 = 0LL;
    while ( 1 )
    {
      v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v7 )
        v6 = *v7;
      CurrentProcess = (PVOID)PsGetCurrentProcess();
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v6 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v10, v9, v11);
    gptiCurrent = v6;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v46);
    for ( i = (_QWORD *)gpducstulHead; gpducstulHead; i = (_QWORD *)gpducstulHead )
    {
      gpducstulHead = i[2];
      v36 = *i;
      i[2] = 0LL;
      if ( !*(_DWORD *)(v36 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
      DomainLockRef = GetDomainLockRef(8LL, v12);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*i);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v40);
    }
    tagObjLock::UnLock(v46);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
    *(_DWORD *)(ThreadWin32Thread + 480) |= 1u;
    if ( (int)IsxxxFullScreenCleanupSupported() >= 0 )
      xxxFullScreenCleanup();
    if ( gbVideoInitialized || !gbRemoteSession )
      GreCleanDC(*(HDC *)(gpDispInfo + 56));
    v17 = *(_DWORD *)(ThreadWin32Thread + 1200);
    if ( (v17 & 2) != 0 )
    {
      gfSwitchInProgress = 0;
      v17 = *(_DWORD *)(ThreadWin32Thread + 1200);
    }
    if ( (v17 & 1) == 0 )
    {
      if ( (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 )
        GetAppCompatFlags2QuadWord(gptiCurrent);
      xxxDestroyThreadInfo();
    }
LABEL_23:
    UserSessionSwitchLeaveCrit(v16);
    return ThreadInfo;
  }
  if ( !gbNoMorePowerCallouts )
  {
    if ( !gbUserInitialized )
    {
      _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread((__int64)Thread) + 1200), 0);
      return ThreadInfo;
    }
    v21 = W32GetThreadWin32Thread((__int64)Thread);
    if ( v21 )
    {
      ThreadProcess = PsGetThreadProcess(Thread);
      v24 = ThreadProcess;
      if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v24);
        *(_DWORD *)(v21 + 624) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(v21 + 624) = 0;
      }
    }
    v26 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v20, v19, v22);
    if ( v26 )
      v26[1] = KeQueryPerformanceCounter(0LL);
    v27 = 0LL;
    while ( 1 )
    {
      v28 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v28 )
        v27 = *v28;
      v29 = (PVOID)PsGetCurrentProcess();
      if ( v29 )
      {
        if ( v29 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v27 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v27 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v31, v30, v32);
    gptiCurrent = v27;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v47);
    for ( j = (_QWORD *)gpducstulHead; gpducstulHead; j = (_QWORD *)gpducstulHead )
    {
      gpducstulHead = j[2];
      v41 = *j;
      j[2] = 0LL;
      if ( !*(_DWORD *)(v41 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33);
      v44 = GetDomainLockRef(8LL, v33);
      if ( v44 == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42);
      tagObjLock::UnLock((tagObjLock *)v44);
      HMUnlockObject(*j);
      tagObjLock::LockExclusive((struct _KTHREAD **)v44, v45);
    }
    tagObjLock::UnLock(v47);
    ThreadInfo = xxxCreateThreadInfo(Thread);
    if ( (ThreadInfo & 0x80000000) == 0 && (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 )
      GetAppCompatFlags2QuadWord(gptiCurrent);
    goto LABEL_23;
  }
  return 3221225473LL;
}
