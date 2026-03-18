/*
 * XREFs of xxxUserProcessCallout @ 0x1C002DC40
 * Callers:
 *     <none>
 * Callees:
 *     GreUnlockVisRgn @ 0x1C0017990 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0017A40 (GreLockVisRgn.c)
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     isInputVirtualizationEnabled @ 0x1C0032A18 (isInputVirtualizationEnabled.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     DestroyProcessInfo @ 0x1C0036D0C (DestroyProcessInfo.c)
 *     DestroyCacheDC @ 0x1C0064E90 (DestroyCacheDC.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C00841F4 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     xxxInitProcessInfo @ 0x1C00AC440 (xxxInitProcessInfo.c)
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C00B49AC (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxUserProcessCallout(struct _W32PROCESS *a1, PEPROCESS *a2)
{
  struct tagTHREADINFO *v2; // rdi
  PEPROCESS *v3; // rbx
  const union _LARGE_INTEGER *v5; // rcx
  int v6; // eax
  int inited; // r15d
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _W32PROCESS *v19; // rdi
  int v20; // edx
  const union _LARGE_INTEGER *v22; // rcx
  __int64 v23; // rcx
  LARGE_INTEGER *v24; // rbx
  char v25; // r14
  struct tagTHREADINFO **v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  PVOID v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  InputExtensibilityCallout *v35; // rcx
  __int64 v36; // r8
  int v37; // ecx
  char *i; // rax
  __int64 ProcessJob; // rax
  __int64 v40; // rbx
  struct _ERESOURCE *JobLock; // rax
  struct _ERESOURCE *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  _QWORD *v45; // rdi
  __int64 *v46; // rbx
  _QWORD *v47; // r12
  __int64 *v48; // r15
  __int64 *v49; // rcx
  __int64 *v50; // rax
  __int64 v51; // rax
  unsigned int v52; // r9d
  __int64 v53; // rdx
  __int64 v54; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  PERESOURCE *v66; // rdi
  __int64 v67; // r8
  __int64 *v68; // rsi
  __int64 v69; // rax
  unsigned int v70; // r9d
  __int64 v71; // rdx
  __int64 v72; // rcx
  PERESOURCE *v73; // rbx
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  PERESOURCE *v84; // rdi
  __int64 v85; // r8
  __int64 *v86; // rsi
  int v87; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v88; // [rsp+34h] [rbp-CCh] BYREF
  int v89; // [rsp+38h] [rbp-C8h] BYREF
  int v90; // [rsp+3Ch] [rbp-C4h] BYREF
  int v91; // [rsp+40h] [rbp-C0h] BYREF
  int v92; // [rsp+44h] [rbp-BCh] BYREF
  int v93; // [rsp+48h] [rbp-B8h]
  int v94; // [rsp+4Ch] [rbp-B4h] BYREF
  int v95; // [rsp+50h] [rbp-B0h] BYREF
  int v96; // [rsp+54h] [rbp-ACh] BYREF
  struct _W32PROCESS *v97; // [rsp+58h] [rbp-A8h]
  PACCESS_TOKEN PrimaryToken; // [rsp+60h] [rbp-A0h]
  __int64 v99; // [rsp+68h] [rbp-98h] BYREF
  __int64 v100; // [rsp+70h] [rbp-90h]
  struct _W32PROCESS *v101; // [rsp+78h] [rbp-88h]
  __int64 v102; // [rsp+80h] [rbp-80h]
  unsigned __int8 v103; // [rsp+88h] [rbp-78h]
  GUID ActivityId; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v105; // [rsp+A0h] [rbp-60h]
  unsigned __int8 v106; // [rsp+A8h] [rbp-58h]
  GUID pActivityId; // [rsp+ACh] [rbp-54h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  int *v109; // [rsp+E0h] [rbp-20h]
  __int64 v110; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR v111; // [rsp+F0h] [rbp-10h] BYREF
  int *v112; // [rsp+110h] [rbp+10h]
  int v113; // [rsp+118h] [rbp+18h]
  int v114; // [rsp+11Ch] [rbp+1Ch]
  EVENT_DATA_DESCRIPTOR v115; // [rsp+120h] [rbp+20h] BYREF
  int *v116; // [rsp+140h] [rbp+40h]
  int v117; // [rsp+148h] [rbp+48h]
  int v118; // [rsp+14Ch] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR v119; // [rsp+150h] [rbp+50h] BYREF
  int *v120; // [rsp+170h] [rbp+70h]
  __int64 v121; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v122; // [rsp+180h] [rbp+80h] BYREF
  int *v123; // [rsp+1A0h] [rbp+A0h]
  int v124; // [rsp+1A8h] [rbp+A8h]
  int v125; // [rsp+1ACh] [rbp+ACh]
  EVENT_DATA_DESCRIPTOR v126; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v127; // [rsp+1D0h] [rbp+D0h]
  int v128; // [rsp+1D8h] [rbp+D8h]
  int v129; // [rsp+1DCh] [rbp+DCh]

  v2 = 0LL;
  v97 = a1;
  v3 = a2;
  if ( a2 )
  {
    v5 = &WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 30, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids);
    }
    v6 = *((_DWORD *)a1 + 3);
    inited = 1073741851;
    v89 = 0;
    v93 = v6 & 0x8000;
    v88 = 0;
    PrimaryToken = 0LL;
    v87 = 0;
    if ( (v6 & 0x8000) == 0 )
    {
      PrimaryToken = PsReferencePrimaryToken(*v3);
      if ( PrimaryToken )
        inited = UserProcessImmersiveType(
                   (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)v3,
                   PrimaryToken,
                   (enum _PROCESS_IMMERSIVE_TYPE *)&v89,
                   &v88,
                   &v87);
      else
        inited = -1073741700;
      v2 = 0LL;
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v103 = 1;
      v51 = PsGetCurrentThreadWin32Thread(v8);
      v102 = v51;
      if ( v51 && (*(int *)(v51 + 24) > 0 || *(_DWORD *)(v102 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v90 = v103;
            v109 = &v90;
            v110 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v102 = 0LL;
    }
    while ( 1 )
    {
      v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v10 )
        v2 = *v10;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v2 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v102
      && (*(_DWORD *)(v102 + 48) || *(int *)(v102 + 24) > 0) )
    {
      *(_DWORD *)(v102 + 44) = 1;
      *(GUID *)(v102 + 28) = ActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v114 = 0;
          v91 = v103;
          v112 = &v91;
          v113 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v111);
          v52 = dword_1C020FB50;
        }
        if ( v52 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v118 = 0;
          v92 = v103;
          v116 = &v92;
          v117 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v115);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v2;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v16, v18);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53, v56);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v58, v57, v59);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v68 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v63 = *v68;
        v68[2] = 0LL;
        if ( !*(_DWORD *)(v63 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v61, v60, v62);
        v66 = (PERESOURCE *)GetDomainLockRef(12LL, v60, v62);
        if ( v66 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v65, v64, v67);
        ExReleaseResourceAndLeaveCriticalRegion(*v66);
        HMUnlockObject(*v68);
        tagDomLock::LockExclusive(v66);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
    v19 = v97;
    if ( !v93 && inited >= 0 )
      inited = xxxInitProcessInfo(v97, PrimaryToken, v87);
    if ( PrimaryToken )
      PsDereferencePrimaryToken(PrimaryToken);
    if ( inited < 0 )
      DestroyProcessInfo(v19);
    UserSessionSwitchLeaveCrit(v17, v16);
    if ( !inited )
    {
      ProcessJob = PsGetProcessJob(*(_QWORD *)v19);
      v40 = ProcessJob;
      if ( ProcessJob )
      {
        if ( (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
        {
          v99 = 0LL;
          v100 = 0LL;
          v101 = 0LL;
          JobLock = (struct _ERESOURCE *)PsGetJobLock(v40);
          ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
          v99 = v40;
          LODWORD(v100) = 1;
          v101 = v19;
          UserJobCallout(&v99);
          v42 = (struct _ERESOURCE *)PsGetJobLock(v40);
          ExReleaseResourceAndLeaveCriticalRegion(v42);
        }
      }
    }
  }
  else
  {
    v22 = &WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 31, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids);
    }
    v24 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v22);
    if ( v24 )
      v24[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&pActivityId.Data1 = 0LL;
    *(_QWORD *)pActivityId.Data4 = 0LL;
    v25 = 1;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v106 = 1;
      v69 = PsGetCurrentThreadWin32Thread(v23);
      v105 = v69;
      if ( v69 && (*(int *)(v69 + 24) > 0 || *(_DWORD *)(v105 + 48)) )
      {
        EtwActivityIdControl(3u, &pActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v94 = v106;
            v120 = &v94;
            v121 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &pActivityId, 0LL, 3u, &v119);
          }
        }
      }
    }
    else
    {
      v105 = 0LL;
    }
    while ( 1 )
    {
      v26 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v26 )
        v2 = *v26;
      v29 = (PVOID)PsGetCurrentProcess(v28, v27);
      if ( v29 )
      {
        if ( v29 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v31, v30) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v2 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v105
      && (*(_DWORD *)(v105 + 48) || *(int *)(v105 + 24) > 0) )
    {
      *(_DWORD *)(v105 + 44) = 1;
      *(GUID *)(v105 + 28) = pActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v125 = 0;
          v95 = v106;
          v123 = &v95;
          v124 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &pActivityId, 0LL, 3u, &v122);
          v70 = dword_1C020FB50;
        }
        if ( v70 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v129 = 0;
          v96 = v106;
          v127 = &v96;
          v128 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &pActivityId, 0LL, 3u, &v126);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v2;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      v73 = (PERESOURCE *)GetDomainLockRef(12LL, v32, v33);
      if ( v73 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v72, v71, v74);
      if ( ExIsResourceAcquiredExclusiveLite(*v73) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v76, v75, v77);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v73);
      while ( 1 )
      {
        v86 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v81 = *v86;
        v86[2] = 0LL;
        if ( !*(_DWORD *)(v81 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v79, v78, v80);
        v84 = (PERESOURCE *)GetDomainLockRef(12LL, v78, v80);
        if ( v84 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v83, v82, v85);
        ExReleaseResourceAndLeaveCriticalRegion(*v84);
        HMUnlockObject(*v86);
        tagDomLock::LockExclusive(v84);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v73);
    }
    if ( gpepCSRSS && *(PVOID *)a1 == gpepCSRSS )
    {
      if ( (unsigned __int8)isInputVirtualizationEnabled() && gpkeIVThreadShutdown )
        KeSetEvent(gpkeIVThreadShutdown, 1, 0);
    }
    else
    {
      v25 = 0;
    }
    if ( *(_QWORD *)a1 && PsGetProcessJob(*(_QWORD *)a1) && (int)IsRemoveProcessFromJobSupported() >= 0 )
      RemoveProcessFromJob(a1);
    if ( (unsigned int)DestroyProcessInfo(a1) )
    {
      v37 = giheLast;
      for ( i = (char *)qword_1C0213758 + 32 * (unsigned int)giheLast; i > (char *)qword_1C0213758 && !i[24]; i -= 32 )
        giheLast = --v37;
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), (int)qword_1C0213758, v36);
      v45 = (_QWORD *)(gpDispInfo + 24);
      v46 = *(__int64 **)(gpDispInfo + 24);
      if ( v46 )
      {
        do
        {
          v47 = v45;
          v48 = v46;
          v49 = v46;
          if ( (v46[8] & 0x400000) != 0 )
          {
            DestroyCacheDC(v45, v46[1]);
            v49 = (__int64 *)*v45;
          }
          v50 = v49;
          if ( v46 == v49 )
            v50 = (__int64 *)*v46;
          v45 = v46;
          v46 = v50;
          if ( v48 != v49 )
            v45 = v47;
        }
        while ( v50 );
      }
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v43, v44);
      if ( (int)IsGreHidePointerSupported() >= 0 )
        GreHidePointer(0LL);
      if ( v25 && gpInputExtensibilityCallout )
        InputExtensibilityCallout::CloseCoreMsgPort(v35);
    }
    inited = 0;
    UserSessionSwitchLeaveCrit((__int64)v35, v34);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v20, 14, 32, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids);
  }
  return (unsigned int)inited;
}
