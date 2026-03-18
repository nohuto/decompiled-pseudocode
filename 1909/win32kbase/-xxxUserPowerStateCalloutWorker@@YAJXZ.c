/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0065F24
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C00655D0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     RIMSendLatencyMgtRequest @ 0x1C0058F60 (RIMSendLatencyMgtRequest.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062C00 (xxxUserSetDisplayConfig.c)
 *     WinSqmIncrementDWORD @ 0x1C00645C0 (WinSqmIncrementDWORD.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0065000 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     PowerOnMonitor @ 0x1C00669D0 (PowerOnMonitor.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C008AB1C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C008ADE0 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     EnterPowerCrit @ 0x1C00A8350 (EnterPowerCrit.c)
 *     LeavePowerCrit @ 0x1C00A8380 (LeavePowerCrit.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00A8460 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00A8A40 (EtwTraceWinlogonSleepEndEvent.c)
 *     PowerOffMonitor @ 0x1C00B0FB0 (PowerOffMonitor.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00B1800 (xxxSendWinlogonPowerMessage.c)
 *     PowerResumeSuspendEvent @ 0x1C00B6460 (PowerResumeSuspendEvent.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     McTemplateK0qq @ 0x1C010D4F4 (McTemplateK0qq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 xxxUserPowerStateCalloutWorker(void)
{
  unsigned int v0; // r12d
  struct _MCGEN_TRACE_CONTEXT *v1; // rcx
  const GUID *v2; // r8
  struct _MCGEN_TRACE_CONTEXT *v3; // rcx
  signed int v4; // esi
  const GUID *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // edi
  LeaveEnterCrit *v10; // rcx
  bool v11; // bl
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  LeaveEnterCrit *v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  char v24; // al
  signed __int32 v26[8]; // [rsp+8h] [rbp-100h] BYREF
  int *Arg1; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+30h] [rbp-D8h]
  int v29; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD SystemInformation[4]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+80h] [rbp-88h] BYREF
  __int64 v32; // [rsp+88h] [rbp-80h]
  _DWORD v33[10]; // [rsp+90h] [rbp-78h] BYREF
  __int128 InputBuffer; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v35[8]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v36[10]; // [rsp+E8h] [rbp-20h] BYREF

  memset(v36, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v36[1]);
  v0 = Arg0;
  v36[8] = MEMORY[0xFFFFF78000000014];
  InputBuffer = 0uLL;
  LODWORD(v36[3]) = 17;
  LOBYTE(v36[6]) = -1;
  LODWORD(v36[4]) = Arg0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v35, 0, sizeof(v35));
  v31 = 0LL;
  v32 = 0LL;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qq(v1, &StartPowerStateCalloutWorker, v2, Arg0, 0);
  v4 = IsPowerStateTasksAllowedSupported();
  if ( v4 < 0 )
    goto LABEL_91;
  v4 = PowerStateTasksAllowed();
  if ( v4 < 0 )
    goto LABEL_91;
  if ( !gbPowerCalloutsReady )
  {
    v4 = -1073741823;
    goto LABEL_91;
  }
  if ( v0 == 1 )
  {
    EnterPowerCrit(0LL);
    Event = (PRKEVENT)*((_QWORD *)gptiCurrent + 91);
    goto LABEL_90;
  }
  if ( v0 == 2 )
  {
    dword_1C02127D0 = 1;
    _InterlockedOr(v26, 0);
    RIMSendLatencyMgtRequest();
    if ( !gbTtmEnabled )
      PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)dword_1C0210C1C);
    v21 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    dword_1C02127F0 = v21;
    if ( gSessionId != gServiceSessionId )
    {
      EtwTraceWinlogonSleepStartEvent(1LL);
      LOBYTE(v22) = 1;
      xxxSendWinlogonPowerMessage(v22, 262LL, &dword_1C0210C08);
      EtwTraceWinlogonSleepStartEvent(0LL);
    }
    LOBYTE(v20) = 1;
    LOBYTE(v21) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v21, v20, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
    {
      LODWORD(v28) = 1;
      dword_1C0210BE0 = 16;
      dword_1C0210BE4 = 40;
      Arg1 = &dword_1C0210BE0;
      xxxSendMessageBSM(0LL, 536LL, 4LL);
    }
    if ( dword_1C0210C0C == 5 )
    {
      if ( gProtocolType )
      {
LABEL_88:
        EnterPowerCrit(v23);
        Event = 0LL;
LABEL_90:
        LeavePowerCrit();
        goto LABEL_91;
      }
      if ( (dword_1C0210C10 & 8) != 0 )
      {
        if ( qword_1C0212220 )
          v24 = qword_1C0212220(0LL, 0LL);
        else
          v24 = 0;
        if ( v24 && grpdeskRitInput )
          xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 0, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)v36);
      }
      else
      {
        LOBYTE(v23) = 1;
        xxxSendWinlogonPowerMessage(v23, 259LL, &dword_1C0210C08);
      }
    }
    if ( !gProtocolType && (int)IsPowerOffGdiSupported() >= 0 )
      PowerOffGdi();
    goto LABEL_88;
  }
  v7 = v0 - 3;
  if ( v0 == 3 )
  {
    v18 = dword_1C0210C08;
    if ( dword_1C0210C0C == 5 )
      v18 = 3;
    LODWORD(InputBuffer) = v18;
    LOBYTE(v7) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v7, 0LL, 0LL) )
    {
      *(_QWORD *)((char *)&InputBuffer + 4) = 4LL;
      WORD6(InputBuffer) = 256;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      v10 = (LeaveEnterCrit *)((char *)&v29 + 1);
      goto LABEL_67;
    }
  }
  else if ( v0 == 5 )
  {
    CInputGlobals::UpdateLastInputTime(
      (__int64)gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      5);
    if ( (int)IsWakeRITForConfigSwitchSupported() >= 0 )
      WakeRITForConfigSwitch();
    v11 = dword_1C0210C0C == 5;
    if ( gSessionId )
    {
      if ( dword_1C0210C0C == 5 )
      {
        SystemInformation[1] = 10LL;
        memset(&v35[3], 0, 20);
        SystemInformation[3] = 32LL;
        SystemInformation[2] = v35;
        SystemInformation[0] = 0x6B7568430000002DLL;
        v35[4] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
        v35[0] = 4;
        v35[1] = 1;
        v35[2] = 4;
        ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
      }
      EtwTraceWinlogonSleepEndEvent(1LL);
      v32 = 0LL;
      HIDWORD(v31) = 1;
      LOBYTE(v12) = 1;
      v4 = xxxSendWinlogonPowerMessage(v12, 262LL, &v31);
      EtwTraceWinlogonSleepEndEvent(0LL);
      if ( v11 )
      {
        v13 = SystemInformation[2];
        *(_DWORD *)(SystemInformation[2] + 16LL) |= 1u;
        *(_DWORD *)(v13 + 8) = 4;
        ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
      }
    }
    if ( (int)IsPowerOnGdiSupported() >= 0 )
      PowerOnGdi(v36, 1LL, 5LL);
    dword_1C02127D0 = 0;
    _InterlockedOr(v26, 0);
    if ( gbPendingSleepInput )
    {
      v15 = gPendingSleepInputReason;
      gPendingMonitorOnReason = gPendingSleepInputReason;
      gbPendingMonitorOn = 1;
      EnterPowerCrit(v14);
      gbPendingSleepInput = 0;
      gPendingSleepInputReason = 0;
      LeavePowerCrit();
      PoSetUserPresent(v15);
    }
    else
    {
      dword_1C02127D4 = 1;
    }
    if ( gSqmIsOptedIn )
      WinSqmIncrementDWORD(
        0LL,
        0xFADu,
        ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - dword_1C02127F0)
      / 0x3E8);
    SystemInformation[1] = 10LL;
    memset(&v35[3], 0, 20);
    SystemInformation[2] = v35;
    SystemInformation[3] = 32LL;
    SystemInformation[0] = 0x6B7568430000002DLL;
    v35[4] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
    v35[0] = 4;
    v35[1] = 1;
    v35[2] = 6;
    ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
    LOBYTE(v16) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v16, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
    {
      LODWORD(v28) = 1;
      Arg1 = v33;
      v33[0] = 16;
      v33[1] = 0x20000000;
      xxxSendMessageBSM(0LL, 536LL, 18LL);
    }
    v17 = SystemInformation[2];
    gdwUpdateKeyboard |= 2u;
    *(_DWORD *)(SystemInformation[2] + 16LL) |= 1u;
    *(_DWORD *)(v17 + 8) = 6;
    ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
  }
  else
  {
    if ( v0 != 6 )
    {
      if ( v0 == 10 )
      {
        if ( gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v0 - 10, v6, v5);
        gPowerState = (gPowerTransitionsState != 0 ? 0x20 : 0) | gPowerState & 0xFFFFFFDF;
        PowerOffMonitor(MonitorRequestReasonDP);
        if ( (int)IsPowerOffGdiSupported() >= 0 )
          PowerOffGdi();
      }
      else if ( v0 == 11 )
      {
        if ( gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v0 - 11, v6, v5);
        v9 = 0;
        if ( (int)IsPowerOnGdiSupported() >= 0 )
        {
          PowerOnGdi(v36, 0LL, 2LL);
          v9 = 1;
        }
        if ( (gPowerState & 0x20) != 0 )
          PowerOnMonitor(MonitorRequestReasonDP);
        if ( v9 )
          ProcessDelayedSdc(v36);
      }
      else
      {
        v3 = (struct _MCGEN_TRACE_CONTEXT *)(v0 - 12);
        if ( v0 == 12 )
        {
          if ( gbTtmEnabled )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v6, v5);
          PowerOffMonitor(MonitorRequestReasonSxTransition);
        }
        else if ( v0 == 13 )
        {
          if ( gbTtmEnabled )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v6, v5);
          if ( gSessionId != gServiceSessionId )
          {
            EtwTraceWinlogonSleepStartEvent(1LL);
            LOBYTE(v8) = 1;
            xxxSendWinlogonPowerMessage(v8, 263LL, &dword_1C0210C08);
            EtwTraceWinlogonSleepStartEvent(0LL);
          }
        }
      }
      goto LABEL_91;
    }
    if ( (int)IsInitKeyboardStateSupported() >= 0 )
      InitKeyboardState();
    if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL) )
    {
      *(_QWORD *)((char *)&InputBuffer + 4) = 18LL;
      WORD6(InputBuffer) = 1;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      v10 = (LeaveEnterCrit *)&v29;
LABEL_67:
      LeaveEnterCrit::LeaveEnterCrit(v10);
      ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
      LeaveEnterCrit::~LeaveEnterCrit(v19);
    }
  }
LABEL_91:
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qq(v3, &StopPowerStateCalloutWorker, v5, v0, v4);
  return (unsigned int)v4;
}
