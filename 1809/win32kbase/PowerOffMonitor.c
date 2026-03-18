/*
 * XREFs of PowerOffMonitor @ 0x1C00A3990
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0096BF4 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3044 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
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
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00972E0 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00973DC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     PostWinlogonMessage @ 0x1C0097ED0 (PostWinlogonMessage.c)
 *     SqmPowerState @ 0x1C0098470 (SqmPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00A2BA0 (DrvDxgkLogCodePointPacket.c)
 *     DrvSetMonitorPowerState @ 0x1C00A2C54 (DrvSetMonitorPowerState.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A3CB0 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C00E1C80 (-SetProximityBlocking@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PowerOffMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r15d
  int v6; // r14d
  int v7; // r12d
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v23; // r8
  __int64 v24; // [rsp+40h] [rbp-29h] BYREF
  int v25; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v26; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v27; // [rsp+50h] [rbp-19h] BYREF
  int v28; // [rsp+54h] [rbp-15h] BYREF
  tagObjLock *v29; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v30[32]; // [rsp+60h] [rbp-9h] BYREF

  v4 = gPowerTransitionsState;
  v26 = 0;
  v24 = 0LL;
  v25 = 0;
  v6 = 0;
  v7 = 0;
  if ( gPowerTransitionsState || qword_1C01CE24C )
  {
    if ( !gProtocolType )
    {
      if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      {
        v27 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v27, 4LL, 0LL, 0LL, 0, 0);
        v7 = 1;
      }
      UserSessionSwitchBlock_Start();
      if ( gfIsFadingInProgress
        || !grpdeskRitInput
        || (gfIsFadingInProgress = 1, v6 = 1, (int)IsPrepareGammaRampDataSupported() < 0) )
      {
        v9 = v24;
      }
      else
      {
        v8 = PrepareGammaRampData(&v26, &v24, &v25);
        v9 = v24;
        if ( v8 < 0 )
          v9 = 0LL;
        v24 = v9;
      }
      if ( v25 )
      {
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
        UserSessionSwitchLeaveCrit();
        if ( (int)IsFadeDesktopSupported() >= 0 )
          FadeDesktop(v26, v24, 167LL, 0LL);
        DrvDxgkLogCodePointPacket(0xEu, v24 != 0, 0, 0);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11, v10, v12);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v30, 1);
        v14 = EnterCritAvoidingDitHitTestHazard(0, 1);
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v30);
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v14;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v29);
        while ( 1 )
        {
          v18 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
          v19 = *v18;
          v18[2] = 0LL;
          if ( !*(_DWORD *)(v19 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
          DomainLockRef = GetDomainLockRef(8);
          if ( DomainLockRef == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v23);
          tagObjLock::UnLock((tagObjLock *)DomainLockRef);
          HMUnlockObject(*v18);
          tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
        }
        tagObjLock::UnLock(v29);
      }
      else
      {
        DrvDxgkLogCodePointPacket(0xEu, v9 != 0, 0, 0);
      }
      if ( (int)IsModerncorePowerOffMonitorSupported() >= 0 )
        ModerncorePowerOffMonitor();
      DrvSetMonitorPowerState();
      if ( v24 && (int)IsRestoreGammaRampSupported() >= 0 )
        RestoreGammaRamp(v24);
      if ( v6 )
        gfIsFadingInProgress = 0;
      if ( gSqmIsOptedIn )
        SqmPowerState();
      UserSessionSwitchBlock_End();
    }
    if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      qword_1C01CE1C8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UpdateDisplayState(PowerMonitorOff, a1, v4, a4);
    if ( gppiScreenSaver )
      PostWinlogonMessage(1029LL, 0);
    if ( v7 )
    {
      v28 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v28, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else if ( a1 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking();
  }
}
