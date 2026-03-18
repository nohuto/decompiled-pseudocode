/*
 * XREFs of xxxRemoteReconnect @ 0x1C01577E0
 * Callers:
 *     <none>
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C00BCFE0 (TransitionCursorSuppressionState.c)
 *     SetMouseTrails @ 0x1C00BD258 (SetMouseTrails.c)
 *     SetPointer @ 0x1C00BD490 (SetPointer.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E9CEC (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x1C00E9D98 (UnregisterDeviceClassNotifications.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00EA1E8 (xxxRemoteStopScreenUpdates.c)
 *     DrvSetGraphicsDevices @ 0x1C00EA48C (DrvSetGraphicsDevices.c)
 *     RemoveInputDevices @ 0x1C00EA800 (RemoveInputDevices.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C0133B34 (DrvOcclusionStateChangeNotify.c)
 *     InitKeyboard @ 0x1C01342F8 (InitKeyboard.c)
 *     RegisterCDROMNotify @ 0x1C0136898 (RegisterCDROMNotify.c)
 *     GreMultiUserSetDisplayDriverName @ 0x1C01584CC (GreMultiUserSetDisplayDriverName.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C01585FC (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0158634 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C0158694 (RemoteRedrawScreen.c)
 *     AttachInputDevices @ 0x1C0158798 (AttachInputDevices.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1C0158800 (DrvOpenLocalGraphicsDevices.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x1C015898C (DrvCloseRemoteGraphicsDevices.c)
 *     GreDrvDisconnect @ 0x1C0158C24 (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     GreDrvReconnect @ 0x1C02A19E8 (GreDrvReconnect.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int64 v15; // rdx
  char *v16; // rax
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  wchar_t *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  void *v23; // rax
  int v24; // r15d
  int v25; // r13d
  bool v26; // zf
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned int RemoteDeviceCount; // eax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  int HandleInformation; // [rsp+28h] [rbp-380h]
  BOOL v41; // [rsp+60h] [rbp-348h]
  int v42; // [rsp+70h] [rbp-338h] BYREF
  int v43; // [rsp+74h] [rbp-334h]
  int v44; // [rsp+78h] [rbp-330h]
  int v45; // [rsp+84h] [rbp-324h]
  int v46; // [rsp+88h] [rbp-320h]
  PVOID Object; // [rsp+90h] [rbp-318h] BYREF
  PVOID v48; // [rsp+98h] [rbp-310h] BYREF
  PVOID v49; // [rsp+A0h] [rbp-308h] BYREF
  _BYTE v50[320]; // [rsp+B0h] [rbp-2F8h] BYREF
  char v51; // [rsp+1F0h] [rbp-1B8h] BYREF
  __int64 v52; // [rsp+210h] [rbp-198h]
  __int64 v53; // [rsp+218h] [rbp-190h]
  __int64 v54; // [rsp+220h] [rbp-188h]
  __int64 v55; // [rsp+228h] [rbp-180h]
  __int64 v56; // [rsp+230h] [rbp-178h]
  __int128 v57; // [rsp+240h] [rbp-168h]
  __int128 v58; // [rsp+250h] [rbp-158h]
  __int128 v59; // [rsp+260h] [rbp-148h]
  __int128 v60; // [rsp+270h] [rbp-138h]
  char v61[58]; // [rsp+280h] [rbp-128h] BYREF
  __int128 v62; // [rsp+2BAh] [rbp-EEh]
  __int16 v63; // [rsp+2CAh] [rbp-DEh]
  __int128 v64; // [rsp+2CCh] [rbp-DCh]
  int v65; // [rsp+2DCh] [rbp-CCh]
  int v66; // [rsp+2E0h] [rbp-C8h]
  int v67; // [rsp+2E4h] [rbp-C4h]
  unsigned __int16 v68; // [rsp+2F8h] [rbp-B0h]
  __int64 v69; // [rsp+2FCh] [rbp-ACh]
  int v70; // [rsp+304h] [rbp-A4h]
  int v71; // [rsp+308h] [rbp-A0h]
  int v72; // [rsp+30Ch] [rbp-9Ch]
  int v73; // [rsp+314h] [rbp-94h]
  _QWORD v74[10]; // [rsp+330h] [rbp-78h] BYREF

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
  if ( PsGetCurrentProcess(v9, v8, v10, v11) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x20u;
  v13 = (_OWORD *)a1;
  if ( a1 + 320 < a1 || a1 + 320 > MmUserProbeAddress )
    v13 = (_OWORD *)MmUserProbeAddress;
  v14 = v50;
  v15 = 2LL;
  do
  {
    *v14 = *v13;
    v14[1] = v13[1];
    v14[2] = v13[2];
    v14[3] = v13[3];
    v14[4] = v13[4];
    v14[5] = v13[5];
    v14[6] = v13[6];
    v14 += 8;
    *(v14 - 1) = v13[7];
    v13 += 8;
    --v15;
  }
  while ( v15 );
  *v14 = *v13;
  v14[1] = v13[1];
  v14[2] = v13[2];
  v14[3] = v13[3];
  v16 = &v51;
  v17 = v50;
  v18 = 2LL;
  do
  {
    *(_OWORD *)v16 = *v17;
    *((_OWORD *)v16 + 1) = v17[1];
    *((_OWORD *)v16 + 2) = v17[2];
    *((_OWORD *)v16 + 3) = v17[3];
    *((_OWORD *)v16 + 4) = v17[4];
    *((_OWORD *)v16 + 5) = v17[5];
    *((_OWORD *)v16 + 6) = v17[6];
    v16 += 128;
    *((_OWORD *)v16 - 1) = v17[7];
    v17 += 8;
    --v18;
  }
  while ( v18 );
  *(_OWORD *)v16 = *v17;
  *((_OWORD *)v16 + 1) = v17[1];
  *((_OWORD *)v16 + 2) = v17[2];
  *((_OWORD *)v16 + 3) = v17[3];
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
  v19 = wcschr(gstrBaseWinStationName, 0x23u);
  if ( v19 )
    *v19 = 0;
  if ( gProtocolType )
  {
    FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v42, 0);
    v20 = gpsi;
    if ( !v42 )
    {
      *(_DWORD *)(gpsi + 2236LL) &= ~4u;
      goto LABEL_19;
    }
  }
  else
  {
    v20 = gpsi;
  }
  *(_DWORD *)(v20 + 2236) |= 4u;
LABEL_19:
  v21 = *(_QWORD *)(RemoteContext + 40);
  if ( !v21 )
    goto LABEL_25;
  v22 = -1LL;
  do
    ++v22;
  while ( *(_WORD *)(v21 + 2 * v22) );
  v6 = v22 + 1;
  v23 = (void *)Win32AllocPoolWithQuota(2 * v6, 2020897621LL);
  v5 = v23;
  if ( v23 )
  {
    memmove(v23, *(const void **)(RemoteContext + 40), 2 * v6);
    v2 = 0;
LABEL_25:
    if ( gVideoFileObject || !ghRemoteVideoChannel )
    {
      if ( !ghRemoteVideoChannel
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
    else
    {
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &Object, 0LL);
      if ( Win32kDriverObject >= 0 )
      {
        gVideoFileObject = Object;
        IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
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
    if ( Win32kDriverObject < 0 )
      goto LABEL_45;
    if ( ghRemoteBeepChannel )
    {
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, &v49, 0LL);
      gpRemoteBeepDevice = v49;
      v2 = 0;
    }
    if ( Win32kDriverObject < 0 )
      goto LABEL_45;
    if ( gnShadowers )
      xxxRemoteStopScreenUpdates();
    if ( v68 != gPreviousProtocolType && gPreviousProtocolType )
    {
      if ( v5 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, (unsigned int)(v6 - 1), v5) )
        goto LABEL_44;
      Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode(
                             grpdeskRitInput,
                             gProtocolType,
                             (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v74);
      if ( Win32kDriverObject < 0 )
        goto LABEL_45;
      if ( *(_DWORD *)(a1 + 288) )
        DrvCloseRemoteGraphicsDevices();
      if ( v5 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8LL, v61) )
      {
LABEL_44:
        Win32kDriverObject = -1073741823;
LABEL_45:
        v24 = 0;
        v25 = 0;
LABEL_46:
        v4 = v41;
        goto LABEL_47;
      }
    }
    SetProtocolType(v68);
    if ( !gProtocolType )
      DrvNotifySessionStateChange(3LL);
    v24 = 1;
    v25 = 1;
    if ( gProtocolType )
    {
      if ( gProtocolType == gPreviousProtocolType )
      {
        Win32kDriverObject = GreDrvReconnect(RemoteContext);
        LOBYTE(v2) = Win32kDriverObject >= 0;
        v41 = v2;
        v27 = 0;
      }
      else
      {
        v27 = 1;
        Win32kDriverObject = GreDrvConnect(RemoteContext);
        v41 = Win32kDriverObject >= 0;
      }
    }
    else
    {
      v27 = 1;
      Win32kDriverObject = DrvOpenLocalGraphicsDevices();
      if ( Win32kDriverObject < 0 )
      {
        v24 = 0;
        goto LABEL_46;
      }
      v44 = 1;
    }
    if ( !(unsigned int)DrvSetGraphicsDevices(v61, gProtocolType) )
    {
      if ( gnShadowers )
        RemoteRedrawScreen(v29, v28, v30, 0LL);
      Win32kDriverObject = -1073741823;
      goto LABEL_46;
    }
    if ( v71 || gProtocolType != gPreviousProtocolType || v72 )
    {
      if ( v72 || (v31 = 2191LL, !gProtocolType) )
        v31 = 2447LL;
      LOBYTE(HandleInformation) = 0;
      Win32kDriverObject = xxxUserSetDisplayConfig(
                             0LL,
                             0LL,
                             v31,
                             2LL,
                             gspdeskShouldBeForeground,
                             HandleInformation,
                             0LL,
                             0LL,
                             0LL,
                             v74);
      if ( Win32kDriverObject < 0 )
        goto LABEL_46;
    }
    else
    {
      v24 = 0;
    }
    if ( gProtocolType )
    {
      if ( v27
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
      (**(void (__fastcall ***)(PVOID))P)(P);
      if ( gdwInAtomicOperation )
      {
        v32 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v32, gdwInAtomicOperation, v33, v34);
      RegisterCDROMNotify();
      v43 = 1;
      EnterCrit(0LL, 1LL);
    }
    ((void (*)(void))RemoteRedrawScreen)();
    if ( v24 && !gProtocolType && gbSnapShotWindowsAndMonitors && grpdeskIODefault )
      xxxRestoreDesktopsMonitorsAndWindowsRects(*(_QWORD *)(grpdeskIODefault + 40LL), gWndsMonitorSnapshotHead);
    InitKeyboard();
    UpdateKeyLights(0LL);
    SetPointer(1);
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(2u, 0);
    SetConnectedState(1LL, gbConnectCompleted);
    if ( gProtocolType )
    {
      FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v42, 0);
      v35 = gpsi;
      if ( !v42 )
      {
        *(_DWORD *)(gpsi + 2236LL) &= ~4u;
LABEL_124:
        RemoteDeviceCount = DrvGetRemoteDeviceCount();
        LOBYTE(v37) = gProtocolType == 0;
        ((void (__fastcall *)(__int64, _QWORD))gDxgkInterface[123])(v37, RemoteDeviceCount);
        LOBYTE(v38) = gProtocolType == 0;
        LOBYTE(v39) = 1;
        CitSessionConnectChange(v39, v38);
        v24 = 1;
        goto LABEL_46;
      }
    }
    else
    {
      v35 = gpsi;
    }
    *(_DWORD *)(v35 + 2236) |= 4u;
    goto LABEL_124;
  }
  Win32kDriverObject = -1073741801;
  v24 = 0;
  v25 = 0;
LABEL_47:
  SetMouseTrails(v45);
  v26 = Win32kDriverObject == 0;
  if ( Win32kDriverObject < 0 )
  {
    if ( v4 )
      GreDrvDisconnect(RemoteContext);
    v26 = Win32kDriverObject == 0;
  }
  if ( v26 && !gProtocolType )
    RtlSetActiveConsoleId(gSessionId);
  if ( !gProtocolType )
    DrvNotifySessionStateChange(4LL);
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
    if ( v25 )
      SetProtocolType(gProtocolType);
    if ( v24 )
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
