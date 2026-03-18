/*
 * XREFs of xxxRemoteDisconnect @ 0x1C0133450
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     xxxSleepThread2 @ 0x1C00A4280 (xxxSleepThread2.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C013383C (xxxRemoteStopScreenUpdates.c)
 *     RemoveInputDevices @ 0x1C0133B90 (RemoveInputDevices.c)
 *     UnregisterDeviceClassNotifications @ 0x1C0133C3C (UnregisterDeviceClassNotifications.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0133D00 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0141A60 (CleanupDesktopsMonitorsAndWindowsSnapShot.c)
 *     RemoteRedrawScreen @ 0x1C015FF28 (RemoteRedrawScreen.c)
 *     GreDrvDisconnect @ 0x1C0160448 (GreDrvDisconnect.c)
 *     PowerOnGdi @ 0x1C0160710 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C0160D20 (PowerOffGdi.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01DA4D8 (SnapShotDesktopsMonitorsAndWindowsRects.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C020D3C4 (xxxRequestOutOfFullScreenMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteDisconnect()
{
  int v0; // ebp
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 RemoteContext; // r14
  int v6; // r15d
  __int64 v7; // rcx
  int v8; // ebx
  _QWORD *v9; // rcx
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  _QWORD *v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  _BYTE v14[8]; // [rsp+30h] [rbp-98h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v16[10]; // [rsp+40h] [rbp-88h] BYREF

  memset(v16, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v16[1]);
  v0 = 0;
  v16[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v16[3]) = 21;
  LOBYTE(v16[6]) = -1;
  Timeout.QuadPart = 0LL;
  RemoteContext = GreGetRemoteContext();
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 4;
    WPP_RECORDER_SF_(v2, v1, 9, 15, (__int64)&WPP_2f4edc7644973dcb8f37e7bb2394e69d_Traceguids);
  }
  if ( PsGetCurrentProcess(v2, v1, v3, v4) != gpepCSRSS )
    return 3221225506LL;
  if ( !gbConnected )
    return 0LL;
  if ( !gbIsRITReady )
    return 3221225473LL;
  if ( gProtocolType )
  {
    gDxgkInterface[47](0LL);
  }
  else
  {
    while ( WPP_MAIN_CB.Queue.ListEntry.Blink )
      xxxSleepThread2(0, 1, 0, 0, 0LL);
  }
  if ( gProtocolType || gbFullScreen != 1 || (result = xxxRequestOutOfFullScreenMode(), (int)result >= 0) )
  {
    gdwHydraHint |= 0x10u;
    memset(gstrBaseWinStationName, 0, 0x40uLL);
    if ( gfSessionSwitchBlock )
      return 3221226029LL;
    if ( !gProtocolType && !gbGDIOn )
    {
      v6 = 1;
      PowerOnGdi(v16, 1LL, 4LL);
    }
    SetConsoleSwitchInProgress(1LL);
    if ( !gspdeskDisconnect )
    {
      Timeout.QuadPart = -3000000000LL;
      if ( gdwInAtomicOperation )
      {
        v7 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v7);
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
        goto LABEL_55;
      v0 = 1;
      if ( gnShadowers )
        RemoteRedrawScreen();
      if ( (unsigned int)UserIsWddmConnectedSession() )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v14);
        LOBYTE(v9) = gProtocolType == 0;
        gDxgkInterface[46](v9);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
        v8 = xxxRemoteSetDisconnectDisplayMode(
               grpdeskRitInput,
               gProtocolType,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v16);
        LOBYTE(v11) = gProtocolType == 0;
        gDxgkInterface[47](v11);
        if ( v8 < 0 )
          goto LABEL_54;
        DrvCloseGraphicsDevices(gProtocolType == 0);
      }
      else
      {
        GreDrvDisconnect(RemoteContext);
      }
      gPreviousProtocolType = gProtocolType;
      if ( !gProtocolType )
      {
        UnregisterDeviceClassNotifications();
        RemoveInputDevices();
      }
      OPMDestroyAllProtectedOutputs();
      SetConnectedState(0LL, 0LL);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 32LL))(P);
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
LABEL_33:
      SetConsoleSwitchInProgress(0LL);
      if ( v8 < 0 && v6 == 1 )
        PowerOffGdi();
      DispBrokerAsyncSessionSwitched();
      return (unsigned int)v8;
    }
    if ( !v0 )
    {
LABEL_55:
      if ( !gProtocolType )
        CleanupDesktopsMonitorsAndWindowsSnapShot(gWndsMonitorSnapshotHead);
      goto LABEL_33;
    }
LABEL_54:
    RemoteRedrawScreen();
    goto LABEL_55;
  }
  return result;
}
