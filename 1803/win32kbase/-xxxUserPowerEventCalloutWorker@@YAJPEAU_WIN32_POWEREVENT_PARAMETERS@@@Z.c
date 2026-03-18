/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006CBFC
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C006CA40 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0035DD0 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0035ED0 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0035FA0 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     EtwTraceStopPowerEventCalloutWorker @ 0x1C006CD00 (EtwTraceStopPowerEventCalloutWorker.c)
 *     PowerInputEvent @ 0x1C006CD20 (PowerInputEvent.c)
 *     EtwTraceIdleActionExpiration @ 0x1C006E700 (EtwTraceIdleActionExpiration.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00A1084 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00A1208 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     PostWinlogonMessage @ 0x1C00A1E00 (PostWinlogonMessage.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00A2118 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00A23D8 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00A2820 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A28F8 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C00A29A8 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1C00A2D04 (-ShouldEscapeProximity@@YAEXZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A2E78 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PowerDimMonitor @ 0x1C00A466C (PowerDimMonitor.c)
 *     PowerIsDisplayRequired @ 0x1C00A48A0 (PowerIsDisplayRequired.c)
 *     PowerOffMonitor @ 0x1C00A48E0 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C00A4C90 (PowerOnMonitor.c)
 *     PowerResumeSuspendEvent @ 0x1C00A5060 (PowerResumeSuspendEvent.c)
 *     PowerUnDimMonitor @ 0x1C00A5200 (PowerUnDimMonitor.c)
 *     McTemplateK0dxq @ 0x1C00AE2E8 (McTemplateK0dxq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r14d
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  __int64 v8; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // rcx
  __int64 GlobalTickCount; // rbx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  LARGE_INTEGER *v22; // rbx
  struct tagTHREADINFO *v23; // rbx
  struct tagTHREADINFO **v24; // rax
  __int64 v25; // rcx
  PVOID v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *i; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v42; // rbx
  struct tagTHREADINFO **v43; // rax
  __int64 v44; // rcx
  PVOID CurrentProcess; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v55; // rdx
  __int64 *v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  LARGE_INTEGER *v60; // rbx
  struct tagTHREADINFO *v61; // rbx
  struct tagTHREADINFO **v62; // rax
  __int64 v63; // rcx
  PVOID v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 *v73; // rbx
  __int64 v74; // rdx
  __int64 *v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // rcx
  __int64 v79; // rcx
  int v80; // r9d
  enum _MONITOR_DISPLAY_STATE v81; // ecx
  __int64 v82; // rdx
  __int64 v83; // rcx
  int v84; // ebx
  enum POWER_MONITOR_REQUEST_REASON v85[2]; // [rsp+38h] [rbp-89h] BYREF
  tagObjLock *v86; // [rsp+40h] [rbp-81h] BYREF
  tagObjLock *v87; // [rsp+48h] [rbp-79h] BYREF
  tagObjLock *v88; // [rsp+50h] [rbp-71h] BYREF
  unsigned __int64 OutputBuffer; // [rsp+58h] [rbp-69h] BYREF
  int v90; // [rsp+60h] [rbp-61h]
  int v91; // [rsp+64h] [rbp-5Dh]
  int InputBuffer; // [rsp+88h] [rbp-39h] BYREF
  __int64 v93; // [rsp+8Ch] [rbp-35h]
  __int16 v94; // [rsp+94h] [rbp-2Dh]
  _QWORD v95[10]; // [rsp+98h] [rbp-29h] BYREF

  memset(v95, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v95[1]);
  v5 = 0;
  v6 = 0;
  v7 = *(_DWORD *)a1;
  v8 = *((_QWORD *)a1 + 1);
  v95[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v95[4]) = *((_DWORD *)a1 + 2);
  LODWORD(v95[3]) = 16;
  LOBYTE(v95[6]) = -1;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dxq(v3, (unsigned int)&StartPowerEventCalloutWorker, v4, v7, v8, 0);
  if ( gbPowerCalloutsReady )
  {
    if ( (int)v7 <= 8 )
    {
      if ( v7 == 8 )
      {
        LOBYTE(v3) = 1;
LABEL_7:
        PowerInputEvent(v3);
        goto LABEL_8;
      }
      v10 = v7;
      switch ( v7 )
      {
        case 0u:
          if ( !gProtocolType && gPowerAdaptiveState )
          {
            LOBYTE(v10) = 1;
            gPowerAdaptiveState = 0;
            PowerInputEvent(v10);
          }
          if ( !gbRemoteSession )
          {
            LOBYTE(v4) = 1;
            if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, v4) )
            {
              InputBuffer = 0;
              v93 = 7LL;
              v94 = 0;
              if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
              UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
              ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
              CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v39, v38, v40);
              if ( CurrentThreadWin32Thread )
                CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
              v42 = 0LL;
              while ( 1 )
              {
                v43 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v43 )
                  v42 = *v43;
                CurrentProcess = (PVOID)PsGetCurrentProcess(v44);
                if ( CurrentProcess )
                {
                  if ( CurrentProcess == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v47) == gpepCSRSS && v42 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v42 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              EtwTraceAcquiredExclusiveUserCrit(v47, v46, v48);
              gptiCurrent = v42;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v87);
              while ( 1 )
              {
                v56 = (__int64 *)gpducstulHead;
                if ( !gpducstulHead )
                  break;
                gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
                v51 = *v56;
                v56[2] = 0LL;
                if ( !*(_DWORD *)(v51 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49);
                DomainLockRef = GetDomainLockRef(8LL, v49);
                if ( DomainLockRef == &gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52);
                tagObjLock::UnLock((tagObjLock *)DomainLockRef);
                HMUnlockObject(*v56);
                tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v55);
              }
              tagObjLock::UnLock(v87);
            }
          }
          if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
          UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
          LOBYTE(v5) = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u) == 0;
          v60 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v58, v57, v59);
          if ( v60 )
            v60[1] = KeQueryPerformanceCounter(0LL);
          v61 = 0LL;
          while ( 1 )
          {
            v62 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v62 )
              v61 = *v62;
            v64 = (PVOID)PsGetCurrentProcess(v63);
            if ( v64 )
            {
              if ( v64 == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v66) == gpepCSRSS && v61 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v61 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          EtwTraceAcquiredExclusiveUserCrit(v66, v65, v67);
          gptiCurrent = v61;
          gbValidateHandleForIL = 1;
          CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v88);
          while ( 1 )
          {
            v75 = (__int64 *)gpducstulHead;
            if ( !gpducstulHead )
              break;
            gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
            v70 = *v75;
            v75[2] = 0LL;
            if ( !*(_DWORD *)(v70 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v69, v68);
            v73 = GetDomainLockRef(8LL, v68);
            if ( v73 == &gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v72, v71);
            tagObjLock::UnLock((tagObjLock *)v73);
            HMUnlockObject(*v75);
            tagObjLock::LockExclusive((struct _KTHREAD **)v73, v74);
          }
          tagObjLock::UnLock(v88);
          if ( !v5 || gSessionCreationTime < OutputBuffer )
          {
            LOBYTE(v77) = 1;
            LOBYTE(v76) = 1;
            if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v76, v77) )
            {
              v90 = 16;
              v91 = 0x20000000;
              if ( (int)IsxxxSendMessageBSMSupported() >= 0 )
                xxxSendMessageBSM(0LL, 536LL, 7LL);
            }
          }
          if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
            goto LABEL_8;
          v13 = 0LL;
          goto LABEL_27;
        case 1u:
          v6 = PostWinlogonMessage(256LL, v8);
          if ( !v6 )
            PostPlaySoundMessage(v8);
          goto LABEL_8;
        case 2u:
          if ( !gbRemoteSession )
          {
            InputBuffer = 0;
            v93 = 10LL;
            v94 = 0;
            if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
            UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
            ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
            v22 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v20, v19, v21);
            if ( v22 )
              v22[1] = KeQueryPerformanceCounter(0LL);
            v23 = 0LL;
            while ( 1 )
            {
              v24 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
              if ( v24 )
                v23 = *v24;
              v26 = (PVOID)PsGetCurrentProcess(v25);
              if ( v26 )
              {
                if ( v26 == g_pepDwm )
                  break;
              }
              if ( (PVOID)PsGetCurrentProcess(v28) == gpepCSRSS && v23 != (struct tagTHREADINFO *)gptiTSRequest
                || gbDITInHitTest != 1
                || v23 == gptiRit )
              {
                break;
              }
              ++gcDITHitTestWaiters;
              ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
              KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
            }
            EtwTraceAcquiredExclusiveUserCrit(v28, v27, v29);
            gptiCurrent = v23;
            gbValidateHandleForIL = 1;
            CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v86);
            for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
            {
              gpducstulHead = i[2];
              v33 = *i;
              i[2] = 0LL;
              if ( !*(_DWORD *)(v33 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30);
              v36 = GetDomainLockRef(8LL, v30);
              if ( v36 == &gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34);
              tagObjLock::UnLock((tagObjLock *)v36);
              HMUnlockObject(*i);
              tagObjLock::LockExclusive((struct _KTHREAD **)v36, v37);
            }
            tagObjLock::UnLock(v86);
          }
          v90 = 16;
          v91 = 16;
          if ( (int)IsxxxSendMessageBSMSupported() < 0 )
            goto LABEL_8;
          v18 = 536LL;
          v17 = 10LL;
          break;
        case 3u:
          v90 = 16;
          v91 = 16;
          if ( (int)IsxxxSendMessageBSMSupported() < 0 )
            goto LABEL_8;
          v17 = 0LL;
          v18 = 30LL;
          break;
        default:
          v11 = v7 - 4;
          if ( v7 != 4 )
          {
            if ( v7 != 5 )
            {
              if ( v7 == 6 )
              {
                if ( CInputGlobals::UpdateGlobalTickCount((__int64)gpInputGlobals, 2) )
                  EtwTraceIdleActionExpiration(1LL, (unsigned int)giScreenSaveTimeOutMs);
                if ( gPowerTransitionsState
                  || (*(_DWORD *)gpsi & 0x200) != 0
                  && (GlobalTickCount = CInputGlobals::GetGlobalTickCount((__int64)gpInputGlobals, 1),
                      GlobalTickCount != CInputGlobals::GetLastInputTime(gpInputGlobals)) )
                {
                  if ( !(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets )
                  {
                    if ( gppiScreenSaver )
                    {
                      v15 = *(_DWORD *)(gppiScreenSaver + 12);
                      if ( (v15 & 0x400000) == 0 )
                      {
                        *(_DWORD *)(gppiScreenSaver + 12) = v15 | 0x400000;
                        if ( (int)IsSetForegroundPrioritySupported() >= 0 )
                        {
                          v16 = *(_QWORD *)(gppiScreenSaver + 328);
                          if ( v16 )
                            SetForegroundPriority(v16, 1LL);
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
                goto LABEL_8;
              }
              if ( v7 == 7 )
              {
                if ( gfSwitchInProgress || dword_1C01A3080 || !gPowerTransitionsState )
                  goto LABEL_8;
                PowerDimMonitor();
                if ( !gProtocolType )
                  UpdateDisplayState(PowerMonitorDim, MonitorRequestReasonUnknown, 1, v12);
                if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
                  goto LABEL_8;
                v13 = 1LL;
                goto LABEL_27;
              }
LABEL_160:
              v6 = -1073741822;
              goto LABEL_8;
            }
            if ( gbTtmEnabled )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v7 - 5, v2);
            if ( gfSwitchInProgress )
              goto LABEL_8;
            v85[1] = v8;
            PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)v8);
            if ( !gProtocolType && byte_1C01A0BAC && !dword_1C01A307C && (int)IsPowerOffGdiSupported() >= 0 )
              PowerOffGdi();
            if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 || v85[1] == MonitorRequestReasonGracePeriod )
              goto LABEL_8;
            v13 = 2LL;
LABEL_27:
            SetTimerCoalescingTolerance(v13);
            goto LABEL_8;
          }
LABEL_178:
          if ( gbTtmEnabled )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v2);
          ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
          DisarmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
          ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
          if ( v7 == 12 )
            UserSessionSwitchBlock_End();
          if ( gfSwitchInProgress || dword_1C01A3080 )
            goto LABEL_201;
          v85[1] = v8;
          LOBYTE(v85[0]) = gProtocolType == 0;
          if ( HIDWORD(qword_1C01A308C) && !gProtocolType && (_DWORD)v8 != 22 )
          {
            if ( (_DWORD)v8 != 1 || !ShouldEscapeProximity() )
              goto LABEL_203;
            HIDWORD(qword_1C01A308C) = 0;
          }
          ArmPowerWatchdog(gpRequestWorkerWatchdog, 32LL);
          gLastResumeResult = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, v85, 8u, 0LL, 0);
          DisarmPowerWatchdog(gpRequestWorkerWatchdog, 32LL);
          if ( gLastResumeResult )
          {
            if ( gLastResumeResult == 259 )
              goto LABEL_206;
            if ( gLastResumeResult != -1073741823 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v83, v82);
          }
          if ( gLastResumeResult != 259 )
          {
            if ( gLastResumeResult != -1073741823 )
            {
              v84 = 0;
              if ( !gbGDIOn && (int)IsPowerOnGdiSupported() >= 0 )
              {
                ArmPowerWatchdog(gpRequestWorkerWatchdog, 48LL);
                PowerOnGdi(v95, 0LL, 0LL);
                DisarmPowerWatchdog(gpRequestWorkerWatchdog, 48LL);
                v84 = 1;
              }
              PowerOnMonitor(v85[1]);
              if ( v84 )
                ProcessDelayedSdc(v95);
LABEL_201:
              if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 )
                SetTimerCoalescingTolerance(0LL);
            }
LABEL_203:
            ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
            if ( --gPowerOnRequestCount )
              ArmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
            ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
            goto LABEL_8;
          }
LABEL_206:
          if ( !gWakeInProgress )
          {
            gWakeInProgressReason = v85[1];
            gWakeInProgress = 1;
            UserSessionSwitchBlock_Start();
          }
          goto LABEL_203;
      }
      xxxSendMessageBSM(0LL, v18, v17);
      goto LABEL_8;
    }
    v3 = v7 - 9;
    switch ( v7 )
    {
      case 9u:
        goto LABEL_7;
      case 0xAu:
        if ( gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v7 - 10, v2);
        PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v8);
        goto LABEL_8;
      case 0xBu:
        if ( !gfSwitchInProgress
          && !dword_1C01A3080
          && dword_1C01A0350 == (_DWORD)v8
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
        goto LABEL_8;
    }
    v11 = v7 - 12;
    if ( v7 != 12 )
    {
      v78 = v7 - 13;
      if ( v7 == 13 )
      {
        if ( !gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v78, v2);
        if ( gfSwitchInProgress )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v78, v2);
        PowerOnSession((unsigned int)v8);
      }
      else
      {
        v79 = v7 - 14;
        if ( v7 != 14 )
        {
          if ( v7 == 15 )
          {
            if ( !gbTtmEnabled )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v79, v2);
            if ( gfSwitchInProgress || dword_1C01A3080 )
              goto LABEL_8;
            if ( v8 == 1 )
            {
              gbBuiltinPanelOn = 1;
              PowerUnDimMonitor();
              v81 = PowerMonitorOn;
            }
            else
            {
              if ( v8 != 2 )
              {
                if ( v8 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v79, v2);
                gbBuiltinPanelOn = 0;
                goto LABEL_8;
              }
              gbBuiltinPanelOn = 1;
              PowerDimMonitor();
              v81 = PowerMonitorDim;
            }
            UpdateDisplayState(v81, MonitorRequestReasonUnknown, 1, v80);
LABEL_8:
            EtwTraceStopPowerEventCalloutWorker(v7, v8, v6);
            return v6;
          }
          goto LABEL_160;
        }
        if ( !gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v79, v2);
        if ( gfSwitchInProgress )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v79, v2);
        PowerOffSession((enum POWER_MONITOR_REQUEST_REASON)v8, v2);
      }
      UserSessionSwitchBlock_End();
      goto LABEL_8;
    }
    goto LABEL_178;
  }
  EtwTraceStopPowerEventCalloutWorker(v7, v8, 3221225473LL);
  return 3221225473LL;
}
