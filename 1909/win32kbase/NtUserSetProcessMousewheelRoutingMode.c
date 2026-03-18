/*
 * XREFs of NtUserSetProcessMousewheelRoutingMode @ 0x1C011A080
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetProcessMousewheelRoutingMode(__int64 a1)
{
  int v1; // r15d
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
  __int64 v15; // rcx
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
  __int64 *v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  PERESOURCE *v31; // rdi
  __int64 v32; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // r15d
  unsigned int v37; // eax
  int v39; // [rsp+38h] [rbp-89h] BYREF
  int v40; // [rsp+3Ch] [rbp-85h] BYREF
  int v41; // [rsp+40h] [rbp-81h] BYREF
  int v42; // [rsp+44h] [rbp-7Dh]
  __int64 v43; // [rsp+48h] [rbp-79h]
  unsigned __int8 v44; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-59h] BYREF
  int *v47; // [rsp+88h] [rbp-39h]
  __int64 v48; // [rsp+90h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR v49; // [rsp+98h] [rbp-29h] BYREF
  int *v50; // [rsp+B8h] [rbp-9h]
  __int64 v51; // [rsp+C0h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR v52; // [rsp+C8h] [rbp+7h] BYREF
  int *v53; // [rsp+E8h] [rbp+27h]
  __int64 v54; // [rsp+F0h] [rbp+2Fh]

  v1 = a1;
  v42 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v44 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v43 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v43 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v39 = v44;
          v47 = &v39;
          v48 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v43 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v43 && (*(_DWORD *)(v43 + 48) || *(int *)(v43 + 24) > 0) )
  {
    *(_DWORD *)(v43 + 44) = 1;
    *(GUID *)(v43 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v40 = v44;
        v50 = &v40;
        v51 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v49);
        v13 = dword_1C020CB50;
      }
      if ( v13 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v41 = v44;
        v53 = &v41;
        v54 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v52);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v14, v16);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v27 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v27[2];
        v28 = *v27;
        v27[2] = 0LL;
        if ( !*(_DWORD *)(v28 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
        v31 = (PERESOURCE *)GetDomainLockRef(12LL, v24, v26);
        if ( v31 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v32);
        ExReleaseResourceAndLeaveCriticalRegion(*v31);
        HMUnlockObject(*v27);
        tagDomLock::LockExclusive(v31);
        v27 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v1 = v42;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
  v35 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process )
    goto LABEL_52;
  if ( !v1 )
  {
    v37 = *(_DWORD *)(CurrentProcessWin32Process + 812) & 0xFFFE7FFF;
    goto LABEL_51;
  }
  v36 = v1 - 1;
  if ( !v36 )
  {
    v37 = *(_DWORD *)(CurrentProcessWin32Process + 812) & 0xFFFE7FFF | 0x8000;
    goto LABEL_51;
  }
  if ( v36 != 1 )
  {
LABEL_52:
    UserSetLastError(87LL, CurrentProcessWin32Process);
    goto LABEL_53;
  }
  v37 = *(_DWORD *)(CurrentProcessWin32Process + 812) & 0xFFFE7FFF | 0x10000;
LABEL_51:
  *(_DWORD *)(v35 + 812) = v37;
  v2 = 1LL;
LABEL_53:
  UserSessionSwitchLeaveCrit(v34, v35);
  return v2;
}
