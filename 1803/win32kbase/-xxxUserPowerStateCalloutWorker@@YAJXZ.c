/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3780
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C006CA40 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0036000 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0068884 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00A1F30 (xxxSendWinlogonPowerMessage.c)
 *     PowerOffMonitor @ 0x1C00A48E0 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C00A4C90 (PowerOnMonitor.c)
 *     PowerResumeSuspendEvent @ 0x1C00A5060 (PowerResumeSuspendEvent.c)
 *     xxxUserSetDisplayConfig @ 0x1C00A6D60 (xxxUserSetDisplayConfig.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00AD3B0 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00AD3E0 (EtwTraceWinlogonSleepStartEvent.c)
 *     McTemplateK0qq @ 0x1C00AECC8 (McTemplateK0qq.c)
 *     RIMSendLatencyMgtRequest @ 0x1C00F19F0 (RIMSendLatencyMgtRequest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 xxxUserPowerStateCalloutWorker(void)
{
  struct _MCGEN_TRACE_CONTEXT *v0; // rcx
  const GUID *v1; // r8
  unsigned int v2; // r13d
  struct _MCGEN_TRACE_CONTEXT *v3; // rcx
  const GUID *v4; // r8
  signed int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  LARGE_INTEGER *v12; // rbx
  struct tagTHREADINFO *v13; // rbx
  struct tagTHREADINFO **v14; // rax
  __int64 v15; // rcx
  PVOID v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *j; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 *v26; // rbx
  __int64 v27; // rdx
  tagObjLock *v28; // rcx
  bool v29; // si
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v39; // rbx
  struct tagTHREADINFO **v40; // rax
  __int64 v41; // rcx
  PVOID CurrentProcess; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 *i; // rsi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v53; // rdx
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  char v58; // al
  signed __int32 v60[8]; // [rsp+8h] [rbp-100h] BYREF
  int *Arg1; // [rsp+28h] [rbp-E0h]
  __int64 v62; // [rsp+30h] [rbp-D8h]
  _QWORD SystemInformation[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v64; // [rsp+78h] [rbp-90h] BYREF
  tagObjLock *v65; // [rsp+88h] [rbp-80h] BYREF
  tagObjLock *v66; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v67[10]; // [rsp+98h] [rbp-70h] BYREF
  int InputBuffer; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v69; // [rsp+C4h] [rbp-44h]
  __int16 v70; // [rsp+CCh] [rbp-3Ch]
  _DWORD v71[10]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v72[10]; // [rsp+F8h] [rbp-10h] BYREF

  memset(v72, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v72[1]);
  v2 = Arg0;
  v72[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v72[3]) = 17;
  LOBYTE(v72[6]) = -1;
  LODWORD(v72[4]) = Arg0;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qq(v0, &StartPowerStateCalloutWorker, v1, Arg0, 0);
  v5 = IsPowerStateTasksAllowedSupported();
  if ( v5 < 0 )
    goto LABEL_128;
  v5 = PowerStateTasksAllowed();
  if ( v5 < 0 )
    goto LABEL_128;
  if ( !gbPowerCalloutsReady )
  {
    v5 = -1073741823;
    goto LABEL_128;
  }
  if ( v2 == 1 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
    Event = (PRKEVENT)*((_QWORD *)gptiCurrent + 90);
    goto LABEL_127;
  }
  if ( v2 == 2 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2 - 2, v6);
    dword_1C01A3080 = 1;
    _InterlockedOr(v60, 0);
    RIMSendLatencyMgtRequest(1LL);
    PowerOffMonitor(dword_1C01A303C);
    v55 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    dword_1C01A30A0 = v55;
    if ( gSessionId != gServiceSessionId )
    {
      EtwTraceWinlogonSleepStartEvent(1LL);
      LOBYTE(v56) = 1;
      xxxSendWinlogonPowerMessage(v56, 262LL, &dword_1C01A3028);
      EtwTraceWinlogonSleepStartEvent(0LL);
    }
    LOBYTE(v54) = 1;
    LOBYTE(v55) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v55, v54, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
    {
      LODWORD(v62) = 1;
      dword_1C01A3000 = 16;
      dword_1C01A3004 = 40;
      Arg1 = &dword_1C01A3000;
      xxxSendMessageBSM(0LL, 536LL, 4LL);
    }
    if ( dword_1C01A302C == 5 )
    {
      if ( gProtocolType )
      {
LABEL_125:
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        Event = 0LL;
LABEL_127:
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        goto LABEL_128;
      }
      if ( (dword_1C01A3030 & 8) != 0 )
      {
        if ( qword_1C01A1CB8 )
          v58 = qword_1C01A1CB8(0LL, 0LL);
        else
          v58 = 0;
        if ( v58 && grpdeskRitInput )
          xxxUserSetDisplayConfig(0, 0, 2191, 0, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)v72);
      }
      else
      {
        LOBYTE(v57) = 1;
        xxxSendWinlogonPowerMessage(v57, 259LL, &dword_1C01A3028);
      }
    }
    if ( !gProtocolType && (int)IsPowerOffGdiSupported() >= 0 )
      PowerOffGdi();
    goto LABEL_125;
  }
  v7 = v2 - 3;
  if ( v2 == 3 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
    v34 = dword_1C01A3028;
    if ( dword_1C01A302C == 5 )
      v34 = 3;
    InputBuffer = v34;
    LOBYTE(v7) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v7, 0LL, 0LL) )
    {
      v69 = 4LL;
      v70 = 256;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
      ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v36, v35, v37);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v39 = 0LL;
      while ( 1 )
      {
        v40 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v40 )
          v39 = *v40;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v41);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v44) == gpepCSRSS && v39 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v39 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      EtwTraceAcquiredExclusiveUserCrit(v44, v43, v45);
      gptiCurrent = v39;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v66);
      for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
      {
        gpducstulHead = i[2];
        v49 = *i;
        i[2] = 0LL;
        if ( !*(_DWORD *)(v49 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46);
        DomainLockRef = GetDomainLockRef(8LL, v46);
        if ( DomainLockRef == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v51, v50);
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*i);
        tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v53);
      }
      v28 = v66;
      goto LABEL_104;
    }
  }
  else if ( v2 == 5 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2 - 5, v6);
    CInputGlobals::UpdateLastInputTime(
      (__int64)gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      5u);
    if ( (int)IsWakeRITForConfigSwitchSupported() >= 0 )
      WakeRITForConfigSwitch();
    v29 = dword_1C01A302C == 5;
    if ( gSessionId )
    {
      if ( dword_1C01A302C == 5 )
      {
        memset(SystemInformation, 0, sizeof(SystemInformation));
        memset(v71, 0, 0x20uLL);
        v71[4] &= ~1u;
        SystemInformation[2] = v71;
        SystemInformation[0] = 0x6B7568430000002DLL;
        LODWORD(SystemInformation[1]) = 10;
        LODWORD(SystemInformation[3]) = 32;
        v71[0] = 4;
        v71[1] = 1;
        v71[2] = 4;
        ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
      }
      EtwTraceWinlogonSleepEndEvent(1LL);
      v64 = 0x100000000uLL;
      LOBYTE(v30) = 1;
      v5 = xxxSendWinlogonPowerMessage(v30, 262LL, &v64);
      EtwTraceWinlogonSleepEndEvent(0LL);
      if ( v29 )
      {
        v31 = SystemInformation[2];
        *(_DWORD *)(SystemInformation[2] + 16LL) |= 1u;
        *(_DWORD *)(v31 + 8) = 4;
        ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
      }
    }
    if ( (int)IsPowerOnGdiSupported() >= 0 )
      PowerOnGdi(v72, 1LL, 5LL);
    dword_1C01A3080 = 0;
    _InterlockedOr(v60, 0);
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
      dword_1C01A3084 = 1;
    }
    if ( gSqmIsOptedIn )
      _WinSqmDWORDEvent(
        &SQM_INCREMENT_DWORD,
        0LL,
        4013,
        ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - dword_1C01A30A0)
      / 0x3E8);
    memset(SystemInformation, 0, sizeof(SystemInformation));
    memset(v71, 0, 0x20uLL);
    v71[4] &= ~1u;
    SystemInformation[2] = v71;
    SystemInformation[0] = 0x6B7568430000002DLL;
    LODWORD(SystemInformation[1]) = 10;
    LODWORD(SystemInformation[3]) = 32;
    v71[0] = 4;
    v71[1] = 1;
    v71[2] = 6;
    ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
    LOBYTE(v32) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v32, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
    {
      LODWORD(v62) = 1;
      Arg1 = v67;
      v67[0] = 16;
      v67[1] = 0x20000000;
      xxxSendMessageBSM(0LL, 536LL, 18LL);
    }
    v33 = SystemInformation[2];
    gdwUpdateKeyboard |= 2u;
    *(_DWORD *)(SystemInformation[2] + 16LL) |= 1u;
    *(_DWORD *)(v33 + 8) = 6;
    ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
  }
  else
  {
    if ( v2 != 6 )
    {
      if ( v2 == 10 )
      {
        if ( gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v2 - 10, v6);
        gPowerState = (gPowerTransitionsState != 0 ? 0x20 : 0) | gPowerState & 0xFFFFFFDF;
        PowerOffMonitor(MonitorRequestReasonDP);
        if ( (int)IsPowerOffGdiSupported() >= 0 )
          PowerOffGdi();
      }
      else
      {
        v3 = (struct _MCGEN_TRACE_CONTEXT *)(v2 - 11);
        if ( v2 == 11 )
        {
          if ( gbTtmEnabled )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v6);
          v8 = 0;
          if ( (int)IsPowerOnGdiSupported() >= 0 )
          {
            PowerOnGdi(v72, 0LL, 2LL);
            v8 = 1;
          }
          if ( (gPowerState & 0x20) != 0 )
            PowerOnMonitor(MonitorRequestReasonDP);
          if ( v8 )
            ProcessDelayedSdc(v72);
        }
        else if ( v2 == 12 )
        {
          if ( gbTtmEnabled )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v6);
          PowerOffMonitor(MonitorRequestReasonSxTransition);
        }
      }
      goto LABEL_128;
    }
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2 - 6, v6);
    if ( (int)IsInitKeyboardStateSupported() >= 0 )
      InitKeyboardState();
    if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL) )
    {
      InputBuffer = 0;
      v69 = 18LL;
      v70 = 1;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
      ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
      v12 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10, v9, v11);
      if ( v12 )
        v12[1] = KeQueryPerformanceCounter(0LL);
      v13 = 0LL;
      while ( 1 )
      {
        v14 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v14 )
          v13 = *v14;
        v16 = (PVOID)PsGetCurrentProcess(v15);
        if ( v16 )
        {
          if ( v16 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v18) == gpepCSRSS && v13 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v13 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      EtwTraceAcquiredExclusiveUserCrit(v18, v17, v19);
      gptiCurrent = v13;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v65);
      for ( j = (__int64 *)gpducstulHead; gpducstulHead; j = (__int64 *)gpducstulHead )
      {
        gpducstulHead = j[2];
        v23 = *j;
        j[2] = 0LL;
        if ( !*(_DWORD *)(v23 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20);
        v26 = GetDomainLockRef(8LL, v20);
        if ( v26 == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24);
        tagObjLock::UnLock((tagObjLock *)v26);
        HMUnlockObject(*j);
        tagObjLock::LockExclusive((struct _KTHREAD **)v26, v27);
      }
      v28 = v65;
LABEL_104:
      tagObjLock::UnLock(v28);
    }
  }
LABEL_128:
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qq(v3, &StopPowerStateCalloutWorker, v4, v2, v5);
  return (unsigned int)v5;
}
