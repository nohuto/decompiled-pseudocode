/*
 * XREFs of NtRIMUnregisterForInput @ 0x1C01347F0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     RIMUnregisterForInput @ 0x1C00566D0 (RIMUnregisterForInput.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0058940 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtRIMUnregisterForInput(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rcx
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
  __int64 *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  PERESOURCE *v31; // rdi
  __int64 v32; // r8
  unsigned int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
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
  if ( !(unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return 3221225506LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v41 = 1;
    v6 = PsGetCurrentThreadWin32Thread(v4);
    v40 = v6;
    if ( v6 && (*(int *)(v6 + 24) > 0 || *(_DWORD *)(v40 + 48)) )
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
        v14 = dword_1C020CB50;
      }
      if ( v14 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
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
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v15, v16);
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
      v1 = v39;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  v33 = RIMUnregisterForInput(v1);
  UserSessionSwitchLeaveCrit(v35, v34);
  return v33;
}
