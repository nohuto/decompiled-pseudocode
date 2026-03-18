/*
 * XREFs of UserProcessTimerDelayCallout @ 0x1C0107CD4
 * Callers:
 *     W32CalloutDispatch @ 0x1C0023A70 (W32CalloutDispatch.c)
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
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserProcessTimerDelayCallout(__int64 a1)
{
  __int64 v1; // r14
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
  __int64 ProcessWin32Process; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // ebx
  int v36; // [rsp+30h] [rbp-89h] BYREF
  int v37; // [rsp+34h] [rbp-85h] BYREF
  int v38; // [rsp+38h] [rbp-81h] BYREF
  __int64 v39; // [rsp+40h] [rbp-79h]
  __int64 v40; // [rsp+48h] [rbp-71h]
  unsigned __int8 v41; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-51h] BYREF
  int *v44; // [rsp+88h] [rbp-31h]
  int v45; // [rsp+90h] [rbp-29h]
  int v46; // [rsp+94h] [rbp-25h]
  EVENT_DATA_DESCRIPTOR v47; // [rsp+98h] [rbp-21h] BYREF
  int *v48; // [rsp+B8h] [rbp-1h]
  int v49; // [rsp+C0h] [rbp+7h]
  int v50; // [rsp+C4h] [rbp+Bh]
  EVENT_DATA_DESCRIPTOR v51; // [rsp+C8h] [rbp+Fh] BYREF
  int *v52; // [rsp+E8h] [rbp+2Fh]
  int v53; // [rsp+F0h] [rbp+37h]
  int v54; // [rsp+F4h] [rbp+3Bh]

  v1 = a1;
  v39 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v41 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v40 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v40 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v46 = 0;
          v36 = v41;
          v44 = &v36;
          v45 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v40 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v40 && (*(_DWORD *)(v40 + 48) || *(int *)(v40 + 24) > 0) )
  {
    *(_DWORD *)(v40 + 44) = 1;
    *(GUID *)(v40 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v50 = 0;
        v37 = v41;
        v48 = &v37;
        v49 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v47);
        v12 = dword_1C020CB50;
      }
      if ( v12 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v54 = 0;
        v38 = v41;
        v52 = &v38;
        v53 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v51);
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
      v1 = v39;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)v1);
  if ( ProcessWin32Process )
    v34 = SetProcessTimerDelay(ProcessWin32Process, *(unsigned int *)(v1 + 8), *(unsigned int *)(v1 + 12));
  else
    v34 = -1073741558;
  UserSessionSwitchLeaveCrit(v33, v32);
  return v34;
}
