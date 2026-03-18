/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0096BF4
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
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0035C20 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0072030 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     EtwTraceIdleActionExpiration @ 0x1C0094E70 (EtwTraceIdleActionExpiration.c)
 *     EtwTraceStopPowerEventCalloutWorker @ 0x1C009714C (EtwTraceStopPowerEventCalloutWorker.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0097168 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     PowerInputEvent @ 0x1C0097210 (PowerInputEvent.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0097280 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00972E0 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00973DC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     PowerOnMonitor @ 0x1C0097530 (PowerOnMonitor.c)
 *     PowerUnDimMonitor @ 0x1C009780C (PowerUnDimMonitor.c)
 *     PostWinlogonMessage @ 0x1C0097ED0 (PostWinlogonMessage.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0099BB0 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     PowerResumeSuspendEvent @ 0x1C00A3890 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C00A3990 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A3CB0 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00E1758 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1830 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C00E18EC (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1C00E1CA8 (-ShouldEscapeProximity@@YAEXZ.c)
 *     PowerDimMonitor @ 0x1C00E2618 (PowerDimMonitor.c)
 *     PowerIsDisplayRequired @ 0x1C00E27F0 (PowerIsDisplayRequired.c)
 *     McTemplateK0dxq @ 0x1C00E9848 (McTemplateK0dxq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r15d
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // ebx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  LARGE_INTEGER *v30; // rbx
  struct tagTHREADINFO *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rcx
  int v39; // r9d
  __int64 GlobalTickCount; // rbx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  LARGE_INTEGER *v46; // rbx
  struct tagTHREADINFO *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 *i; // rsi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 *v55; // rbx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 *v65; // rbx
  __int64 v66; // r8
  __int64 v67; // rcx
  __int64 v68; // rcx
  int v69; // r9d
  enum _MONITOR_DISPLAY_STATE v70; // ecx
  bool InputBuffer; // [rsp+38h] [rbp-D0h] BYREF
  enum POWER_MONITOR_REQUEST_REASON InputBuffer_4; // [rsp+3Ch] [rbp-CCh]
  tagObjLock *v73; // [rsp+40h] [rbp-C8h] BYREF
  tagObjLock *v74; // [rsp+48h] [rbp-C0h] BYREF
  tagObjLock *v75; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 OutputBuffer; // [rsp+58h] [rbp-B0h] BYREF
  int v77; // [rsp+60h] [rbp-A8h]
  int v78; // [rsp+64h] [rbp-A4h]
  int v79; // [rsp+88h] [rbp-80h] BYREF
  __int64 v80; // [rsp+8Ch] [rbp-7Ch]
  __int16 v81; // [rsp+94h] [rbp-74h]
  _QWORD v82[10]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v83[32]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v84[32]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v85[32]; // [rsp+128h] [rbp+20h] BYREF

  memset(v82, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v82[1]);
  v5 = 0;
  v6 = 0;
  v7 = *(_DWORD *)a1;
  v8 = *((_QWORD *)a1 + 1);
  v82[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v82[4]) = *((_DWORD *)a1 + 2);
  LODWORD(v82[3]) = 16;
  LOBYTE(v82[6]) = -1;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dxq(v3, (unsigned int)&StartPowerEventCalloutWorker, v4, v7, v8, 0);
  if ( gbPowerCalloutsReady )
  {
    if ( v7 == 8 )
    {
      LOBYTE(v3) = 1;
    }
    else
    {
      if ( (int)v7 <= 8 )
      {
        v9 = v7;
        switch ( v7 )
        {
          case 0u:
            if ( !gProtocolType && gPowerAdaptiveState )
            {
              LOBYTE(v9) = 1;
              gPowerAdaptiveState = 0;
              PowerInputEvent(v9);
            }
            if ( !gbRemoteSession )
            {
              LOBYTE(v4) = 1;
              if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, v4) )
              {
                v79 = 0;
                v80 = 7LL;
                v81 = 0;
                if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
                UserSessionSwitchLeaveCrit();
                ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v79, 0x10u, 0LL, 0);
                CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v19, v18, v20);
                if ( CurrentThreadWin32Thread )
                  CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v84, 1);
                v22 = EnterCritAvoidingDitHitTestHazard(0, 1);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v84);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v22;
                gbValidateHandleForIL = 1;
                CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v74);
                while ( 1 )
                {
                  v26 = (__int64 *)gpducstulHead;
                  if ( !gpducstulHead )
                    break;
                  gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
                  v57 = *v26;
                  v26[2] = 0LL;
                  if ( !*(_DWORD *)(v57 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
                  DomainLockRef = GetDomainLockRef(8);
                  if ( DomainLockRef == &gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58, v61);
                  tagObjLock::UnLock((tagObjLock *)DomainLockRef);
                  HMUnlockObject(*v26);
                  tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
                }
                tagObjLock::UnLock(v74);
              }
            }
            if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
            UserSessionSwitchLeaveCrit();
            LOBYTE(v5) = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u) == 0;
            v30 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v28, v27, v29);
            if ( v30 )
              v30[1] = KeQueryPerformanceCounter(0LL);
            InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v85, 1);
            v31 = EnterCritAvoidingDitHitTestHazard(0, 1);
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v85);
            EtwTraceAcquiredExclusiveUserCrit();
            gptiCurrent = v31;
            gbValidateHandleForIL = 1;
            CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v75);
            while ( 1 )
            {
              v35 = (__int64 *)gpducstulHead;
              if ( !gpducstulHead )
                break;
              gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
              v62 = *v35;
              v35[2] = 0LL;
              if ( !*(_DWORD *)(v62 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
              v65 = GetDomainLockRef(8);
              if ( v65 == &gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v64, v63, v66);
              tagObjLock::UnLock((tagObjLock *)v65);
              HMUnlockObject(*v35);
              tagObjLock::LockExclusive((struct _KTHREAD **)v65);
            }
            tagObjLock::UnLock(v75);
            if ( !v5 || gSessionCreationTime < OutputBuffer )
            {
              LOBYTE(v37) = 1;
              LOBYTE(v36) = 1;
              if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v36, v37) )
              {
                v77 = 16;
                v78 = 0x20000000;
                if ( (int)IsxxxSendMessageBSMSupported() >= 0 )
                  xxxSendMessageBSM(0LL, 536LL, 7LL);
              }
            }
            if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
              goto LABEL_31;
            v38 = 0LL;
            goto LABEL_60;
          case 1u:
            v6 = PostWinlogonMessage(256LL, v8);
            if ( !v6 )
              PostPlaySoundMessage(v8);
            goto LABEL_31;
          case 2u:
            if ( !gbRemoteSession )
            {
              v79 = 0;
              v80 = 10LL;
              v81 = 0;
              if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
              UserSessionSwitchLeaveCrit();
              ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v79, 0x10u, 0LL, 0);
              v46 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v44, v43, v45);
              if ( v46 )
                v46[1] = KeQueryPerformanceCounter(0LL);
              InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v83, 1);
              v47 = EnterCritAvoidingDitHitTestHazard(0, 1);
              InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v83);
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v47;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v73);
              for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
              {
                gpducstulHead = i[2];
                v52 = *i;
                i[2] = 0LL;
                if ( !*(_DWORD *)(v52 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v50);
                v55 = GetDomainLockRef(8);
                if ( v55 == &gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53, v56);
                tagObjLock::UnLock((tagObjLock *)v55);
                HMUnlockObject(*i);
                tagObjLock::LockExclusive((struct _KTHREAD **)v55);
              }
              tagObjLock::UnLock(v73);
            }
            v77 = 16;
            v78 = 16;
            if ( (int)IsxxxSendMessageBSMSupported() < 0 )
              goto LABEL_31;
            v17 = 536LL;
            v16 = 10LL;
            goto LABEL_36;
        }
        if ( v7 != 3 )
        {
          v10 = v7 - 4;
          if ( v7 == 4 )
            goto LABEL_11;
          if ( v7 != 5 )
          {
            if ( v7 == 6 )
            {
              if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 2LL) )
                EtwTraceIdleActionExpiration(1, giScreenSaveTimeOutMs);
              if ( gPowerTransitionsState
                || (*(_DWORD *)gpsi & 0x200) != 0
                && (GlobalTickCount = CInputGlobals::GetGlobalTickCount((__int64)gpInputGlobals, 1),
                    GlobalTickCount != CInputGlobals::GetLastInputTime(gpInputGlobals)) )
              {
                if ( !(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets )
                {
                  if ( gppiScreenSaver )
                  {
                    v41 = *(_DWORD *)(gppiScreenSaver + 12);
                    if ( (v41 & 0x400000) == 0 )
                    {
                      *(_DWORD *)(gppiScreenSaver + 12) = v41 | 0x400000;
                      if ( (int)IsSetForegroundPrioritySupported() >= 0 )
                      {
                        v42 = *(_QWORD *)(gppiScreenSaver + 336);
                        if ( v42 )
                          SetForegroundPriority(v42, 1LL);
                      }
                    }
                  }
                  else if ( gpqForeground
                         && *(_QWORD *)(gpqForeground + 120)
                         && (int)IsIsHungWindowSupported() >= 0
                         && !(unsigned int)IsHungWindow(*(_QWORD *)(gpqForeground + 120)) )
                  {
                    if ( (*(_DWORD *)gpsi & 0x200) != 0 && (int)IsStartScreenSaverSupported() >= 0 )
                      StartScreenSaver(1LL);
                    _PostMessage(*(_QWORD *)(gpqForeground + 120), 274LL, 61760LL, (*(_DWORD *)gpsi >> 9) & 1);
                  }
                  else if ( (int)IsStartScreenSaverSupported() >= 0 )
                  {
                    StartScreenSaver(0LL);
                  }
                }
              }
              goto LABEL_31;
            }
            if ( v7 == 7 )
            {
              if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) || dword_1C01CE240 || !gPowerTransitionsState )
                goto LABEL_31;
              PowerDimMonitor();
              if ( !gProtocolType )
                UpdateDisplayState(PowerMonitorDim, MonitorRequestReasonUnknown, 1, v39);
              if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
                goto LABEL_31;
              v38 = 1LL;
              goto LABEL_60;
            }
LABEL_148:
            v6 = -1073741822;
            goto LABEL_31;
          }
          if ( gbTtmEnabled )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v7 - 5, v2, v4);
          if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
            goto LABEL_31;
          InputBuffer_4 = (int)v8;
          PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)v8);
          if ( !gProtocolType
            && LOBYTE(WPP_MAIN_CB.DeviceQueue.Type)
            && !dword_1C01CE23C
            && (int)IsPowerOffGdiSupported() >= 0 )
          {
            PowerOffGdi();
          }
          if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 || InputBuffer_4 == MonitorRequestReasonGracePeriod )
            goto LABEL_31;
          v38 = 2LL;
LABEL_60:
          SetTimerCoalescingTolerance(v38);
          goto LABEL_31;
        }
        v77 = 16;
        v78 = 16;
        if ( (int)IsxxxSendMessageBSMSupported() >= 0 )
        {
          v16 = 0LL;
          v17 = 30LL;
LABEL_36:
          xxxSendMessageBSM(0LL, v17, v16);
        }
LABEL_31:
        EtwTraceStopPowerEventCalloutWorker(v7, v8, v6);
        return v6;
      }
      v3 = v7 - 9;
      if ( v7 != 9 )
      {
        if ( v7 == 10 )
        {
          if ( gbTtmEnabled )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v7 - 10, v2, v4);
          PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v8);
          goto LABEL_31;
        }
        if ( v7 == 11 )
        {
          if ( !LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2)
            && !dword_1C01CE240
            && dword_1C01CE1F0 == (_DWORD)v8
            && (!gbTtmEnabled || gbBuiltinPanelOn) )
          {
            if ( (_DWORD)v8 == 1 )
            {
              PowerUnDimMonitor();
            }
            else if ( (_DWORD)v8 == 2 )
            {
              PowerDimMonitor();
            }
          }
          goto LABEL_31;
        }
        v10 = v7 - 12;
        if ( v7 == 12 )
        {
LABEL_11:
          if ( gbTtmEnabled )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v2, v4);
          ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
          DisarmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
          ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
          if ( v7 == 12 )
            UserSessionSwitchBlock_End();
          if ( dword_1C01CE240 || LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
            goto LABEL_24;
          InputBuffer_4 = (int)v8;
          InputBuffer = gProtocolType == 0;
          if ( HIDWORD(qword_1C01CE24C) && !gProtocolType && (_DWORD)v8 != 22 )
          {
            if ( (_DWORD)v8 != 1 || !ShouldEscapeProximity() )
              goto LABEL_26;
            HIDWORD(qword_1C01CE24C) = 0;
          }
          ArmPowerWatchdog(gpRequestWorkerWatchdog, 32LL);
          gLastResumeResult = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, &InputBuffer, 8u, 0LL, 0);
          DisarmPowerWatchdog(gpRequestWorkerWatchdog, 32LL);
          if ( gLastResumeResult )
          {
            if ( gLastResumeResult == 259 )
              goto LABEL_174;
            if ( gLastResumeResult != -1073741823 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
          }
          if ( gLastResumeResult != 259 )
          {
            if ( gLastResumeResult != -1073741823 )
            {
              v14 = 0;
              if ( !gbGDIOn && (int)IsPowerOnGdiSupported() >= 0 )
              {
                ArmPowerWatchdog(gpRequestWorkerWatchdog, 48LL);
                PowerOnGdi(v82, 0LL, 0LL);
                DisarmPowerWatchdog(gpRequestWorkerWatchdog, 48LL);
                v14 = 1;
              }
              PowerOnMonitor(InputBuffer_4);
              if ( v14 )
                ProcessDelayedSdc(v82);
LABEL_24:
              if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 )
                SetTimerCoalescingTolerance(0LL);
            }
LABEL_26:
            ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
            if ( --gPowerOnRequestCount )
              ArmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
            ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
            goto LABEL_31;
          }
LABEL_174:
          if ( !gWakeInProgress )
          {
            gWakeInProgressReason = InputBuffer_4;
            gWakeInProgress = 1;
            UserSessionSwitchBlock_Start();
          }
          goto LABEL_26;
        }
        v67 = v7 - 13;
        if ( v7 == 13 )
        {
          if ( !gbTtmEnabled )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v67, v2, v4);
          if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v67, v2, v4);
          PowerOnSession((unsigned int)v8);
        }
        else
        {
          v68 = v7 - 14;
          if ( v7 != 14 )
          {
            if ( v7 != 15 )
              goto LABEL_148;
            if ( !gbTtmEnabled )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v68, v2, v4);
            if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) || dword_1C01CE240 )
              goto LABEL_31;
            if ( v8 == 1 )
            {
              gbBuiltinPanelOn = 1;
              PowerUnDimMonitor();
              v70 = PowerMonitorOn;
            }
            else
            {
              if ( v8 != 2 )
              {
                if ( v8 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v68, v2, v4);
                gbBuiltinPanelOn = 0;
                goto LABEL_31;
              }
              gbBuiltinPanelOn = 1;
              PowerDimMonitor();
              v70 = PowerMonitorDim;
            }
            UpdateDisplayState(v70, MonitorRequestReasonUnknown, 1, v69);
            goto LABEL_31;
          }
          if ( !gbTtmEnabled )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v68, v2, v4);
          if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v68, v2, v4);
          PowerOffSession((enum POWER_MONITOR_REQUEST_REASON)v8, v2);
        }
        UserSessionSwitchBlock_End();
        goto LABEL_31;
      }
    }
    PowerInputEvent(v3);
    goto LABEL_31;
  }
  EtwTraceStopPowerEventCalloutWorker(v7, v8, 3221225473LL);
  return 3221225473LL;
}
