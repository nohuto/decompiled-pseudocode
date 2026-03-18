/*
 * XREFs of ChangeAcquireResourceType @ 0x1C0092740
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029F60 (EtwTraceReleaseUserCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ChangeAcquireResourceType(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  LARGE_INTEGER *v5; // rbx
  struct tagTHREADINFO *v6; // r14
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
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  PERESOURCE *v34; // rdi
  __int64 v35; // r8
  int v36; // [rsp+38h] [rbp-D0h] BYREF
  int v37; // [rsp+3Ch] [rbp-CCh] BYREF
  int v38; // [rsp+40h] [rbp-C8h] BYREF
  PERESOURCE *v39; // [rsp+48h] [rbp-C0h]
  __int64 v40; // [rsp+50h] [rbp-B8h]
  __int64 v41; // [rsp+58h] [rbp-B0h]
  unsigned __int8 ActivityId_4; // [rsp+60h] [rbp-A8h]
  GUID ActivityId_8; // [rsp+64h] [rbp-A4h] BYREF
  EVENT_DATA_DESCRIPTOR v44; // [rsp+78h] [rbp-90h] BYREF
  int *v45; // [rsp+98h] [rbp-70h]
  __int64 v46; // [rsp+A0h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR v47; // [rsp+A8h] [rbp-60h] BYREF
  int *v48; // [rsp+C8h] [rbp-40h]
  __int64 v49; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v50; // [rsp+D8h] [rbp-30h] BYREF
  int *v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF

  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    a1 = (unsigned int)gdwInAtomicOperation;
    if ( (_DWORD)gdwInAtomicOperation )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1);
    v27 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v28 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v27 + 44) || *(_DWORD *)(v27 + 48) || v28 > 0)
        && dword_1C020FB50 > 6u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3461, (LPCGUID)(v27 + 28), 0LL, 2u, &pData);
      }
      *(_DWORD *)(v27 + 44) = 0;
      v39 = 0LL;
      v40 = 0LL;
      *(_OWORD *)(v27 + 28) = 0u;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  v5 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3);
  if ( v5 )
    v5[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId_8.Data1 = 0LL;
  *(_QWORD *)ActivityId_8.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v29 = PsGetCurrentThreadWin32Thread(v4);
    v41 = v29;
    if ( v29 && (*(int *)(v29 + 24) > 0 || *(_DWORD *)(v41 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v36 = ActivityId_4;
          v45 = &v36;
          v46 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId_8, 0LL, 3u, &v44);
        }
      }
    }
  }
  else
  {
    v41 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v41 && (*(_DWORD *)(v41 + 48) || *(int *)(v41 + 24) > 0) )
  {
    *(_DWORD *)(v41 + 44) = 1;
    *(GUID *)(v41 + 28) = ActivityId_8;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v37 = ActivityId_4;
        v48 = &v37;
        v49 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId_8, 0LL, 3u, &v47);
        v30 = dword_1C020FB50;
      }
      if ( v30 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v38 = ActivityId_4;
        v51 = &v38;
        v52 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId_8, 0LL, 3u, &v50);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v13, v14);
    v39 = DomainLockRef;
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
        v31 = *v25;
        v25[2] = 0LL;
        if ( !*(_DWORD *)(v31 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
        v34 = (PERESOURCE *)GetDomainLockRef(12LL, v22, v24);
        if ( v34 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v35);
        ExReleaseResourceAndLeaveCriticalRegion(*v34);
        HMUnlockObject(*v25);
        tagDomLock::LockExclusive(v34);
        v25 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      DomainLockRef = v39;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  gptiCurrent = v6;
}
