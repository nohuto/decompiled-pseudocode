/*
 * XREFs of VideoPortCallout @ 0x1C00A5730
 * Callers:
 *     <none>
 * Callees:
 *     CreateKernelEvent @ 0x1C00141F0 (CreateKernelEvent.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     CSTRemove @ 0x1C00A7B60 (CSTRemove.c)
 *     InitCreateSystemThreadsMsg @ 0x1C00B1650 (InitCreateSystemThreadsMsg.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall VideoPortCallout(__int64 a1)
{
  __int64 v1; // r15
  int inited; // r14d
  __int64 v3; // rdx
  void *KernelEvent; // rcx
  __int64 v5; // r8
  signed int v6; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rsi
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
  __int64 v30; // rcx
  PVOID v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // rbx
  __int64 v42; // rdx
  LARGE_INTEGER *v43; // rbx
  struct tagTHREADINFO *v44; // rbx
  struct tagTHREADINFO **v45; // rax
  __int64 v46; // rcx
  PVOID v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 *v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  tagObjLock *v60; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v61; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-C0h]
  __int64 v63; // [rsp+50h] [rbp-B8h]
  _BYTE v64[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v65; // [rsp+5Ch] [rbp-ACh]

  v63 = a1;
  v1 = a1;
  v61 = a1;
  inited = 0;
  KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
  Object = KernelEvent;
  v6 = KernelEvent == 0LL ? 0xC0000017 : 0;
  if ( KernelEvent )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(KernelEvent, v3, v5);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v8 = 0LL;
    while ( 1 )
    {
      v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v9 )
        v8 = *v9;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v10);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v8 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v13, v12, v14);
    gptiCurrent = v8;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v60);
    v17 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = v17[2];
        v18 = *v17;
        v17[2] = 0LL;
        if ( !*(_DWORD *)(v18 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
        DomainLockRef = GetDomainLockRef(8LL, v15);
        if ( DomainLockRef == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v17);
        tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v22);
        v17 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v1 = v63;
    }
    tagObjLock::UnLock(v60);
    if ( !gbVideoInitialized )
      v6 = -1073741823;
    if ( v6 >= 0 )
    {
      if ( !CsrApiPort )
      {
        UserSessionSwitchLeaveCrit(v23);
        KeWaitForSingleObject(gpevtQueueReadyForCallout, WrUserRequest, 0, 0, 0LL);
        v27 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v25, v24, v26);
        if ( v27 )
          v27[1] = KeQueryPerformanceCounter(0LL);
        v28 = 0LL;
        while ( 1 )
        {
          v29 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v29 )
            v28 = *v29;
          v31 = (PVOID)PsGetCurrentProcess(v30);
          if ( v31 )
          {
            if ( v31 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v33) == gpepCSRSS && v28 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v28 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        EtwTraceAcquiredExclusiveUserCrit(v33, v32, v34);
        gptiCurrent = v28;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v60);
        v37 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = v37[2];
            v38 = *v37;
            v37[2] = 0LL;
            if ( !*(_DWORD *)(v38 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35);
            v41 = GetDomainLockRef(8LL, v35);
            if ( v41 == &gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39);
            tagObjLock::UnLock((tagObjLock *)v41);
            HMUnlockObject(*v37);
            tagObjLock::LockExclusive((struct _KTHREAD **)v41, v42);
            v37 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v1 = v63;
        }
        tagObjLock::UnLock(v60);
        if ( !CsrApiPort )
          v6 = -1073741816;
      }
      if ( v6 >= 0 )
      {
        inited = InitCreateSystemThreadsMsg(v64, 4LL, &v61);
        if ( !inited )
          v6 = -1073741801;
        if ( v6 >= 0 )
        {
          v65 |= 3u;
          v6 = LpcRequestPort(CsrApiPort, v64);
        }
      }
    }
    UserSessionSwitchLeaveCrit(v23);
    KernelEvent = Object;
  }
  if ( v6 < 0 )
  {
    if ( !inited )
      goto LABEL_76;
    v43 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(KernelEvent, v3, v5);
    if ( v43 )
      v43[1] = KeQueryPerformanceCounter(0LL);
    v44 = 0LL;
    while ( 1 )
    {
      v45 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v45 )
        v44 = *v45;
      v47 = (PVOID)PsGetCurrentProcess(v46);
      if ( v47 )
      {
        if ( v47 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v49) == gpepCSRSS && v44 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v44 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v49, v48, v50);
    gptiCurrent = v44;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v60);
    v53 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = v53[2];
        v54 = *v53;
        v53[2] = 0LL;
        if ( !*(_DWORD *)(v54 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51);
        v57 = GetDomainLockRef(8LL, v51);
        if ( v57 == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v56, v55);
        tagObjLock::UnLock((tagObjLock *)v57);
        HMUnlockObject(*v53);
        tagObjLock::LockExclusive((struct _KTHREAD **)v57, v58);
        v53 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v1 = v63;
    }
    tagObjLock::UnLock(v60);
    CSTRemove(4LL, &v61);
    UserSessionSwitchLeaveCrit(v59);
  }
  else
  {
    KeWaitForSingleObject(KernelEvent, WrUserRequest, 0, 0, 0LL);
    v6 = *(_DWORD *)(v1 + 24);
  }
  KernelEvent = Object;
LABEL_76:
  if ( KernelEvent )
    Win32FreePool((__int64)KernelEvent);
  *(_DWORD *)(v1 + 24) = v6;
}
