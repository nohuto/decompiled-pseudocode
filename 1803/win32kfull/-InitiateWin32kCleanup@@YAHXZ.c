/*
 * XREFs of ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00B9ECC
 * Callers:
 *     RawInputThread @ 0x1C001CA60 (RawInputThread.c)
 * Callees:
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00B79CC (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     FreeTimer @ 0x1C00BA430 (FreeTimer.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00BA4F4 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00BA518 (-TerminateDesktopThreads@@YAXXZ.c)
 *     UnregisterDeviceClassNotifications @ 0x1C00BADEC (UnregisterDeviceClassNotifications.c)
 *     InitializePointerDevicesPresenceState @ 0x1C00BAE90 (InitializePointerDevicesPresenceState.c)
 *     FreeAllSpbs @ 0x1C00BCDA0 (FreeAllSpbs.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1C00E480C (--1InkProcessor@@AEAA@XZ.c)
 *     CleanupIAMAccess @ 0x1C00F1880 (CleanupIAMAccess.c)
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x1C0103A84 (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 *     ?SetWaitForWinstaRundown@@YAXXZ @ 0x1C01116BC (-SetWaitForWinstaRundown@@YAXXZ.c)
 *     GreDrvDisconnect @ 0x1C01382DC (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     bDrvDisconnect @ 0x1C028E588 (bDrvDisconnect.c)
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
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  unsigned int v17; // eax
  signed __int32 v18[8]; // [rsp+0h] [rbp-88h] BYREF
  HANDLE EventHandle; // [rsp+30h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-50h] BYREF
  _BYTE ObjectInformation[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-40h]

  RemoteContext = GreGetRemoteContext();
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0LL);
  DrvNotifySessionStateChange(2LL);
  gbPowerCalloutsReady = 0;
  _InterlockedOr(v18, 0);
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
  InitializePointerDevicesPresenceState(0LL);
  gbCleanupInitiated = 1;
  gdwHydraHint |= 0x400u;
  gbInSMSCleanup = 0;
  CTouchProcessor::CancelActivePointers(gpTouchProcessor);
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0326BC0);
  v4 = (struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C0326B50;
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
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C031C7D0 = 0;
    EtwUnregister(qword_1C031C7B0);
    qword_1C031C7B0 = 0LL;
    dword_1C031C790 = 0;
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
  v10 = *(_QWORD *)(gptiCurrent + 608LL);
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
        v17 = 0;
      }
      else
      {
        if ( v22 <= 1 )
          break;
        gdwHydraHint |= 0x400000u;
        v17 = v22;
      }
      if ( v17 <= 1 )
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
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  if ( gSessionId && CreateShutdownEvent(L"EventRitExited", 128, &EventHandle) >= 0 )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
  }
  result = 1LL;
  *(_DWORD *)(gptiCurrent + 480LL) &= ~0x800u;
  gdwHydraHint |= 0x1000u;
  return result;
}
