/*
 * XREFs of UserThreadCallout @ 0x1C002E220
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     xxxCreateThreadInfo @ 0x1C002F9C4 (xxxCreateThreadInfo.c)
 *     RtlGetExpWinVer @ 0x1C0030AE8 (RtlGetExpWinVer.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 *     GreCleanDC @ 0x1C003C230 (GreCleanDC.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, int a2)
{
  int ThreadInfo; // r13d
  __int64 v4; // rcx
  __int64 v5; // rbx
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v7; // rdi
  __int64 ProcessSectionBaseAddress; // rax
  __int64 v9; // rcx
  LARGE_INTEGER *v10; // rbx
  struct tagTHREADINFO *v11; // rdi
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagTHREADINFO *v23; // rdi
  __int64 v24; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO **v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  PVOID CurrentProcess; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 *v44; // r14
  __int64 ThreadWin32Thread; // rbx
  int v46; // eax
  __int64 v47; // rax
  unsigned int v48; // r9d
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  PERESOURCE *v52; // rdi
  __int64 v53; // r8
  __int64 v54; // rax
  unsigned int v55; // r9d
  __int64 v56; // rdx
  __int64 v57; // rcx
  PERESOURCE *v58; // rbx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  PERESOURCE *v69; // rdi
  __int64 v70; // r8
  __int64 *v71; // r14
  int v72; // [rsp+30h] [rbp-D0h] BYREF
  int v73; // [rsp+34h] [rbp-CCh] BYREF
  int v74; // [rsp+38h] [rbp-C8h] BYREF
  int v75; // [rsp+3Ch] [rbp-C4h] BYREF
  int v76; // [rsp+40h] [rbp-C0h] BYREF
  int v77; // [rsp+44h] [rbp-BCh] BYREF
  PETHREAD Threada; // [rsp+48h] [rbp-B8h]
  __int64 v79; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v80; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v82; // [rsp+70h] [rbp-90h]
  unsigned __int8 v83; // [rsp+78h] [rbp-88h]
  GUID pActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v86; // [rsp+B0h] [rbp-50h]
  __int64 v87; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR v88; // [rsp+C0h] [rbp-40h] BYREF
  int *v89; // [rsp+E0h] [rbp-20h]
  int v90; // [rsp+E8h] [rbp-18h]
  int v91; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR v92; // [rsp+F0h] [rbp-10h] BYREF
  int *v93; // [rsp+110h] [rbp+10h]
  int v94; // [rsp+118h] [rbp+18h]
  int v95; // [rsp+11Ch] [rbp+1Ch]
  EVENT_DATA_DESCRIPTOR v96; // [rsp+120h] [rbp+20h] BYREF
  int *v97; // [rsp+140h] [rbp+40h]
  __int64 v98; // [rsp+148h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR v99; // [rsp+150h] [rbp+50h] BYREF
  int *v100; // [rsp+170h] [rbp+70h]
  __int64 v101; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v102; // [rsp+180h] [rbp+80h] BYREF
  int *v103; // [rsp+1A0h] [rbp+A0h]
  __int64 v104; // [rsp+1A8h] [rbp+A8h]

  ThreadInfo = 0;
  Threada = Thread;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_27;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, a2, 14, 26, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids);
    }
    v23 = 0LL;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Thread);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v80 = 1;
      v47 = PsGetCurrentThreadWin32Thread(v24);
      v79 = v47;
      if ( v47 && (*(int *)(v47 + 24) > 0 || *(_DWORD *)(v79 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v72 = v80;
            v86 = &v72;
            v87 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v79 = 0LL;
    }
    while ( 1 )
    {
      v26 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v26 )
        v23 = *v26;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v28, v27);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v31, v30) == gpepCSRSS && v23 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v23 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v79 && (*(_DWORD *)(v79 + 48) || *(int *)(v79 + 24) > 0) )
    {
      *(_DWORD *)(v79 + 44) = 1;
      *(GUID *)(v79 + 28) = ActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v91 = 0;
          v73 = v80;
          v89 = &v73;
          v90 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v88);
          v48 = dword_1C020FB50;
        }
        if ( v48 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v95 = 0;
          v74 = v80;
          v93 = &v74;
          v94 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v92);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v23;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v32, v33);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v37);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v44 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v49 = *v44;
        v44[2] = 0LL;
        if ( !*(_DWORD *)(v49 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43);
        v52 = (PERESOURCE *)GetDomainLockRef(12LL, v41, v43);
        if ( v52 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v51, v50, v53);
        ExReleaseResourceAndLeaveCriticalRegion(*v52);
        HMUnlockObject(*v44);
        tagDomLock::LockExclusive(v52);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Threada);
    *(_DWORD *)(ThreadWin32Thread + 480) |= 1u;
    if ( (int)IsxxxFullScreenCleanupSupported() >= 0 )
      xxxFullScreenCleanup();
    if ( gbVideoInitialized || !gbRemoteSession )
      GreCleanDC(*(HDC *)(gpDispInfo + 56));
    v46 = *(_DWORD *)(ThreadWin32Thread + 1224);
    if ( (v46 & 2) != 0 )
    {
      gfSwitchInProgress = 0;
      v46 = *(_DWORD *)(ThreadWin32Thread + 1224);
    }
    if ( (v46 & 1) == 0 )
    {
      if ( (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 )
        GetAppCompatFlags2QuadWord(gptiCurrent);
      xxxDestroyThreadInfo();
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, a2, 14, 25, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids);
    }
    if ( gbNoMorePowerCallouts )
      return 3221225473LL;
    if ( !gbUserInitialized )
    {
      _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread((__int64)Thread) + 1224), 0);
      goto LABEL_27;
    }
    v5 = W32GetThreadWin32Thread((__int64)Thread);
    if ( v5 )
    {
      ThreadProcess = PsGetThreadProcess(Thread);
      v7 = ThreadProcess;
      if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v7);
        *(_DWORD *)(v5 + 624) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(v5 + 624) = 0;
      }
    }
    v10 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
    if ( v10 )
      v10[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&pActivityId.Data1 = 0LL;
    *(_QWORD *)pActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v83 = 1;
      v54 = PsGetCurrentThreadWin32Thread(v9);
      v82 = v54;
      if ( v54 && (*(int *)(v54 + 24) > 0 || *(_DWORD *)(v82 + 48)) )
      {
        EtwActivityIdControl(3u, &pActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v75 = v83;
            v97 = &v75;
            v98 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &pActivityId, 0LL, 3u, &v96);
          }
        }
      }
    }
    else
    {
      v82 = 0LL;
    }
    v11 = 0LL;
    while ( 1 )
    {
      v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v12 )
        v11 = *v12;
      v15 = (PVOID)PsGetCurrentProcess(v14, v13);
      if ( v15 )
      {
        if ( v15 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v11 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v82 && (*(_DWORD *)(v82 + 48) || *(int *)(v82 + 24) > 0) )
    {
      *(_DWORD *)(v82 + 44) = 1;
      *(GUID *)(v82 + 28) = pActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v76 = v83;
          v100 = &v76;
          v101 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &pActivityId, 0LL, 3u, &v99);
          v55 = dword_1C020FB50;
        }
        if ( v55 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v77 = v83;
          v103 = &v77;
          v104 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &pActivityId, 0LL, 3u, &v102);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      v58 = (PERESOURCE *)GetDomainLockRef(12LL, v18, v19);
      if ( v58 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v59);
      if ( ExIsResourceAcquiredExclusiveLite(*v58) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v61, v60, v62);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v58);
      while ( 1 )
      {
        v71 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v66 = *v71;
        v71[2] = 0LL;
        if ( !*(_DWORD *)(v66 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v64, v63, v65);
        v69 = (PERESOURCE *)GetDomainLockRef(12LL, v63, v65);
        if ( v69 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v68, v67, v70);
        ExReleaseResourceAndLeaveCriticalRegion(*v69);
        HMUnlockObject(*v71);
        tagDomLock::LockExclusive(v69);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v58);
    }
    ThreadInfo = xxxCreateThreadInfo(Threada);
    if ( ThreadInfo >= 0 && (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 )
      GetAppCompatFlags2QuadWord(gptiCurrent);
  }
  UserSessionSwitchLeaveCrit(v21, v20);
LABEL_27:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, a2, 14, 27, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids);
  }
  return (unsigned int)ThreadInfo;
}
