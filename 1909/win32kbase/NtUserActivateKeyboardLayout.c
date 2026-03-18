/*
 * XREFs of NtUserActivateKeyboardLayout @ 0x1C00740F0
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
 *     xxxActivateKeyboardLayout @ 0x1C00742F0 (xxxActivateKeyboardLayout.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserActivateKeyboardLayout(__int64 a1, int a2)
{
  __int64 v2; // rsi
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
  __int64 *i; // r14
  int v25; // eax
  struct tagWINDOWSTATION *ProcessWindowStation; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v30; // rax
  unsigned int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  PERESOURCE *v35; // rdi
  __int64 v36; // r8
  int v37; // [rsp+30h] [rbp-99h] BYREF
  int v38; // [rsp+34h] [rbp-95h] BYREF
  _DWORD v39[2]; // [rsp+38h] [rbp-91h] BYREF
  __int64 v40; // [rsp+40h] [rbp-89h]
  unsigned __int8 v41; // [rsp+48h] [rbp-81h]
  GUID ActivityId; // [rsp+4Ch] [rbp-7Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-69h] BYREF
  int *v44; // [rsp+80h] [rbp-49h]
  __int64 v45; // [rsp+88h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR v46; // [rsp+90h] [rbp-39h] BYREF
  int *v47; // [rsp+B0h] [rbp-19h]
  __int64 v48; // [rsp+B8h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR v49; // [rsp+C0h] [rbp-9h] BYREF
  _DWORD *v50; // [rsp+E0h] [rbp+17h]
  __int64 v51; // [rsp+E8h] [rbp+1Fh]

  v39[1] = a2;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v41 = 1;
    v30 = PsGetCurrentThreadWin32Thread(v3);
    v40 = v30;
    if ( v30 && (*(int *)(v30 + 24) > 0 || *(_DWORD *)(v40 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v37 = v41;
          v44 = &v37;
          v45 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v40 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v40 && (*(_DWORD *)(v40 + 48) || *(int *)(v40 + 24) > 0) )
  {
    *(_DWORD *)(v40 + 44) = 1;
    *(GUID *)(v40 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v38 = v41;
        v47 = &v38;
        v48 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v46);
        v31 = dword_1C020CB50;
      }
      if ( v31 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v39[0] = v41;
        v50 = v39;
        v51 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v49);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v12, v13);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v17);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
    {
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
      v32 = *i;
      i[2] = 0LL;
      if ( !*(_DWORD *)(v32 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
      v35 = (PERESOURCE *)GetDomainLockRef(12LL, v21, v23);
      if ( v35 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v36);
      ExReleaseResourceAndLeaveCriticalRegion(*v35);
      HMUnlockObject(*i);
      tagDomLock::LockExclusive(v35);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
    v25 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 760LL) + 24LL) & 1;
  else
    v25 = 0;
  if ( v25 )
  {
    UserSetLastError(5LL, v12);
  }
  else
  {
    ProcessWindowStation = (struct tagWINDOWSTATION *)_GetProcessWindowStation(0LL);
    v2 = xxxActivateKeyboardLayout(ProcessWindowStation);
  }
  UserSessionSwitchLeaveCrit(v28, v27);
  return v2;
}
