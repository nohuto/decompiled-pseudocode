/*
 * XREFs of ApiSetSendPTPAsMouse @ 0x1C01A0910
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C017B000 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01849C0 (SynthesizeMouseInputForPTP.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall ApiSetSendPTPAsMouse(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // edi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int16 v12; // ax
  int v13; // edi
  int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v18; // rax
  struct tagTHREADINFO *v19; // rbx
  struct tagTHREADINFO **v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  PVOID CurrentProcess; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // r9d
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  PERESOURCE *v41; // rdi
  __int64 v42; // r8
  __int64 *v43; // rsi
  _UNKNOWN **result; // rax
  int v45; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v47; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+48h] [rbp-B8h]
  __int64 v50; // [rsp+50h] [rbp-B0h]
  __int64 v51; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v52; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-88h] BYREF
  int *v55; // [rsp+98h] [rbp-68h]
  __int64 v56; // [rsp+A0h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR v57; // [rsp+A8h] [rbp-58h] BYREF
  int *v58; // [rsp+C8h] [rbp-38h]
  __int64 v59; // [rsp+D0h] [rbp-30h]
  EVENT_DATA_DESCRIPTOR v60; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v61; // [rsp+F8h] [rbp-8h]
  __int64 v62; // [rsp+100h] [rbp+0h]

  v47 = a1;
  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      356,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  if ( (int)IsSendPTPAsMouseSupported() >= 0 )
  {
    SendPTPAsMouse(a6, a1, v8, a3, a4);
    goto LABEL_61;
  }
  v48 = 0x800000LL;
  v49 = 0LL;
  v50 = 0LL;
  v12 = 2;
  if ( (v8 & 2) == 0 )
  {
    if ( v8 != 4 )
    {
      v12 = 8;
      if ( v8 == 8 )
      {
        WORD2(v48) = 4;
        goto LABEL_13;
      }
      if ( v8 != 16 )
        goto LABEL_13;
    }
    WORD2(v48) = v12;
    goto LABEL_13;
  }
  WORD2(v48) = 1;
LABEL_13:
  v13 = v8 & 1;
  if ( v13 )
  {
    LODWORD(v50) = HIDWORD(v47);
    HIDWORD(v49) = a1;
  }
  v14 = 8 * (v13 ^ 1) + 1888;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v10);
  SynthesizeMouseInputForPTP(a6, (__int64)&v48, a4, a3, a5, v14);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v52 = 1;
    v18 = PsGetCurrentThreadWin32Thread(v16);
    v51 = v18;
    if ( v18 && (*(int *)(v18 + 24) > 0 || *(_DWORD *)(v51 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v45 = v52;
          v55 = &v45;
          v56 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v51 = 0LL;
  }
  v19 = 0LL;
  while ( 1 )
  {
    v20 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v20 )
      v19 = *v20;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v22, v21);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v25, v24) == gpepCSRSS && v19 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v19 == gptiRit )
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
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v46 = v52;
        v58 = &v46;
        v59 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v57);
        v26 = dword_1C020FB50;
      }
      if ( v26 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        LODWORD(v47) = v52;
        v61 = &v47;
        v62 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v60);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v19;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v11, v27);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    while ( 1 )
    {
      v43 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v38 = *v43;
      v43[2] = 0LL;
      if ( !*(_DWORD *)(v38 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37);
      v41 = (PERESOURCE *)GetDomainLockRef(12LL, v35, v37);
      if ( v41 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v42);
      ExReleaseResourceAndLeaveCriticalRegion(*v41);
      HMUnlockObject(*v43);
      tagDomLock::LockExclusive(v41);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
LABEL_61:
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v11) = 5;
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            WPP_GLOBAL_Control->DeviceExtension,
                            v11,
                            10,
                            357,
                            (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
    }
  }
  return result;
}
