/*
 * XREFs of NtMITUninitMinuserThread @ 0x1C0113230
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ProtectHandle @ 0x1C00348F8 (ProtectHandle.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITUninitMinuserThread(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v3; // rax
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r9d
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
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  PERESOURCE *v27; // rdi
  __int64 v28; // r8
  __int64 *v29; // rsi
  int v30; // edx
  __int64 ThreadWin32Thread; // rbx
  __int64 v32; // rdi
  int v33; // eax
  void *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v38; // [rsp+38h] [rbp-89h] BYREF
  int v39; // [rsp+3Ch] [rbp-85h] BYREF
  int v40; // [rsp+40h] [rbp-81h] BYREF
  __int64 v41; // [rsp+48h] [rbp-79h]
  unsigned __int8 v42; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-59h] BYREF
  int *v45; // [rsp+88h] [rbp-39h]
  __int64 v46; // [rsp+90h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR v47; // [rsp+98h] [rbp-29h] BYREF
  int *v48; // [rsp+B8h] [rbp-9h]
  __int64 v49; // [rsp+C0h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR v50; // [rsp+C8h] [rbp+7h] BYREF
  int *v51; // [rsp+E8h] [rbp+27h]
  __int64 v52; // [rsp+F0h] [rbp+2Fh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v42 = 1;
    v3 = PsGetCurrentThreadWin32Thread(v1);
    v41 = v3;
    if ( v3 && (*(int *)(v3 + 24) > 0 || *(_DWORD *)(v41 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v38 = v42;
          v45 = &v38;
          v46 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
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
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v39 = v42;
        v48 = &v39;
        v49 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v47);
        v11 = dword_1C020CB50;
      }
      if ( v11 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v40 = v42;
        v51 = &v40;
        v52 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v50);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v12, v13);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v17);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    while ( 1 )
    {
      v29 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v24 = *v29;
      v29[2] = 0LL;
      if ( !*(_DWORD *)(v24 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
      v27 = (PERESOURCE *)GetDomainLockRef(12LL, v21, v23);
      if ( v27 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v28);
      ExReleaseResourceAndLeaveCriticalRegion(*v27);
      HMUnlockObject(*v29);
      tagDomLock::LockExclusive(v27);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  RIMLockExclusive((__int64)&gInputLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v32 = 0LL;
  v33 = *(_DWORD *)(ThreadWin32Thread + 1224);
  if ( (v33 & 0x1000000) != 0 )
  {
    v34 = *(void **)(ThreadWin32Thread + 720);
    *(_DWORD *)(ThreadWin32Thread + 1224) = v33 & 0xFEFFFFFF;
    ProtectHandle(v34, v30, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
    ObfDereferenceObject(*(PVOID *)(ThreadWin32Thread + 728));
    *(_QWORD *)(ThreadWin32Thread + 728) = 0LL;
    v32 = 1LL;
    *(_QWORD *)(ThreadWin32Thread + 720) = 0LL;
  }
  qword_1C0215308 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit(v36, v35);
  return v32;
}
