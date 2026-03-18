/*
 * XREFs of xxxRemoteReconnect @ 0x1C0137320
 * Callers:
 *     <none>
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C000A5B0 (TransitionCursorSuppressionState.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BAD50 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x1C00BADEC (UnregisterDeviceClassNotifications.c)
 *     RemoveInputDevices @ 0x1C00BAF30 (RemoveInputDevices.c)
 *     DrvSetGraphicsDevices @ 0x1C00BB1C8 (DrvSetGraphicsDevices.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00BB5A8 (xxxRemoteStopScreenUpdates.c)
 *     xxxUserReinitializeAutoRotation @ 0x1C00BBB60 (xxxUserReinitializeAutoRotation.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C00BCFB0 (DrvOcclusionStateChangeNotify.c)
 *     SetMouseTrails @ 0x1C00BFDA4 (SetMouseTrails.c)
 *     SetPointer @ 0x1C00C09D0 (SetPointer.c)
 *     InitKeyboard @ 0x1C0111170 (InitKeyboard.c)
 *     RegisterCDROMNotify @ 0x1C0112FD0 (RegisterCDROMNotify.c)
 *     GreMultiUserSetDisplayDriverName @ 0x1C0137BD8 (GreMultiUserSetDisplayDriverName.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C0137CFC (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0137D34 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C0137D94 (RemoteRedrawScreen.c)
 *     AttachInputDevices @ 0x1C0137E7C (AttachInputDevices.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1C0137ED4 (DrvOpenLocalGraphicsDevices.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x1C0138034 (DrvCloseRemoteGraphicsDevices.c)
 *     GreDrvDisconnect @ 0x1C01382DC (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     GreDrvReconnect @ 0x1C028E1BC (GreDrvReconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteReconnect(unsigned __int64 a1)
{
  BOOL v2; // ebx
  NTSTATUS Win32kDriverObject; // edi
  BOOL v4; // esi
  void *v5; // r12
  __int64 v6; // r15
  __int64 RemoteContext; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  char *v13; // rax
  _OWORD *v14; // rcx
  __int64 v15; // rdx
  wchar_t *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  void *v20; // rax
  int v21; // r15d
  int v22; // r13d
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  bool v38; // zf
  int HandleInformation; // [rsp+28h] [rbp-360h]
  BOOL v41; // [rsp+60h] [rbp-328h]
  int v42; // [rsp+70h] [rbp-318h] BYREF
  int v43; // [rsp+74h] [rbp-314h]
  int v44; // [rsp+78h] [rbp-310h]
  int v45; // [rsp+84h] [rbp-304h]
  int v46; // [rsp+88h] [rbp-300h]
  PVOID v47; // [rsp+90h] [rbp-2F8h] BYREF
  PVOID v48; // [rsp+98h] [rbp-2F0h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-2E8h] BYREF
  _BYTE v50[304]; // [rsp+B0h] [rbp-2D8h] BYREF
  char v51; // [rsp+1E0h] [rbp-1A8h] BYREF
  __int64 v52; // [rsp+200h] [rbp-188h]
  __int64 v53; // [rsp+208h] [rbp-180h]
  __int64 v54; // [rsp+210h] [rbp-178h]
  __int64 v55; // [rsp+218h] [rbp-170h]
  __int64 v56; // [rsp+220h] [rbp-168h]
  __int128 v57; // [rsp+230h] [rbp-158h]
  __int128 v58; // [rsp+240h] [rbp-148h]
  __int128 v59; // [rsp+250h] [rbp-138h]
  __int128 v60; // [rsp+260h] [rbp-128h]
  unsigned __int16 v61[29]; // [rsp+270h] [rbp-118h] BYREF
  __int128 v62; // [rsp+2AAh] [rbp-DEh]
  __int16 v63; // [rsp+2BAh] [rbp-CEh]
  __int128 v64; // [rsp+2BCh] [rbp-CCh]
  int v65; // [rsp+2CCh] [rbp-BCh]
  int v66; // [rsp+2D0h] [rbp-B8h]
  int v67; // [rsp+2D4h] [rbp-B4h]
  unsigned __int16 v68; // [rsp+2E8h] [rbp-A0h]
  __int64 v69; // [rsp+2ECh] [rbp-9Ch]
  int v70; // [rsp+2F4h] [rbp-94h]
  int v71; // [rsp+2F8h] [rbp-90h]
  int v72; // [rsp+2FCh] [rbp-8Ch]
  int v73; // [rsp+304h] [rbp-84h]
  _QWORD v74[10]; // [rsp+310h] [rbp-78h] BYREF

  memset(v74, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v74[1]);
  v74[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v74[3]) = 22;
  LOBYTE(v74[6]) = -1;
  v2 = 0;
  Win32kDriverObject = 0;
  v4 = 0;
  v41 = 0;
  v43 = 0;
  v44 = 0;
  v45 = gMouseTrails + 1;
  v5 = 0LL;
  LODWORD(v6) = 0;
  RemoteContext = GreGetRemoteContext();
  if ( PsGetCurrentProcess(v9, v8) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x20u;
  v10 = (_OWORD *)a1;
  if ( a1 + 304 < a1 || a1 + 304 > MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  v11 = v50;
  v12 = 2LL;
  do
  {
    *v11 = *v10;
    v11[1] = v10[1];
    v11[2] = v10[2];
    v11[3] = v10[3];
    v11[4] = v10[4];
    v11[5] = v10[5];
    v11[6] = v10[6];
    v11 += 8;
    *(v11 - 1) = v10[7];
    v10 += 8;
    --v12;
  }
  while ( v12 );
  *v11 = *v10;
  v11[1] = v10[1];
  v11[2] = v10[2];
  v13 = &v51;
  v14 = v50;
  v15 = 2LL;
  do
  {
    *(_OWORD *)v13 = *v14;
    *((_OWORD *)v13 + 1) = v14[1];
    *((_OWORD *)v13 + 2) = v14[2];
    *((_OWORD *)v13 + 3) = v14[3];
    *((_OWORD *)v13 + 4) = v14[4];
    *((_OWORD *)v13 + 5) = v14[5];
    *((_OWORD *)v13 + 6) = v14[6];
    v13 += 128;
    *((_OWORD *)v13 - 1) = v14[7];
    v14 += 8;
    --v15;
  }
  while ( v15 );
  *(_OWORD *)v13 = *v14;
  *((_OWORD *)v13 + 1) = v14[1];
  *((_OWORD *)v13 + 2) = v14[2];
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  SetMouseTrails(0);
  gpThinWireCache = ThinWireCache;
  ghRemoteMouseChannel = v54;
  gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
  gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
  ghRemoteVideoChannel = v52;
  ghRemoteBeepChannel = v53;
  ghRemoteKeyboardChannel = v55;
  ghRemoteThinwireChannel = v56;
  gRemoteClientKeyboardType = v69;
  *((_DWORD *)&gRemoteClientKeyboardType + 2) = v70;
  gbClientDoubleClickSupport = v66;
  gfEnableWindowsKey = v67;
  v46 = gbRemoteFxSession;
  gbRemoteFxSession = v73;
  *(_DWORD *)(RemoteContext + 64) = v73;
  gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
  *((_OWORD *)&gRemoteDisplayDeviceName + 1) = *(_OWORD *)(a1 + 178);
  *((_QWORD *)&gRemoteDisplayDeviceName + 4) = *(_QWORD *)(a1 + 194);
  *(_OWORD *)&gstrBaseWinStationName = v57;
  *((_OWORD *)&gstrBaseWinStationName + 1) = v58;
  *((_OWORD *)&gstrBaseWinStationName + 2) = v59;
  *((_OWORD *)&gstrBaseWinStationName + 3) = v60;
  gWinStationInfo = v62;
  *((_WORD *)&gWinStationInfo + 8) = v63;
  *(_OWORD *)((char *)&gWinStationInfo + 20) = v64;
  *((_DWORD *)&gWinStationInfo + 9) = v65;
  v16 = wcschr(gstrBaseWinStationName, 0x23u);
  if ( v16 )
    *v16 = 0;
  if ( gProtocolType )
  {
    FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v42, 0);
    v17 = gpsi;
    if ( !v42 )
    {
      *(_DWORD *)(gpsi + 2236LL) &= ~4u;
      goto LABEL_16;
    }
  }
  else
  {
    v17 = gpsi;
  }
  *(_DWORD *)(v17 + 2236) |= 4u;
LABEL_16:
  v18 = *(_QWORD *)(RemoteContext + 40);
  if ( v18 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_WORD *)(v18 + 2 * v19) );
    v6 = v19 + 1;
    v20 = (void *)Win32AllocPoolWithQuota(2 * v6, 2020897621LL);
    v5 = v20;
    if ( !v20 )
    {
      Win32kDriverObject = -1073741801;
      v21 = 0;
      v22 = 0;
      goto LABEL_69;
    }
    memmove(v20, *(const void **)(RemoteContext + 40), 2 * v6);
    v2 = 0;
  }
  if ( !gVideoFileObject && ghRemoteVideoChannel )
  {
    Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v47, 0LL);
    if ( Win32kDriverObject >= 0 )
    {
      gVideoFileObject = v47;
      IoGetRelatedDeviceObject((PFILE_OBJECT)v47);
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &v48, 0LL);
      gThinwireFileObject = v48;
      v2 = 0;
      if ( Win32kDriverObject >= 0
        && !(unsigned int)GreMultiUserInitSession(
                            RemoteContext,
                            ghRemoteThinwireChannel,
                            gpThinWireCache,
                            gRemoteNumMonitors,
                            gRemotePrimaryMonitor,
                            gVideoFileObject,
                            gThinwireFileObject,
                            8,
                            v61,
                            19,
                            gRemoteDisplayDeviceName) )
      {
        Win32kDriverObject = -1073741823;
      }
    }
  }
  else if ( !ghRemoteVideoChannel
         && !(unsigned int)GreMultiUserInitSession(
                             RemoteContext,
                             ghRemoteThinwireChannel,
                             gpThinWireCache,
                             gRemoteNumMonitors,
                             gRemotePrimaryMonitor,
                             gVideoFileObject,
                             gThinwireFileObject,
                             8,
                             v61,
                             19,
                             gRemoteDisplayDeviceName) )
  {
    Win32kDriverObject = -1073741823;
  }
  if ( Win32kDriverObject < 0 )
    goto LABEL_93;
  if ( ghRemoteBeepChannel )
  {
    Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, &Object, 0LL);
    gpRemoteBeepDevice = Object;
    v2 = 0;
  }
  if ( Win32kDriverObject < 0 )
    goto LABEL_93;
  if ( gnShadowers )
    xxxRemoteStopScreenUpdates();
  if ( v68 != gPreviousProtocolType && gPreviousProtocolType )
  {
    if ( !v5 || (unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, (unsigned int)(v6 - 1), v5) )
    {
      Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode(
                             grpdeskRitInput,
                             gProtocolType,
                             (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v74);
      if ( Win32kDriverObject < 0 )
      {
LABEL_93:
        v21 = 0;
        v22 = 0;
        goto LABEL_68;
      }
      if ( *(_DWORD *)(a1 + 288) )
        DrvCloseRemoteGraphicsDevices();
      if ( !v5 || (unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8LL, v61) )
        goto LABEL_41;
    }
    Win32kDriverObject = -1073741823;
    goto LABEL_93;
  }
LABEL_41:
  SetProtocolType(v68);
  v21 = 1;
  v22 = 1;
  if ( gProtocolType )
  {
    if ( gProtocolType == gPreviousProtocolType )
    {
      Win32kDriverObject = GreDrvReconnect(RemoteContext);
      LOBYTE(v2) = Win32kDriverObject >= 0;
      v41 = v2;
      v23 = 0;
    }
    else
    {
      v23 = 1;
      Win32kDriverObject = GreDrvConnect(RemoteContext);
      v41 = Win32kDriverObject >= 0;
    }
  }
  else
  {
    v23 = 1;
    Win32kDriverObject = DrvOpenLocalGraphicsDevices();
    if ( Win32kDriverObject < 0 )
    {
      v21 = 0;
      goto LABEL_68;
    }
    v44 = 1;
  }
  if ( !(unsigned int)DrvSetGraphicsDevices(v61, gProtocolType) )
  {
    if ( gnShadowers )
      RemoteRedrawScreen(v25, v24, v26, 0LL);
    Win32kDriverObject = -1073741823;
    goto LABEL_68;
  }
  if ( v71 || gProtocolType != gPreviousProtocolType || v72 )
  {
    if ( v72 || (v27 = 2191LL, !gProtocolType) )
      v27 = 2447LL;
    LOBYTE(HandleInformation) = 0;
    Win32kDriverObject = xxxUserSetDisplayConfig(
                           0LL,
                           0LL,
                           v27,
                           2LL,
                           gspdeskShouldBeForeground,
                           HandleInformation,
                           0LL,
                           0LL,
                           0LL,
                           v74);
    if ( Win32kDriverObject < 0 )
      goto LABEL_68;
  }
  else
  {
    v21 = 0;
  }
  if ( gProtocolType )
  {
    if ( v23
      && !(unsigned int)DrvEscapeRemoteDrivers(
                          *(_QWORD *)(gpDispInfo + 16LL),
                          gProtocolType,
                          *(_QWORD *)(RemoteContext + 40),
                          2LL,
                          gptmrWD,
                          8) )
    {
      Win32kDriverObject = -1073741823;
    }
    AttachInputDevices(0LL);
  }
  else
  {
    if ( gPreviousProtocolType )
      RemoveInputDevices();
    if ( !gpWin32kDriverObject )
      Win32kDriverObject = GetWin32kDriverObject();
    AttachInputDevices(1LL);
    xxxUserReinitializeAutoRotation();
    if ( gdwInAtomicOperation )
    {
      v28 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v28, gdwInAtomicOperation, v29, v30);
    RegisterCDROMNotify();
    v43 = 1;
    EnterCrit(0LL, 1LL);
  }
  RemoteRedrawScreen(v32, v31, v33, v34);
  if ( v21 && !gProtocolType && gbSnapShotWindowsAndMonitors && grpdeskIODefault )
    xxxRestoreDesktopsMonitorsAndWindowsRects(*(_QWORD *)(grpdeskIODefault + 40LL), gWndsMonitorSnapshotHead);
  InitKeyboard();
  UpdateKeyLights(0LL);
  SetPointer(1);
  if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
    TransitionCursorSuppressionState(2, 0);
  SetConnectedState(1LL, gbConnectCompleted);
  if ( gProtocolType )
  {
    FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v42, 0);
    v35 = gpsi;
    if ( !v42 )
    {
      *(_DWORD *)(gpsi + 2236LL) &= ~4u;
      goto LABEL_67;
    }
  }
  else
  {
    v35 = gpsi;
  }
  *(_DWORD *)(v35 + 2236) |= 4u;
LABEL_67:
  DrvGetRemoteDeviceCount();
  _guard_dispatch_icall_fptr();
  LOBYTE(v36) = gProtocolType == 0;
  LOBYTE(v37) = 1;
  CitSessionConnectChange(v37, v36);
  v21 = 1;
LABEL_68:
  v4 = v41;
LABEL_69:
  SetMouseTrails(v45);
  v38 = Win32kDriverObject == 0;
  if ( Win32kDriverObject < 0 )
  {
    if ( v4 )
      GreDrvDisconnect(RemoteContext);
    v38 = Win32kDriverObject == 0;
  }
  if ( v38 && !gProtocolType )
    RtlSetActiveConsoleId(gSessionId);
  if ( Win32kDriverObject < 0 )
    CleanupRemoteHandles(RemoteContext);
  SetConsoleSwitchInProgress(0LL);
  if ( Win32kDriverObject < 0 )
  {
    gbRemoteFxSession = v46;
    *(_DWORD *)(RemoteContext + 64) = v46;
    if ( v43 )
      UnregisterDeviceClassNotifications();
    if ( v44 )
      DrvCloseLocalGraphicsDevices();
    if ( v22 )
      SetProtocolType(gProtocolType);
    if ( v21 )
      DrvSetGraphicsDevices(v61, gProtocolType);
  }
  if ( v5 )
    Win32FreePool(v5);
  if ( !Win32kDriverObject )
  {
    if ( gProtocolType )
      DrvEscapeRemoteDrivers(
        *(_QWORD *)(gpDispInfo + 16LL),
        gProtocolType,
        *(_QWORD *)(RemoteContext + 40),
        6LL,
        0LL,
        0);
  }
  DrvOcclusionStateChangeNotify();
  return (unsigned int)Win32kDriverObject;
}
