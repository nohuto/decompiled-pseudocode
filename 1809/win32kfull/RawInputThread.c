/*
 * XREFs of RawInputThread @ 0x1C00D2920
 * Callers:
 *     <none>
 * Callees:
 *     xxxRegisterForDeviceClassNotifications @ 0x1C0008128 (xxxRegisterForDeviceClassNotifications.c)
 *     xxxReceiveMessage @ 0x1C003156C (xxxReceiveMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _RegisterHotKey @ 0x1C00A50DC (_RegisterHotKey.c)
 *     xxxRemoveQueueCompletion @ 0x1C00BC4C0 (xxxRemoveQueueCompletion.c)
 *     TransitionCursorSuppressionState @ 0x1C00BCFE0 (TransitionCursorSuppressionState.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1C00CFB30 (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     TimersProc @ 0x1C00D37B0 (TimersProc.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     ?_GetDigitizerFlags@@YAKXZ @ 0x1C00EA508 (-_GetDigitizerFlags@@YAKXZ.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EADEC (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00EE2A0 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C01086E4 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     SetRITTimer @ 0x1C01153C0 (SetRITTimer.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123AA0 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0123B90 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     CheckPointerDeviceConfiguration @ 0x1C01287C0 (CheckPointerDeviceConfiguration.c)
 *     CreatePointerDeviceProcessEvents @ 0x1C012C070 (CreatePointerDeviceProcessEvents.c)
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C012EDE0 (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C0131290 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     LeaveEditionCrit @ 0x1C0131580 (LeaveEditionCrit.c)
 *     xxxClientEnableMMCSS @ 0x1C0132C94 (xxxClientEnableMMCSS.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C0133074 (--0InkProcessor@@AEAA@XZ.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C0133FF4 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     InitKeyboard @ 0x1C01342F8 (InitKeyboard.c)
 *     SetDebugHotKeys @ 0x1C0135B3C (SetDebugHotKeys.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x1C01368FC (-InitTimerPowerSaving@@YAXXZ.c)
 *     RitTakeOver @ 0x1C0136B60 (RitTakeOver.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C0136DE0 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     RequestModeSwitchOnPowerUp @ 0x1C0159110 (RequestModeSwitchOnPowerUp.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C01B83CC (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C01C8458 (-RegisterTabletButtonHandler@@YAXXZ.c)
 *     UserSetTimer @ 0x1C022BCFC (UserSetTimer.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned int __fastcall RawInputThread(__int64 *a1)
{
  __int64 RemoteContext; // r14
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  InkProcessor *v6; // rax
  const GUID *v7; // rax
  struct _KEVENT *v8; // rdx
  __int64 ProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KTIMER *v19; // rax
  struct _KTIMER *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  ULONG v24; // edi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v26; // rcx
  NTSTATUS v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // ebx
  bool v32; // zf
  CBaseInput **v33; // rcx
  char DigitizerFlags; // al
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  char v38; // bl
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // ebx
  const CHAR *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  struct InteractiveControlManager *v51; // rbx
  unsigned __int16 *v52; // rax
  int v53; // ecx
  int Settings; // eax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  unsigned int result; // eax
  unsigned int v69; // edx
  UINT32 cData[2]; // [rsp+28h] [rbp-E0h]
  LegacyInputDispatcher *v71; // [rsp+48h] [rbp-C0h] BYREF
  char v72; // [rsp+50h] [rbp-B8h] BYREF
  char v73; // [rsp+51h] [rbp-B7h] BYREF
  char v74; // [rsp+52h] [rbp-B6h] BYREF
  char v75; // [rsp+53h] [rbp-B5h] BYREF
  char v76; // [rsp+54h] [rbp-B4h] BYREF
  char v77; // [rsp+55h] [rbp-B3h] BYREF
  char v78; // [rsp+56h] [rbp-B2h] BYREF
  char v79; // [rsp+57h] [rbp-B1h] BYREF
  __int64 v80; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v81[2]; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  int v83; // [rsp+70h] [rbp-98h] BYREF
  int v84; // [rsp+74h] [rbp-94h] BYREF
  PVOID v85; // [rsp+78h] [rbp-90h] BYREF
  PRKEVENT v86; // [rsp+80h] [rbp-88h]
  PVOID Object; // [rsp+88h] [rbp-80h] BYREF
  __int128 v88; // [rsp+90h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  __int128 SystemInformation; // [rsp+B0h] [rbp-58h] BYREF
  int v91; // [rsp+C0h] [rbp-48h]
  struct _UNICODE_STRING v92; // [rsp+C8h] [rbp-40h] BYREF
  void *v93[4]; // [rsp+D8h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR v94; // [rsp+F8h] [rbp-10h] BYREF
  const char *v95; // [rsp+118h] [rbp+10h]
  __int64 v96; // [rsp+120h] [rbp+18h]
  _DWORD *v97; // [rsp+128h] [rbp+20h]
  __int64 v98; // [rsp+130h] [rbp+28h]
  __int64 v99; // [rsp+138h] [rbp+30h]
  _DWORD v100[2]; // [rsp+140h] [rbp+38h] BYREF
  EVENT_DATA_DESCRIPTOR v101; // [rsp+148h] [rbp+40h] BYREF
  const char *v102; // [rsp+168h] [rbp+60h]
  __int64 v103; // [rsp+170h] [rbp+68h]
  int *v104; // [rsp+178h] [rbp+70h]
  __int64 v105; // [rsp+180h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v106; // [rsp+188h] [rbp+80h] BYREF
  const char *v107; // [rsp+1A8h] [rbp+A0h]
  __int64 v108; // [rsp+1B0h] [rbp+A8h]
  unsigned int *v109; // [rsp+1B8h] [rbp+B0h]
  __int64 v110; // [rsp+1C0h] [rbp+B8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C8h] [rbp+C0h] BYREF
  int *v112; // [rsp+1E8h] [rbp+E0h]
  __int64 v113; // [rsp+1F0h] [rbp+E8h]
  EVENT_DATA_DESCRIPTOR v114; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+218h] [rbp+110h] BYREF

  v71 = 0LL;
  RemoteContext = GreGetRemoteContext();
  memset(v93, 0, sizeof(v93));
  v3 = *a1;
  gpkthreadRIT = (__int64)KeGetCurrentThread();
  *(_QWORD *)&v88 = PsGetThreadProcessId(KeGetCurrentThread());
  v91 = 16;
  *((_QWORD *)&v88 + 1) = PsGetThreadId(KeGetCurrentThread());
  SystemInformation = v88;
  ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v72);
  InitKeyboard();
  gdwPUDFlags &= ~0x1000u;
  gdwGTERMFlags &= ~1u;
  *(_DWORD *)(gpsi + 1972LL) = 0;
  *(_DWORD *)(gpsi + 2068LL) = 0;
  *(_DWORD *)(gpsi + 2196LL) = 0;
  LeaveEditionCrit(gpsi, v4, v5);
  if ( !InkProcessor::s_pInstance )
  {
    v6 = (InkProcessor *)Win32AllocPoolZInit(112LL, 1349217865LL);
    v7 = v6 ? (const GUID *)InkProcessor::InkProcessor(v6) : 0LL;
    InkProcessor::s_pInstance = v7;
    if ( !v7 && dword_1C030C390 > 2u )
    {
      v84 = -1073741801;
      v112 = &v84;
      v113 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
    }
  }
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_143;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v12 = *(_QWORD *)(GetDispInfo(v11, v10) + 96);
  *(_DWORD *)(gpsi + 4960LL) = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 36LL) / 2;
  *(_DWORD *)(gpsi + 4964LL) = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 40LL) / 2;
  gptCursorAsync = *(struct tagPOINT *const *)(gpsi + 4960LL);
  ClearLogicalCursorPos();
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v73);
  TransitionCursorSuppressionState(0xAu, 1);
  LeaveEditionCrit(v14, v13, v15);
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v74);
  if ( gSessionId != gServiceSessionId )
  {
    cData[0] = 0;
    RegisterHotKey((struct tagWND *)1, 0LL, 4294967289LL, 8LL, *(ULONG_PTR *)cData);
    SetDebugHotKeys();
    SetWinlogonHotKeys();
    SetWindowArrangementHotKeys();
  }
  CInputGlobals::UpdateLastInputTime(
    gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    13LL);
  LeaveEditionCrit(v17, v16, v18);
  v19 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
  gptmrMaster = v19;
  if ( !v19 )
    goto LABEL_143;
  KeInitializeTimer(v19);
  v93[1] = (void *)gptmrMaster;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    v20 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
    gptmrWD = v20;
    if ( !v20 )
      goto LABEL_143;
    KeInitializeTimerEx(v20, SynchronizationTimer);
  }
  v93[2] = (void *)gptmrWD;
  if ( gProtocolType
    && !(unsigned int)DrvEscapeRemoteDrivers(
                        *(_QWORD *)(gpDispInfo + 16LL),
                        gProtocolType,
                        *(_QWORD *)(RemoteContext + 40),
                        2LL,
                        gptmrWD,
                        8) )
  {
    goto LABEL_143;
  }
  if ( gSessionId != gServiceSessionId && !gProtocolType )
  {
    EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v75);
    GetWin32kDriverObject();
    LeaveEditionCrit(v22, v21, v23);
  }
  if ( gSessionId == gServiceSessionId )
    gbFirstConnectionDone = 1;
  if ( gSessionId )
  {
    if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) >= 0 )
    {
      ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
      v8 = (struct _KEVENT *)Object;
      v24 = 2;
      v93[3] = Object;
      v86 = (PRKEVENT)Object;
      goto LABEL_28;
    }
LABEL_143:
    if ( v71 )
      LegacyInputDispatcher::`scalar deleting destructor'(v71, (unsigned int)v8);
    KeSetEvent((PRKEVENT)a1[1], 1, 0);
    return KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  }
  Handle = 0LL;
  v24 = 1;
  if ( PoRequestShutdownEvent(&v93[3]) < 0 )
    goto LABEL_143;
  v8 = (struct _KEVENT *)v93[3];
LABEL_28:
  if ( gSessionId != gServiceSessionId )
  {
    CreatePointerDeviceProcessEvents();
    v8 = (struct _KEVENT *)v93[3];
  }
  if ( !v8 )
    goto LABEL_143;
  CurrentThread = KeGetCurrentThread();
  gpkeRITEvent = v8;
  gptiRit = W32GetThreadWin32Thread((__int64)CurrentThread, (__int64)v8);
  gdwHydraHint |= 0x2000u;
  *(_DWORD *)(gptiRit + 488LL) |= 0x80u;
  v26 = (struct _KEVENT *)a1[1];
  v93[0] = *(void **)(gptiRit + 1392LL);
  KeSetEvent(v26, 1, 0);
  v85 = *(PVOID *)(v3 + 56);
  ObReferenceObjectByPointer(v85, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  do
    v27 = KeWaitForMultipleObjects(v24, &v85, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
  while ( v27 == 1 && (gdwRITWakeReason & 2) == 0 );
  ObfDereferenceObject(v85);
  if ( v27 == 1 && (gdwRITWakeReason & 2) != 0 )
  {
    KeSetEvent(v86, 1, 0);
    InitiateWin32kCleanup();
    ObfDereferenceObject(v86);
    if ( Handle )
      ZwClose(Handle);
    return KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  }
  if ( (unsigned int)GetRITWakeReason(0LL) )
    KeSetEvent(gpkeRITEvent, 1, 0);
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v76);
  if ( !*(_QWORD *)(gptiRit + 456LL) )
    xxxSwitchDesktop(*(_QWORD *)(gptiRit + 616LL), *(_QWORD *)(*(_QWORD *)(gptiRit + 616LL) + 16LL), 0LL, 0LL);
  KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  if ( gSessionId == gServiceSessionId )
  {
    CBaseInput::InitializeSensor(gpHidInput);
    CBaseInput::InitializeSensor(gpKeyboardSensor);
  }
  else
  {
    if ( gProtocolType )
    {
      RtlInitUnicodeString(&v92, 0LL);
      v31 = 1;
      v32 = 0;
      while ( v32 )
      {
        if ( (int)CBaseInput::InitializeSensor(gpHidInput) >= 0 )
        {
          v33 = (CBaseInput **)gpHidInput;
LABEL_51:
          CBaseInput::Read(*v33);
        }
LABEL_52:
        v32 = ++v31 == 2;
        if ( v31 > 2 )
          goto LABEL_55;
      }
      if ( v31 != 1 || (int)CBaseInput::InitializeSensor(gpKeyboardSensor) < 0 )
        goto LABEL_52;
      CBaseInput::HandleTSRequest(gpKeyboardSensor, 0LL);
      v33 = (CBaseInput **)gpKeyboardSensor;
      goto LABEL_51;
    }
    xxxRegisterForDeviceClassNotifications(gServiceSessionId, v28, v29, v30);
LABEL_55:
    DigitizerFlags = _GetDigitizerFlags();
    if ( (DigitizerFlags & 0xD) != 0 && DigitizerFlags < 0 )
      RegisterTabletButtonHandler();
    InitTimerPowerSaving();
    WPP_MAIN_CB.Queue.ListEntry.Flink = (struct _LIST_ENTRY *)SetRITTimer(
                                                                WPP_MAIN_CB.Queue.ListEntry.Flink,
                                                                1000LL,
                                                                xxxHungAppDemon,
                                                                0LL);
  }
  gbIsRITReady = 1;
  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v38 = 0;
  }
  else
  {
    v38 = 1;
    UserEnterUserCritSec();
  }
  if ( gcSynchronizeTimer != -1 )
    gidSynchronizeTimer = UserSetTimer();
  if ( v38 )
    UserLeaveUserCritSec();
  if ( gbRITAlerted )
    gbRITAlerted = 0;
  LeaveEditionCrit(v36, v35, v37);
  LegacyInputDispatcher::Create(&v71);
  LegacyInputDispatcher::Initialize(v71, 0, 1, 0x40u, 4u, v93);
  CBaseInput::RegisterDispatcherObject(gpKeyboardSensor, v71);
  CBaseInput::RegisterDispatcherObject(gpHidInput, v71);
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v77);
  KeTestAlertThread(0LL);
  TimersProc();
  LeaveEditionCrit(v40, v39, v41);
  while ( 1 )
  {
LABEL_69:
    v42 = LegacyInputDispatcher::WaitAndDispatch(v71);
    if ( !v42 )
    {
      EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v78);
      xxxRemoveQueueCompletion();
      LeaveEditionCrit(v44, v43, v45);
    }
    if ( v42 == 3 )
      break;
    if ( v42 == 2 )
    {
      EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)((char *)&v80 + 3));
      v57 = gProtocolType;
      if ( gProtocolType )
      {
        DrvEscapeRemoteDrivers(
          *(_QWORD *)(gpDispInfo + 16LL),
          gProtocolType,
          *(_QWORD *)(RemoteContext + 40),
          1LL,
          0LL,
          0);
      }
      else if ( gfRemotingConsole )
      {
        v55 = gConsoleShadowhDev;
        if ( gConsoleShadowhDev )
          HDXDrvEscape(gConsoleShadowhDev, 1LL, 0LL, 0LL);
      }
      goto LABEL_134;
    }
    if ( ((v42 - 1) & 0xFFFFFEFF) == 0 )
    {
      EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)((char *)&v80 + 4));
      if ( v42 == 1 && gbRITAlerted )
        KeTestAlertThread(0LL);
      TimersProc();
      LeaveEditionCrit(v59, v58, v60);
      v61 = dword_1C0317608;
      if ( gnRetryReadInput != dword_1C0317608 )
        v61 = gnRetryReadInput;
      dword_1C0317608 = v61;
    }
    if ( gspwndAltTab )
    {
      EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)((char *)&v80 + 5));
      v56 = gptiRit;
      LOBYTE(v57) = *(_BYTE *)(*(_QWORD *)(gptiRit + 448LL) + 6LL);
      if ( (v57 & 0x40) != 0 )
      {
        do
        {
          xxxReceiveMessage(v56);
          v56 = gptiRit;
        }
        while ( (*(_BYTE *)(*(_QWORD *)(gptiRit + 448LL) + 6LL) & 0x40) != 0 );
      }
LABEL_134:
      LeaveEditionCrit(v55, v57, v56);
    }
  }
  KeClearEvent(gpkeRITEvent);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !(unsigned int)GetRITWakeReason(v81) )
        goto LABEL_69;
      v46 = v81[0];
      if ( dword_1C030D340 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 2uLL) )
      {
        switch ( v46 )
        {
          case 1u:
            v47 = "Mouse";
            break;
          case 2u:
            v47 = "Shutdown";
            break;
          case 4u:
            v47 = "EnableMMCSS";
            break;
          case 8u:
            v47 = "RitTakeover";
            break;
          case 0x10u:
            v47 = "DitTakeover";
            break;
          case 0x20u:
            v47 = "ConfigUpdate";
            break;
          case 0x40u:
            v47 = "GetUserProfile";
            break;
          case 0x80u:
            v47 = "DitInControl";
            break;
          default:
            v47 = "UNKNOWN";
            break;
        }
        TlgCreateSz(&pDesc, v47);
        TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D49D9, 0LL, 0LL, 3u, &v114);
      }
      if ( v46 != 1 )
        break;
      ProcessMouseEvent();
    }
    if ( v46 == 2 )
      break;
    switch ( v46 )
    {
      case 4u:
        xxxClientEnableMMCSS((*gpsi >> 12) & 1);
        break;
      case 8u:
        EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v79);
        RitTakeOver();
        CBaseInput::RegisterDispatcherObject(gpHidInput, v71);
        goto LABEL_115;
      case 0x10u:
        PrepareForMasterInputThreadTakingOver(v71);
        break;
      case 0x80u:
        EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v80);
        ZwSetEvent(ghDITRITEvent, 0LL);
        goto LABEL_115;
      case 0x20u:
        EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)((char *)&v80 + 1));
        RequestModeSwitchOnPowerUp();
        goto LABEL_115;
      case 0x40u:
        EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)((char *)&v80 + 2));
        CheckPointerDeviceConfiguration();
        v51 = InteractiveControlManager::Instance();
        v81[1] = 0;
        if ( dword_1C030C400 > 4u )
        {
          v95 = "InteractiveControlManager::GetExternalParameters entry";
          v96 = 55LL;
          v52 = *(unsigned __int16 **)(gptiCurrent + 496LL);
          v97 = v100;
          v98 = 2LL;
          v53 = *v52;
          v99 = *((_QWORD *)v52 + 1);
          v100[0] = v53;
          v100[1] = 0;
          TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D61FB, 0LL, 0LL, 5u, &v94);
        }
        Settings = InteractiveControlSettings::ReadSettings((struct InteractiveControlManager *)((char *)v51 + 84));
        v81[1] = Settings;
        if ( Settings < 0 && dword_1C030C400 > 2u )
        {
          v83 = Settings;
          v102 = "Function failed.";
          v104 = &v83;
          v103 = 17LL;
          v105 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6152, 0LL, 0LL, 4u, &v101);
        }
        if ( dword_1C030C400 > 4u )
        {
          v108 = 54LL;
          v107 = "InteractiveControlManager::GetExternalParameters exit";
          v109 = &v81[1];
          v110 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D60DF, 0LL, 0LL, 4u, &v106);
        }
        TraceLoggingMouseWheelRoutingValueAtStartup();
LABEL_115:
        LeaveEditionCrit(v49, v48, v50);
        break;
    }
  }
  InitiateWin32kCleanup();
  if ( gSessionId != gServiceSessionId )
  {
    EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)((char *)&v80 + 6));
    gpkeRITEvent = 0LL;
    ObfDereferenceObject(v93[3]);
    LeaveEditionCrit(v63, v62, v64);
  }
  if ( Handle )
    ZwClose(Handle);
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)((char *)&v80 + 7));
  CleanupSensorExplicitly(1LL);
  if ( !gbDIT )
    CleanupSensorExplicitly(2LL);
  result = LeaveEditionCrit(v66, v65, v67);
  if ( v71 )
    return (unsigned int)LegacyInputDispatcher::`scalar deleting destructor'(v71, v69);
  return result;
}
