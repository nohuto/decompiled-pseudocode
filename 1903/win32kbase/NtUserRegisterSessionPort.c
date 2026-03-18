/*
 * XREFs of NtUserRegisterSessionPort @ 0x1C00AB8F0
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
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00ABABC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRegisterSessionPort(HANDLE Handle)
{
  HANDLE v1; // r15
  __int64 v2; // rsi
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // r14
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // rax
  unsigned int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  PERESOURCE *v34; // rdi
  __int64 v35; // r8
  ULONG v36; // eax
  __int64 v37; // rdx
  int v38; // [rsp+38h] [rbp-89h] BYREF
  int v39; // [rsp+3Ch] [rbp-85h] BYREF
  int v40; // [rsp+40h] [rbp-81h] BYREF
  HANDLE v41; // [rsp+48h] [rbp-79h]
  __int64 v42; // [rsp+50h] [rbp-71h]
  unsigned __int8 v43; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-51h] BYREF
  int *v46; // [rsp+90h] [rbp-31h]
  __int64 v47; // [rsp+98h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR v48; // [rsp+A0h] [rbp-21h] BYREF
  int *v49; // [rsp+C0h] [rbp-1h]
  __int64 v50; // [rsp+C8h] [rbp+7h]
  EVENT_DATA_DESCRIPTOR v51; // [rsp+D0h] [rbp+Fh] BYREF
  int *v52; // [rsp+F0h] [rbp+2Fh]
  __int64 v53; // [rsp+F8h] [rbp+37h]

  v1 = Handle;
  v41 = Handle;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Handle);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v43 = 1;
    v29 = PsGetCurrentThreadWin32Thread(v3);
    v42 = v29;
    if ( v29 && (*(int *)(v29 + 24) > 0 || *(_DWORD *)(v42 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v38 = v43;
          v46 = &v38;
          v47 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v42 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v42 && (*(_DWORD *)(v42 + 48) || *(int *)(v42 + 24) > 0) )
  {
    *(_DWORD *)(v42 + 44) = 1;
    *(GUID *)(v42 + 28) = ActivityId;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v39 = v43;
        v49 = &v39;
        v50 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v48);
        v30 = dword_1C020FB50;
      }
      if ( v30 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v40 = v43;
        v52 = &v40;
        v53 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v51);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v12, v13);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v17);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v24 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v24[2];
        v31 = *v24;
        v24[2] = 0LL;
        if ( !*(_DWORD *)(v31 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
        v34 = (PERESOURCE *)GetDomainLockRef(12LL, v21, v23);
        if ( v34 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v35);
        ExReleaseResourceAndLeaveCriticalRegion(*v34);
        HMUnlockObject(*v24);
        tagDomLock::LockExclusive(v34);
        v24 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v1 = v41;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  v25 = xxxDwmProcessStartup(v1);
  if ( v25 < 0 )
  {
    v36 = RtlNtStatusToDosError(v25);
    UserSetLastError(v36, v37);
  }
  else
  {
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v27, v26);
  return v2;
}
