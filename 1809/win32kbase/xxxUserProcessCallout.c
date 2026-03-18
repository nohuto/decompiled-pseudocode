/*
 * XREFs of xxxUserProcessCallout @ 0x1C002AEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C00078FC (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     GreUnlockVisRgn @ 0x1C0029B20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0029D60 (GreLockVisRgn.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     DestroyProcessInfo @ 0x1C0032CF4 (DestroyProcessInfo.c)
 *     DestroyCacheDC @ 0x1C0045330 (DestroyCacheDC.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C007470C (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     xxxInitProcessInfo @ 0x1C009B0FC (xxxInitProcessInfo.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxUserProcessCallout(_QWORD *a1, PEPROCESS *a2)
{
  PACCESS_TOKEN v4; // r15
  bool v5; // zf
  int v6; // eax
  int inited; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  _QWORD *i; // r12
  LARGE_INTEGER *v12; // rbx
  char v13; // r14
  struct tagTHREADINFO *v14; // rbx
  _QWORD *j; // rdi
  __int64 v16; // r8
  int v17; // ecx
  char *k; // rax
  __int64 ProcessJob; // rax
  __int64 v20; // rbx
  struct _ERESOURCE *JobLock; // rax
  struct _ERESOURCE *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  _QWORD *v25; // rdi
  __int64 *v26; // rbx
  _QWORD *v27; // r12
  __int64 *v28; // r15
  __int64 *v29; // rcx
  __int64 *v30; // rax
  InputExtensibilityCallout *v31; // rcx
  __int64 v32; // rax
  __int64 *DomainLockRef; // rbx
  __int64 v34; // rax
  __int64 *v35; // rbx
  int v36; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v37; // [rsp+34h] [rbp-55h] BYREF
  int v38; // [rsp+38h] [rbp-51h] BYREF
  tagObjLock *v39; // [rsp+40h] [rbp-49h] BYREF
  tagObjLock *v40; // [rsp+48h] [rbp-41h] BYREF
  __int64 v41; // [rsp+50h] [rbp-39h] BYREF
  int v42; // [rsp+58h] [rbp-31h]
  _QWORD *v43; // [rsp+60h] [rbp-29h]
  _BYTE v44[32]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v45[32]; // [rsp+88h] [rbp-1h] BYREF

  if ( a2 )
  {
    v4 = 0LL;
    v5 = (*((_DWORD *)a1 + 3) & 0x8000) == 0;
    v6 = *((_DWORD *)a1 + 3) & 0x8000;
    v38 = 0;
    LODWORD(v39) = v6;
    inited = 1073741851;
    v37 = 0;
    v36 = 0;
    if ( v5 )
    {
      v4 = PsReferencePrimaryToken(*a2);
      if ( v4 )
        inited = UserProcessImmersiveType(
                   (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)a2,
                   v4,
                   (enum _PROCESS_IMMERSIVE_TYPE *)&v38,
                   &v37,
                   &v36);
      else
        inited = -1073741700;
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v44, 1);
    v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v44);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v9;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v40);
    for ( i = (_QWORD *)gpducstulHead; gpducstulHead; i = (_QWORD *)gpducstulHead )
    {
      gpducstulHead = i[2];
      v32 = *i;
      i[2] = 0LL;
      if ( !*(_DWORD *)(v32 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      DomainLockRef = GetDomainLockRef(8);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*i);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
    }
    tagObjLock::UnLock(v40);
    if ( !(_DWORD)v39 && inited >= 0 )
      inited = xxxInitProcessInfo((struct _W32PROCESS *)a1, v4, v36);
    if ( v4 )
      PsDereferencePrimaryToken(v4);
    if ( inited < 0 )
      DestroyProcessInfo(a1);
    UserSessionSwitchLeaveCrit();
    if ( !inited )
    {
      ProcessJob = PsGetProcessJob(*a1);
      v20 = ProcessJob;
      if ( ProcessJob )
      {
        if ( (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
        {
          JobLock = (struct _ERESOURCE *)PsGetJobLock(v20);
          ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
          v41 = v20;
          v42 = 1;
          v43 = a1;
          UserJobCallout(&v41);
          v22 = (struct _ERESOURCE *)PsGetJobLock(v20);
          ExReleaseResourceAndLeaveCriticalRegion(v22);
        }
      }
    }
  }
  else
  {
    v12 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v12 )
      v12[1] = KeQueryPerformanceCounter(0LL);
    v13 = 1;
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v45, 1);
    v14 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v45);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v14;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v39);
    for ( j = (_QWORD *)gpducstulHead; gpducstulHead; j = (_QWORD *)gpducstulHead )
    {
      gpducstulHead = j[2];
      v34 = *j;
      j[2] = 0LL;
      if ( !*(_DWORD *)(v34 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v35 = GetDomainLockRef(8);
      if ( v35 == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      tagObjLock::UnLock((tagObjLock *)v35);
      HMUnlockObject(*j);
      tagObjLock::LockExclusive((struct _KTHREAD **)v35);
    }
    tagObjLock::UnLock(v39);
    if ( !gpepCSRSS || (PVOID)*a1 != gpepCSRSS )
      v13 = 0;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (unsigned int)&Feature_InputVirtualization__private_propertyCache,
      16291462,
      (unsigned int)&unk_1C01933C8,
      0,
      3);
    if ( *a1 && PsGetProcessJob(*a1) && (int)IsRemoveProcessFromJobSupported() >= 0 )
      RemoveProcessFromJob(a1);
    if ( (unsigned int)DestroyProcessInfo(a1) )
    {
      v17 = giheLast;
      for ( k = (char *)qword_1C01CBA58 + 32 * (unsigned int)giheLast; k > qword_1C01CBA58 && !k[24]; k -= 32 )
        giheLast = --v17;
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), (int)qword_1C01CBA58, v16);
      v25 = (_QWORD *)(gpDispInfo + 24);
      v26 = *(__int64 **)(gpDispInfo + 24);
      if ( v26 )
      {
        do
        {
          v27 = v25;
          v28 = v26;
          v29 = v26;
          if ( (v26[8] & 0x400000) != 0 )
          {
            DestroyCacheDC(v25, v26[1]);
            v29 = (__int64 *)*v25;
          }
          v30 = v29;
          if ( v26 == v29 )
            v30 = (__int64 *)*v26;
          v25 = v26;
          v26 = v30;
          if ( v28 != v29 )
            v25 = v27;
        }
        while ( v30 );
      }
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v23, v24);
      if ( (int)IsGreHidePointerSupported() >= 0 )
        GreHidePointer(0LL);
      if ( v13 && *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
        InputExtensibilityCallout::CloseCoreMsgPort(v31);
    }
    inited = 0;
    UserSessionSwitchLeaveCrit();
  }
  return (unsigned int)inited;
}
