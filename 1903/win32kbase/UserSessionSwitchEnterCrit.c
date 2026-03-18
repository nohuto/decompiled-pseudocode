/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x1C008B050
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C004E670 (NtUserEnumDisplayDevices.c)
 *     NtUserEnumDisplaySettings @ 0x1C0093ED0 (NtUserEnumDisplaySettings.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00A56A0 (AcquireCriticalSectionAndCheckState.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029F60 (EtwTraceReleaseUserCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserSessionSwitchEnterCrit(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *i; // rsi
  PVOID v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  LARGE_INTEGER *v31; // rbx
  struct tagTHREADINFO *v32; // rbx
  struct tagTHREADINFO **v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  PVOID v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  PERESOURCE *v42; // rbx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 *j; // rsi
  __int64 v51; // rax
  unsigned int v52; // r9d
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  PERESOURCE *v56; // rdi
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rbx
  int v60; // eax
  __int64 v61; // rax
  unsigned int v62; // r9d
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  PERESOURCE *v66; // rdi
  __int64 v67; // r8
  int v68; // [rsp+38h] [rbp-D0h] BYREF
  int v69; // [rsp+3Ch] [rbp-CCh] BYREF
  int v70; // [rsp+40h] [rbp-C8h] BYREF
  int v71; // [rsp+44h] [rbp-C4h] BYREF
  int v72; // [rsp+48h] [rbp-C0h] BYREF
  int v73; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v74; // [rsp+50h] [rbp-B8h]
  __int64 v75; // [rsp+58h] [rbp-B0h]
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
  EVENT_DATA_DESCRIPTOR v100; // [rsp+1C0h] [rbp+B8h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId_8.Data1 = 0LL;
  *(_QWORD *)ActivityId_8.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v51 = PsGetCurrentThreadWin32Thread(v1);
    v76 = v51;
    if ( v51 && (*(int *)(v51 + 24) > 0 || *(_DWORD *)(v76 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v68 = ActivityId_4;
          v83 = &v68;
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
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v4 )
      v3 = *v4;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v3 == gptiRit )
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
        v69 = ActivityId_4;
        v86 = &v69;
        v87 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId_8, 0LL, 3u, &v85);
        v52 = dword_1C020FB50;
      }
      if ( v52 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v70 = ActivityId_4;
        v89 = &v70;
        v90 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId_8, 0LL, 3u, &v88);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v10, v12);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v16);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
    {
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
      v53 = *i;
      i[2] = 0LL;
      if ( !*(_DWORD *)(v53 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
      v56 = (PERESOURCE *)GetDomainLockRef(12LL, v20, v22);
      if ( v56 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v57);
      ExReleaseResourceAndLeaveCriticalRegion(*v56);
      HMUnlockObject(*i);
      tagDomLock::LockExclusive(v56);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  while ( gfSwitchInProgress )
  {
    v25 = (PVOID)PsGetCurrentProcess(v11, v10);
    if ( v25 && v25 == g_pepDwm )
      break;
    ++gcSwitchInProgressWaiters;
    v28 = (unsigned int)gdwInAtomicOperation;
    if ( (_DWORD)gdwInAtomicOperation )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)gdwInAtomicOperation, v26, v27);
      v28 = (unsigned int)gdwInAtomicOperation;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v58 = PsGetCurrentThreadWin32Thread(v28);
      v59 = v58;
      if ( v58 )
      {
        v60 = *(_DWORD *)(v58 + 24);
        if ( (*(_DWORD *)(v59 + 44) || *(_DWORD *)(v59 + 48) || v60 > 0)
          && dword_1C020FB50 > 6u
          && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3461, (LPCGUID)(v59 + 28), 0LL, 2u, &v100);
        }
        *(_DWORD *)(v59 + 44) = 0;
        v74 = 0LL;
        v75 = 0LL;
        *(_OWORD *)(v59 + 28) = 0u;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemSwitchInProgressWaiters, UserRequest, 0, 0, 0LL);
    v31 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v29);
    if ( v31 )
      v31[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&pActivityId.Data1 = 0LL;
    *(_QWORD *)pActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v80 = 1;
      v61 = PsGetCurrentThreadWin32Thread(v30);
      v79 = v61;
      if ( v61 && (*(int *)(v61 + 24) > 0 || *(_DWORD *)(v79 + 48)) )
      {
        EtwActivityIdControl(3u, &pActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v71 = v80;
            v92 = &v71;
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
    v32 = 0LL;
    while ( 1 )
    {
      v33 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v33 )
        v32 = *v33;
      v36 = (PVOID)PsGetCurrentProcess(v35, v34);
      if ( v36 )
      {
        if ( v36 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v38, v37) == gpepCSRSS && v32 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v32 == gptiRit )
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
          v72 = v80;
          v95 = &v72;
          v96 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &pActivityId, 0LL, 3u, &v94);
          v62 = dword_1C020FB50;
        }
        if ( v62 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v73 = v80;
          v98 = &v73;
          v99 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &pActivityId, 0LL, 3u, &v97);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v32;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      v42 = (PERESOURCE *)GetDomainLockRef(12LL, v10, v39);
      if ( v42 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v43);
      if ( ExIsResourceAcquiredExclusiveLite(*v42) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v42);
      for ( j = (__int64 *)gpducstulHead; gpducstulHead; j = (__int64 *)gpducstulHead )
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)j[2];
        v63 = *j;
        j[2] = 0LL;
        if ( !*(_DWORD *)(v63 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v49);
        v66 = (PERESOURCE *)GetDomainLockRef(12LL, v47, v49);
        if ( v66 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v65, v64, v67);
        ExReleaseResourceAndLeaveCriticalRegion(*v66);
        HMUnlockObject(*j);
        tagDomLock::LockExclusive(v66);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v42);
    }
  }
  return 0LL;
}
