/*
 * XREFs of xxxRemoteDisconnect @ 0x1C00BB750
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x1C0046670 (xxxSleepThread2.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BAD50 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x1C00BADEC (UnregisterDeviceClassNotifications.c)
 *     RemoveInputDevices @ 0x1C00BAF30 (RemoveInputDevices.c)
 *     DrvSetGraphicsDevices @ 0x1C00BB1C8 (DrvSetGraphicsDevices.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00BB5A8 (xxxRemoteStopScreenUpdates.c)
 *     AutoRotationUpdateRegistry @ 0x1C00BBA90 (AutoRotationUpdateRegistry.c)
 *     CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0113970 (CleanupDesktopsMonitorsAndWindowsSnapShot.c)
 *     RemoteRedrawScreen @ 0x1C0137D94 (RemoteRedrawScreen.c)
 *     GreDrvDisconnect @ 0x1C01382DC (GreDrvDisconnect.c)
 *     PowerOnGdi @ 0x1C0138810 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C0138BE0 (PowerOffGdi.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01A4F8C (SnapShotDesktopsMonitorsAndWindowsRects.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01D2714 (xxxRequestOutOfFullScreenMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteDisconnect()
{
  int v0; // esi
  __int64 RemoteContext; // rbp
  int v2; // r14d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rcx
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  _BYTE v14[8]; // [rsp+30h] [rbp-88h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v16[10]; // [rsp+40h] [rbp-78h] BYREF

  memset(v16, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v16[1]);
  v0 = 0;
  v16[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v16[3]) = 21;
  LOBYTE(v16[6]) = -1;
  RemoteContext = GreGetRemoteContext();
  v2 = 0;
  if ( PsGetCurrentProcess(v4, v3) != gpepCSRSS )
    return 3221225506LL;
  if ( !gbConnected )
    return 0LL;
  if ( !gbIsRITReady )
    return 3221225473LL;
  if ( gProtocolType )
  {
    gDxgkInterface[122](0LL);
  }
  else
  {
    while ( ghSwitcher )
      xxxSleepThread2(0, 1u, 0, 0, 0LL);
  }
  if ( gProtocolType || gbFullScreen != 1 || (result = xxxRequestOutOfFullScreenMode(), (int)result >= 0) )
  {
    gdwHydraHint |= 0x10u;
    memset(gstrBaseWinStationName, 0, 0x40uLL);
    if ( gfSessionSwitchBlock )
      return 3221226029LL;
    if ( !gProtocolType && !gbGDIOn )
    {
      v2 = 1;
      PowerOnGdi(v16, 1LL, 4LL);
    }
    SetConsoleSwitchInProgress(1LL);
    if ( !gspdeskDisconnect )
    {
      Timeout.QuadPart = -3000000000LL;
      if ( gdwInAtomicOperation )
      {
        v5 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v5, gdwInAtomicOperation, v6, v7);
      KeWaitForSingleObject(gpEventDiconnectDesktop, WrUserRequest, 0, 0, &Timeout);
      EnterCrit(0LL, 1LL);
    }
    if ( !gProtocolType && gbSnapShotWindowsAndMonitors && *(_DWORD *)*gpDispInfo > 1u )
    {
      v13 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( !v13 )
        v13 = grpdeskIODefault;
      SnapShotDesktopsMonitorsAndWindowsRects(*(_QWORD *)(v13 + 40), gWndsMonitorSnapshotHead);
    }
    if ( gspdeskDisconnect )
    {
      v8 = xxxRemoteStopScreenUpdates();
      if ( v8 < 0 )
        goto LABEL_53;
      v0 = 1;
      if ( gnShadowers )
        RemoteRedrawScreen();
      if ( gProtocolType )
      {
        GreDrvDisconnect(RemoteContext);
      }
      else
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v14);
        LOBYTE(v9) = 1;
        gDxgkInterface[121](v9);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
        v8 = xxxRemoteSetDisconnectDisplayMode(
               grpdeskRitInput,
               gProtocolType,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v16);
        LOBYTE(v11) = 1;
        gDxgkInterface[122](v11);
        if ( v8 < 0 )
          goto LABEL_52;
        DrvCloseLocalGraphicsDevices();
      }
      gPreviousProtocolType = gProtocolType;
      if ( !gProtocolType )
      {
        UnregisterDeviceClassNotifications();
        RemoveInputDevices();
      }
      OPMDestroyAllProtectedOutputs();
      SetConnectedState(0LL, 0LL);
      AutoRotationUpdateRegistry();
      CitSessionConnectChange(0LL, 0LL);
    }
    else
    {
      v8 = -1073741823;
    }
    if ( v8 >= 0 )
    {
      if ( gProtocolType )
        gRemotePreviousMonitorsCount = *(_DWORD *)*gpDispInfo;
      else
        DrvSetGraphicsDevices(L"TSDDD", gProtocolType);
      CleanupRemoteHandles(RemoteContext);
LABEL_31:
      SetConsoleSwitchInProgress(0LL);
      if ( v8 < 0 && v2 == 1 )
        PowerOffGdi();
      return (unsigned int)v8;
    }
    if ( !v0 )
    {
LABEL_53:
      if ( !gProtocolType )
        CleanupDesktopsMonitorsAndWindowsSnapShot(gWndsMonitorSnapshotHead);
      goto LABEL_31;
    }
LABEL_52:
    RemoteRedrawScreen();
    goto LABEL_53;
  }
  return result;
}
