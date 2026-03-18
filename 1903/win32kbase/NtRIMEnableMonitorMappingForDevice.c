/*
 * XREFs of NtRIMEnableMonitorMappingForDevice @ 0x1C01362F0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C006C8A0 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0138210 (RIMEnableMonitorMappingForDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtRIMEnableMonitorMappingForDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v10; // rax
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r9d
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
  __int64 v33; // rdx
  __int64 v34; // rcx
  PERESOURCE *v35; // rdi
  __int64 v36; // r8
  unsigned int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // [rsp+30h] [rbp-A9h] BYREF
  int v41; // [rsp+34h] [rbp-A5h] BYREF
  int v42; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v43; // [rsp+40h] [rbp-99h]
  __int64 v44; // [rsp+48h] [rbp-91h]
  unsigned __int8 v45; // [rsp+50h] [rbp-89h]
  GUID ActivityId; // [rsp+54h] [rbp-85h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-71h] BYREF
  int *v48; // [rsp+88h] [rbp-51h]
  int v49; // [rsp+90h] [rbp-49h]
  int v50; // [rsp+94h] [rbp-45h]
  EVENT_DATA_DESCRIPTOR v51; // [rsp+98h] [rbp-41h] BYREF
  int *v52; // [rsp+B8h] [rbp-21h]
  int v53; // [rsp+C0h] [rbp-19h]
  int v54; // [rsp+C4h] [rbp-15h]
  EVENT_DATA_DESCRIPTOR v55; // [rsp+C8h] [rbp-11h] BYREF
  int *v56; // [rsp+E8h] [rbp+Fh]
  int v57; // [rsp+F0h] [rbp+17h]
  int v58; // [rsp+F4h] [rbp+1Bh]

  v43 = a1;
  v5 = a1;
  if ( !(unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return 3221225506LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v45 = 1;
    v10 = PsGetCurrentThreadWin32Thread(v8);
    v44 = v10;
    if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v44 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v50 = 0;
          v40 = v45;
          v48 = &v40;
          v49 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v44 = 0LL;
  }
  v11 = 0LL;
  while ( 1 )
  {
    v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v12 )
      v11 = *v12;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v44 && (*(_DWORD *)(v44 + 48) || *(int *)(v44 + 24) > 0) )
  {
    *(_DWORD *)(v44 + 44) = 1;
    *(GUID *)(v44 + 28) = ActivityId;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v54 = 0;
        v41 = v45;
        v52 = &v41;
        v53 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v51);
        v18 = dword_1C020FB50;
      }
      if ( v18 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v58 = 0;
        v42 = v45;
        v56 = &v42;
        v57 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v55);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v19, v20);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v31 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v31[2];
        v32 = *v31;
        v31[2] = 0LL;
        if ( !*(_DWORD *)(v32 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
        v35 = (PERESOURCE *)GetDomainLockRef(12LL, v28, v30);
        if ( v35 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v36);
        ExReleaseResourceAndLeaveCriticalRegion(*v35);
        HMUnlockObject(*v31);
        tagDomLock::LockExclusive(v35);
        v31 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v5 = v43;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  v37 = RIMEnableMonitorMappingForDevice(v5, a2, 1LL, a3);
  UserSessionSwitchLeaveCrit(v39, v38);
  return v37;
}
