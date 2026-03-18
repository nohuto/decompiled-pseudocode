/*
 * XREFs of ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00DA35C
 * Callers:
 *     RawInputThread @ 0x1C00D7680 (RawInputThread.c)
 * Callees:
 *     CleanupIAMAccess @ 0x1C000C230 (CleanupIAMAccess.c)
 *     ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C001A060 (--0-$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     FreeAllSpbs @ 0x1C00833C0 (FreeAllSpbs.c)
 *     ?SetWaitForWinstaRundown@@YAXXZ @ 0x1C00D9D38 (-SetWaitForWinstaRundown@@YAXXZ.c)
 *     InitializePointerDevicesPresenceState @ 0x1C00D9E80 (InitializePointerDevicesPresenceState.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00D9F28 (WPP_RECORDER_SF_qD.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00D9FB8 (-TerminateDesktopThreads@@YAXXZ.c)
 *     FreeTimer @ 0x1C00DAA90 (FreeTimer.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00DAF70 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00DCC20 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x1C0133C3C (UnregisterDeviceClassNotifications.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1C0139290 (--1InkProcessor@@AEAA@XZ.c)
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x1C013EC28 (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 *     GreDrvDisconnect @ 0x1C0160448 (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     bDrvDisconnect @ 0x1C02B8A44 (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitiateWin32kCleanup(void)
{
  int v0; // edx
  int v1; // ecx
  __int64 RemoteContext; // rbp
  __int64 v3; // rcx
  struct tagMOUSE_PROMOTION_QUEUE *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  InkProcessor *v10; // rbx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  int v13; // edx
  __int64 v14; // rcx
  unsigned int v16; // eax
  signed __int32 v17[8]; // [rsp+0h] [rbp-B8h] BYREF
  PULONG ReturnLength; // [rsp+20h] [rbp-98h]
  __int64 v19; // [rsp+28h] [rbp-90h]
  int v20; // [rsp+30h] [rbp-88h]
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-78h] BYREF
  HANDLE EventHandle; // [rsp+48h] [rbp-70h] BYREF
  __int64 v23; // [rsp+50h] [rbp-68h] BYREF
  _DWORD ObjectInformation[14]; // [rsp+58h] [rbp-60h] BYREF

  Timeout.QuadPart = 0LL;
  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_(v1, v0, 9, 17, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
  }
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0LL);
  DrvNotifySessionStateChange(2LL);
  gbPowerCalloutsReady = 0;
  _InterlockedOr(v17, 0);
  EnterCrit(0LL, 1LL);
  CleanupPowerRequestList();
  if ( gdwInAtomicOperation )
  {
    v3 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v3);
  if ( !gProtocolType )
    UnregisterDeviceClassNotifications();
  EnterCrit(0LL, 1LL);
  InitializePointerDevicesPresenceState(0);
  gbCleanupInitiated = 1;
  gdwHydraHint |= 0x400u;
  gbInSMSCleanup = 0;
  CTouchProcessor::CancelActivePointers(gpTouchProcessor);
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032C2A0);
  v4 = (struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C032C230;
  v5 = 5LL;
  do
  {
    EmptyMousePromotionQueue(v4);
    v4 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v4 + 24);
    --v5;
  }
  while ( v5 );
  v9 = (__int64)InteractiveControlManager::s_pInstance;
  if ( InteractiveControlManager::s_pInstance )
  {
    InteractiveControlManager::Deinitialize(InteractiveControlManager::s_pInstance);
    EtwUnregister(qword_1C0321328);
    qword_1C0321328 = 0LL;
    dword_1C0321308 = 0;
    EtwUnregister(qword_1C03212F0);
    qword_1C03212F0 = 0LL;
    dword_1C03212D0 = 0;
    Win32FreePool(InteractiveControlManager::s_pInstance);
    InteractiveControlManager::s_pInstance = 0LL;
  }
  v10 = InkProcessor::s_pInstance;
  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::~InkProcessor(InkProcessor::s_pInstance);
    Win32FreePool(v10);
    InkProcessor::s_pInstance = 0LL;
  }
  v11 = *(_QWORD *)(gptiCurrent + 608LL);
  Timeout.QuadPart = -6000000000LL;
  while ( v11 )
  {
    v12 = *(_QWORD **)(v11 + 16);
    if ( !v12 )
      break;
    if ( v12 == gspdeskDisconnect && !v12[4] && !*(_QWORD *)(*(_QWORD *)(v11 + 24) + 48LL) )
    {
      memset(ObjectInformation, 0, sizeof(ObjectInformation));
      if ( !ghDisconnectDesk || ZwQueryObject(ghDisconnectDesk, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL) )
      {
        v16 = 0;
      }
      else
      {
        if ( ObjectInformation[2] <= 1u )
          break;
        gdwHydraHint |= 0x400000u;
        v16 = ObjectInformation[2];
      }
      if ( v16 <= 1 )
        break;
    }
    if ( gdwInAtomicOperation )
    {
      v9 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v9);
    KeWaitForSingleObject(gpevtDesktopDestroyed, WrUserRequest, 0, 0, &Timeout);
    EnterCrit(0LL, 1LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_(v9, v6, 7, 18, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
  }
  gbExitInProgress = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = *(_DWORD *)(gptiCurrent + 892LL);
    v19 = gptiCurrent;
    WPP_RECORDER_SF_qD(v9, v6, v7, v8, (int)ReturnLength);
  }
  gpqCursor = 0LL;
  ForceCapture(3LL);
  FreeScancodeMap();
  if ( gpDispInfo )
    FreeAllSpbs();
  if ( ghDisconnectWinSta )
  {
    ZwClose(ghDisconnectWinSta);
    ghDisconnectWinSta = 0LL;
  }
  if ( ghDisconnectDesk )
  {
    ObCloseHandle(ghDisconnectDesk, 0);
    ghDisconnectDesk = 0LL;
  }
  UnlockObjectAssignment(&grpdeskLogon);
  UnlockObjectAssignment(&gspdeskDisconnect);
  if ( gspwndAltTab )
    HMAssignmentUnlock(&gspwndAltTab);
  TerminateDesktopThreads();
  if ( gbConnected )
  {
    if ( gfRemotingConsole )
      bDrvDisconnect();
    else
      GreDrvDisconnect(RemoteContext);
  }
  CLockDomainExclusiveLeaf<DLT_DESKTOP>::CLockDomainExclusiveLeaf<DLT_DESKTOP>(&v23);
  UnlockObjectAssignment(grpdeskRitInput);
  UnlockObjectAssignment(grpdeskIODefault);
  UnlockObjectAssignment(gspdeskShouldBeForeground);
  if ( CsrApiPort )
  {
    ObfDereferenceObject(CsrApiPort);
    CsrApiPort = 0LL;
  }
  HMAssignmentUnlock(&gspwndCursor);
  HMAssignmentUnlock(&gspwndCursorNC);
  gptiRit = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_(v14, v13, 7, 20, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
  }
  UserSessionSwitchLeaveCrit(v14);
  if ( gSessionId && CreateShutdownEvent(L"EventRitExited", 0x80u, &EventHandle) >= 0 )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
  }
  *(_DWORD *)(gptiCurrent + 480LL) &= ~0x800u;
  gdwHydraHint |= 0x1000u;
  if ( gpevtVideoInitialized )
    KeSetEvent(gpevtVideoInitialized, 1, 0);
  if ( gpevtQueueReadyForCallout )
    KeSetEvent(gpevtQueueReadyForCallout, 1, 0);
  return 1LL;
}
