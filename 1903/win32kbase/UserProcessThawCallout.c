/*
 * XREFs of UserProcessThawCallout @ 0x1C00963AC
 * Callers:
 *     W32CalloutDispatch @ 0x1C0023550 (W32CalloutDispatch.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserProcessThawCallout(__int64 a1)
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
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 ProcessWin32Process; // rdi
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  __int64 v19; // rax
  unsigned int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  PERESOURCE *v35; // rdi
  __int64 v36; // r8
  int v37; // [rsp+30h] [rbp-89h] BYREF
  int v38; // [rsp+34h] [rbp-85h] BYREF
  int v39; // [rsp+38h] [rbp-81h] BYREF
  __int64 v40; // [rsp+40h] [rbp-79h]
  __int64 v41; // [rsp+48h] [rbp-71h]
  unsigned __int8 v42; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-51h] BYREF
  int *v45; // [rsp+88h] [rbp-31h]
  int v46; // [rsp+90h] [rbp-29h]
  int v47; // [rsp+94h] [rbp-25h]
  EVENT_DATA_DESCRIPTOR v48; // [rsp+98h] [rbp-21h] BYREF
  int *v49; // [rsp+B8h] [rbp-1h]
  int v50; // [rsp+C0h] [rbp+7h]
  int v51; // [rsp+C4h] [rbp+Bh]
  EVENT_DATA_DESCRIPTOR v52; // [rsp+C8h] [rbp+Fh] BYREF
  int *v53; // [rsp+E8h] [rbp+2Fh]
  int v54; // [rsp+F0h] [rbp+37h]
  int v55; // [rsp+F4h] [rbp+3Bh]

  v1 = a1;
  v40 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v42 = 1;
    v19 = PsGetCurrentThreadWin32Thread(v2);
    v41 = v19;
    if ( v19 && (*(int *)(v19 + 24) > 0 || *(_DWORD *)(v41 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v47 = 0;
          v37 = v42;
          v45 = &v37;
          v46 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v41 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v41 && (*(_DWORD *)(v41 + 48) || *(int *)(v41 + 24) > 0) )
  {
    *(_DWORD *)(v41 + 44) = 1;
    *(GUID *)(v41 + 28) = ActivityId;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v51 = 0;
        v38 = v42;
        v49 = &v38;
        v50 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v48);
        v20 = dword_1C020FB50;
      }
      if ( v20 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v55 = 0;
        v39 = v42;
        v53 = &v39;
        v54 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v52);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v11, v12);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v31 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v31[2];
        v32 = *v31;
        v31[2] = 0LL;
        if ( !*(_DWORD *)(v32 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
        v35 = (PERESOURCE *)GetDomainLockRef(12LL, v28, v30);
        if ( v35 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v36);
        ExReleaseResourceAndLeaveCriticalRegion(*v35);
        HMUnlockObject(*v31);
        tagDomLock::LockExclusive(v35);
        v31 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v1 = v40;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  ProcessWin32Process = PsGetProcessWin32Process(v1);
  if ( ProcessWin32Process )
  {
    v16 = *(_QWORD *)(ProcessWin32Process + 320);
    v17 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v16 )
    {
      if ( (int)IsResumeThreadQueueSupported() >= 0 )
        ResumeThreadQueue(v16, (unsigned int)v17);
      v16 = *(_QWORD *)(v16 + 656);
    }
    *(_DWORD *)(ProcessWin32Process + 812) &= ~0x400u;
    if ( (int)IsFreezeThawTimersSupported() >= 0 )
      FreezeThawTimers();
  }
  UserSessionSwitchLeaveCrit(v14, v13);
  return 0LL;
}
