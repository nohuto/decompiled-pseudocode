/*
 * XREFs of xxxRemoteDisconnect @ 0x1C00E9E60
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x1C0030BEC (xxxSleepThread2.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E9CEC (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x1C00E9D98 (UnregisterDeviceClassNotifications.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00EA1E8 (xxxRemoteStopScreenUpdates.c)
 *     DrvSetGraphicsDevices @ 0x1C00EA48C (DrvSetGraphicsDevices.c)
 *     RemoveInputDevices @ 0x1C00EA800 (RemoveInputDevices.c)
 *     CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0137150 (CleanupDesktopsMonitorsAndWindowsSnapShot.c)
 *     RemoteRedrawScreen @ 0x1C0158694 (RemoteRedrawScreen.c)
 *     GreDrvDisconnect @ 0x1C0158C24 (GreDrvDisconnect.c)
 *     PowerOnGdi @ 0x1C0158EF0 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C01591A0 (PowerOffGdi.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01C711C (SnapShotDesktopsMonitorsAndWindowsRects.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01F7098 (xxxRequestOutOfFullScreenMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteDisconnect()
{
  int v0; // esi
  __int64 RemoteContext; // rbp
  int v2; // r14d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rcx
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  _BYTE v16[8]; // [rsp+30h] [rbp-88h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v18[10]; // [rsp+40h] [rbp-78h] BYREF

  memset(v18, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v18[1]);
  v0 = 0;
  v18[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v18[3]) = 21;
  LOBYTE(v18[6]) = -1;
  RemoteContext = GreGetRemoteContext();
  v2 = 0;
  if ( PsGetCurrentProcess(v4, v3, v5, v6) != gpepCSRSS )
    return 3221225506LL;
  if ( !gbConnected )
    return 0LL;
  if ( !gbIsRITReady )
    return 3221225473LL;
  if ( gProtocolType )
  {
    ((void (__fastcall *)(_QWORD))gDxgkInterface[122])(0LL);
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
      PowerOnGdi(v18, 1LL, 4LL);
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
      UserSessionSwitchLeaveCrit(v7, gdwInAtomicOperation, v8, v9);
      KeWaitForSingleObject(gpEventDiconnectDesktop, WrUserRequest, 0, 0, &Timeout);
      EnterCrit(0LL, 1LL);
    }
    if ( !gProtocolType && gbSnapShotWindowsAndMonitors && *(_DWORD *)*gpDispInfo > 1u )
    {
      v15 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( !v15 )
        v15 = grpdeskIODefault;
      SnapShotDesktopsMonitorsAndWindowsRects(*(_QWORD *)(v15 + 40), gWndsMonitorSnapshotHead);
    }
    if ( gspdeskDisconnect )
    {
      v10 = xxxRemoteStopScreenUpdates();
      if ( v10 < 0 )
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
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v16);
        LOBYTE(v11) = 1;
        ((void (__fastcall *)(__int64))gDxgkInterface[121])(v11);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12);
        v10 = xxxRemoteSetDisconnectDisplayMode(
                grpdeskRitInput,
                gProtocolType,
                (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v18);
        LOBYTE(v13) = 1;
        ((void (__fastcall *)(__int64))gDxgkInterface[122])(v13);
        if ( v10 < 0 )
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
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 32LL))(P);
      CitSessionConnectChange(0LL, 0LL);
    }
    else
    {
      v10 = -1073741823;
    }
    if ( v10 >= 0 )
    {
      if ( gProtocolType )
        gRemotePreviousMonitorsCount = *(_DWORD *)*gpDispInfo;
      else
        DrvSetGraphicsDevices(L"TSDDD");
      CleanupRemoteHandles(RemoteContext);
LABEL_31:
      SetConsoleSwitchInProgress(0LL);
      if ( v10 < 0 && v2 == 1 )
        PowerOffGdi();
      return (unsigned int)v10;
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
