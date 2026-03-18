/*
 * XREFs of NtMITUpdateInputGlobals @ 0x1C009A030
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
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0038A30 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     UpconvertTime @ 0x1C009A280 (UpconvertTime.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITUpdateInputGlobals(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // r15d
  unsigned int v7; // r13d
  __int64 v8; // r14
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 *v30; // rsi
  CInputThread *v31; // rsi
  unsigned int CurrentThreadId; // eax
  int v33; // ebx
  unsigned int v34; // edi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v39; // rax
  unsigned int v40; // r9d
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  PERESOURCE *v44; // rdi
  __int64 v45; // r8
  int v46; // [rsp+30h] [rbp-B1h] BYREF
  int v47; // [rsp+34h] [rbp-ADh] BYREF
  int v48; // [rsp+38h] [rbp-A9h] BYREF
  unsigned int v49; // [rsp+3Ch] [rbp-A5h]
  unsigned int v50; // [rsp+40h] [rbp-A1h]
  __int64 v51; // [rsp+48h] [rbp-99h]
  unsigned __int8 v52; // [rsp+50h] [rbp-91h]
  GUID ActivityId; // [rsp+54h] [rbp-8Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-79h] BYREF
  int *v55; // [rsp+88h] [rbp-59h]
  __int64 v56; // [rsp+90h] [rbp-51h]
  EVENT_DATA_DESCRIPTOR v57; // [rsp+98h] [rbp-49h] BYREF
  int *v58; // [rsp+B8h] [rbp-29h]
  __int64 v59; // [rsp+C0h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR v60; // [rsp+C8h] [rbp-19h] BYREF
  int *v61; // [rsp+E8h] [rbp+7h]
  __int64 v62; // [rsp+F0h] [rbp+Fh]

  v5 = a4;
  v49 = a4;
  v50 = a2;
  v7 = a1;
  v8 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v52 = 1;
    v39 = PsGetCurrentThreadWin32Thread(v9);
    v51 = v39;
    if ( v39 && (*(int *)(v39 + 24) > 0 || *(_DWORD *)(v51 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v46 = v52;
          v55 = &v46;
          v56 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v51 = 0LL;
  }
  v11 = 0LL;
  while ( 1 )
  {
    v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v12 )
      v11 = *v12;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v11 == gptiRit )
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
        v47 = v52;
        v58 = &v47;
        v59 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v57);
        v40 = dword_1C020CB50;
      }
      if ( v40 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v48 = v52;
        v61 = &v48;
        v62 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v60);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v18, v19);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v23);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v30 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v30[2];
        v41 = *v30;
        v30[2] = 0LL;
        if ( !*(_DWORD *)(v41 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
        v44 = (PERESOURCE *)GetDomainLockRef(12LL, v27, v29);
        if ( v44 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v45);
        ExReleaseResourceAndLeaveCriticalRegion(*v44);
        HMUnlockObject(*v30);
        tagDomLock::LockExclusive(v44);
        v30 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v5 = v49;
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
  {
    v37 = UpconvertTime(v7);
    CInputGlobals::UpdateInputGlobals((__int64)gpInputGlobals, v37, v50, a3, v5, a5);
    v8 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v36, v35);
  return v8;
}
