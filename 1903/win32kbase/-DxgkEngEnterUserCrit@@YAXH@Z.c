/*
 * XREFs of ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C0098A80
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002A1F0 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A450 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DxgkEngEnterUserCrit(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *v2; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rsi
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rsi
  __int64 v32; // rax
  unsigned int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  PERESOURCE *v37; // rdi
  __int64 v38; // r8
  __int64 v39; // rax
  int v40; // [rsp+38h] [rbp-D0h] BYREF
  int v41; // [rsp+3Ch] [rbp-CCh] BYREF
  int v42; // [rsp+40h] [rbp-C8h] BYREF
  int v43; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v44; // [rsp+48h] [rbp-C0h]
  unsigned __int8 ActivityId_4; // [rsp+50h] [rbp-B8h]
  GUID ActivityId_8; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v47; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 v48; // [rsp+70h] [rbp-98h]
  GUID pActivityId; // [rsp+74h] [rbp-94h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  int *v51; // [rsp+A8h] [rbp-60h]
  __int64 v52; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR v53; // [rsp+B8h] [rbp-50h] BYREF
  int *v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR v56; // [rsp+E8h] [rbp-20h] BYREF
  int *v57; // [rsp+108h] [rbp+0h]
  __int64 v58; // [rsp+110h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR v59; // [rsp+118h] [rbp+10h] BYREF
  int *v60; // [rsp+138h] [rbp+30h]
  __int64 v61; // [rsp+140h] [rbp+38h]

  if ( (_DWORD)a1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId_8.Data1 = 0LL;
    *(_QWORD *)ActivityId_8.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      ActivityId_4 = 1;
      v32 = PsGetCurrentThreadWin32Thread(v10);
      v44 = v32;
      if ( v32 && (*(int *)(v32 + 24) > 0 || *(_DWORD *)(v44 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId_8);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v40 = ActivityId_4;
            v51 = &v40;
            v52 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId_8, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v44 = 0LL;
    }
    v12 = 0LL;
    while ( 1 )
    {
      v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v13 )
        v12 = *v13;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v15, v14);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v18, v17) == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v12 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v44 && (*(_DWORD *)(v44 + 48) || *(int *)(v44 + 24) > 0) )
    {
      *(_DWORD *)(v44 + 44) = 1;
      *(GUID *)(v44 + 28) = ActivityId_8;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v41 = ActivityId_4;
          v54 = &v41;
          v55 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId_8, 0LL, 3u, &v53);
          v33 = dword_1C020FB50;
        }
        if ( v33 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v42 = ActivityId_4;
          v57 = &v42;
          v58 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId_8, 0LL, 3u, &v56);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v12;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v19, v20);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v31 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v34 = *v31;
        v31[2] = 0LL;
        if ( !*(_DWORD *)(v34 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
        v37 = (PERESOURCE *)GetDomainLockRef(12LL, v28, v30);
        if ( v37 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v38);
        ExReleaseResourceAndLeaveCriticalRegion(*v37);
        HMUnlockObject(*v31);
        tagDomLock::LockExclusive(v37);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  else
  {
    v2 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v2 )
      v2[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&pActivityId.Data1 = 0LL;
    *(_QWORD *)pActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v48 = 0;
      v39 = PsGetCurrentThreadWin32Thread(v1);
      v47 = v39;
      if ( v39 && (*(int *)(v39 + 24) > 0 || *(_DWORD *)(v47 + 48)) )
      {
        EtwActivityIdControl(3u, &pActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v43 = v48;
            v60 = &v43;
            v61 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &pActivityId, 0LL, 3u, &v59);
          }
        }
      }
    }
    else
    {
      v47 = 0LL;
    }
    v3 = 0LL;
    while ( 1 )
    {
      v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v4 )
        v3 = *v4;
      v7 = (PVOID)PsGetCurrentProcess(v6, v5);
      if ( v7 )
      {
        if ( v7 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v3 == gptiRit )
      {
        break;
      }
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v47);
    EtwTraceAcquiredSharedUserCrit();
  }
}
