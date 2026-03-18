/*
 * XREFs of RawInputThread @ 0x1C0077DE0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRegisterForDeviceClassNotifications @ 0x1C000A68C (xxxRegisterForDeviceClassNotifications.c)
 *     xxxRemoveQueueCompletion @ 0x1C000DEEC (xxxRemoveQueueCompletion.c)
 *     xxxReceiveMessage @ 0x1C003F6A0 (xxxReceiveMessage.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     InitKeyboard @ 0x1C0077068 (InitKeyboard.c)
 *     SetDebugHotKeys @ 0x1C007716C (SetDebugHotKeys.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C0077200 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C00774EC (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     CreatePointerDeviceProcessEvents @ 0x1C0077540 (CreatePointerDeviceProcessEvents.c)
 *     ?_GetDigitizerFlags@@YAKXZ @ 0x1C0077984 (-_GetDigitizerFlags@@YAKXZ.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x1C0077ABC (-InitTimerPowerSaving@@YAXXZ.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C0077B24 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     CheckPointerDeviceConfiguration @ 0x1C0077BFC (CheckPointerDeviceConfiguration.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C0077D6C (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     TimersProc @ 0x1C0078D30 (TimersProc.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1C007919C (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     xxxClientEnableMMCSS @ 0x1C0079254 (xxxClientEnableMMCSS.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0079528 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0079618 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C0079944 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C00799C4 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C007A04C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C007C910 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     _RegisterHotKey @ 0x1C008817C (_RegisterHotKey.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00E95D8 (_TlgCreateSz.c)
 *     SetRITTimer @ 0x1C00F8880 (SetRITTimer.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C0118530 (--0InkProcessor@@AEAA@XZ.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 *     TransitionCursorSuppressionState @ 0x1C013ACC0 (TransitionCursorSuppressionState.c)
 *     RequestModeSwitchOnPowerUp @ 0x1C0161B28 (RequestModeSwitchOnPowerUp.c)
 *     RitTakeOver @ 0x1C01622EC (RitTakeOver.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?SetPenHotKeys@@YAXXZ @ 0x1C0164CC4 (-SetPenHotKeys@@YAXXZ.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C01DB834 (-RegisterTabletButtonHandler@@YAXXZ.c)
 *     UserSetTimer @ 0x1C02445F0 (UserSetTimer.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RawInputThread(__int64 *a1)
{
  __int64 RemoteContext; // r14
  __int64 v3; // rsi
  InkProcessor *v4; // rax
  InkProcessor *v5; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct _KTIMER *v12; // rax
  struct _KTIMER *v13; // rax
  __int64 v14; // rcx
  struct _KEVENT *v15; // r8
  ULONG v16; // edi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v18; // rcx
  NTSTATUS v19; // ebx
  unsigned int v20; // ebx
  bool v21; // zf
  CBaseInput **v22; // rcx
  char DigitizerFlags; // al
  __int64 v24; // rcx
  char v25; // bl
  int v26; // ebx
  __int64 v27; // rcx
  unsigned int v28; // ebx
  const CHAR *v29; // rdx
  __int64 v30; // rcx
  struct InteractiveControlManager *v31; // rbx
  unsigned __int16 *v32; // rax
  int v33; // ecx
  int Settings; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned int v40; // edx
  unsigned int v41; // edx
  UINT32 cData[2]; // [rsp+28h] [rbp-E0h]
  LegacyInputDispatcher *v43; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v44[2]; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  int v46; // [rsp+60h] [rbp-A8h] BYREF
  int v47; // [rsp+64h] [rbp-A4h] BYREF
  PVOID v48; // [rsp+68h] [rbp-A0h] BYREF
  PRKEVENT v49; // [rsp+70h] [rbp-98h]
  PVOID Object; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  __int128 SystemInformation; // [rsp+90h] [rbp-78h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-68h]
  __int128 v54; // [rsp+A8h] [rbp-60h]
  struct _UNICODE_STRING v55; // [rsp+B8h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR v56; // [rsp+C8h] [rbp-40h] BYREF
  const char *v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  _DWORD *v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  __int64 v61; // [rsp+108h] [rbp+0h]
  _DWORD v62[2]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v63[10]; // [rsp+118h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR v64; // [rsp+168h] [rbp+60h] BYREF
  const char *v65; // [rsp+188h] [rbp+80h]
  __int64 v66; // [rsp+190h] [rbp+88h]
  int *v67; // [rsp+198h] [rbp+90h]
  __int64 v68; // [rsp+1A0h] [rbp+98h]
  EVENT_DATA_DESCRIPTOR v69; // [rsp+1A8h] [rbp+A0h] BYREF
  const char *v70; // [rsp+1C8h] [rbp+C0h]
  __int64 v71; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v72; // [rsp+1D8h] [rbp+D0h]
  __int64 v73; // [rsp+1E0h] [rbp+D8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1E8h] [rbp+E0h] BYREF
  int *v75; // [rsp+208h] [rbp+100h]
  __int64 v76; // [rsp+210h] [rbp+108h]
  EVENT_DATA_DESCRIPTOR v77; // [rsp+218h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+238h] [rbp+130h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RemoteContext = GreGetRemoteContext();
  v43 = 0LL;
  SystemInformation = 0uLL;
  v53 = 0LL;
  memset(v63, 0, sizeof(v63));
  SetThreadName(-2LL, L"Win32k Raw Input Thread");
  v3 = *a1;
  *(_QWORD *)&v54 = PsGetThreadProcessId(KeGetCurrentThread());
  LODWORD(v53) = 16;
  *((_QWORD *)&v54 + 1) = PsGetThreadId(KeGetCurrentThread());
  SystemInformation = v54;
  ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterCrit(0LL, 1LL);
  InitKeyboard();
  gdwPUDFlags &= ~0x1000u;
  gdwGTERMFlags &= ~1u;
  *(_DWORD *)(gpsi + 1972LL) = 0;
  *(_DWORD *)(gpsi + 2068LL) = 0;
  *(_DWORD *)(gpsi + 2196LL) = 0;
  UserSessionSwitchLeaveCrit(gpsi);
  if ( !InkProcessor::s_pInstance )
  {
    v4 = (InkProcessor *)Win32AllocPoolZInit(112LL, 1349217865LL);
    v5 = v4 ? InkProcessor::InkProcessor(v4) : 0LL;
    InkProcessor::s_pInstance = v5;
    if ( !v5 && dword_1C031F298 > 2u )
    {
      v46 = -1073741801;
      v75 = &v46;
      v76 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &pData);
    }
  }
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_140;
  v63[6] = CRitTimerScanWakeSystem::ritTimerScanWakeEvent;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v9 = *(_QWORD *)(GetDispInfo(v8, v7) + 96);
  *(_DWORD *)(gpsi + 4960LL) = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 36LL) / 2;
  *(_DWORD *)(gpsi + 4964LL) = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 40LL) / 2;
  gptCursorAsync = *(struct tagPOINT *const *)(gpsi + 4960LL);
  ClearLogicalCursorPos();
  EnterCrit(0LL, 1LL);
  TransitionCursorSuppressionState(10LL, 1LL);
  UserSessionSwitchLeaveCrit(v10);
  EnterCrit(0LL, 1LL);
  if ( gSessionId != gServiceSessionId )
  {
    cData[0] = 0;
    RegisterHotKey((struct tagWND *)1, *(ULONG_PTR *)cData);
    SetDebugHotKeys();
    SetWinlogonHotKeys();
    SetWindowArrangementHotKeys();
    SetPenHotKeys();
  }
  CInputGlobals::UpdateLastInputTime(
    gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    13LL);
  UserSessionSwitchLeaveCrit(v11);
  v12 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
  gptmrMaster = v12;
  if ( !v12 )
    goto LABEL_140;
  KeInitializeTimer(v12);
  v63[2] = gptmrMaster;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    v13 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
    gptmrWD = v13;
    if ( !v13 )
      goto LABEL_140;
    KeInitializeTimerEx(v13, SynchronizationTimer);
  }
  v63[4] = gptmrWD;
  if ( gProtocolType
    && !(unsigned int)DrvEscapeRemoteDrivers(
                        *(_QWORD *)(gpDispInfo + 16LL),
                        gProtocolType,
                        *(_QWORD *)(RemoteContext + 40),
                        2LL,
                        gptmrWD,
                        8) )
  {
    goto LABEL_140;
  }
  if ( gSessionId != gServiceSessionId && !gProtocolType )
  {
    EnterCrit(0LL, 1LL);
    GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit(v14);
  }
  if ( gSessionId == gServiceSessionId )
    gbFirstConnectionDone = 1;
  if ( gSessionId )
  {
    if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) < 0 )
      goto LABEL_140;
    ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v15 = (struct _KEVENT *)Object;
    v16 = 2;
    v63[8] = Object;
    v49 = (PRKEVENT)Object;
  }
  else
  {
    Handle = 0LL;
    v16 = 1;
    if ( PoRequestShutdownEvent((PVOID *)&v63[8]) < 0 )
      goto LABEL_140;
    v15 = (struct _KEVENT *)v63[8];
  }
  if ( gSessionId != gServiceSessionId )
  {
    CreatePointerDeviceProcessEvents();
    v15 = (struct _KEVENT *)v63[8];
  }
  if ( v15 )
  {
    CurrentThread = KeGetCurrentThread();
    gpkeRITEvent = v15;
    gptiRit = W32GetThreadWin32Thread(CurrentThread);
    gdwHydraHint |= 0x2000u;
    *(_DWORD *)(gptiRit + 480LL) |= 0x80u;
    v18 = (struct _KEVENT *)a1[1];
    v63[0] = *(_QWORD *)(gptiRit + 1416LL);
    KeSetEvent(v18, 1, 0);
    v48 = *(PVOID *)(v3 + 56);
    ObReferenceObjectByPointer(v48, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
    do
      v19 = KeWaitForMultipleObjects(v16, &v48, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
    while ( v19 == 1 && (gdwRITWakeReason & 2) == 0 );
    ObfDereferenceObject(v48);
    if ( v19 == 1 && (gdwRITWakeReason & 2) != 0 )
    {
      KeSetEvent(v49, 1, 0);
      InitiateWin32kCleanup();
      ObfDereferenceObject(v49);
      if ( Handle )
        ZwClose(Handle);
      KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
      CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
      return;
    }
    if ( (unsigned int)GetRITWakeReason(0LL) )
      KeSetEvent(gpkeRITEvent, 1, 0);
    EnterCrit(0LL, 1LL);
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
        *(_QWORD *)&v55.Length = 0LL;
        v55.Buffer = 0LL;
        RtlInitUnicodeString(&v55, 0LL);
        v20 = 1;
        v21 = 0;
        while ( v21 )
        {
          if ( (int)CBaseInput::InitializeSensor(gpHidInput) >= 0 )
          {
            v22 = (CBaseInput **)gpHidInput;
LABEL_52:
            CBaseInput::Read(*v22);
          }
LABEL_53:
          v21 = ++v20 == 2;
          if ( v20 > 2 )
            goto LABEL_56;
        }
        if ( v20 != 1 || (int)CBaseInput::InitializeSensor(gpKeyboardSensor) < 0 )
          goto LABEL_53;
        CBaseInput::HandleTSRequest(gpKeyboardSensor, 0LL);
        v22 = (CBaseInput **)gpKeyboardSensor;
        goto LABEL_52;
      }
      xxxRegisterForDeviceClassNotifications();
LABEL_56:
      DigitizerFlags = _GetDigitizerFlags();
      if ( (DigitizerFlags & 0xD) != 0 && DigitizerFlags < 0 )
        RegisterTabletButtonHandler();
      InitTimerPowerSaving();
      gnRITdemonTimerId = SetRITTimer(gnRITdemonTimerId, 1000LL, xxxHungAppDemon, 0LL);
    }
    gbIsRITReady = 1;
    if ( (unsigned int)UserIsUserCritSecIn() )
    {
      v25 = 0;
    }
    else
    {
      v25 = 1;
      UserEnterUserCritSec();
    }
    if ( gcSynchronizeTimer != -1 )
      gidSynchronizeTimer = UserSetTimer();
    if ( v25 )
      UserLeaveUserCritSec();
    UserSessionSwitchLeaveCrit(v24);
    LegacyInputDispatcher::Create(&v43);
    LegacyInputDispatcher::Initialize(v43, 0, 0, 0x40u, 5u, (struct LegacyDispatcherObject *)v63);
    CBaseInput::RegisterDispatcherObject(gpKeyboardSensor, v43);
    CBaseInput::RegisterDispatcherObject(gpHidInput, v43);
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_68:
        v26 = LegacyInputDispatcher::WaitAndDispatch(v43);
        if ( !v26 )
        {
          EnterCrit(0LL, 1LL);
          xxxRemoveQueueCompletion();
          UserSessionSwitchLeaveCrit(v27);
        }
        if ( v26 == 4 )
        {
          KeClearEvent(gpkeRITEvent);
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  if ( !(unsigned int)GetRITWakeReason(&v44[1]) )
                    goto LABEL_68;
                  v28 = v44[1];
                  if ( dword_1C03202C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 2uLL) )
                  {
                    switch ( v28 )
                    {
                      case 1u:
                        v29 = "Mouse";
                        break;
                      case 2u:
                        v29 = "Shutdown";
                        break;
                      case 4u:
                        v29 = "EnableMMCSS";
                        break;
                      case 8u:
                        v29 = "RitTakeover";
                        break;
                      case 0x10u:
                        v29 = "DitTakeover";
                        break;
                      case 0x20u:
                        v29 = "ConfigUpdate";
                        break;
                      case 0x40u:
                        v29 = "GetUserProfile";
                        break;
                      case 0x80u:
                        v29 = "DitInControl";
                        break;
                      default:
                        v29 = "UNKNOWN";
                        break;
                    }
                    TlgCreateSz(&pDesc, v29);
                    TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E63A0, 0LL, 0LL, 3u, &v77);
                  }
                  if ( v28 != 1 )
                    break;
                  ProcessMouseEvent();
                }
                if ( v28 == 2 )
                {
                  InitiateWin32kCleanup();
                  if ( gSessionId != gServiceSessionId )
                  {
                    EnterCrit(0LL, 1LL);
                    gpkeRITEvent = 0LL;
                    ObfDereferenceObject((PVOID)v63[8]);
                    UserSessionSwitchLeaveCrit(v38);
                  }
                  if ( Handle )
                    ZwClose(Handle);
                  EnterCrit(0LL, 1LL);
                  CleanupSensorExplicitly(1LL);
                  if ( !gbDIT )
                    CleanupSensorExplicitly(2LL);
                  UserSessionSwitchLeaveCrit(v39);
                  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
                  if ( v43 )
                    LegacyInputDispatcher::`scalar deleting destructor'(v43, v40);
                  return;
                }
                if ( v28 != 4 )
                  break;
                xxxClientEnableMMCSS((*gpsi >> 12) & 1);
              }
              if ( v28 == 8 )
              {
                EnterCrit(0LL, 1LL);
                RitTakeOver();
                CBaseInput::RegisterDispatcherObject(gpHidInput, v43);
                goto LABEL_114;
              }
              if ( v28 != 16 )
                break;
              PrepareForMasterInputThreadTakingOver(v43);
            }
            if ( v28 == 128 )
            {
              EnterCrit(0LL, 1LL);
              ZwSetEvent(ghDITRITEvent, 0LL);
              goto LABEL_114;
            }
            if ( v28 == 32 )
              break;
            if ( v28 == 64 )
            {
              EnterCrit(0LL, 1LL);
              CheckPointerDeviceConfiguration();
              v31 = InteractiveControlManager::Instance();
              v44[0] = 0;
              if ( dword_1C031F308 > 4u )
              {
                v57 = "InteractiveControlManager::GetExternalParameters entry";
                v58 = 55LL;
                v32 = *(unsigned __int16 **)(gptiCurrent + 488LL);
                v59 = v62;
                v60 = 2LL;
                v33 = *v32;
                v61 = *((_QWORD *)v32 + 1);
                v62[0] = v33;
                v62[1] = 0;
                TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E8496, 0LL, 0LL, 5u, &v56);
              }
              Settings = InteractiveControlSettings::ReadSettings((struct InteractiveControlManager *)((char *)v31 + 84));
              v44[0] = Settings;
              if ( Settings < 0 && dword_1C031F308 > 2u )
              {
                v47 = Settings;
                v65 = "Function failed.";
                v67 = &v47;
                v66 = 17LL;
                v68 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E83ED, 0LL, 0LL, 4u, &v64);
              }
              if ( dword_1C031F308 > 4u )
              {
                v71 = 54LL;
                v70 = "InteractiveControlManager::GetExternalParameters exit";
                v72 = v44;
                v73 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C031F308, &unk_1C02E837A, 0LL, 0LL, 4u, &v69);
              }
              TraceLoggingMouseWheelRoutingValueAtStartup();
LABEL_114:
              UserSessionSwitchLeaveCrit(v30);
            }
          }
          EnterCrit(0LL, 1LL);
          RequestModeSwitchOnPowerUp();
          goto LABEL_114;
        }
        if ( v26 != 2 )
          break;
        EnterCrit(0LL, 1LL);
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
          v35 = gConsoleShadowhDev;
          if ( gConsoleShadowhDev )
            HDXDrvEscape(gConsoleShadowhDev, 1LL, 0LL, 0LL);
        }
LABEL_131:
        UserSessionSwitchLeaveCrit(v35);
      }
      if ( ((v26 - 1) & 0xFFFFFFFD) == 0 )
      {
        EnterCrit(0LL, 1LL);
        TimersProc();
        UserSessionSwitchLeaveCrit(v36);
        v37 = dword_1C032A5FC;
        if ( gnRetryReadInput != dword_1C032A5FC )
          v37 = gnRetryReadInput;
        dword_1C032A5FC = v37;
      }
      if ( gspwndAltTab )
      {
        EnterCrit(0LL, 1LL);
        while ( (*(_BYTE *)(*(_QWORD *)(gptiRit + 440LL) + 6LL) & 0x40) != 0 )
          xxxReceiveMessage(gptiRit);
        goto LABEL_131;
      }
    }
  }
LABEL_140:
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  if ( v43 )
    LegacyInputDispatcher::`scalar deleting destructor'(v43, v41);
  KeSetEvent((PRKEVENT)a1[1], 1, 0);
  KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
}
