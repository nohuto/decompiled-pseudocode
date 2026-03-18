/*
 * XREFs of NtMITGetCursorUpdateHandle @ 0x1C0099540
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
 *     GetCursorUpdateHandle @ 0x1C00997A0 (GetCursorUpdateHandle.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITGetCursorUpdateHandle(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // rsi
  CInputThread *v23; // rsi
  unsigned int CurrentThreadId; // eax
  int v25; // ebx
  unsigned int v26; // edi
  __int64 v27; // rdx
  CInputThread *v28; // rdi
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 CursorUpdateHandle; // rbx
  __int64 v34; // rax
  unsigned int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  PERESOURCE *v39; // rdi
  __int64 v40; // r8
  int v41; // [rsp+38h] [rbp-79h] BYREF
  int v42; // [rsp+3Ch] [rbp-75h] BYREF
  int v43; // [rsp+40h] [rbp-71h] BYREF
  __int64 v44; // [rsp+48h] [rbp-69h]
  unsigned __int8 v45; // [rsp+50h] [rbp-61h]
  GUID ActivityId; // [rsp+54h] [rbp-5Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-49h] BYREF
  int *v48; // [rsp+88h] [rbp-29h]
  int v49; // [rsp+90h] [rbp-21h]
  int v50; // [rsp+94h] [rbp-1Dh]
  EVENT_DATA_DESCRIPTOR v51; // [rsp+98h] [rbp-19h] BYREF
  int *v52; // [rsp+B8h] [rbp+7h]
  int v53; // [rsp+C0h] [rbp+Fh]
  int v54; // [rsp+C4h] [rbp+13h]
  EVENT_DATA_DESCRIPTOR v55; // [rsp+C8h] [rbp+17h] BYREF
  int *v56; // [rsp+E8h] [rbp+37h]
  int v57; // [rsp+F0h] [rbp+3Fh]
  int v58; // [rsp+F4h] [rbp+43h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v45 = 1;
    v34 = PsGetCurrentThreadWin32Thread(v1);
    v44 = v34;
    if ( v34 && (*(int *)(v34 + 24) > 0 || *(_DWORD *)(v44 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v50 = 0;
          v41 = v45;
          v48 = &v41;
          v49 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v44 = 0LL;
  }
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v4 )
      v3 = *v4;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v3 == gptiRit )
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
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v54 = 0;
        v42 = v45;
        v52 = &v42;
        v53 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v51);
        v35 = dword_1C020CB50;
      }
      if ( v35 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v58 = 0;
        v43 = v45;
        v56 = &v43;
        v57 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v55);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v10, v11);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    while ( 1 )
    {
      v22 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v36 = *v22;
      v22[2] = 0LL;
      if ( !*(_DWORD *)(v36 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
      v39 = (PERESOURCE *)GetDomainLockRef(12LL, v19, v21);
      if ( v39 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v40);
      ExReleaseResourceAndLeaveCriticalRegion(*v39);
      HMUnlockObject(*v22);
      tagDomLock::LockExclusive(v39);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  v23 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v23, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v25 = *((_DWORD *)v23 + 10);
  v26 = CurrentThreadId;
  ExReleasePushLockSharedEx(v23, 0LL);
  KeLeaveCriticalRegion();
  if ( v26 != v25
    || (v28 = gpInputThread,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v28, 0LL),
        v29 = *((_DWORD *)v28 + 4),
        ExReleasePushLockSharedEx(v28, 0LL),
        KeLeaveCriticalRegion(),
        v29 == 2) )
  {
    CursorUpdateHandle = -1LL;
    UserSetLastError(5LL, v27);
  }
  else
  {
    CursorUpdateHandle = GetCursorUpdateHandle();
  }
  UserSessionSwitchLeaveCrit(v31, v30);
  return CursorUpdateHandle;
}
