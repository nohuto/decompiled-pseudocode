/*
 * XREFs of NtUserGetProcessDpiAwarenessContext @ 0x1C0098930
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029CEC (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetProcessDpiAwarenessContext(char *Handle)
{
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
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
  __int64 *v25; // r14
  PVOID v26; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v33; // rax
  unsigned int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  PERESOURCE *v38; // rdi
  __int64 v39; // r8
  NTSTATUS v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rdx
  int v43; // [rsp+38h] [rbp-89h] BYREF
  int v44; // [rsp+3Ch] [rbp-85h] BYREF
  int v45; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v46; // [rsp+44h] [rbp-7Dh]
  PVOID Object; // [rsp+48h] [rbp-79h] BYREF
  __int64 v48; // [rsp+50h] [rbp-71h]
  unsigned __int8 v49; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-51h] BYREF
  int *v52; // [rsp+90h] [rbp-31h]
  int v53; // [rsp+98h] [rbp-29h]
  int v54; // [rsp+9Ch] [rbp-25h]
  EVENT_DATA_DESCRIPTOR v55; // [rsp+A0h] [rbp-21h] BYREF
  int *v56; // [rsp+C0h] [rbp-1h]
  int v57; // [rsp+C8h] [rbp+7h]
  int v58; // [rsp+CCh] [rbp+Bh]
  EVENT_DATA_DESCRIPTOR v59; // [rsp+D0h] [rbp+Fh] BYREF
  int *v60; // [rsp+F0h] [rbp+2Fh]
  int v61; // [rsp+F8h] [rbp+37h]
  int v62; // [rsp+FCh] [rbp+3Bh]

  CurrentThreadDpiAwarenessContext = 0;
  v46 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Handle);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v49 = 1;
    v33 = PsGetCurrentThreadWin32Thread(v3);
    v48 = v33;
    if ( v33 && (*(int *)(v33 + 24) > 0 || *(_DWORD *)(v48 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v54 = 0;
          v43 = v49;
          v52 = &v43;
          v53 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v48 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v48 && (*(_DWORD *)(v48 + 48) || *(int *)(v48 + 24) > 0) )
  {
    *(_DWORD *)(v48 + 44) = 1;
    *(GUID *)(v48 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v58 = 0;
        v44 = v49;
        v56 = &v44;
        v57 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v55);
        v34 = dword_1C020CB50;
      }
      if ( v34 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v62 = 0;
        v45 = v49;
        v60 = &v45;
        v61 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v59);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v12, v14);
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
        v35 = *v25;
        v25[2] = 0LL;
        if ( !*(_DWORD *)(v35 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
        v38 = (PERESOURCE *)GetDomainLockRef(12LL, v22, v24);
        if ( v38 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v39);
        ExReleaseResourceAndLeaveCriticalRegion(*v38);
        HMUnlockObject(*v25);
        tagDomLock::LockExclusive(v38);
        v25 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      CurrentThreadDpiAwarenessContext = v46;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  v26 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    goto LABEL_22;
  }
  v40 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v26 = Object;
  if ( v40 < 0 )
  {
    UserSetLastError(87LL, v41);
    CurrentThreadDpiAwarenessContext = 0;
    goto LABEL_26;
  }
  if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
  {
    CurrentProcessWin32Process = PsGetProcessWin32Process(v26);
LABEL_22:
    v29 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process == PsGetCurrentProcessWin32Process(v28) )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    }
    else if ( v29 )
    {
      CurrentThreadDpiAwarenessContext = *(_DWORD *)(v29 + 280);
      if ( !CurrentThreadDpiAwarenessContext )
        CurrentThreadDpiAwarenessContext = 24592;
    }
    goto LABEL_24;
  }
  UserSetLastError(87LL, v42);
  CurrentThreadDpiAwarenessContext = 0;
LABEL_24:
  if ( v26 )
    ObfDereferenceObject(v26);
LABEL_26:
  UserSessionSwitchLeaveCrit(v31, v30);
  return CurrentThreadDpiAwarenessContext;
}
