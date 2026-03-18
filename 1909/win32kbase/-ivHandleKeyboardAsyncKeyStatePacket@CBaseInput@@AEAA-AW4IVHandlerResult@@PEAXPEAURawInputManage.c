/*
 * XREFs of ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C0189F50
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
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C004AF10 (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011C508 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_s @ 0x1C0133528 (WPP_RECORDER_SF_s.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C01862EC (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardAsyncKeyStatePacket(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v5; // rax
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r9d
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
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  PERESOURCE *v30; // rdi
  __int64 v31; // r8
  int v32; // edx
  unsigned __int8 v33; // al
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+44h] [rbp-BCh] BYREF
  int v39; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v42; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-88h] BYREF
  int *v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR v47; // [rsp+A8h] [rbp-58h] BYREF
  int *v48; // [rsp+C8h] [rbp-38h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  EVENT_DATA_DESCRIPTOR v50; // [rsp+D8h] [rbp-28h] BYREF
  int *v51; // [rsp+F8h] [rbp-8h]
  __int64 v52; // [rsp+100h] [rbp+0h]

  v2 = a2;
  v40 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v42 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v41 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v41 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v37 = v42;
          v45 = &v37;
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
    *(GUID *)(v41 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v38 = v42;
        v48 = &v38;
        v49 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v47);
        v13 = dword_1C020CB50;
      }
      if ( v13 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v39 = v42;
        v51 = &v39;
        v52 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v50);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
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
        v27 = *v26;
        v26[2] = 0LL;
        if ( !*(_DWORD *)(v27 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
        v30 = (PERESOURCE *)GetDomainLockRef(12LL, v23, v25);
        if ( v30 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31);
        ExReleaseResourceAndLeaveCriticalRegion(*v30);
        HMUnlockObject(*v26);
        tagDomLock::LockExclusive(v30);
        v26 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v2 = v40;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_s(
      (_DWORD)gBaseLog,
      v14,
      12,
      42,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids,
      (__int64)"IV_PACKET_TYPE_KBD_ASYNC_KS");
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v32) = 4;
      WPP_RECORDER_SF_Dd(
        (_DWORD)gBaseLog,
        v32,
        12,
        43,
        (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids,
        *(_WORD *)v2,
        *(_DWORD *)(v2 + 4));
    }
  }
  ApplyKeyStateUpdate(*(_BYTE *)v2, *(_DWORD *)(v2 + 4) != 0);
  v33 = CKeyboardProcessor::HandleLeftRightVKs(*(_BYTE *)v2);
  v35 = v33;
  if ( v33 != *(_WORD *)v2 )
    ApplyKeyStateUpdate(v33, *(_DWORD *)(v2 + 4) != 0);
  UserSessionSwitchLeaveCrit(v35, v34);
  return 1LL;
}
