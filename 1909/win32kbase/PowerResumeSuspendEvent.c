/*
 * XREFs of PowerResumeSuspendEvent @ 0x1C00B6460
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00657FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0065F24 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall PowerResumeSuspendEvent(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // r14d
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
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
  __int64 v31; // rax
  unsigned int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  PERESOURCE *v36; // rdi
  __int64 v37; // r8
  unsigned int InputBuffer; // [rsp+30h] [rbp-99h] BYREF
  char InputBuffer_4; // [rsp+34h] [rbp-95h]
  char InputBuffer_5; // [rsp+35h] [rbp-94h]
  __int16 InputBuffer_6; // [rsp+36h] [rbp-93h]
  int v42; // [rsp+38h] [rbp-91h] BYREF
  int v43; // [rsp+3Ch] [rbp-8Dh] BYREF
  int v44; // [rsp+40h] [rbp-89h] BYREF
  NTSTATUS v45; // [rsp+44h] [rbp-85h]
  __int64 v46; // [rsp+48h] [rbp-81h]
  unsigned __int8 v47; // [rsp+50h] [rbp-79h]
  GUID ActivityId; // [rsp+54h] [rbp-75h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-61h] BYREF
  int *v50; // [rsp+88h] [rbp-41h]
  __int64 v51; // [rsp+90h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR v52; // [rsp+98h] [rbp-31h] BYREF
  int *v53; // [rsp+B8h] [rbp-11h]
  __int64 v54; // [rsp+C0h] [rbp-9h]
  EVENT_DATA_DESCRIPTOR v55; // [rsp+C8h] [rbp-1h] BYREF
  int *v56; // [rsp+E8h] [rbp+1Fh]
  __int64 v57; // [rsp+F0h] [rbp+27h]

  InputBuffer = gSessionId;
  InputBuffer_4 = a1;
  InputBuffer_5 = a2;
  InputBuffer_6 = a3;
  UserSessionSwitchLeaveCrit(a1, a2);
  v3 = ZwPowerInformation(ProcessorStateHandler|0x40, &InputBuffer, 8u, 0LL, 0);
  v45 = v3;
  v7 = v3;
  if ( v3 && v3 != 259 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v47 = 1;
    v31 = PsGetCurrentThreadWin32Thread(v8);
    v46 = v31;
    if ( v31 && (*(int *)(v31 + 24) > 0 || *(_DWORD *)(v46 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v42 = v47;
          v50 = &v42;
          v51 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v46 = 0LL;
  }
  v10 = 0LL;
  while ( 1 )
  {
    v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v11 )
      v10 = *v11;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v13, v12);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v16, v15) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v10 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v46 && (*(_DWORD *)(v46 + 48) || *(int *)(v46 + 24) > 0) )
  {
    *(_DWORD *)(v46 + 44) = 1;
    *(GUID *)(v46 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v43 = v47;
        v53 = &v43;
        v54 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v52);
        v32 = dword_1C020CB50;
      }
      if ( v32 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v44 = v47;
        v56 = &v44;
        v57 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v55);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v10;
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
        v33 = *v29;
        v29[2] = 0LL;
        if ( !*(_DWORD *)(v33 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
        v36 = (PERESOURCE *)GetDomainLockRef(12LL, v26, v28);
        if ( v36 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v37);
        ExReleaseResourceAndLeaveCriticalRegion(*v36);
        HMUnlockObject(*v29);
        tagDomLock::LockExclusive(v36);
        v29 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v7 = v45;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  return v7;
}
