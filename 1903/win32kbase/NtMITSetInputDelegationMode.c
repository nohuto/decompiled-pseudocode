/*
 * XREFs of NtMITSetInputDelegationMode @ 0x1C008F8C0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     SetInputDelegationModeImpl @ 0x1C008FAEC (SetInputDelegationModeImpl.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITSetInputDelegationMode(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r15d
  unsigned int v3; // r12d
  int v4; // r14d
  __int64 v5; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // rsi
  CInputThread *v27; // rsi
  unsigned int CurrentThreadId; // eax
  int v29; // ebx
  unsigned int v30; // edi
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v35; // rax
  unsigned int v36; // r9d
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  PERESOURCE *v40; // rdi
  __int64 v41; // r8
  __int64 v42; // rcx
  int v43; // [rsp+30h] [rbp-99h] BYREF
  int v44; // [rsp+34h] [rbp-95h] BYREF
  int v45; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v46; // [rsp+3Ch] [rbp-8Dh]
  __int64 v47; // [rsp+40h] [rbp-89h]
  unsigned __int8 v48; // [rsp+48h] [rbp-81h]
  GUID ActivityId; // [rsp+4Ch] [rbp-7Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-69h] BYREF
  int *v51; // [rsp+80h] [rbp-49h]
  __int64 v52; // [rsp+88h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR v53; // [rsp+90h] [rbp-39h] BYREF
  int *v54; // [rsp+B0h] [rbp-19h]
  __int64 v55; // [rsp+B8h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR v56; // [rsp+C0h] [rbp-9h] BYREF
  int *v57; // [rsp+E0h] [rbp+17h]
  __int64 v58; // [rsp+E8h] [rbp+1Fh]

  v2 = a2;
  v46 = a2;
  v3 = a1;
  v4 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v48 = 1;
    v35 = PsGetCurrentThreadWin32Thread(v5);
    v47 = v35;
    if ( v35 && (*(int *)(v35 + 24) > 0 || *(_DWORD *)(v47 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v43 = v48;
          v51 = &v43;
          v52 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v47 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v47 && (*(_DWORD *)(v47 + 48) || *(int *)(v47 + 24) > 0) )
  {
    *(_DWORD *)(v47 + 44) = 1;
    *(GUID *)(v47 + 28) = ActivityId;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v44 = v48;
        v54 = &v44;
        v55 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v53);
        v36 = dword_1C020FB50;
      }
      if ( v36 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v45 = v48;
        v57 = &v45;
        v58 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v56);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v14, v15);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v26 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v26[2];
        v37 = *v26;
        v26[2] = 0LL;
        if ( !*(_DWORD *)(v37 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
        v40 = (PERESOURCE *)GetDomainLockRef(12LL, v23, v25);
        if ( v40 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v41);
        ExReleaseResourceAndLeaveCriticalRegion(*v40);
        HMUnlockObject(*v26);
        tagDomLock::LockExclusive(v40);
        v26 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v2 = v46;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  v27 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v27, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v29 = *((_DWORD *)v27 + 10);
  v30 = CurrentThreadId;
  ExReleasePushLockSharedEx(v27, 0LL);
  KeLeaveCriticalRegion();
  if ( v30 != v29 )
    goto LABEL_56;
  if ( v2 )
  {
    if ( !v3 || (v2 & 0xFFFFFFFC) != 0 || *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
    {
      v42 = 87LL;
LABEL_50:
      UserSetLastError(v42, v31);
      goto LABEL_23;
    }
    if ( gptiForeground && v3 == ((unsigned int)PsGetThreadProcessId(*(PETHREAD *)gptiForeground) & 0xFFFFFFFC) )
      goto LABEL_22;
LABEL_56:
    v42 = 5LL;
    goto LABEL_50;
  }
LABEL_22:
  v4 = SetInputDelegationModeImpl(v3, v2);
LABEL_23:
  UserSessionSwitchLeaveCrit(v33, v32);
  return v4;
}
