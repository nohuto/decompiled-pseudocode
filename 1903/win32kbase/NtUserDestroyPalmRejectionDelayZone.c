/*
 * XREFs of NtUserDestroyPalmRejectionDelayZone @ 0x1C0116B30
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
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0036778 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C0183440 (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserDestroyPalmRejectionDelayZone(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v2; // rsi
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v5; // rax
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  PERESOURCE *v30; // rdi
  __int64 v31; // r8
  DelayZonePalmRejection *Instance; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v36; // [rsp+38h] [rbp-89h] BYREF
  int v37; // [rsp+3Ch] [rbp-85h] BYREF
  int v38; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v39; // [rsp+44h] [rbp-7Dh]
  __int64 v40; // [rsp+48h] [rbp-79h]
  unsigned __int8 v41; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-59h] BYREF
  int *v44; // [rsp+88h] [rbp-39h]
  __int64 v45; // [rsp+90h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR v46; // [rsp+98h] [rbp-29h] BYREF
  int *v47; // [rsp+B8h] [rbp-9h]
  __int64 v48; // [rsp+C0h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR v49; // [rsp+C8h] [rbp+7h] BYREF
  int *v50; // [rsp+E8h] [rbp+27h]
  __int64 v51; // [rsp+F0h] [rbp+2Fh]

  v1 = a1;
  v39 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v41 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v40 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v40 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v36 = v41;
          v44 = &v36;
          v45 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v40 = 0LL;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v40 && (*(_DWORD *)(v40 + 48) || *(int *)(v40 + 24) > 0) )
  {
    *(_DWORD *)(v40 + 44) = 1;
    *(GUID *)(v40 + 28) = ActivityId;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v37 = v41;
        v47 = &v37;
        v48 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v46);
        v13 = dword_1C020FB50;
      }
      if ( v13 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v38 = v41;
        v50 = &v38;
        v51 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v49);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v14, v15);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v26 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v26[2];
        v27 = *v26;
        v26[2] = 0LL;
        if ( !*(_DWORD *)(v27 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
        v30 = (PERESOURCE *)GetDomainLockRef(12LL, v23, v25);
        if ( v30 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31);
        ExReleaseResourceAndLeaveCriticalRegion(*v30);
        HMUnlockObject(*v26);
        tagDomLock::LockExclusive(v30);
        v26 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v1 = v39;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  Instance = DelayZonePalmRejection::GetInstance();
  if ( Instance )
    LOBYTE(v2) = DelayZonePalmRejection::RemoveDelayZoneFromList(Instance, v1);
  UserSessionSwitchLeaveCrit(v34, v33);
  return v2;
}
