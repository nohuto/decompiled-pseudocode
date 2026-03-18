/*
 * XREFs of ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EADEC
 * Callers:
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 * Callees:
 *     CleanupIAMAccess @ 0x1C00096A0 (CleanupIAMAccess.c)
 *     UnregisterDeviceClassNotifications @ 0x1C00E9D98 (UnregisterDeviceClassNotifications.c)
 *     ?SetWaitForWinstaRundown@@YAXXZ @ 0x1C00EA610 (-SetWaitForWinstaRundown@@YAXXZ.c)
 *     InitializePointerDevicesPresenceState @ 0x1C00EA750 (InitializePointerDevicesPresenceState.c)
 *     FreeAllSpbs @ 0x1C00EAB30 (FreeAllSpbs.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00EAB60 (-TerminateDesktopThreads@@YAXXZ.c)
 *     FreeTimer @ 0x1C00EB450 (FreeTimer.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00EB7BC (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00EE2A0 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1C012CF2C (--1InkProcessor@@AEAA@XZ.c)
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x1C0133A9C (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 *     GreDrvDisconnect @ 0x1C0158C24 (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     bDrvDisconnect @ 0x1C02A1DE8 (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitiateWin32kCleanup(void)
{
  __int64 RemoteContext; // rsi
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  struct tagMOUSE_PROMOTION_QUEUE *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  InteractiveControlManager *v8; // rcx
  LPCGUID v9; // rbx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v21; // eax
  signed __int32 v22[8]; // [rsp+0h] [rbp-88h] BYREF
  HANDLE EventHandle; // [rsp+30h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-50h] BYREF
  _BYTE ObjectInformation[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-40h]

  RemoteContext = GreGetRemoteContext();
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0LL);
  DrvNotifySessionStateChange(2LL);
  gbPowerCalloutsReady = 0;
  _InterlockedOr(v22, 0);
  EnterCrit(0LL, 1LL);
  CleanupPowerRequestList();
  if ( gdwInAtomicOperation )
  {
    v1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v1, gdwInAtomicOperation, v2, v3);
  if ( !gProtocolType )
    UnregisterDeviceClassNotifications();
  EnterCrit(0LL, 1LL);
  InitializePointerDevicesPresenceState(0);
  gbCleanupInitiated = 1;
  gdwHydraHint |= 0x400u;
  gbInSMSCleanup = 0;
  CTouchProcessor::CancelActivePointers(gpTouchProcessor);
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0317270);
  v4 = (struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C0317200;
  v5 = 5LL;
  do
  {
    EmptyMousePromotionQueue(v4);
    v4 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v4 + 24);
    --v5;
  }
  while ( v5 );
  v8 = InteractiveControlManager::s_pInstance;
  if ( InteractiveControlManager::s_pInstance )
  {
    InteractiveControlManager::Deinitialize(InteractiveControlManager::s_pInstance);
    EtwUnregister(qword_1C030C420);
    qword_1C030C420 = 0LL;
    dword_1C030C400 = 0;
    EtwUnregister(qword_1C030C3E8);
    qword_1C030C3E8 = 0LL;
    dword_1C030C3C8 = 0;
    Win32FreePool(InteractiveControlManager::s_pInstance);
    InteractiveControlManager::s_pInstance = 0LL;
  }
  v9 = InkProcessor::s_pInstance;
  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::~InkProcessor((InkProcessor *)InkProcessor::s_pInstance);
    Win32FreePool(v9);
    InkProcessor::s_pInstance = 0LL;
  }
  v10 = *(_QWORD *)(gptiCurrent + 616LL);
  Timeout.QuadPart = -6000000000LL;
  while ( v10 )
  {
    v11 = *(_QWORD **)(v10 + 16);
    if ( !v11 )
      break;
    if ( v11 == gspdeskDisconnect && !v11[4] && !*(_QWORD *)(*(_QWORD *)(v10 + 24) + 48LL) )
    {
      v8 = (InteractiveControlManager *)ghDisconnectDesk;
      if ( !ghDisconnectDesk || ZwQueryObject(ghDisconnectDesk, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL) )
      {
        v21 = 0;
      }
      else
      {
        if ( v26 <= 1 )
          break;
        gdwHydraHint |= 0x400000u;
        v21 = v26;
      }
      if ( v21 <= 1 )
        break;
    }
    if ( gdwInAtomicOperation )
    {
      v8 = (InteractiveControlManager *)gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v8, gdwInAtomicOperation, v6, v7);
    KeWaitForSingleObject(gpevtDesktopDestroyed, WrUserRequest, 0, 0, &Timeout);
    EnterCrit(0LL, 1LL);
  }
  gbExitInProgress = 1;
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
  v15 = gtmrListHead[0];
  if ( gspwndAltTab )
    HMAssignmentUnlock(&gspwndAltTab);
  TerminateDesktopThreads(v15, v12, v13, v14);
  if ( gbConnected )
  {
    if ( gfRemotingConsole )
      bDrvDisconnect();
    else
      GreDrvDisconnect(RemoteContext);
  }
  UnlockObjectAssignment(grpdeskRitInput);
  UnlockObjectAssignment(grpdeskIODefault);
  UnlockObjectAssignment(&gspdeskShouldBeForeground);
  if ( CsrApiPort )
  {
    ObfDereferenceObject(CsrApiPort);
    CsrApiPort = 0LL;
  }
  HMAssignmentUnlock(&gspwndCursor);
  HMAssignmentUnlock(&gspwndCursorNC);
  gptiRit = 0LL;
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  if ( gSessionId && CreateShutdownEvent(L"EventRitExited", 0x80u, &EventHandle) >= 0 )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
  }
  *(_DWORD *)(gptiCurrent + 488LL) &= ~0x800u;
  gdwHydraHint |= 0x1000u;
  if ( gpevtVideoportCallout )
    KeSetEvent(gpevtVideoInitialized, 1, 0);
  if ( gpevtQueueReadyForCallout )
    KeSetEvent(gpevtQueueReadyForCallout, 1, 0);
  return 1LL;
}
