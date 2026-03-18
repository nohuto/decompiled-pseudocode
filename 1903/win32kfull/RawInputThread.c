/*
 * XREFs of RawInputThread @ 0x1C00D7680
 * Callers:
 *     <none>
 * Callees:
 *     xxxRegisterForDeviceClassNotifications @ 0x1C000A69C (xxxRegisterForDeviceClassNotifications.c)
 *     xxxRemoveQueueCompletion @ 0x1C000E76C (xxxRemoveQueueCompletion.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     TransitionCursorSuppressionState @ 0x1C0081090 (TransitionCursorSuppressionState.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C00850A4 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     _RegisterHotKey @ 0x1C00882EC (_RegisterHotKey.c)
 *     xxxReceiveMessage @ 0x1C009E8D0 (xxxReceiveMessage.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     InitKeyboard @ 0x1C00D6BE0 (InitKeyboard.c)
 *     SetDebugHotKeys @ 0x1C00D6CEC (SetDebugHotKeys.c)
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C00D6D80 (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     CreatePointerDeviceProcessEvents @ 0x1C00D6DD4 (CreatePointerDeviceProcessEvents.c)
 *     ?_GetDigitizerFlags@@YAKXZ @ 0x1C00D7218 (-_GetDigitizerFlags@@YAKXZ.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x1C00D7350 (-InitTimerPowerSaving@@YAXXZ.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C00D73B8 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     CheckPointerDeviceConfiguration @ 0x1C00D7490 (CheckPointerDeviceConfiguration.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C00D7600 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     TimersProc @ 0x1C00D85D0 (TimersProc.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1C00D8A3C (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     xxxClientEnableMMCSS @ 0x1C00D8AF4 (xxxClientEnableMMCSS.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00D8DC8 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C00D8EB8 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C00D91E4 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C00D9264 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00DA35C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00DCC20 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C00E0DB0 (--0InkProcessor@@AEAA@XZ.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C010F258 (_TlgCreateSz.c)
 *     SetRITTimer @ 0x1C011E2C0 (SetRITTimer.c)
 *     RequestModeSwitchOnPowerUp @ 0x1C0160B68 (RequestModeSwitchOnPowerUp.c)
 *     RitTakeOver @ 0x1C016131C (RitTakeOver.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?SetPenHotKeys@@YAXXZ @ 0x1C0163CF4 (-SetPenHotKeys@@YAXXZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C01DB9B4 (-RegisterTabletButtonHandler@@YAXXZ.c)
 *     UserSetTimer @ 0x1C0244D30 (UserSetTimer.c)
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
  __int64 v15; // r9
  struct _KEVENT *v16; // r8
  ULONG v17; // edi
  __int64 v18; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v20; // rcx
  NTSTATUS v21; // ebx
  unsigned int v22; // ebx
  bool v23; // zf
  CBaseInput **v24; // rcx
  char DigitizerFlags; // al
  __int64 v26; // rcx
  char v27; // bl
  int v28; // ebx
  __int64 v29; // rcx
  unsigned int v30; // ebx
  const CHAR *v31; // rdx
  __int64 v32; // rcx
  struct InteractiveControlManager *v33; // rbx
  unsigned __int16 *v34; // rax
  int v35; // ecx
  int Settings; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // edx
  unsigned int v43; // edx
  UINT32 cData[2]; // [rsp+28h] [rbp-E0h]
  struct LegacyInputDispatcher *v45; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v46[2]; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  int v48; // [rsp+60h] [rbp-A8h] BYREF
  int v49; // [rsp+64h] [rbp-A4h] BYREF
  PVOID v50; // [rsp+68h] [rbp-A0h] BYREF
  PRKEVENT v51; // [rsp+70h] [rbp-98h]
  PVOID Object; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  __int128 SystemInformation; // [rsp+90h] [rbp-78h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-68h]
  __int128 v56; // [rsp+A8h] [rbp-60h]
  struct _UNICODE_STRING v57; // [rsp+B8h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR v58; // [rsp+C8h] [rbp-40h] BYREF
  const char *v59; // [rsp+E8h] [rbp-20h]
  __int64 v60; // [rsp+F0h] [rbp-18h]
  _DWORD *v61; // [rsp+F8h] [rbp-10h]
  __int64 v62; // [rsp+100h] [rbp-8h]
  __int64 v63; // [rsp+108h] [rbp+0h]
  _DWORD v64[2]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v65[10]; // [rsp+118h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR v66; // [rsp+168h] [rbp+60h] BYREF
  const char *v67; // [rsp+188h] [rbp+80h]
  __int64 v68; // [rsp+190h] [rbp+88h]
  int *v69; // [rsp+198h] [rbp+90h]
  __int64 v70; // [rsp+1A0h] [rbp+98h]
  EVENT_DATA_DESCRIPTOR v71; // [rsp+1A8h] [rbp+A0h] BYREF
  const char *v72; // [rsp+1C8h] [rbp+C0h]
  __int64 v73; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v74; // [rsp+1D8h] [rbp+D0h]
  __int64 v75; // [rsp+1E0h] [rbp+D8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1E8h] [rbp+E0h] BYREF
  int *v77; // [rsp+208h] [rbp+100h]
  __int64 v78; // [rsp+210h] [rbp+108h]
  EVENT_DATA_DESCRIPTOR v79; // [rsp+218h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+238h] [rbp+130h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RemoteContext = GreGetRemoteContext();
  v45 = 0LL;
  SystemInformation = 0uLL;
  v55 = 0LL;
  memset(v65, 0, sizeof(v65));
  SetThreadName(-2LL, L"Win32k Raw Input Thread");
  v3 = *a1;
  *(_QWORD *)&v56 = PsGetThreadProcessId(KeGetCurrentThread());
  LODWORD(v55) = 16;
  *((_QWORD *)&v56 + 1) = PsGetThreadId(KeGetCurrentThread());
  SystemInformation = v56;
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
    if ( !v5 && dword_1C0321298 > 2u )
    {
      v48 = -1073741801;
      v77 = &v48;
      v78 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8371, 0LL, 0LL, 3u, &pData);
    }
  }
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_140;
  v65[6] = CRitTimerScanWakeSystem::ritTimerScanWakeEvent;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v9 = *(_QWORD *)(GetDispInfo(v8, v7) + 96);
  *(_DWORD *)(gpsi + 4960LL) = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 36LL) / 2;
  *(_DWORD *)(gpsi + 4964LL) = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 40LL) / 2;
  gptCursorAsync = *(struct tagPOINT *const *)(gpsi + 4960LL);
  ClearLogicalCursorPos();
  EnterCrit(0LL, 1LL);
  TransitionCursorSuppressionState(0xAu, 1);
  UserSessionSwitchLeaveCrit(v10);
  EnterCrit(0LL, 1LL);
  if ( gSessionId != gServiceSessionId )
  {
    cData[0] = 0;
    RegisterHotKey((struct tagWND *)1, 0LL, 4294967289LL, 8LL, *(ULONG_PTR *)cData);
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
  v65[2] = gptmrMaster;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    v13 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
    gptmrWD = v13;
    if ( !v13 )
      goto LABEL_140;
    KeInitializeTimerEx(v13, SynchronizationTimer);
  }
  v65[4] = gptmrWD;
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
    v16 = (struct _KEVENT *)Object;
    v17 = 2;
    v65[8] = Object;
    v51 = (PRKEVENT)Object;
  }
  else
  {
    Handle = 0LL;
    v17 = 1;
    if ( PoRequestShutdownEvent((PVOID *)&v65[8]) < 0 )
      goto LABEL_140;
    v16 = (struct _KEVENT *)v65[8];
  }
  v18 = *(_QWORD *)&gSessionId;
  if ( gSessionId != gServiceSessionId )
  {
    CreatePointerDeviceProcessEvents();
    v16 = (struct _KEVENT *)v65[8];
  }
  if ( v16 )
  {
    CurrentThread = KeGetCurrentThread();
    gpkeRITEvent = v16;
    gptiRit = W32GetThreadWin32Thread((__int64)CurrentThread, v18, (__int64)v16, v15);
    gdwHydraHint |= 0x2000u;
    *(_DWORD *)(gptiRit + 480LL) |= 0x80u;
    v20 = (struct _KEVENT *)a1[1];
    v65[0] = *(_QWORD *)(gptiRit + 1416LL);
    KeSetEvent(v20, 1, 0);
    v50 = *(PVOID *)(v3 + 56);
    ObReferenceObjectByPointer(v50, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
    do
      v21 = KeWaitForMultipleObjects(v17, &v50, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
    while ( v21 == 1 && (gdwRITWakeReason & 2) == 0 );
    ObfDereferenceObject(v50);
    if ( v21 == 1 && (gdwRITWakeReason & 2) != 0 )
    {
      KeSetEvent(v51, 1, 0);
      InitiateWin32kCleanup();
      ObfDereferenceObject(v51);
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
      xxxSwitchDesktop(*(_QWORD *)(gptiRit + 608LL), *(_QWORD *)(*(_QWORD *)(gptiRit + 608LL) + 16LL), 0, 0LL);
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
        *(_QWORD *)&v57.Length = 0LL;
        v57.Buffer = 0LL;
        RtlInitUnicodeString(&v57, 0LL);
        v22 = 1;
        v23 = 0;
        while ( v23 )
        {
          if ( (int)CBaseInput::InitializeSensor(gpHidInput) >= 0 )
          {
            v24 = (CBaseInput **)gpHidInput;
LABEL_52:
            CBaseInput::Read(*v24);
          }
LABEL_53:
          v23 = ++v22 == 2;
          if ( v22 > 2 )
            goto LABEL_56;
        }
        if ( v22 != 1 || (int)CBaseInput::InitializeSensor(gpKeyboardSensor) < 0 )
          goto LABEL_53;
        CBaseInput::HandleTSRequest(gpKeyboardSensor, 0LL);
        v24 = (CBaseInput **)gpKeyboardSensor;
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
      v27 = 0;
    }
    else
    {
      v27 = 1;
      UserEnterUserCritSec();
    }
    if ( gcSynchronizeTimer != -1 )
      gidSynchronizeTimer = UserSetTimer();
    if ( v27 )
      UserLeaveUserCritSec();
    UserSessionSwitchLeaveCrit(v26);
    LegacyInputDispatcher::Create(&v45);
    LegacyInputDispatcher::Initialize(v45, 0, 0, 0x40u, 5u, (struct LegacyDispatcherObject *)v65);
    CBaseInput::RegisterDispatcherObject(gpKeyboardSensor, v45);
    CBaseInput::RegisterDispatcherObject(gpHidInput, v45);
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_68:
        v28 = LegacyInputDispatcher::WaitAndDispatch(v45);
        if ( !v28 )
        {
          EnterCrit(0LL, 1LL);
          xxxRemoveQueueCompletion();
          UserSessionSwitchLeaveCrit(v29);
        }
        if ( v28 == 4 )
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
                  if ( !(unsigned int)GetRITWakeReason(&v46[1]) )
                    goto LABEL_68;
                  v30 = v46[1];
                  if ( dword_1C03222C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 2uLL) )
                  {
                    switch ( v30 )
                    {
                      case 1u:
                        v31 = "Mouse";
                        break;
                      case 2u:
                        v31 = "Shutdown";
                        break;
                      case 4u:
                        v31 = "EnableMMCSS";
                        break;
                      case 8u:
                        v31 = "RitTakeover";
                        break;
                      case 0x10u:
                        v31 = "DitTakeover";
                        break;
                      case 0x20u:
                        v31 = "ConfigUpdate";
                        break;
                      case 0x40u:
                        v31 = "GetUserProfile";
                        break;
                      case 0x80u:
                        v31 = "DitInControl";
                        break;
                      default:
                        v31 = "UNKNOWN";
                        break;
                    }
                    TlgCreateSz(&pDesc, v31);
                    TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E6DE0, 0LL, 0LL, 3u, &v79);
                  }
                  if ( v30 != 1 )
                    break;
                  ProcessMouseEvent();
                }
                if ( v30 == 2 )
                {
                  InitiateWin32kCleanup();
                  if ( gSessionId != gServiceSessionId )
                  {
                    EnterCrit(0LL, 1LL);
                    gpkeRITEvent = 0LL;
                    ObfDereferenceObject((PVOID)v65[8]);
                    UserSessionSwitchLeaveCrit(v40);
                  }
                  if ( Handle )
                    ZwClose(Handle);
                  EnterCrit(0LL, 1LL);
                  CleanupSensorExplicitly(1LL);
                  if ( !gbDIT )
                    CleanupSensorExplicitly(2LL);
                  UserSessionSwitchLeaveCrit(v41);
                  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
                  if ( v45 )
                    LegacyInputDispatcher::`scalar deleting destructor'(v45, v42);
                  return;
                }
                if ( v30 != 4 )
                  break;
                xxxClientEnableMMCSS((*gpsi >> 12) & 1);
              }
              if ( v30 == 8 )
              {
                EnterCrit(0LL, 1LL);
                RitTakeOver();
                CBaseInput::RegisterDispatcherObject(gpHidInput, v45);
                goto LABEL_114;
              }
              if ( v30 != 16 )
                break;
              PrepareForMasterInputThreadTakingOver(v45);
            }
            if ( v30 == 128 )
            {
              EnterCrit(0LL, 1LL);
              ZwSetEvent(ghDITRITEvent, 0LL);
              goto LABEL_114;
            }
            if ( v30 == 32 )
              break;
            if ( v30 == 64 )
            {
              EnterCrit(0LL, 1LL);
              CheckPointerDeviceConfiguration();
              v33 = InteractiveControlManager::Instance();
              v46[0] = 0;
              if ( dword_1C0321308 > 4u )
              {
                v59 = "InteractiveControlManager::GetExternalParameters entry";
                v60 = 55LL;
                v34 = *(unsigned __int16 **)(gptiCurrent + 488LL);
                v61 = v64;
                v62 = 2LL;
                v35 = *v34;
                v63 = *((_QWORD *)v34 + 1);
                v64[0] = v35;
                v64[1] = 0;
                TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8ED6, 0LL, 0LL, 5u, &v58);
              }
              Settings = InteractiveControlSettings::ReadSettings((struct InteractiveControlManager *)((char *)v33 + 84));
              v46[0] = Settings;
              if ( Settings < 0 && dword_1C0321308 > 2u )
              {
                v49 = Settings;
                v67 = "Function failed.";
                v69 = &v49;
                v68 = 17LL;
                v70 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, 0LL, 0LL, 4u, &v66);
              }
              if ( dword_1C0321308 > 4u )
              {
                v73 = 54LL;
                v72 = "InteractiveControlManager::GetExternalParameters exit";
                v74 = v46;
                v75 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8DBA, 0LL, 0LL, 4u, &v71);
              }
              TraceLoggingMouseWheelRoutingValueAtStartup();
LABEL_114:
              UserSessionSwitchLeaveCrit(v32);
            }
          }
          EnterCrit(0LL, 1LL);
          RequestModeSwitchOnPowerUp();
          goto LABEL_114;
        }
        if ( v28 != 2 )
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
          v37 = gConsoleShadowhDev;
          if ( gConsoleShadowhDev )
            HDXDrvEscape(gConsoleShadowhDev, 1LL, 0LL, 0LL);
        }
LABEL_131:
        UserSessionSwitchLeaveCrit(v37);
      }
      if ( ((v28 - 1) & 0xFFFFFFFD) == 0 )
      {
        EnterCrit(0LL, 1LL);
        TimersProc();
        UserSessionSwitchLeaveCrit(v38);
        v39 = dword_1C032C60C;
        if ( gnRetryReadInput != dword_1C032C60C )
          v39 = gnRetryReadInput;
        dword_1C032C60C = v39;
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
  if ( v45 )
    LegacyInputDispatcher::`scalar deleting destructor'(v45, v43);
  KeSetEvent((PRKEVENT)a1[1], 1, 0);
  KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
}
