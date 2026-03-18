/*
 * XREFs of ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C01052D4
 * Callers:
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01049EC (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C0104AA8 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     PowerInputEvent @ 0x1C0066890 (PowerInputEvent.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     CitDisplayPowerChange @ 0x1C00B176C (CitDisplayPowerChange.c)
 *     EtwTraceDisplayChange @ 0x1C00B17D0 (EtwTraceDisplayChange.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UpdateSessionPowerState(int a1, enum POWER_MONITOR_REQUEST_REASON a2)
{
  unsigned __int128 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v9; // rax
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r9d
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // r8
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
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  PERESOURCE *v34; // rdi
  __int64 v35; // r8
  __int64 *v36; // rsi
  int v37; // [rsp+30h] [rbp-D0h] BYREF
  int v38; // [rsp+34h] [rbp-CCh] BYREF
  int v39; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v41; // [rsp+48h] [rbp-B8h]
  GUID ActivityId; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 InputBuffer; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h]
  enum POWER_MONITOR_REQUEST_REASON v45; // [rsp+70h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-88h] BYREF
  int *v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR v49; // [rsp+A8h] [rbp-58h] BYREF
  int *v50; // [rsp+C8h] [rbp-38h]
  __int64 v51; // [rsp+D0h] [rbp-30h]
  EVENT_DATA_DESCRIPTOR v52; // [rsp+D8h] [rbp-28h] BYREF
  int *v53; // [rsp+F8h] [rbp-8h]
  __int64 v54; // [rsp+100h] [rbp+0h]

  InputBuffer = 0LL;
  v44 = 0LL;
  v45 = MonitorRequestReasonUnknown;
  gPowerDisplayState = gSessionId;
  dword_1C021277C = dword_1C0212780;
  dword_1C0212780 = a1 != 0;
  qword_1C0212748 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - qword_1C0212750;
  v4 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  qword_1C0212750 = *((_QWORD *)&v4 + 1);
  word_1C0212784 = gProtocolType == 0;
  v5 = (unsigned int)gdwInAtomicOperation;
  gPowerTransitionsState = a1;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  if ( !a1 && !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    PowerInputEvent(0);
  }
  UserSessionSwitchLeaveCrit(v5, *((__int64 *)&v4 + 1));
  BYTE5(v44) = gProtocolType == 0;
  InputBuffer = 19LL;
  LODWORD(v44) = gSessionId;
  BYTE4(v44) = a1;
  v45 = a2;
  ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v41 = 1;
    v9 = PsGetCurrentThreadWin32Thread(v7);
    v40 = v9;
    if ( v9 && (*(int *)(v9 + 24) > 0 || *(_DWORD *)(v40 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v37 = v41;
          v47 = &v37;
          v48 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v40 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v40 && (*(_DWORD *)(v40 + 48) || *(int *)(v40 + 24) > 0) )
  {
    *(_DWORD *)(v40 + 44) = 1;
    *(GUID *)(v40 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v38 = v41;
        v50 = &v38;
        v51 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v49);
        v17 = dword_1C020CB50;
      }
      if ( v17 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v39 = v41;
        v53 = &v39;
        v54 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v52);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v18, v20);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    while ( 1 )
    {
      v36 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v31 = *v36;
      v36[2] = 0LL;
      if ( !*(_DWORD *)(v31 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
      v34 = (PERESOURCE *)GetDomainLockRef(12LL, v28, v30);
      if ( v34 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v35);
      ExReleaseResourceAndLeaveCriticalRegion(*v34);
      HMUnlockObject(*v36);
      tagDomLock::LockExclusive(v34);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  EtwTraceDisplayChange(v19, v18, v20);
  CitDisplayPowerChange((__int64)&gPowerDisplayState);
}
