/*
 * XREFs of ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C005B9DC
 * Callers:
 *     UserPowerStateCallout @ 0x1C0059C88 (UserPowerStateCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005A12C (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C005B3B0 (PowerOnMonitor.c)
 *     UserPowerInfoCallout @ 0x1C0062AE4 (UserPowerInfoCallout.c)
 *     PowerOffMonitor @ 0x1C00B8460 (PowerOffMonitor.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 UserSessionSwitchBlock_Start(void)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // r14d
  __int64 v5; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // rsi
  unsigned int v26; // ebx
  __int64 v28; // rax
  unsigned int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PERESOURCE *v33; // rdi
  __int64 v34; // r8
  int v35; // [rsp+38h] [rbp-89h] BYREF
  int v36; // [rsp+3Ch] [rbp-85h] BYREF
  int v37; // [rsp+40h] [rbp-81h] BYREF
  int v38; // [rsp+44h] [rbp-7Dh]
  __int64 v39; // [rsp+48h] [rbp-79h]
  unsigned __int8 v40; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-59h] BYREF
  int *v43; // [rsp+88h] [rbp-39h]
  __int64 v44; // [rsp+90h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR v45; // [rsp+98h] [rbp-29h] BYREF
  int *v46; // [rsp+B8h] [rbp-9h]
  __int64 v47; // [rsp+C0h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR v48; // [rsp+C8h] [rbp+7h] BYREF
  int *v49; // [rsp+E8h] [rbp+27h]
  __int64 v50; // [rsp+F0h] [rbp+2Fh]

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v4 = IsResourceAcquiredExclusiveLite;
  v38 = IsResourceAcquiredExclusiveLite;
  if ( IsResourceAcquiredExclusiveLite )
  {
    if ( gfSwitchInProgress )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
  }
  else
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v40 = 1;
      v28 = PsGetCurrentThreadWin32Thread(v5);
      v39 = v28;
      if ( v28 && (*(int *)(v28 + 24) > 0 || *(_DWORD *)(v39 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v35 = v40;
            v43 = &v35;
            v44 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v39 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v39 && (*(_DWORD *)(v39 + 48) || *(int *)(v39 + 24) > 0) )
    {
      *(_DWORD *)(v39 + 44) = 1;
      *(GUID *)(v39 + 28) = ActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v36 = v40;
          v46 = &v36;
          v47 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v45);
          v29 = dword_1C020FB50;
        }
        if ( v29 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v37 = v40;
          v49 = &v37;
          v50 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v48);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v7;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v1, v14);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v25 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v25[2];
          v30 = *v25;
          v25[2] = 0LL;
          if ( !*(_DWORD *)(v30 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
          v33 = (PERESOURCE *)GetDomainLockRef(12LL, v22, v24);
          if ( v33 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v34);
          ExReleaseResourceAndLeaveCriticalRegion(*v33);
          HMUnlockObject(*v25);
          tagDomLock::LockExclusive(v33);
          v25 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v4 = v38;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  if ( gnPoSessionSwitchBlockCount > 0 )
  {
    ++gnPoSessionSwitchBlockCount;
    goto LABEL_26;
  }
  if ( !gfSwitchInProgress && (unsigned int)RtlGetActiveConsoleId() == gSessionId && !gfSessionSwitchBlock )
  {
    ++gnPoSessionSwitchBlockCount;
    gfSessionSwitchBlock = 1;
LABEL_26:
    v26 = 0;
    goto LABEL_27;
  }
  v26 = -1073086428;
LABEL_27:
  if ( !v4 )
    UserSessionSwitchLeaveCrit(v2, v1);
  return v26;
}
