/*
 * XREFs of NtUserStopAndEndInertia @ 0x1C011CE40
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C0174CAC (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserStopAndEndInertia(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r15d
  int v3; // esi
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v6; // rax
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  PERESOURCE *v32; // rdi
  __int64 v33; // r8
  PVOID v34; // rax
  __int64 v35; // rdx
  CTouchProcessor *v36; // rcx
  void *v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v41; // [rsp+38h] [rbp-89h] BYREF
  int v42; // [rsp+3Ch] [rbp-85h] BYREF
  int v43; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v44; // [rsp+44h] [rbp-7Dh]
  __int64 v45; // [rsp+48h] [rbp-79h]
  unsigned __int8 v46; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-59h] BYREF
  int *v49; // [rsp+88h] [rbp-39h]
  __int64 v50; // [rsp+90h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR v51; // [rsp+98h] [rbp-29h] BYREF
  int *v52; // [rsp+B8h] [rbp-9h]
  __int64 v53; // [rsp+C0h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR v54; // [rsp+C8h] [rbp+7h] BYREF
  int *v55; // [rsp+E8h] [rbp+27h]
  __int64 v56; // [rsp+F0h] [rbp+2Fh]

  v2 = a2;
  v44 = a2;
  v3 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v46 = 1;
    v6 = PsGetCurrentThreadWin32Thread(v4);
    v45 = v6;
    if ( v6 && (*(int *)(v6 + 24) > 0 || *(_DWORD *)(v45 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v41 = v46;
          v49 = &v41;
          v50 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v45 = 0LL;
  }
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v7 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v45 && (*(_DWORD *)(v45 + 48) || *(int *)(v45 + 24) > 0) )
  {
    *(_DWORD *)(v45 + 44) = 1;
    *(GUID *)(v45 + 28) = ActivityId;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v42 = v46;
        v52 = &v42;
        v53 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v51);
        v14 = dword_1C020FB50;
      }
      if ( v14 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v43 = v46;
        v55 = &v43;
        v56 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v54);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v15, v17);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v21);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v28 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v28[2];
        v29 = *v28;
        v28[2] = 0LL;
        if ( !*(_DWORD *)(v29 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
        v32 = (PERESOURCE *)GetDomainLockRef(12LL, v25, v27);
        if ( v32 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v33);
        ExReleaseResourceAndLeaveCriticalRegion(*v32);
        HMUnlockObject(*v28);
        tagDomLock::LockExclusive(v32);
        v28 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v2 = v44;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  v34 = (PVOID)PsGetCurrentProcess(v16, v15);
  if ( v34 && v34 == g_pepDwm )
    v3 = CTouchProcessor::StopAndEndInertia(v36, v2, v37);
  else
    UserSetLastError(5LL, v35);
  UserSessionSwitchLeaveCrit(v39, v38);
  return v3;
}
