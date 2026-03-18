/*
 * XREFs of NtRIMOnTimerNotification @ 0x1C01342B0
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
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0058940 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     RIMOnTimerNotification @ 0x1C0137790 (RIMOnTimerNotification.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtRIMOnTimerNotification(__int64 a1, unsigned int a2)
{
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PERESOURCE *v33; // rdi
  __int64 v34; // r8
  unsigned int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // [rsp+38h] [rbp-89h] BYREF
  int v39; // [rsp+3Ch] [rbp-85h] BYREF
  int v40; // [rsp+40h] [rbp-81h] BYREF
  __int64 v41; // [rsp+48h] [rbp-79h]
  __int64 v42; // [rsp+50h] [rbp-71h]
  unsigned __int8 v43; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-51h] BYREF
  int *v46; // [rsp+90h] [rbp-31h]
  int v47; // [rsp+98h] [rbp-29h]
  int v48; // [rsp+9Ch] [rbp-25h]
  EVENT_DATA_DESCRIPTOR v49; // [rsp+A0h] [rbp-21h] BYREF
  int *v50; // [rsp+C0h] [rbp-1h]
  int v51; // [rsp+C8h] [rbp+7h]
  int v52; // [rsp+CCh] [rbp+Bh]
  EVENT_DATA_DESCRIPTOR v53; // [rsp+D0h] [rbp+Fh] BYREF
  int *v54; // [rsp+F0h] [rbp+2Fh]
  int v55; // [rsp+F8h] [rbp+37h]
  int v56; // [rsp+FCh] [rbp+3Bh]

  v41 = a1;
  v3 = a1;
  if ( !(unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return 3221225506LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v43 = 1;
    v8 = PsGetCurrentThreadWin32Thread(v6);
    v42 = v8;
    if ( v8 && (*(int *)(v8 + 24) > 0 || *(_DWORD *)(v42 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v48 = 0;
          v38 = v43;
          v46 = &v38;
          v47 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v42 = 0LL;
  }
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v10 )
      v9 = *v10;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v9 == gptiRit )
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
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v52 = 0;
        v39 = v43;
        v50 = &v39;
        v51 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v49);
        v16 = dword_1C020CB50;
      }
      if ( v16 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v56 = 0;
        v40 = v43;
        v54 = &v40;
        v55 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v53);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v17, v18);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v22);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v29 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v29[2];
        v30 = *v29;
        v29[2] = 0LL;
        if ( !*(_DWORD *)(v30 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
        v33 = (PERESOURCE *)GetDomainLockRef(12LL, v26, v28);
        if ( v33 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v34);
        ExReleaseResourceAndLeaveCriticalRegion(*v33);
        HMUnlockObject(*v29);
        tagDomLock::LockExclusive(v33);
        v29 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v3 = v41;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  v35 = RIMOnTimerNotification(v3, a2);
  UserSessionSwitchLeaveCrit(v37, v36);
  return v35;
}
