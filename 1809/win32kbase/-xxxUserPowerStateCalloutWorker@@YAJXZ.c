/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3044
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C00969E0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0037220 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1C0049150 (xxxUserSetDisplayConfig.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     PowerOnMonitor @ 0x1C0097530 (PowerOnMonitor.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0098594 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     RIMSendLatencyMgtRequest @ 0x1C009DC40 (RIMSendLatencyMgtRequest.c)
 *     PowerResumeSuspendEvent @ 0x1C00A3890 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C00A3990 (PowerOffMonitor.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00A3FF0 (xxxSendWinlogonPowerMessage.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00A4180 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00A41A0 (EtwTraceWinlogonSleepEndEvent.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     McTemplateK0qq @ 0x1C00E97D4 (McTemplateK0qq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 xxxUserPowerStateCalloutWorker(void)
{
  struct _MCGEN_TRACE_CONTEXT *v0; // rcx
  const GUID *v1; // r8
  unsigned int v2; // r13d
  struct _MCGEN_TRACE_CONTEXT *v3; // rcx
  const GUID *v4; // r8
  signed int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // si
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  LARGE_INTEGER *v17; // rbx
  struct tagTHREADINFO *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *j; // rsi
  tagObjLock *v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  char v28; // al
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 *i; // rsi
  int v39; // edi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 *v43; // rbx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v49; // r8
  signed __int32 v50[8]; // [rsp+8h] [rbp-100h] BYREF
  int *OutputBufferLength; // [rsp+28h] [rbp-E0h]
  __int64 v52; // [rsp+30h] [rbp-D8h]
  _QWORD SystemInformation[4]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v54[2]; // [rsp+78h] [rbp-90h] BYREF
  tagObjLock *v55; // [rsp+88h] [rbp-80h] BYREF
  tagObjLock *v56; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v57[10]; // [rsp+98h] [rbp-70h] BYREF
  int InputBuffer; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v59; // [rsp+C4h] [rbp-44h]
  __int16 v60; // [rsp+CCh] [rbp-3Ch]
  _DWORD v61[10]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v62[10]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v63[32]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v64[32]; // [rsp+168h] [rbp+60h] BYREF

  memset(v62, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v62[1]);
  v2 = Arg0;
  v62[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v62[4]) = Arg0;
  LODWORD(v62[3]) = 17;
  LOBYTE(v62[6]) = -1;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qq(v0, &StartPowerStateCalloutWorker, v1, Arg0, 0);
  v5 = IsPowerStateTasksAllowedSupported();
  if ( v5 < 0 )
    goto LABEL_31;
  v5 = PowerStateTasksAllowed();
  if ( v5 < 0 )
    goto LABEL_31;
  if ( !gbPowerCalloutsReady )
  {
    v5 = -1073741823;
    goto LABEL_31;
  }
  if ( v2 == 1 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
    Event = (PRKEVENT)*((_QWORD *)gptiCurrent + 92);
LABEL_30:
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
    goto LABEL_31;
  }
  if ( v2 == 2 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2 - 2, v6, v4);
    dword_1C01CE240 = 1;
    _InterlockedOr(v50, 0);
    RIMSendLatencyMgtRequest(1u);
    PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)dword_1C01CE19C);
    v25 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    dword_1C01CE260 = v25;
    if ( gSessionId != gServiceSessionId )
    {
      EtwTraceWinlogonSleepStartEvent(1LL);
      LOBYTE(v26) = 1;
      xxxSendWinlogonPowerMessage(v26, 262LL, &dword_1C01CE188);
      EtwTraceWinlogonSleepStartEvent(0LL);
    }
    LOBYTE(v24) = 1;
    LOBYTE(v25) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v25, v24, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
    {
      LODWORD(v52) = 1;
      dword_1C01CE160 = 16;
      dword_1C01CE164 = 40;
      OutputBufferLength = &dword_1C01CE160;
      xxxSendMessageBSM(0LL, 536LL, 4LL);
    }
    if ( dword_1C01CE18C == 5 )
    {
      if ( gProtocolType )
      {
LABEL_62:
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        Event = 0LL;
        goto LABEL_30;
      }
      if ( (dword_1C01CE190 & 8) != 0 )
      {
        if ( qword_1C01CDB58 )
          v28 = qword_1C01CDB58(0LL, 0LL);
        else
          v28 = 0;
        if ( v28 && grpdeskRitInput )
          xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 0, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)v62);
      }
      else
      {
        LOBYTE(v27) = 1;
        xxxSendWinlogonPowerMessage(v27, 259LL, &dword_1C01CE188);
      }
    }
    if ( !gProtocolType && (int)IsPowerOffGdiSupported() >= 0 )
      PowerOffGdi();
    goto LABEL_62;
  }
  v7 = v2 - 3;
  switch ( v2 )
  {
    case 3u:
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v4);
      v29 = dword_1C01CE188;
      if ( dword_1C01CE18C == 5 )
        v29 = 3;
      InputBuffer = v29;
      LOBYTE(v7) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(v7, 0LL, 0LL) )
      {
        v59 = 4LL;
        v60 = 256;
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
        UserSessionSwitchLeaveCrit();
        ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v31, v30, v32);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v64, 1);
        v34 = EnterCritAvoidingDitHitTestHazard(0, 1);
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v64);
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v34;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v56);
        for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
        {
          gpducstulHead = i[2];
          v45 = *i;
          i[2] = 0LL;
          if ( !*(_DWORD *)(v45 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37);
          DomainLockRef = GetDomainLockRef(8);
          if ( DomainLockRef == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v49);
          tagObjLock::UnLock((tagObjLock *)DomainLockRef);
          HMUnlockObject(*i);
          tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
        }
        v23 = v56;
        goto LABEL_45;
      }
      break;
    case 5u:
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v2 - 5, v6, v4);
      CInputGlobals::UpdateLastInputTime(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        5);
      if ( (int)IsWakeRITForConfigSwitchSupported() >= 0 )
        WakeRITForConfigSwitch();
      v8 = dword_1C01CE18C == 5;
      if ( gSessionId )
      {
        if ( dword_1C01CE18C == 5 )
        {
          memset(SystemInformation, 0, sizeof(SystemInformation));
          memset(v61, 0, 0x20uLL);
          v61[4] &= ~1u;
          SystemInformation[2] = v61;
          SystemInformation[0] = 0x6B7568430000002DLL;
          LODWORD(SystemInformation[1]) = 10;
          LODWORD(SystemInformation[3]) = 32;
          v61[0] = 4;
          v61[1] = 1;
          v61[2] = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
        }
        EtwTraceWinlogonSleepEndEvent(1LL);
        v54[0] = 0x100000000LL;
        LOBYTE(v9) = 1;
        v54[1] = 0LL;
        v5 = xxxSendWinlogonPowerMessage(v9, 262LL, v54);
        EtwTraceWinlogonSleepEndEvent(0LL);
        if ( v8 )
        {
          v10 = SystemInformation[2];
          *(_DWORD *)(SystemInformation[2] + 16LL) |= 1u;
          *(_DWORD *)(v10 + 8) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
        }
      }
      if ( (int)IsPowerOnGdiSupported() >= 0 )
        PowerOnGdi(v62, 1LL, 5LL);
      dword_1C01CE240 = 0;
      _InterlockedOr(v50, 0);
      if ( gbPendingSleepInput )
      {
        gPendingMonitorOnReason = gPendingSleepInputReason;
        gbPendingMonitorOn = 1;
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        gbPendingSleepInput = 0;
        gPendingSleepInputReason = 0;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
      }
      else
      {
        dword_1C01CE244 = 1;
      }
      if ( gSqmIsOptedIn )
        _WinSqmDWORDEvent(
          &SQM_INCREMENT_DWORD,
          0LL,
          4013,
          ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - dword_1C01CE260)
        / 0x3E8);
      memset(SystemInformation, 0, sizeof(SystemInformation));
      memset(v61, 0, 0x20uLL);
      v61[4] &= ~1u;
      SystemInformation[0] = 0x6B7568430000002DLL;
      LODWORD(SystemInformation[1]) = 10;
      SystemInformation[2] = v61;
      LODWORD(SystemInformation[3]) = 32;
      v61[0] = 4;
      v61[1] = 1;
      v61[2] = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
      LOBYTE(v11) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v11, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
      {
        LODWORD(v52) = 1;
        OutputBufferLength = v57;
        v57[0] = 16;
        v57[1] = 0x20000000;
        xxxSendMessageBSM(0LL, 536LL, 18LL);
      }
      v12 = SystemInformation[2];
      gdwUpdateKeyboard |= 2u;
      *(_DWORD *)(SystemInformation[2] + 16LL) |= 1u;
      *(_DWORD *)(v12 + 8) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
      break;
    case 6u:
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v2 - 6, v6, v4);
      if ( (int)IsInitKeyboardStateSupported() >= 0 )
        InitKeyboardState();
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL) )
      {
        InputBuffer = 0;
        v59 = 18LL;
        v60 = 1;
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
        UserSessionSwitchLeaveCrit();
        ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
        v17 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15, v14, v16);
        if ( v17 )
          v17[1] = KeQueryPerformanceCounter(0LL);
        InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v63, 1);
        v18 = EnterCritAvoidingDitHitTestHazard(0, 1);
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v63);
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v18;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v55);
        for ( j = (__int64 *)gpducstulHead; gpducstulHead; j = (__int64 *)gpducstulHead )
        {
          gpducstulHead = j[2];
          v40 = *j;
          j[2] = 0LL;
          if ( !*(_DWORD *)(v40 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
          v43 = GetDomainLockRef(8);
          if ( v43 == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v44);
          tagObjLock::UnLock((tagObjLock *)v43);
          HMUnlockObject(*j);
          tagObjLock::LockExclusive((struct _KTHREAD **)v43);
        }
        v23 = v55;
LABEL_45:
        tagObjLock::UnLock(v23);
      }
      break;
    case 0xAu:
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v2 - 10, v6, v4);
      gPowerState = (gPowerTransitionsState != 0 ? 0x20 : 0) | gPowerState & 0xFFFFFFDF;
      PowerOffMonitor(MonitorRequestReasonDP);
      if ( (int)IsPowerOffGdiSupported() >= 0 )
        PowerOffGdi();
      break;
    default:
      v3 = (struct _MCGEN_TRACE_CONTEXT *)(v2 - 11);
      if ( v2 == 11 )
      {
        if ( gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v6, v4);
        v39 = 0;
        if ( (int)IsPowerOnGdiSupported() >= 0 )
        {
          PowerOnGdi(v62, 0LL, 2LL);
          v39 = 1;
        }
        if ( (gPowerState & 0x20) != 0 )
          PowerOnMonitor(MonitorRequestReasonDP, (__int64)v62, 2u);
        if ( v39 )
          ProcessDelayedSdc(v62);
      }
      else if ( v2 == 12 )
      {
        if ( gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v6, v4);
        PowerOffMonitor(MonitorRequestReasonSxTransition);
      }
      break;
  }
LABEL_31:
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qq(v3, &StopPowerStateCalloutWorker, v4, v2, v5);
  return (unsigned int)v5;
}
