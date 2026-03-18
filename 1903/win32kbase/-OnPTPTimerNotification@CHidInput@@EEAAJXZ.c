/*
 * XREFs of ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C017F0E0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C017E8A4 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     ?OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z @ 0x1C019A5E0 (-OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CHidInput::OnPTPTimerNotification(CHidInput *this)
{
  CHidInput *v1; // r14
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v4; // rax
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r9d
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
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  PERESOURCE *v29; // rdi
  __int64 v30; // r8
  struct DEVICEINFO *v31; // rax
  CHidInput *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v36; // [rsp+30h] [rbp-89h] BYREF
  int v37; // [rsp+34h] [rbp-85h] BYREF
  int v38; // [rsp+38h] [rbp-81h] BYREF
  int v39; // [rsp+3Ch] [rbp-7Dh] BYREF
  CHidInput *v40; // [rsp+40h] [rbp-79h]
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

  v1 = this;
  v40 = this;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v42 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v41 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v41 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v47 = 0;
          v36 = v42;
          v45 = &v36;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v41 && (*(_DWORD *)(v41 + 48) || *(int *)(v41 + 24) > 0) )
  {
    *(_DWORD *)(v41 + 44) = 1;
    *(GUID *)(v41 + 28) = ActivityId;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v51 = 0;
        v37 = v42;
        v49 = &v37;
        v50 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v48);
        v12 = dword_1C020FB50;
      }
      if ( v12 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v55 = 0;
        v38 = v42;
        v53 = &v38;
        v54 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v52);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
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
        v26 = *v25;
        v25[2] = 0LL;
        if ( !*(_DWORD *)(v26 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
        v29 = (PERESOURCE *)GetDomainLockRef(12LL, v22, v24);
        if ( v29 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v30);
        ExReleaseResourceAndLeaveCriticalRegion(*v29);
        HMUnlockObject(*v25);
        tagDomLock::LockExclusive(v29);
        v25 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v1 = v40;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  v31 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*((_QWORD *)v1 + 153), 19);
  if ( CHidInput::IsTouchpadDevice(v32, v31) )
  {
    v34 = *(_QWORD *)(v33 + 480);
    if ( v34 )
      v34 = *(_QWORD *)(v34 + 1000);
    if ( v34 )
    {
      v39 = 0;
      PTPEngineTraceProducer::OnEvent(*(PTPEngineTraceProducer **)(v34 + 632), (struct PTPEngineEvent *)&v39);
    }
  }
  UserSessionSwitchLeaveCrit(v34, v33);
  return 0LL;
}
