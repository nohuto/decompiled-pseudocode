/*
 * XREFs of xxxUserProcessCallout @ 0x1C00340E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     GreLockVisRgn @ 0x1C00333D0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0033460 (GreUnlockVisRgn.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     DestroyProcessInfo @ 0x1C003B604 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x1C003C3AC (xxxInitProcessInfo.c)
 *     DestroyCacheDC @ 0x1C0062BA0 (DestroyCacheDC.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C006445C (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01208FC (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxUserProcessCallout(_QWORD *a1, PEPROCESS *a2, __int64 a3)
{
  int inited; // edi
  bool v6; // zf
  int v7; // eax
  PACCESS_TOKEN v8; // r15
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *i; // r12
  __int64 v19; // rcx
  __int64 ProcessJob; // rax
  __int64 v21; // rbx
  struct _ERESOURCE *JobLock; // rax
  struct _ERESOURCE *v23; // rax
  LARGE_INTEGER *v24; // rbx
  struct tagTHREADINFO *v25; // rbx
  char v26; // si
  struct tagTHREADINFO **v27; // rax
  PVOID v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *j; // rdi
  PVOID v35; // rcx
  InputExtensibilityCallout *v36; // rcx
  int v37; // r8d
  int v39; // ecx
  char *k; // rax
  __int64 v41; // rdx
  int v42; // r8d
  _QWORD *v43; // rdi
  _QWORD *v44; // rbx
  _QWORD *v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 *v55; // rbx
  __int64 v56; // rdx
  tagObjLock *v57; // [rsp+30h] [rbp-30h] BYREF
  tagObjLock *v58; // [rsp+38h] [rbp-28h] BYREF
  __int64 v59; // [rsp+40h] [rbp-20h] BYREF
  int v60; // [rsp+48h] [rbp-18h]
  _QWORD *v61; // [rsp+50h] [rbp-10h]
  int v62; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v63; // [rsp+B0h] [rbp+50h] BYREF
  int v64; // [rsp+B8h] [rbp+58h] BYREF

  if ( a2 )
  {
    inited = 1073741851;
    v6 = (*((_DWORD *)a1 + 3) & 0x8000) == 0;
    v7 = *((_DWORD *)a1 + 3) & 0x8000;
    v64 = 0;
    LODWORD(v57) = v7;
    v8 = 0LL;
    v63 = 0;
    v62 = 0;
    if ( v6 )
    {
      v8 = PsReferencePrimaryToken(*a2);
      if ( v8 )
        inited = UserProcessImmersiveType(
                   (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)a2,
                   v8,
                   (enum _PROCESS_IMMERSIVE_TYPE *)&v64,
                   &v63,
                   &v62);
      else
        inited = -1073741700;
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v10 = 0LL;
    while ( 1 )
    {
      v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v11 )
        v10 = *v11;
      CurrentProcess = (PVOID)PsGetCurrentProcess();
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v10 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v14, v13, v15);
    gptiCurrent = v10;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v58);
    for ( i = (_QWORD *)gpducstulHead; gpducstulHead; i = (_QWORD *)gpducstulHead )
    {
      gpducstulHead = i[2];
      v47 = *i;
      i[2] = 0LL;
      if ( !*(_DWORD *)(v47 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
      DomainLockRef = GetDomainLockRef(8LL, v16);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*i);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v51);
    }
    tagObjLock::UnLock(v58);
    if ( !(_DWORD)v57 && inited >= 0 )
      inited = xxxInitProcessInfo((struct _W32PROCESS *)a1, v8, v62);
    if ( v8 )
      PsDereferencePrimaryToken(v8);
    if ( inited < 0 )
      DestroyProcessInfo(a1);
    UserSessionSwitchLeaveCrit(v19);
    if ( !inited )
    {
      ProcessJob = PsGetProcessJob(*a1);
      v21 = ProcessJob;
      if ( ProcessJob )
      {
        if ( (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
        {
          JobLock = (struct _ERESOURCE *)PsGetJobLock(v21);
          ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
          v59 = v21;
          v60 = 1;
          v61 = a1;
          UserJobCallout(&v59);
          v23 = (struct _ERESOURCE *)PsGetJobLock(v21);
          ExReleaseResourceAndLeaveCriticalRegion(v23);
        }
      }
    }
  }
  else
  {
    v24 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, 0LL, a3);
    if ( v24 )
      v24[1] = KeQueryPerformanceCounter(0LL);
    v25 = 0LL;
    v26 = 1;
    while ( 1 )
    {
      v27 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v27 )
        v25 = *v27;
      v28 = (PVOID)PsGetCurrentProcess();
      if ( v28 )
      {
        if ( v28 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v25 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v25 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v30, v29, v31);
    gptiCurrent = v25;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v57);
    for ( j = (_QWORD *)gpducstulHead; gpducstulHead; j = (_QWORD *)gpducstulHead )
    {
      gpducstulHead = j[2];
      v52 = *j;
      j[2] = 0LL;
      if ( !*(_DWORD *)(v52 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32);
      v55 = GetDomainLockRef(8LL, v32);
      if ( v55 == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53);
      tagObjLock::UnLock((tagObjLock *)v55);
      HMUnlockObject(*j);
      tagObjLock::LockExclusive((struct _KTHREAD **)v55, v56);
    }
    tagObjLock::UnLock(v57);
    v35 = (PVOID)*a1;
    if ( !gpepCSRSS || v35 != gpepCSRSS )
      v26 = 0;
    if ( v35 && ((__int64 (*)(void))PsGetProcessJob)() && (int)IsRemoveProcessFromJobSupported() >= 0 )
      RemoveProcessFromJob(a1);
    if ( (unsigned int)DestroyProcessInfo(a1) )
    {
      v39 = giheLast;
      for ( k = (char *)qword_1C01A0E28 + 32 * (unsigned int)giheLast; k > qword_1C01A0E28 && !k[24]; k -= 32 )
        giheLast = --v39;
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), (int)qword_1C01A0E28, v37);
      v43 = (_QWORD *)(gpDispInfo + 24);
      v44 = *(_QWORD **)(gpDispInfo + 24);
      if ( v44 )
      {
        do
        {
          v45 = v44;
          if ( (v44[8] & 0x400000) != 0 )
          {
            DestroyCacheDC(v43, v44[1]);
            v45 = (_QWORD *)*v43;
          }
          v46 = v45;
          if ( v44 == v45 )
            v46 = (_QWORD *)*v44;
          else
            v44 = v43;
          v43 = v44;
          v44 = v46;
        }
        while ( v46 );
      }
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v41, v42);
      if ( (int)IsGreHidePointerSupported() >= 0 )
        GreHidePointer(0LL);
      if ( v26 && gpInputExtensibilityCallout )
        InputExtensibilityCallout::CloseCoreMsgPort(v36);
    }
    inited = 0;
    UserSessionSwitchLeaveCrit((__int64)v36);
  }
  return (unsigned int)inited;
}
