/*
 * XREFs of NtMITSetInputCallbacks @ 0x1C009AE70
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
 *     UserSetMITInputCallbacks @ 0x1C009B114 (UserSetMITInputCallbacks.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITSetInputCallbacks(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
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
  __int64 *v24; // rsi
  PVOID v25; // rax
  __int64 v26; // rdx
  int v27; // r14d
  __int64 v28; // rdx
  __int64 v29; // rcx
  CInputThread *v31; // rsi
  unsigned int CurrentThreadId; // eax
  int v33; // ebx
  unsigned int v34; // edi
  CInputThread *v35; // rsi
  unsigned int v36; // eax
  int v37; // ebx
  unsigned int v38; // edi
  __int64 v39; // r8
  __int64 v40; // rax
  unsigned int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PERESOURCE *v45; // rdi
  __int64 v46; // r8
  int v47; // [rsp+38h] [rbp-79h] BYREF
  int v48; // [rsp+3Ch] [rbp-75h] BYREF
  int v49; // [rsp+40h] [rbp-71h] BYREF
  __int64 v50; // [rsp+48h] [rbp-69h]
  __int64 v51; // [rsp+50h] [rbp-61h]
  unsigned __int8 v52; // [rsp+58h] [rbp-59h]
  GUID ActivityId; // [rsp+5Ch] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-41h] BYREF
  int *v55; // [rsp+90h] [rbp-21h]
  int v56; // [rsp+98h] [rbp-19h]
  int v57; // [rsp+9Ch] [rbp-15h]
  EVENT_DATA_DESCRIPTOR v58; // [rsp+A0h] [rbp-11h] BYREF
  int *v59; // [rsp+C0h] [rbp+Fh]
  int v60; // [rsp+C8h] [rbp+17h]
  int v61; // [rsp+CCh] [rbp+1Bh]
  EVENT_DATA_DESCRIPTOR v62; // [rsp+D0h] [rbp+1Fh] BYREF
  int *v63; // [rsp+F0h] [rbp+3Fh]
  int v64; // [rsp+F8h] [rbp+47h]
  int v65; // [rsp+FCh] [rbp+4Bh]

  v1 = a1;
  v50 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v52 = 1;
    v40 = PsGetCurrentThreadWin32Thread(v2);
    v51 = v40;
    if ( v40 && (*(int *)(v40 + 24) > 0 || *(_DWORD *)(v51 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v57 = 0;
          v47 = v52;
          v55 = &v47;
          v56 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v51 = 0LL;
  }
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v51 && (*(_DWORD *)(v51 + 48) || *(int *)(v51 + 24) > 0) )
  {
    *(_DWORD *)(v51 + 44) = 1;
    *(GUID *)(v51 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v61 = 0;
        v48 = v52;
        v59 = &v48;
        v60 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v58);
        v41 = dword_1C020CB50;
      }
      if ( v41 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v65 = 0;
        v49 = v52;
        v63 = &v49;
        v64 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v62);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v11, v13);
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
        v42 = *v24;
        v24[2] = 0LL;
        if ( !*(_DWORD *)(v42 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
        v45 = (PERESOURCE *)GetDomainLockRef(12LL, v21, v23);
        if ( v45 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v46);
        ExReleaseResourceAndLeaveCriticalRegion(*v45);
        HMUnlockObject(*v24);
        tagDomLock::LockExclusive(v45);
        v24 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v1 = v50;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  v25 = (PVOID)PsGetCurrentProcess(v12, v11);
  if ( !v25 )
    goto LABEL_22;
  if ( v25 != g_pepDwm )
    goto LABEL_22;
  v31 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v31, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v33 = *((_DWORD *)v31 + 10);
  v34 = CurrentThreadId;
  ExReleasePushLockSharedEx(v31, 0LL);
  KeLeaveCriticalRegion();
  if ( v34 != v33 )
  {
    v27 = UserSetMITInputCallbacks(v1);
    if ( v27 )
    {
      v35 = gpInputThread;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v35, 0LL);
      v36 = (unsigned int)PsGetCurrentThreadId();
      v37 = *((_DWORD *)v35 + 10);
      v38 = v36;
      ExReleasePushLockSharedEx(v35, 0LL);
      KeLeaveCriticalRegion();
      if ( v38 != v37 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v39);
    }
  }
  else
  {
LABEL_22:
    v27 = 0;
    UserSetLastError(5LL, v26);
  }
  UserSessionSwitchLeaveCrit(v29, v28);
  return v27;
}
