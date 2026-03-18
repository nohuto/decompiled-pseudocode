/*
 * XREFs of NtUserSetProcessDpiAwarenessContext @ 0x1C008D220
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C002934C (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C008D4A4 (IsValidKernelDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwarenessContext(__int64 a1, int a2)
{
  int v2; // r15d
  unsigned int v3; // r14d
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
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
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rbx
  __int64 v33; // rsi
  __int64 i; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v37; // rax
  unsigned int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  PERESOURCE *v42; // rdi
  __int64 v43; // r8
  int v44; // [rsp+38h] [rbp-89h] BYREF
  int v45; // [rsp+3Ch] [rbp-85h] BYREF
  int v46; // [rsp+40h] [rbp-81h] BYREF
  int v47; // [rsp+44h] [rbp-7Dh]
  __int64 v48; // [rsp+48h] [rbp-79h]
  unsigned __int8 v49; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-59h] BYREF
  int *v52; // [rsp+88h] [rbp-39h]
  int v53; // [rsp+90h] [rbp-31h]
  int v54; // [rsp+94h] [rbp-2Dh]
  EVENT_DATA_DESCRIPTOR v55; // [rsp+98h] [rbp-29h] BYREF
  int *v56; // [rsp+B8h] [rbp-9h]
  int v57; // [rsp+C0h] [rbp-1h]
  int v58; // [rsp+C4h] [rbp+3h]
  EVENT_DATA_DESCRIPTOR v59; // [rsp+C8h] [rbp+7h] BYREF
  int *v60; // [rsp+E8h] [rbp+27h]
  int v61; // [rsp+F0h] [rbp+2Fh]
  int v62; // [rsp+F4h] [rbp+33h]

  v2 = a2;
  v47 = a2;
  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v49 = 1;
    v37 = PsGetCurrentThreadWin32Thread(v4);
    v48 = v37;
    if ( v37 && (*(int *)(v37 + 24) > 0 || *(_DWORD *)(v48 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v54 = 0;
          v44 = v49;
          v52 = &v44;
          v53 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v48 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v48 && (*(_DWORD *)(v48 + 48) || *(int *)(v48 + 24) > 0) )
  {
    *(_DWORD *)(v48 + 44) = 1;
    *(GUID *)(v48 + 28) = ActivityId;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v58 = 0;
        v45 = v49;
        v56 = &v45;
        v57 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v55);
        v38 = dword_1C020FB50;
      }
      if ( v38 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v62 = 0;
        v46 = v49;
        v60 = &v46;
        v61 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v59);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
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
        v39 = *v25;
        v25[2] = 0LL;
        if ( !*(_DWORD *)(v39 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
        v42 = (PERESOURCE *)GetDomainLockRef(12LL, v22, v24);
        if ( v42 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v43);
        ExReleaseResourceAndLeaveCriticalRegion(*v42);
        HMUnlockObject(*v25);
        tagDomLock::LockExclusive(v42);
        v25 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v2 = v47;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  if ( !(unsigned int)IsValidKernelDpiAwarenessContext(v3)
    || (v3 & 0xF) == 1
    && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27),
        v26 = 511LL,
        ((v3 >> 8) & 0x1FF) != *(_WORD *)(CurrentProcessWin32Process + 284)) )
  {
    UserSetLastError(87LL, v26);
LABEL_62:
    v32 = 0LL;
    goto LABEL_29;
  }
  v28 = 0x400000LL;
  v29 = *((_QWORD *)gptiCurrent + 52);
  v30 = *(unsigned int *)(v29 + 812);
  if ( (v30 & 0x400000) != 0 )
  {
    if ( !v2 )
      goto LABEL_62;
    if ( (v3 & 0xF) == 0 )
      goto LABEL_62;
    v31 = *(_DWORD *)(v29 + 280);
    if ( v31 != 18 )
      goto LABEL_62;
  }
  else
  {
    v31 = *(_DWORD *)(v29 + 280);
  }
  v30 = (unsigned int)v30 | 0x400000;
  v32 = 1LL;
  *(_DWORD *)(v29 + 812) = v30;
  if ( v31 != v3 )
  {
    v33 = *(_QWORD *)(v29 + 664);
    *(_DWORD *)(v29 + 280) = v3;
    if ( v33 )
    {
      for ( i = *(_QWORD *)(v33 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v29, *(struct tagWND **)(*(_QWORD *)(i + 8) + 24LL));
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v29, *(struct tagWND **)(i + 104));
      }
    }
  }
LABEL_29:
  UserSessionSwitchLeaveCrit(v30, v28);
  return v32;
}
