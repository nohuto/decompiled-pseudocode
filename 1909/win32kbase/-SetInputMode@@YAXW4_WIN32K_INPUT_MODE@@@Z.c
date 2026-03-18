/*
 * XREFs of ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0104C1C
 * Callers:
 *     UserPowerInfoCallout @ 0x1C00648AC (UserPowerInfoCallout.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00B13C0 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0105008 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall SetInputMode(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v4; // rax
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r9d
  __int64 v13; // rdx
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
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  PERESOURCE *v29; // rdi
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // [rsp+38h] [rbp-79h] BYREF
  int v34; // [rsp+3Ch] [rbp-75h] BYREF
  int v35; // [rsp+40h] [rbp-71h] BYREF
  unsigned int v36; // [rsp+44h] [rbp-6Dh]
  __int64 v37; // [rsp+48h] [rbp-69h]
  unsigned __int8 v38; // [rsp+50h] [rbp-61h]
  GUID ActivityId; // [rsp+54h] [rbp-5Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-49h] BYREF
  int *v41; // [rsp+88h] [rbp-29h]
  int v42; // [rsp+90h] [rbp-21h]
  int v43; // [rsp+94h] [rbp-1Dh]
  EVENT_DATA_DESCRIPTOR v44; // [rsp+98h] [rbp-19h] BYREF
  int *v45; // [rsp+B8h] [rbp+7h]
  int v46; // [rsp+C0h] [rbp+Fh]
  int v47; // [rsp+C4h] [rbp+13h]
  EVENT_DATA_DESCRIPTOR v48; // [rsp+C8h] [rbp+17h] BYREF
  int *v49; // [rsp+E8h] [rbp+37h]
  int v50; // [rsp+F0h] [rbp+3Fh]
  int v51; // [rsp+F4h] [rbp+43h]

  v1 = a1;
  v36 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v38 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v37 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v37 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v43 = 0;
          v33 = v38;
          v41 = &v33;
          v42 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v37 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v37 && (*(_DWORD *)(v37 + 48) || *(int *)(v37 + 24) > 0) )
  {
    *(_DWORD *)(v37 + 44) = 1;
    *(GUID *)(v37 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v47 = 0;
        v34 = v38;
        v45 = &v34;
        v46 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v44);
        v12 = dword_1C020CB50;
      }
      if ( v12 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v51 = 0;
        v35 = v38;
        v49 = &v35;
        v50 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v48);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v13, v14);
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
        v26 = *v25;
        v25[2] = 0LL;
        if ( !*(_DWORD *)(v26 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
        v29 = (PERESOURCE *)GetDomainLockRef(12LL, v22, v24);
        if ( v29 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v30);
        ExReleaseResourceAndLeaveCriticalRegion(*v29);
        HMUnlockObject(*v25);
        tagDomLock::LockExclusive(v29);
        v25 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v1 = v36;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  SetInputModeWithCrit(v1);
  UserSessionSwitchLeaveCrit(v32, v31);
}
