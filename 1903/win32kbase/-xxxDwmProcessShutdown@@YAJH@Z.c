/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00ABCBC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C011E780 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     GreLockDwmState @ 0x1C0014270 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00142B0 (GreUnlockDwmState.c)
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     xxxDwmControl @ 0x1C00ABFA0 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C00AC0FC (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C00AC140 (GreSfmCleanupPresentHistory.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(unsigned int a1)
{
  unsigned int v2; // r15d
  unsigned int v3; // r14d
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 *i; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int CurrentProcessId; // eax
  __int64 v32; // rax
  unsigned int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  PERESOURCE *v37; // rdi
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rcx
  LARGE_INTEGER *v41; // rbx
  __int64 v42; // rax
  struct tagTHREADINFO *v43; // rbx
  struct tagTHREADINFO **v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  PVOID v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned int v50; // r9d
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  PERESOURCE *v55; // rbx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 *j; // rsi
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  PERESOURCE *v67; // rdi
  __int64 v68; // r8
  __int64 v69; // [rsp+40h] [rbp-C8h] BYREF
  int v70; // [rsp+48h] [rbp-C0h] BYREF
  int v71; // [rsp+4Ch] [rbp-BCh] BYREF
  int v72; // [rsp+50h] [rbp-B8h] BYREF
  int v73; // [rsp+54h] [rbp-B4h] BYREF
  int v74; // [rsp+58h] [rbp-B0h] BYREF
  int v75; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v76; // [rsp+60h] [rbp-A8h]
  unsigned __int8 ActivityId_4; // [rsp+68h] [rbp-A0h]
  GUID ActivityId_8; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v79; // [rsp+80h] [rbp-88h]
  unsigned __int8 v80; // [rsp+88h] [rbp-80h]
  GUID pActivityId; // [rsp+8Ch] [rbp-7Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-68h] BYREF
  int *v83; // [rsp+C0h] [rbp-48h]
  __int64 v84; // [rsp+C8h] [rbp-40h]
  EVENT_DATA_DESCRIPTOR v85; // [rsp+D0h] [rbp-38h] BYREF
  int *v86; // [rsp+F0h] [rbp-18h]
  __int64 v87; // [rsp+F8h] [rbp-10h]
  EVENT_DATA_DESCRIPTOR v88; // [rsp+100h] [rbp-8h] BYREF
  int *v89; // [rsp+120h] [rbp+18h]
  __int64 v90; // [rsp+128h] [rbp+20h]
  EVENT_DATA_DESCRIPTOR v91; // [rsp+130h] [rbp+28h] BYREF
  int *v92; // [rsp+150h] [rbp+48h]
  __int64 v93; // [rsp+158h] [rbp+50h]
  EVENT_DATA_DESCRIPTOR v94; // [rsp+160h] [rbp+58h] BYREF
  int *v95; // [rsp+180h] [rbp+78h]
  __int64 v96; // [rsp+188h] [rbp+80h]
  EVENT_DATA_DESCRIPTOR v97; // [rsp+190h] [rbp+88h] BYREF
  int *v98; // [rsp+1B0h] [rbp+A8h]
  __int64 v99; // [rsp+1B8h] [rbp+B0h]

  v69 = 0LL;
  v2 = 0;
  if ( (int)DxgkGetSessionTokenManager(&v69) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 88LL))(v69);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 192LL))(v69);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 8LL))(v69);
  }
  v3 = a1;
  if ( g_bDwmIsShuttingDown )
    v3 = 0;
  if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
    v2 = xxxDwmStopRedirection(a1);
  if ( (_DWORD)gdwInAtomicOperation )
  {
    v4 = (unsigned int)gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v4, (unsigned int)gdwInAtomicOperation);
  GreSfmCleanupPresentHistory();
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId_8.Data1 = 0LL;
  *(_QWORD *)ActivityId_8.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v32 = PsGetCurrentThreadWin32Thread(v6);
    v76 = v32;
    if ( v32 && (*(int *)(v32 + 24) > 0 || *(_DWORD *)(v76 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v70 = ActivityId_4;
          v83 = &v70;
          v84 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId_8, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v76 = 0LL;
  }
  v8 = 0LL;
  while ( 1 )
  {
    v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v9 )
      v8 = *v9;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v8 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v76 && (*(_DWORD *)(v76 + 48) || *(int *)(v76 + 24) > 0) )
  {
    *(_DWORD *)(v76 + 44) = 1;
    *(GUID *)(v76 + 28) = ActivityId_8;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v71 = ActivityId_4;
        v86 = &v71;
        v87 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId_8, 0LL, 3u, &v85);
        v33 = dword_1C020FB50;
      }
      if ( v33 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v72 = ActivityId_4;
        v89 = &v72;
        v90 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId_8, 0LL, 3u, &v88);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v15, v16);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
    {
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
      v34 = *i;
      i[2] = 0LL;
      if ( !*(_DWORD *)(v34 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
      v37 = (PERESOURCE *)GetDomainLockRef(12LL, v24, v26);
      if ( v37 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v38);
      ExReleaseResourceAndLeaveCriticalRegion(*v37);
      HMUnlockObject(*i);
      tagDomLock::LockExclusive(v37);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
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
    UserSessionSwitchLeaveCrit(v29, v28);
    v2 = UserEnableConsoleMode(1LL);
    v41 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v39);
    if ( v41 )
      v41[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&pActivityId.Data1 = 0LL;
    *(_QWORD *)pActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v80 = 1;
      v42 = PsGetCurrentThreadWin32Thread(v40);
      v79 = v42;
      if ( v42 && (*(int *)(v42 + 24) > 0 || *(_DWORD *)(v79 + 48)) )
      {
        EtwActivityIdControl(3u, &pActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v73 = v80;
            v92 = &v73;
            v93 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &pActivityId, 0LL, 3u, &v91);
          }
        }
      }
    }
    else
    {
      v79 = 0LL;
    }
    v43 = 0LL;
    while ( 1 )
    {
      v44 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v44 )
        v43 = *v44;
      v47 = (PVOID)PsGetCurrentProcess(v46, v45);
      if ( v47 )
      {
        if ( v47 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v49, v48) == gpepCSRSS && v43 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v43 == gptiRit )
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
      *(GUID *)(v79 + 28) = pActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v74 = v80;
          v95 = &v74;
          v96 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &pActivityId, 0LL, 3u, &v94);
          v50 = dword_1C020FB50;
        }
        if ( v50 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v75 = v80;
          v98 = &v75;
          v99 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &pActivityId, 0LL, 3u, &v97);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v43;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      v55 = (PERESOURCE *)GetDomainLockRef(12LL, v51, v52);
      if ( v55 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53, v56);
      if ( ExIsResourceAcquiredExclusiveLite(*v55) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v58, v57, v59);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v55);
      for ( j = (__int64 *)gpducstulHead; gpducstulHead; j = (__int64 *)gpducstulHead )
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)j[2];
        v64 = *j;
        j[2] = 0LL;
        if ( !*(_DWORD *)(v64 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v61, v60, v62);
        v67 = (PERESOURCE *)GetDomainLockRef(12LL, v60, v62);
        if ( v67 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v66, v65, v68);
        ExReleaseResourceAndLeaveCriticalRegion(*v67);
        HMUnlockObject(*j);
        tagDomLock::LockExclusive(v67);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v55);
    }
  }
  g_bDwmIsShuttingDown = 0;
  if ( v3 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    xxxDwmControl(1036LL, CurrentProcessId);
  }
  return v2;
}
