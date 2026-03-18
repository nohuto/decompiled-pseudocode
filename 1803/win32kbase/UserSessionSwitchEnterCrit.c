/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x1C00344B0
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C0041540 (NtUserEnumDisplaySettings.c)
 *     NtUserQueryDisplayConfig @ 0x1C00415E0 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C0041880 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserEnumDisplayDevices @ 0x1C0041A10 (NtUserEnumDisplayDevices.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C00B5D30 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetMonitorBrightness @ 0x1C00B64F0 (NtUserGetMonitorBrightness.c)
 *     NtUserSetDimUndimTransitionTime @ 0x1C00B8E60 (NtUserSetDimUndimTransitionTime.c)
 *     NtUserSetMonitorBrightness @ 0x1C00B99C0 (NtUserSetMonitorBrightness.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00C03A0 (AcquireCriticalSectionAndCheckState.c)
 *     NtGdiDestroyOPMProtectedOutput @ 0x1C00C6450 (NtGdiDestroyOPMProtectedOutput.c)
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C0030230 (EtwTraceReleaseUserCrit.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserSessionSwitchEnterCrit(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  PVOID CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v18; // rdx
  PVOID v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  LARGE_INTEGER *v25; // rbx
  struct tagTHREADINFO *v26; // rbx
  struct tagTHREADINFO **v27; // rax
  PVOID v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 *v37; // rbx
  __int64 v38; // rdx
  _QWORD *v39; // rdi
  tagObjLock *v40; // [rsp+40h] [rbp+8h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v8, v7, v9);
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v40);
  while ( 1 )
  {
    v12 = (_QWORD *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v14 = *v12;
    v12[2] = 0LL;
    if ( !*(_DWORD *)(v14 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
    DomainLockRef = GetDomainLockRef(8LL, v10);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v12);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v18);
  }
  while ( 1 )
  {
    tagObjLock::UnLock(v40);
    if ( !gfSwitchInProgress )
      break;
    v19 = (PVOID)PsGetCurrentProcess();
    if ( v19 )
    {
      if ( v19 == g_pepDwm )
        break;
    }
    ++gcSwitchInProgressWaiters;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    EtwTraceReleaseUserCrit((unsigned int)gdwInAtomicOperation, v20, v21);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemSwitchInProgressWaiters, UserRequest, 0, 0, 0LL);
    v25 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v23, v22, v24);
    if ( v25 )
      v25[1] = KeQueryPerformanceCounter(0LL);
    v26 = 0LL;
    while ( 1 )
    {
      v27 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v27 )
        v26 = *v27;
      v28 = (PVOID)PsGetCurrentProcess();
      if ( v28 )
      {
        if ( v28 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v26 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v26 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v30, v29, v31);
    gptiCurrent = v26;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v40);
    while ( 1 )
    {
      v39 = (_QWORD *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v34 = *v39;
      v39[2] = 0LL;
      if ( !*(_DWORD *)(v34 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32);
      v37 = GetDomainLockRef(8LL, v32);
      if ( v37 == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35);
      tagObjLock::UnLock((tagObjLock *)v37);
      HMUnlockObject(*v39);
      tagObjLock::LockExclusive((struct _KTHREAD **)v37, v38);
    }
  }
  return 0LL;
}
