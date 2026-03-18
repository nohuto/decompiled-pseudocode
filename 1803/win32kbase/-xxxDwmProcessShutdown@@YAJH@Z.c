/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00DBCE8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C00BB310 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00307FC (-IsCurrentProcessDwm@@YAHXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     GreLockDwmState @ 0x1C004D1D0 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C004D210 (GreUnlockDwmState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     GreSfmCleanupPresentHistory @ 0x1C00D7870 (GreSfmCleanupPresentHistory.c)
 *     xxxDwmControl @ 0x1C00DC460 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C00DC4D4 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(unsigned int a1)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  unsigned int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *i; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  LARGE_INTEGER *v27; // rbx
  struct tagTHREADINFO *v28; // rbx
  struct tagTHREADINFO **v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *j; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 *v39; // rbx
  __int64 v40; // rdx
  unsigned int CurrentProcessId; // eax
  __int64 v43; // [rsp+68h] [rbp+10h] BYREF
  tagObjLock *v44; // [rsp+70h] [rbp+18h] BYREF

  v43 = 0LL;
  v2 = 0;
  if ( (int)DxgkGetSessionTokenManager(&v43) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 72LL))(v43);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 176LL))(v43);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
  }
  v4 = a1;
  if ( g_bDwmIsShuttingDown )
    v4 = 0;
  if ( (int)IsxxxDwmStopRedirectionSupported(v3) >= 0 )
    v2 = xxxDwmStopRedirection(a1);
  if ( (_DWORD)gdwInAtomicOperation )
  {
    v5 = (unsigned int)gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v5);
  GreSfmCleanupPresentHistory();
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7, v6, v8);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v10 = 0LL;
  while ( 1 )
  {
    v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v11 )
      v10 = *v11;
    if ( IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess(v13) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v10 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v13, v12, v14);
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v44);
  for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
  {
    gpducstulHead = i[2];
    v18 = *i;
    i[2] = 0LL;
    if ( !*(_DWORD *)(v18 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
    DomainLockRef = GetDomainLockRef(8LL, v15);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*i);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v22);
  }
  tagObjLock::UnLock(v44);
  GreLockDwmState();
  SetDwmApiPort(0LL);
  if ( g_pepDwm )
  {
    ObfDereferenceObject(g_pepDwm);
    g_pepDwm = 0LL;
  }
  GreUnlockDwmState();
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    UserSessionSwitchLeaveCrit(v23);
    v2 = UserEnableConsoleMode(1LL);
    v27 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v25, v24, v26);
    if ( v27 )
      v27[1] = KeQueryPerformanceCounter(0LL);
    v28 = 0LL;
    while ( 1 )
    {
      v29 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v29 )
        v28 = *v29;
      if ( IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess(v31) == gpepCSRSS && v28 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v28 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v31, v30, v32);
    gptiCurrent = v28;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v44);
    for ( j = (__int64 *)gpducstulHead; gpducstulHead; j = (__int64 *)gpducstulHead )
    {
      gpducstulHead = j[2];
      v36 = *j;
      j[2] = 0LL;
      if ( !*(_DWORD *)(v36 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33);
      v39 = GetDomainLockRef(8LL, v33);
      if ( v39 == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37);
      tagObjLock::UnLock((tagObjLock *)v39);
      HMUnlockObject(*j);
      tagObjLock::LockExclusive((struct _KTHREAD **)v39, v40);
    }
    tagObjLock::UnLock(v44);
  }
  g_bDwmIsShuttingDown = 0;
  if ( v4 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    xxxDwmControl(1036LL, CurrentProcessId);
  }
  return v2;
}
