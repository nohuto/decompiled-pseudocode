/*
 * XREFs of RawInputThread @ 0x1C001CA60
 * Callers:
 *     <none>
 * Callees:
 *     xxxRegisterForDeviceClassNotifications @ 0x1C0007948 (xxxRegisterForDeviceClassNotifications.c)
 *     TransitionCursorSuppressionState @ 0x1C000A5B0 (TransitionCursorSuppressionState.c)
 *     xxxRemoveQueueCompletion @ 0x1C000DE4C (xxxRemoveQueueCompletion.c)
 *     SetRITTimer @ 0x1C0019A20 (SetRITTimer.c)
 *     TimersProc @ 0x1C001D6A0 (TimersProc.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxReceiveMessage @ 0x1C0049610 (xxxReceiveMessage.c)
 *     _RegisterHotKey @ 0x1C006A3D4 (_RegisterHotKey.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00B79CC (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00B9ECC (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C00BACB0 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C00E48A0 (--0InkProcessor@@AEAA@XZ.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0103D58 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1C0103E8C (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     CheckPointerDeviceConfiguration @ 0x1C0107A6C (CheckPointerDeviceConfiguration.c)
 *     CreatePointerDeviceProcessEvents @ 0x1C010AA20 (CreatePointerDeviceProcessEvents.c)
 *     LeaveEditionCrit @ 0x1C010CB20 (LeaveEditionCrit.c)
 *     SetWindowArrangementHotKeys @ 0x1C010D7AC (SetWindowArrangementHotKeys.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C010EC48 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C0110F5C (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     InitKeyboard @ 0x1C0111170 (InitKeyboard.c)
 *     xxxClientEnableMMCSS @ 0x1C011162C (xxxClientEnableMMCSS.c)
 *     ?_GetDigitizerFlags@@YAKXZ @ 0x1C0112148 (-_GetDigitizerFlags@@YAKXZ.c)
 *     SetDebugHotKeys @ 0x1C0112744 (SetDebugHotKeys.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x1C011302C (-InitTimerPowerSaving@@YAXXZ.c)
 *     RitTakeOver @ 0x1C0113294 (RitTakeOver.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C0113654 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     RequestModeSwitchOnPowerUp @ 0x1C0138A60 (RequestModeSwitchOnPowerUp.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0196A54 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C01A6490 (-RegisterTabletButtonHandler@@YAXXZ.c)
 *     UserSetTimer @ 0x1C02032E8 (UserSetTimer.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned int __fastcall RawInputThread(__int64 *a1)
{
  unsigned __int16 v2; // di
  __int64 RemoteContext; // r14
  __int64 v4; // rsi
  InkProcessor *v5; // rax
  const GUID *v6; // r8
  const GUID *v7; // r9
  const GUID *v8; // rax
  struct _KEVENT *v9; // rdx
  __int64 ProcessWin32Process; // rax
  __int64 v11; // r8
  struct _KTIMER *v12; // rax
  struct _KTIMER *v13; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v15; // rcx
  NTSTATUS v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  bool v21; // zf
  CBaseInput **v22; // rcx
  char DigitizerFlags; // al
  char v24; // bl
  int v25; // ebx
  struct InteractiveControlManager *v26; // rbx
  const GUID *v27; // r8
  const GUID *v28; // r9
  unsigned __int16 *v29; // rax
  int v30; // ecx
  int Settings; // eax
  const GUID *v32; // r8
  const GUID *v33; // r9
  int v34; // eax
  __int64 i; // r8
  unsigned int result; // eax
  unsigned int v37; // edx
  UINT32 cData[2]; // [rsp+28h] [rbp-E0h]
  LegacyInputDispatcher *v39; // [rsp+48h] [rbp-C0h] BYREF
  char v40; // [rsp+50h] [rbp-B8h] BYREF
  char v41; // [rsp+51h] [rbp-B7h] BYREF
  char v42; // [rsp+52h] [rbp-B6h] BYREF
  char v43; // [rsp+53h] [rbp-B5h] BYREF
  char v44; // [rsp+54h] [rbp-B4h] BYREF
  char v45; // [rsp+55h] [rbp-B3h] BYREF
  char v46; // [rsp+56h] [rbp-B2h] BYREF
  char v47; // [rsp+57h] [rbp-B1h] BYREF
  __int64 v48; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v49[2]; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  int v51; // [rsp+70h] [rbp-98h] BYREF
  int v52; // [rsp+74h] [rbp-94h] BYREF
  PVOID v53; // [rsp+78h] [rbp-90h] BYREF
  PRKEVENT v54; // [rsp+80h] [rbp-88h]
  PVOID Object; // [rsp+88h] [rbp-80h] BYREF
  __int128 v56; // [rsp+90h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  __int128 SystemInformation; // [rsp+B0h] [rbp-58h] BYREF
  int v59; // [rsp+C0h] [rbp-48h]
  struct _UNICODE_STRING v60; // [rsp+C8h] [rbp-40h] BYREF
  void *v61[4]; // [rsp+D8h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR v62; // [rsp+F8h] [rbp-10h] BYREF
  const char *v63; // [rsp+118h] [rbp+10h]
  __int64 v64; // [rsp+120h] [rbp+18h]
  _DWORD *v65; // [rsp+128h] [rbp+20h]
  __int64 v66; // [rsp+130h] [rbp+28h]
  __int64 v67; // [rsp+138h] [rbp+30h]
  _DWORD v68[2]; // [rsp+140h] [rbp+38h] BYREF
  EVENT_DATA_DESCRIPTOR v69; // [rsp+148h] [rbp+40h] BYREF
  const char *v70; // [rsp+168h] [rbp+60h]
  __int64 v71; // [rsp+170h] [rbp+68h]
  int *v72; // [rsp+178h] [rbp+70h]
  __int64 v73; // [rsp+180h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v74; // [rsp+188h] [rbp+80h] BYREF
  const char *v75; // [rsp+1A8h] [rbp+A0h]
  __int64 v76; // [rsp+1B0h] [rbp+A8h]
  unsigned int *v77; // [rsp+1B8h] [rbp+B0h]
  __int64 v78; // [rsp+1C0h] [rbp+B8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C8h] [rbp+C0h] BYREF
  int *v80; // [rsp+1E8h] [rbp+E0h]
  __int64 v81; // [rsp+1F0h] [rbp+E8h]

  v2 = 1;
  v39 = 0LL;
  RemoteContext = GreGetRemoteContext();
  memset(v61, 0, sizeof(v61));
  v4 = *a1;
  gpkthreadRIT = (__int64)KeGetCurrentThread();
  *(_QWORD *)&v56 = PsGetThreadProcessId(KeGetCurrentThread());
  v59 = 16;
  *((_QWORD *)&v56 + 1) = PsGetThreadId(KeGetCurrentThread());
  SystemInformation = v56;
  ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v40);
  InitKeyboard();
  gdwPUDFlags &= ~0x1000u;
  gdwGTERMFlags &= ~1u;
  *(_DWORD *)(gpsi + 1972LL) = 0;
  *(_DWORD *)(gpsi + 2068LL) = 0;
  *(_DWORD *)(gpsi + 2196LL) = 0;
  LeaveEditionCrit();
  if ( !InkProcessor::s_pInstance )
  {
    v5 = (InkProcessor *)Win32AllocPoolZInit(112LL, 1349217865LL);
    v8 = v5 ? (const GUID *)InkProcessor::InkProcessor(v5) : 0LL;
    InkProcessor::s_pInstance = v8;
    if ( !v8 && (unsigned int)pRelatedActivityId > 2 )
    {
      v52 = -1073741801;
      v80 = &v52;
      v81 = 4LL;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, v6, v7, 3u, &pData);
    }
  }
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_123;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v11 = *(_QWORD *)(GetDispInfo() + 96);
  *(_DWORD *)(gpsi + 4960LL) = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 36LL) / 2;
  *(_DWORD *)(gpsi + 4964LL) = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 40LL) / 2;
  gptCursorAsync = *(_QWORD *)(gpsi + 4960LL);
  ClearLogicalCursorPos();
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v41);
  TransitionCursorSuppressionState(10, 1);
  LeaveEditionCrit();
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v42);
  if ( gSessionId != gServiceSessionId )
  {
    cData[0] = 0;
    RegisterHotKey((struct tagWND *)1, *(ULONG_PTR *)cData);
    SetDebugHotKeys();
    SetWinlogonHotKeys();
    SetWindowArrangementHotKeys();
  }
  CInputGlobals::UpdateLastInputTime(
    gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    13LL);
  LeaveEditionCrit();
  v12 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
  gptmrMaster = v12;
  if ( !v12 )
    goto LABEL_123;
  KeInitializeTimer(v12);
  v61[1] = (void *)gptmrMaster;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    v13 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
    gptmrWD = v13;
    if ( !v13 )
      goto LABEL_123;
    KeInitializeTimerEx(v13, SynchronizationTimer);
  }
  v61[2] = (void *)gptmrWD;
  if ( gProtocolType
    && !(unsigned int)DrvEscapeRemoteDrivers(
                        *(_QWORD *)(gpDispInfo + 16LL),
                        gProtocolType,
                        *(_QWORD *)(RemoteContext + 40),
                        2LL,
                        gptmrWD,
                        8) )
  {
    goto LABEL_123;
  }
  if ( gSessionId != gServiceSessionId && !gProtocolType )
  {
    EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v43);
    GetWin32kDriverObject();
    LeaveEditionCrit();
  }
  if ( gSessionId == gServiceSessionId )
    gbFirstConnectionDone = 1;
  if ( gSessionId )
  {
    if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) >= 0 )
    {
      ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
      v9 = (struct _KEVENT *)Object;
      v2 = 2;
      v61[3] = Object;
      v54 = (PRKEVENT)Object;
      goto LABEL_28;
    }
LABEL_123:
    if ( v39 )
      LegacyInputDispatcher::`scalar deleting destructor'(v39, (unsigned int)v9);
    KeSetEvent((PRKEVENT)a1[1], 1, 0);
    return KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  }
  Handle = 0LL;
  if ( PoRequestShutdownEvent(&v61[3]) < 0 )
    goto LABEL_123;
  v9 = (struct _KEVENT *)v61[3];
LABEL_28:
  if ( gSessionId != gServiceSessionId )
  {
    CreatePointerDeviceProcessEvents();
    v9 = (struct _KEVENT *)v61[3];
  }
  if ( !v9 )
    goto LABEL_123;
  CurrentThread = KeGetCurrentThread();
  gpkeRITEvent = v9;
  gptiRit = W32GetThreadWin32Thread(CurrentThread);
  gdwHydraHint |= 0x2000u;
  *(_DWORD *)(gptiRit + 480LL) |= 0x80u;
  v15 = (struct _KEVENT *)a1[1];
  v61[0] = *(void **)(gptiRit + 1400LL);
  KeSetEvent(v15, 1, 0);
  v53 = *(PVOID *)(v4 + 56);
  ObReferenceObjectByPointer(v53, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  do
    v16 = KeWaitForMultipleObjects(v2, &v53, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
  while ( v16 == 1 && (gdwRITWakeReason & 2) == 0 );
  ObfDereferenceObject(v53);
  if ( v16 == 1 && (gdwRITWakeReason & 2) != 0 )
  {
    KeSetEvent(v54, 1, 0);
    InitiateWin32kCleanup();
    ObfDereferenceObject(v54);
    if ( Handle )
      ZwClose(Handle);
    return KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  }
  if ( (unsigned int)GetRITWakeReason(0LL) )
    KeSetEvent(gpkeRITEvent, 1, 0);
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v44);
  if ( !*(_QWORD *)(gptiRit + 448LL) )
    xxxSwitchDesktop(*(_QWORD *)(gptiRit + 608LL), *(_QWORD *)(*(_QWORD *)(gptiRit + 608LL) + 16LL), 0LL, 0LL);
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
      RtlInitUnicodeString(&v60, 0LL);
      v20 = 1;
      v21 = 0;
      while ( v21 )
      {
        if ( (int)CBaseInput::InitializeSensor(gpHidInput) >= 0 )
        {
          v22 = (CBaseInput **)gpHidInput;
LABEL_51:
          CBaseInput::Read(*v22);
        }
LABEL_52:
        v21 = ++v20 == 2;
        if ( v20 > 2 )
          goto LABEL_55;
      }
      if ( v20 != 1 || (int)CBaseInput::InitializeSensor(gpKeyboardSensor) < 0 )
        goto LABEL_52;
      CBaseInput::HandleTSRequest(gpKeyboardSensor, 0LL);
      v22 = (CBaseInput **)gpKeyboardSensor;
      goto LABEL_51;
    }
    xxxRegisterForDeviceClassNotifications(gServiceSessionId, v17, v18, v19);
LABEL_55:
    DigitizerFlags = _GetDigitizerFlags();
    if ( (DigitizerFlags & 0xD) != 0 && DigitizerFlags < 0 )
      RegisterTabletButtonHandler();
    InitTimerPowerSaving();
    WPP_MAIN_CB.Queue.ListEntry.Flink = (struct _LIST_ENTRY *)SetRITTimer(
                                                                (int)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                                                1000,
                                                                (int)xxxHungAppDemon,
                                                                0);
  }
  gbIsRITReady = 1;
  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v24 = 0;
  }
  else
  {
    v24 = 1;
    UserEnterUserCritSec();
  }
  if ( gcSynchronizeTimer != -1 )
    gidSynchronizeTimer = UserSetTimer();
  if ( v24 )
    UserLeaveUserCritSec();
  if ( gbRITAlerted )
    gbRITAlerted = 0;
  LeaveEditionCrit();
  LegacyInputDispatcher::Create(&v39);
  LegacyInputDispatcher::Initialize(v39, 0, 1, 0x40u, 4u, v61);
  CBaseInput::RegisterDispatcherObject(gpKeyboardSensor, v39);
  CBaseInput::RegisterDispatcherObject(gpHidInput, v39);
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v45);
  KeTestAlertThread(0LL);
  TimersProc();
  LeaveEditionCrit();
  while ( 1 )
  {
LABEL_69:
    v25 = LegacyInputDispatcher::WaitAndDispatch(v39);
    if ( !v25 )
    {
      EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v46);
      xxxRemoveQueueCompletion();
      LeaveEditionCrit();
    }
    if ( v25 == 3 )
      break;
    if ( v25 == 2 )
    {
      EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)((char *)&v48 + 3));
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
      else if ( gfRemotingConsole && gConsoleShadowhDev )
      {
        HDXDrvEscape(gConsoleShadowhDev, 1LL, 0LL, 0LL);
      }
      goto LABEL_114;
    }
    if ( ((v25 - 1) & 0xFFFFFEFF) == 0 )
    {
      EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)((char *)&v48 + 4));
      if ( v25 == 1 && gbRITAlerted )
        KeTestAlertThread(0LL);
      TimersProc();
      LeaveEditionCrit();
      v34 = dword_1C0326F58;
      if ( gnRetryReadInput != dword_1C0326F58 )
        v34 = gnRetryReadInput;
      dword_1C0326F58 = v34;
    }
    if ( gspwndAltTab )
    {
      EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)((char *)&v48 + 5));
      for ( i = gptiRit; (*(_BYTE *)(*(_QWORD *)(gptiRit + 440LL) + 6LL) & 0x40) != 0; i = gptiRit )
        xxxReceiveMessage(i);
LABEL_114:
      LeaveEditionCrit();
    }
  }
  KeClearEvent(gpkeRITEvent);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !(unsigned int)GetRITWakeReason(v49) )
        goto LABEL_69;
      if ( v49[0] != 1 )
        break;
      ProcessMouseEvent();
    }
    if ( v49[0] == 2 )
      break;
    switch ( v49[0] )
    {
      case 4u:
        xxxClientEnableMMCSS((*gpsi >> 12) & 1);
        break;
      case 8u:
        EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v47);
        RitTakeOver();
        CBaseInput::RegisterDispatcherObject(gpHidInput, v39);
        goto LABEL_95;
      case 0x10u:
        PrepareForMasterInputThreadTakingOver(v39);
        break;
      case 0x80u:
        EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v48);
        ZwSetEvent(ghDITRITEvent, 0LL);
        goto LABEL_95;
      case 0x20u:
        EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)((char *)&v48 + 1));
        RequestModeSwitchOnPowerUp();
        goto LABEL_95;
      case 0x40u:
        EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)((char *)&v48 + 2));
        CheckPointerDeviceConfiguration();
        v26 = InteractiveControlManager::Instance();
        v49[1] = 0;
        if ( dword_1C031C7D0 > 4u )
        {
          v63 = "InteractiveControlManager::GetExternalParameters entry";
          v64 = 55LL;
          v29 = *(unsigned __int16 **)(gptiCurrent + 488LL);
          v65 = v68;
          v66 = 2LL;
          v30 = *v29;
          v67 = *((_QWORD *)v29 + 1);
          v68[0] = v30;
          v68[1] = 0;
          TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3749, v27, v28, 5u, &v62);
        }
        Settings = InteractiveControlSettings::ReadSettings((struct InteractiveControlManager *)((char *)v26 + 84));
        v49[1] = Settings;
        if ( Settings < 0 && dword_1C031C7D0 > 2u )
        {
          v51 = Settings;
          v70 = "Function failed.";
          v72 = &v51;
          v71 = 17LL;
          v73 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, v32, v33, 4u, &v69);
        }
        if ( dword_1C031C7D0 > 4u )
        {
          v76 = 54LL;
          v75 = "InteractiveControlManager::GetExternalParameters exit";
          v77 = &v49[1];
          v78 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3860, v32, v33, 4u, &v74);
        }
        TraceLoggingMouseWheelRoutingValueAtStartup();
LABEL_95:
        LeaveEditionCrit();
        break;
    }
  }
  InitiateWin32kCleanup();
  if ( gSessionId != gServiceSessionId )
  {
    EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)((char *)&v48 + 6));
    gpkeRITEvent = 0LL;
    ObfDereferenceObject(v61[3]);
    LeaveEditionCrit();
  }
  if ( Handle )
    ZwClose(Handle);
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)((char *)&v48 + 7));
  CleanupSensorExplicitly(1LL);
  if ( !gbDIT )
    CleanupSensorExplicitly(2LL);
  result = LeaveEditionCrit();
  if ( v39 )
    return (unsigned int)LegacyInputDispatcher::`scalar deleting destructor'(v39, v37);
  return result;
}
