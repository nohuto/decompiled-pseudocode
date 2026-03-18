/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00657FC
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C00655D0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     EtwTraceStopPowerEventCalloutWorker @ 0x1C0065F08 (EtwTraceStopPowerEventCalloutWorker.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00667F4 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     PowerInputEvent @ 0x1C0066890 (PowerInputEvent.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0066910 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0066970 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     PowerOnMonitor @ 0x1C00669D0 (PowerOnMonitor.c)
 *     PowerUnDimMonitor @ 0x1C0066CB8 (PowerUnDimMonitor.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0066E1C (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0066FFC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     PostWinlogonMessage @ 0x1C00679D0 (PostWinlogonMessage.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0067D50 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C007F410 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     EtwTraceIdleActionExpiration @ 0x1C00A7690 (EtwTraceIdleActionExpiration.c)
 *     PowerOffMonitor @ 0x1C00B0FB0 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00B13C0 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PowerResumeSuspendEvent @ 0x1C00B6460 (PowerResumeSuspendEvent.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0104910 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01049EC (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C0104AA8 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1C010515C (-ShouldEscapeProximity@@YAEXZ.c)
 *     PowerDimMonitor @ 0x1C01060CC (PowerDimMonitor.c)
 *     PowerIsDisplayRequired @ 0x1C01062C0 (PowerIsDisplayRequired.c)
 *     McTemplateK0dxq @ 0x1C010D568 (McTemplateK0dxq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r14
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  BOOL v18; // r13d
  __int64 v19; // rcx
  __int64 v20; // rcx
  LARGE_INTEGER *v21; // rbx
  struct tagTHREADINFO *v22; // rbx
  struct tagTHREADINFO **v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  PVOID v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  PERESOURCE *v33; // rbx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 *v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v45; // rbx
  struct tagTHREADINFO **v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  PVOID CurrentProcess; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 *i; // rsi
  int v64; // r9d
  __int64 v65; // rcx
  __int64 GlobalTickCount; // rbx
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  LARGE_INTEGER *v71; // rbx
  __int64 v72; // rax
  struct tagTHREADINFO *v73; // rbx
  struct tagTHREADINFO **v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  PVOID v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  unsigned int v80; // r9d
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // rdx
  __int64 v84; // rcx
  PERESOURCE *v85; // rbx
  __int64 v86; // r8
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  PERESOURCE *v96; // rdi
  __int64 v97; // r8
  __int64 *v98; // rsi
  __int64 v99; // rax
  unsigned int v100; // r9d
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  PERESOURCE *v104; // rdi
  __int64 v105; // r8
  __int64 v106; // rax
  unsigned int v107; // r9d
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  PERESOURCE *v111; // rdi
  __int64 v112; // r8
  __int64 v113; // rcx
  __int64 v114; // rcx
  int v115; // r9d
  enum _MONITOR_DISPLAY_STATE v116; // ecx
  __int64 InputBuffer; // [rsp+38h] [rbp-C8h] BYREF
  int v118; // [rsp+40h] [rbp-C0h] BYREF
  int v119; // [rsp+44h] [rbp-BCh] BYREF
  int v120; // [rsp+48h] [rbp-B8h] BYREF
  int v121; // [rsp+4Ch] [rbp-B4h] BYREF
  int v122; // [rsp+50h] [rbp-B0h] BYREF
  int v123; // [rsp+54h] [rbp-ACh] BYREF
  int v124; // [rsp+58h] [rbp-A8h] BYREF
  int v125; // [rsp+5Ch] [rbp-A4h] BYREF
  int v126; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v127; // [rsp+64h] [rbp-9Ch]
  __int64 v128; // [rsp+68h] [rbp-98h]
  unsigned __int64 OutputBuffer; // [rsp+70h] [rbp-90h] BYREF
  int v130; // [rsp+78h] [rbp-88h]
  int v131; // [rsp+7Ch] [rbp-84h]
  __int128 v132; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v133; // [rsp+B0h] [rbp-50h]
  unsigned __int8 v134; // [rsp+B8h] [rbp-48h]
  GUID pActivityId; // [rsp+BCh] [rbp-44h] BYREF
  __int64 v136; // [rsp+D0h] [rbp-30h]
  unsigned __int8 v137; // [rsp+D8h] [rbp-28h]
  GUID v138; // [rsp+DCh] [rbp-24h] BYREF
  __int64 v139; // [rsp+F0h] [rbp-10h]
  unsigned __int8 v140; // [rsp+F8h] [rbp-8h]
  GUID v141; // [rsp+FCh] [rbp-4h] BYREF
  _QWORD v142[10]; // [rsp+110h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+160h] [rbp+60h] BYREF
  int *v144; // [rsp+180h] [rbp+80h]
  __int64 v145; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v146; // [rsp+190h] [rbp+90h] BYREF
  int *v147; // [rsp+1B0h] [rbp+B0h]
  __int64 v148; // [rsp+1B8h] [rbp+B8h]
  EVENT_DATA_DESCRIPTOR v149; // [rsp+1C0h] [rbp+C0h] BYREF
  int *v150; // [rsp+1E0h] [rbp+E0h]
  __int64 v151; // [rsp+1E8h] [rbp+E8h]
  EVENT_DATA_DESCRIPTOR v152; // [rsp+1F0h] [rbp+F0h] BYREF
  int *v153; // [rsp+210h] [rbp+110h]
  __int64 v154; // [rsp+218h] [rbp+118h]
  EVENT_DATA_DESCRIPTOR v155; // [rsp+220h] [rbp+120h] BYREF
  int *v156; // [rsp+240h] [rbp+140h]
  int v157; // [rsp+248h] [rbp+148h]
  int v158; // [rsp+24Ch] [rbp+14Ch]
  EVENT_DATA_DESCRIPTOR v159; // [rsp+250h] [rbp+150h] BYREF
  int *v160; // [rsp+270h] [rbp+170h]
  int v161; // [rsp+278h] [rbp+178h]
  int v162; // [rsp+27Ch] [rbp+17Ch]
  EVENT_DATA_DESCRIPTOR v163; // [rsp+280h] [rbp+180h] BYREF
  int *v164; // [rsp+2A0h] [rbp+1A0h]
  __int64 v165; // [rsp+2A8h] [rbp+1A8h]
  EVENT_DATA_DESCRIPTOR v166; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v167; // [rsp+2D0h] [rbp+1D0h]
  int v168; // [rsp+2D8h] [rbp+1D8h]
  int v169; // [rsp+2DCh] [rbp+1DCh]
  EVENT_DATA_DESCRIPTOR v170; // [rsp+2E0h] [rbp+1E0h] BYREF
  int *v171; // [rsp+300h] [rbp+200h]
  int v172; // [rsp+308h] [rbp+208h]
  int v173; // [rsp+30Ch] [rbp+20Ch]

  memset(v142, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v142[1]);
  v5 = *((_QWORD *)a1 + 1);
  v6 = *(_DWORD *)a1;
  v142[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v142[4]) = *((_DWORD *)a1 + 2);
  v132 = 0uLL;
  LODWORD(v142[3]) = 16;
  LOBYTE(v142[6]) = -1;
  v127 = v6;
  v128 = v5;
  InputBuffer = 0LL;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dxq(v3, (unsigned int)&StartPowerEventCalloutWorker, v4, v6, v5, 0);
  if ( !gbPowerCalloutsReady )
  {
    v13 = -1073741823;
    v14 = (unsigned int)v6;
    goto LABEL_33;
  }
  if ( v6 == 8 )
  {
    LOBYTE(v3) = 1;
    goto LABEL_30;
  }
  if ( v6 > 8 )
  {
    v3 = (unsigned int)(v6 - 9);
    if ( v6 != 9 )
    {
      if ( v6 == 10 )
      {
        if ( gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(v6 - 10), v2, v4);
        PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v5);
        goto LABEL_31;
      }
      if ( v6 == 11 )
      {
        if ( !gfSwitchInProgress
          && !dword_1C02127D0
          && dword_1C0212780 == (_DWORD)v5
          && (!gbTtmEnabled || gbBuiltinPanelOn) )
        {
          if ( (_DWORD)v5 == 1 )
          {
            PowerUnDimMonitor();
          }
          else if ( (_DWORD)v5 == 2 )
          {
            PowerDimMonitor();
          }
        }
        goto LABEL_31;
      }
      v8 = (unsigned int)(v6 - 12);
      if ( v6 == 12 )
      {
LABEL_11:
        if ( gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v2, v4);
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        DisarmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        if ( v6 == 12 )
          UserSessionSwitchBlock_End();
        if ( dword_1C02127D0 || gfSwitchInProgress )
          goto LABEL_24;
        HIDWORD(InputBuffer) = v5;
        LOBYTE(InputBuffer) = gProtocolType == 0;
        if ( HIDWORD(qword_1C02127DC) && !gProtocolType && (_DWORD)v5 != 22 )
        {
          if ( (_DWORD)v5 != 1 || !ShouldEscapeProximity() )
            goto LABEL_26;
          HIDWORD(qword_1C02127DC) = 0;
        }
        ArmPowerWatchdog(gpRequestWorkerWatchdog, 32LL);
        gLastResumeResult = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, &InputBuffer, 8u, 0LL, 0);
        DisarmPowerWatchdog(gpRequestWorkerWatchdog, 32LL);
        if ( gLastResumeResult )
        {
          if ( gLastResumeResult == 259 )
            goto LABEL_278;
          if ( gLastResumeResult != -1073741823 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
        }
        if ( gLastResumeResult != 259 )
        {
          if ( gLastResumeResult != -1073741823 )
          {
            v12 = 0;
            if ( !gbGDIOn && (int)IsPowerOnGdiSupported() >= 0 )
            {
              ArmPowerWatchdog(gpRequestWorkerWatchdog, 48LL);
              PowerOnGdi(v142, 0LL, 0LL);
              DisarmPowerWatchdog(gpRequestWorkerWatchdog, 48LL);
              v12 = 1;
            }
            PowerOnMonitor(SHIDWORD(InputBuffer));
            if ( v12 )
              ProcessDelayedSdc(v142);
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
LABEL_278:
        if ( !gWakeInProgress )
        {
          gWakeInProgressReason = HIDWORD(InputBuffer);
          gWakeInProgress = 1;
          UserSessionSwitchBlock_Start();
        }
        goto LABEL_26;
      }
      v113 = (unsigned int)(v6 - 13);
      if ( v6 == 13 )
      {
        if ( !gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v113, v2, v4);
        if ( gfSwitchInProgress )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v113, v2, v4);
        PowerOnSession((unsigned int)v5);
      }
      else
      {
        v114 = (unsigned int)(v6 - 14);
        if ( v6 != 14 )
        {
          if ( v6 != 15 )
            goto LABEL_252;
          if ( !gbTtmEnabled )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v114, v2, v4);
          if ( gfSwitchInProgress || dword_1C02127D0 )
            goto LABEL_31;
          if ( v5 == 1 )
          {
            gbBuiltinPanelOn = 1;
            PowerUnDimMonitor();
            v116 = PowerMonitorOn;
          }
          else
          {
            if ( v5 != 2 )
            {
              if ( v5 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v114, v2, v4);
              gbBuiltinPanelOn = 0;
              goto LABEL_31;
            }
            gbBuiltinPanelOn = 1;
            PowerDimMonitor();
            v116 = PowerMonitorDim;
          }
          UpdateDisplayState(v116, MonitorRequestReasonUnknown, 1, v115);
          goto LABEL_31;
        }
        if ( !gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v114, v2, v4);
        if ( gfSwitchInProgress )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v114, v2, v4);
        PowerOffSession((enum POWER_MONITOR_REQUEST_REASON)v5, v2);
      }
      UserSessionSwitchBlock_End();
      goto LABEL_31;
    }
LABEL_30:
    PowerInputEvent(v3);
    goto LABEL_31;
  }
  v7 = (unsigned int)v6;
  switch ( v6 )
  {
    case 0:
      if ( !gProtocolType && gPowerAdaptiveState )
      {
        LOBYTE(v7) = 1;
        gPowerAdaptiveState = 0;
        PowerInputEvent(v7);
      }
      if ( !gbRemoteSession )
      {
        LOBYTE(v4) = 1;
        if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, v4) )
        {
          *(_QWORD *)((char *)&v132 + 4) = 7LL;
          WORD6(v132) = 0;
          if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
          UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, (__int64)v2);
          ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v132, 0x10u, 0LL, 0);
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v42);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          v45 = 0LL;
          *(_QWORD *)&v138.Data1 = 0LL;
          *(_QWORD *)v138.Data4 = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v137 = 1;
            v99 = PsGetCurrentThreadWin32Thread(v43);
            v136 = v99;
            if ( v99 && (*(int *)(v99 + 24) > 0 || *(_DWORD *)(v136 + 48)) )
            {
              EtwActivityIdControl(3u, &v138);
              if ( dword_1C020CB50 > 6u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                {
                  v121 = v137;
                  v153 = &v121;
                  v154 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v138, 0LL, 3u, &v152);
                }
              }
            }
          }
          else
          {
            v136 = 0LL;
          }
          while ( 1 )
          {
            v46 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v46 )
              v45 = *v46;
            CurrentProcess = (PVOID)PsGetCurrentProcess(v48, v47);
            if ( CurrentProcess )
            {
              if ( CurrentProcess == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v51, v50) == gpepCSRSS && v45 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v45 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
            && v136
            && (*(_DWORD *)(v136 + 48) || *(int *)(v136 + 24) > 0) )
          {
            *(_DWORD *)(v136 + 44) = 1;
            *(GUID *)(v136 + 28) = v138;
            if ( dword_1C020CB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v158 = 0;
                v122 = v137;
                v156 = &v122;
                v157 = 4;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v138, 0LL, 3u, &v155);
                v100 = dword_1C020CB50;
              }
              if ( v100 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v162 = 0;
                v123 = v137;
                v160 = &v123;
                v161 = 4;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v138, 0LL, 3u, &v159);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v45;
          gbValidateHandleForIL = 1;
          if ( IsValidGuiThreadContext() )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, (__int64)v2, v52);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53, v56);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v58, v57, v59);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
              v101 = *i;
              i[2] = 0LL;
              if ( !*(_DWORD *)(v101 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v61, v60, v62);
              v104 = (PERESOURCE *)GetDomainLockRef(12LL, v60, v62);
              if ( v104 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v103, v102, v105);
              ExReleaseResourceAndLeaveCriticalRegion(*v104);
              HMUnlockObject(*i);
              tagDomLock::LockExclusive(v104);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, (__int64)v2);
      v18 = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u) == 0;
      v21 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v19);
      if ( v21 )
        v21[1] = KeQueryPerformanceCounter(0LL);
      v22 = 0LL;
      *(_QWORD *)&v141.Data1 = 0LL;
      *(_QWORD *)v141.Data4 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v140 = 1;
        v106 = PsGetCurrentThreadWin32Thread(v20);
        v139 = v106;
        if ( v106 && (*(int *)(v106 + 24) > 0 || *(_DWORD *)(v139 + 48)) )
        {
          EtwActivityIdControl(3u, &v141);
          if ( dword_1C020CB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v124 = v140;
              v164 = &v124;
              v165 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &v141, 0LL, 3u, &v163);
            }
          }
        }
      }
      else
      {
        v139 = 0LL;
      }
      while ( 1 )
      {
        v23 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v23 )
          v22 = *v23;
        v26 = (PVOID)PsGetCurrentProcess(v25, v24);
        if ( v26 )
        {
          if ( v26 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v28, v27) == gpepCSRSS && v22 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v22 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v139
        && (*(_DWORD *)(v139 + 48) || *(int *)(v139 + 24) > 0) )
      {
        *(_DWORD *)(v139 + 44) = 1;
        *(GUID *)(v139 + 28) = v141;
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v169 = 0;
            v125 = v140;
            v167 = &v125;
            v168 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &v141, 0LL, 3u, &v166);
            v107 = dword_1C020CB50;
          }
          if ( v107 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v173 = 0;
            v126 = v140;
            v171 = &v126;
            v172 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &v141, 0LL, 3u, &v170);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v22;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        v33 = (PERESOURCE *)GetDomainLockRef(12LL, v29, v30);
        if ( v33 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v34);
        if ( ExIsResourceAcquiredExclusiveLite(*v33) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v33);
        v41 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v41[2];
            v108 = *v41;
            v41[2] = 0LL;
            if ( !*(_DWORD *)(v108 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
            v111 = (PERESOURCE *)GetDomainLockRef(12LL, v38, v40);
            if ( v111 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v110, v109, v112);
            ExReleaseResourceAndLeaveCriticalRegion(*v111);
            HMUnlockObject(*v41);
            tagDomLock::LockExclusive(v111);
            v41 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v5 = v128;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v33);
      }
      if ( !v18 || gSessionCreationTime < OutputBuffer )
      {
        LOBYTE(v30) = 1;
        LOBYTE(v29) = 1;
        if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v29, v30) )
        {
          v130 = 16;
          v131 = 0x20000000;
          if ( (int)IsxxxSendMessageBSMSupported() >= 0 )
            xxxSendMessageBSM(0LL, 536LL, 7LL);
        }
      }
      if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 )
        SetTimerCoalescingTolerance(0LL);
      v13 = 0;
      goto LABEL_32;
    case 1:
      v13 = PostWinlogonMessage(256LL, v5);
      if ( !v13 )
        PostPlaySoundMessage(v5);
      goto LABEL_32;
    case 2:
      if ( !gbRemoteSession )
      {
        *(_QWORD *)((char *)&v132 + 4) = 10LL;
        WORD6(v132) = 0;
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
        UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, (__int64)v2);
        ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v132, 0x10u, 0LL, 0);
        v71 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v69);
        if ( v71 )
          v71[1] = KeQueryPerformanceCounter(0LL);
        *(_QWORD *)&pActivityId.Data1 = 0LL;
        *(_QWORD *)pActivityId.Data4 = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v134 = 1;
          v72 = PsGetCurrentThreadWin32Thread(v70);
          v133 = v72;
          if ( v72 && (*(int *)(v72 + 24) > 0 || *(_DWORD *)(v133 + 48)) )
          {
            EtwActivityIdControl(3u, &pActivityId);
            if ( dword_1C020CB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v118 = v134;
                v144 = &v118;
                v145 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &pActivityId, 0LL, 3u, &pData);
              }
            }
          }
        }
        else
        {
          v133 = 0LL;
        }
        v73 = 0LL;
        while ( 1 )
        {
          v74 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v74 )
            v73 = *v74;
          v77 = (PVOID)PsGetCurrentProcess(v76, v75);
          if ( v77 )
          {
            if ( v77 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v79, v78) == gpepCSRSS && v73 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v73 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v133
          && (*(_DWORD *)(v133 + 48) || *(int *)(v133 + 24) > 0) )
        {
          *(_DWORD *)(v133 + 44) = 1;
          *(GUID *)(v133 + 28) = pActivityId;
          if ( dword_1C020CB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v119 = v134;
              v147 = &v119;
              v148 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &pActivityId, 0LL, 3u, &v146);
              v80 = dword_1C020CB50;
            }
            if ( v80 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v120 = v134;
              v150 = &v120;
              v151 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &pActivityId, 0LL, 3u, &v149);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v73;
        gbValidateHandleForIL = 1;
        if ( IsValidGuiThreadContext() )
        {
          v85 = (PERESOURCE *)GetDomainLockRef(12LL, v81, v82);
          if ( v85 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v84, v83, v86);
          if ( ExIsResourceAcquiredExclusiveLite(*v85) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v88, v87, v89);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*v85);
          while ( 1 )
          {
            v98 = (__int64 *)gpducstulHead;
            if ( !gpducstulHead )
              break;
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
            v93 = *v98;
            v98[2] = 0LL;
            if ( !*(_DWORD *)(v93 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v91, v90, v92);
            v96 = (PERESOURCE *)GetDomainLockRef(12LL, v90, v92);
            if ( v96 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v95, v94, v97);
            ExReleaseResourceAndLeaveCriticalRegion(*v96);
            HMUnlockObject(*v98);
            tagDomLock::LockExclusive(v96);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v85);
        }
      }
      v130 = 16;
      v131 = 16;
      if ( (int)IsxxxSendMessageBSMSupported() < 0 )
        goto LABEL_31;
      v17 = 536LL;
      v16 = 10LL;
      goto LABEL_38;
  }
  if ( v6 != 3 )
  {
    v8 = (unsigned int)(v6 - 4);
    switch ( v6 )
    {
      case 4:
        goto LABEL_11;
      case 5:
        if ( gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(v6 - 5), v2, v4);
        if ( gfSwitchInProgress )
          goto LABEL_31;
        HIDWORD(InputBuffer) = v5;
        PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)v5);
        if ( !gProtocolType && byte_1C0211F28 && !dword_1C02127CC && (int)IsPowerOffGdiSupported() >= 0 )
          PowerOffGdi();
        if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 || HIDWORD(InputBuffer) == 17 )
          goto LABEL_31;
        v65 = 2LL;
LABEL_105:
        SetTimerCoalescingTolerance(v65);
        goto LABEL_31;
      case 6:
        if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 2LL) )
          EtwTraceIdleActionExpiration(1LL, (unsigned int)giScreenSaveTimeOutMs);
        if ( gPowerTransitionsState
          || (*(_DWORD *)gpsi & 0x200) != 0
          && (GlobalTickCount = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 1LL),
              GlobalTickCount != CInputGlobals::GetLastInputTime(gpInputGlobals)) )
        {
          if ( !(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets )
          {
            if ( gppiScreenSaver )
            {
              v67 = *(_DWORD *)(gppiScreenSaver + 12);
              if ( (v67 & 0x400000) == 0 )
              {
                *(_DWORD *)(gppiScreenSaver + 12) = v67 | 0x400000;
                if ( (int)IsSetForegroundPrioritySupported() >= 0 )
                {
                  v68 = *(_QWORD *)(gppiScreenSaver + 328);
                  if ( v68 )
                    SetForegroundPriority(v68, 1LL);
                }
              }
            }
            else if ( gpqForeground
                   && *(_QWORD *)(gpqForeground + 128)
                   && (int)IsIsHungWindowSupported() >= 0
                   && !(unsigned int)IsHungWindow(*(_QWORD *)(gpqForeground + 128)) )
            {
              if ( (*(_DWORD *)gpsi & 0x200) != 0 && (int)IsStartScreenSaverSupported() >= 0 )
                StartScreenSaver(1LL);
              _PostMessage(*(_QWORD *)(gpqForeground + 128), 274LL, 61760LL, (*(_DWORD *)gpsi >> 9) & 1);
            }
            else if ( (int)IsStartScreenSaverSupported() >= 0 )
            {
              StartScreenSaver(0LL);
            }
          }
        }
        goto LABEL_31;
      case 7:
        if ( gfSwitchInProgress || dword_1C02127D0 || !gPowerTransitionsState )
          goto LABEL_31;
        PowerDimMonitor();
        if ( !gProtocolType )
          UpdateDisplayState(PowerMonitorDim, MonitorRequestReasonUnknown, 1, v64);
        if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
          goto LABEL_31;
        v65 = 1LL;
        goto LABEL_105;
    }
LABEL_252:
    v13 = -1073741822;
    goto LABEL_32;
  }
  v130 = 16;
  v131 = 16;
  if ( (int)IsxxxSendMessageBSMSupported() >= 0 )
  {
    v16 = 0LL;
    v17 = 30LL;
LABEL_38:
    xxxSendMessageBSM(0LL, v17, v16);
  }
LABEL_31:
  v13 = 0;
LABEL_32:
  v14 = v127;
LABEL_33:
  EtwTraceStopPowerEventCalloutWorker(v14, v5, v13);
  return v13;
}
