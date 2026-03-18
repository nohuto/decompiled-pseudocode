/*
 * XREFs of NtMITDeactivateInputProcessing @ 0x1C0110FF0
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
 *     UserDeactivateMITInputProcessing @ 0x1C009CC50 (UserDeactivateMITInputProcessing.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITDeactivateInputProcessing(__int64 a1)
{
  unsigned int v1; // esi
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
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  PERESOURCE *v28; // rdi
  __int64 v29; // r8
  __int64 *v30; // r14
  CInputThread *v31; // rbx
  unsigned int CurrentThreadId; // eax
  int v33; // r14d
  unsigned int v34; // edi
  __int64 v35; // rdx
  CInputThread *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v40; // [rsp+38h] [rbp-89h] BYREF
  int v41; // [rsp+3Ch] [rbp-85h] BYREF
  int v42; // [rsp+40h] [rbp-81h] BYREF
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

  v1 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v44 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v43 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v43 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v40 = v44;
          v47 = &v40;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v43 && (*(_DWORD *)(v43 + 48) || *(int *)(v43 + 24) > 0) )
  {
    *(_DWORD *)(v43 + 44) = 1;
    *(GUID *)(v43 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v41 = v44;
        v50 = &v41;
        v51 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v49);
        v12 = dword_1C020CB50;
      }
      if ( v12 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v42 = v44;
        v53 = &v42;
        v54 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v52);
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
    while ( 1 )
    {
      v30 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v25 = *v30;
      v30[2] = 0LL;
      if ( !*(_DWORD *)(v25 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
      v28 = (PERESOURCE *)GetDomainLockRef(12LL, v22, v24);
      if ( v28 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v29);
      ExReleaseResourceAndLeaveCriticalRegion(*v28);
      HMUnlockObject(*v30);
      tagDomLock::LockExclusive(v28);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  v31 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v31, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v33 = *((_DWORD *)v31 + 10);
  v34 = CurrentThreadId;
  ExReleasePushLockSharedEx(v31, 0LL);
  KeLeaveCriticalRegion();
  if ( v34 == v33 )
    UserDeactivateMITInputProcessing(v36);
  else
    UserSetLastError(5LL, v35);
  LOBYTE(v1) = v34 == v33;
  UserSessionSwitchLeaveCrit(v38, v37);
  return v1;
}
