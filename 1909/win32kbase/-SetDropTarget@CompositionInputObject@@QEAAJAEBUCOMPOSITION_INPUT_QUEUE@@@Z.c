/*
 * XREFs of ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C007963C
 * Callers:
 *     NtCompositionSetDropTarget @ 0x1C00794C0 (NtCompositionSetDropTarget.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0036BE0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0079814 (-SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x1C007A760 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CompositionInputObject::SetDropTarget(PVOID Object, const struct COMPOSITION_INPUT_QUEUE *a2)
{
  const struct COMPOSITION_INPUT_QUEUE *v2; // r15
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
  int v28; // ebx
  __int64 v30; // rax
  unsigned int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  PERESOURCE *v35; // rdi
  __int64 v36; // r8
  int v37; // [rsp+30h] [rbp-D0h] BYREF
  int v38; // [rsp+34h] [rbp-CCh] BYREF
  int v39; // [rsp+38h] [rbp-C8h] BYREF
  CInputSink *v40; // [rsp+40h] [rbp-C0h] BYREF
  const struct COMPOSITION_INPUT_QUEUE *v41; // [rsp+48h] [rbp-B8h]
  __int64 v42; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v43; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v46; // [rsp+90h] [rbp-70h]
  int v47; // [rsp+98h] [rbp-68h]
  int v48; // [rsp+9Ch] [rbp-64h]
  EVENT_DATA_DESCRIPTOR v49; // [rsp+A0h] [rbp-60h] BYREF
  int *v50; // [rsp+C0h] [rbp-40h]
  int v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+CCh] [rbp-34h]
  EVENT_DATA_DESCRIPTOR v53; // [rsp+D0h] [rbp-30h] BYREF
  int *v54; // [rsp+F0h] [rbp-10h]
  int v55; // [rsp+F8h] [rbp-8h]
  int v56; // [rsp+FCh] [rbp-4h]

  v2 = a2;
  v41 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Object);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v43 = 1;
    v30 = PsGetCurrentThreadWin32Thread(v4);
    v42 = v30;
    if ( v30 && (*(int *)(v30 + 24) > 0 || *(_DWORD *)(v42 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v48 = 0;
          v37 = v43;
          v46 = &v37;
          v47 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v42 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v42 && (*(_DWORD *)(v42 + 48) || *(int *)(v42 + 24) > 0) )
  {
    *(_DWORD *)(v42 + 44) = 1;
    *(GUID *)(v42 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v52 = 0;
        v38 = v43;
        v50 = &v38;
        v51 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v49);
        v31 = dword_1C020CB50;
      }
      if ( v31 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v56 = 0;
        v39 = v43;
        v54 = &v39;
        v55 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v53);
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
        v32 = *v25;
        v25[2] = 0LL;
        if ( !*(_DWORD *)(v32 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
        v35 = (PERESOURCE *)GetDomainLockRef(12LL, v22, v24);
        if ( v35 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v36);
        ExReleaseResourceAndLeaveCriticalRegion(*v35);
        HMUnlockObject(*v25);
        tagDomLock::LockExclusive(v35);
        v25 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v2 = v41;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  v28 = CompositionInputObject::LockForWrite(Object, &v40);
  if ( v28 >= 0 )
  {
    v28 = CInputSink::SetDropTarget(v40, v2);
    CInputSink::UnlockAndRelease(v40);
  }
  UserSessionSwitchLeaveCrit(v27, v26);
  return (unsigned int)v28;
}
