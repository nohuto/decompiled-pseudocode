/*
 * XREFs of xxxRemoteReconnect @ 0x1C015EF70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     TransitionCursorSuppressionState @ 0x1C0081090 (TransitionCursorSuppressionState.c)
 *     SetMouseTrails @ 0x1C0081ACC (SetMouseTrails.c)
 *     SetPointer @ 0x1C0082DE0 (SetPointer.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C0083110 (DrvOcclusionStateChangeNotify.c)
 *     IsRemoteConnection @ 0x1C00AC240 (IsRemoteConnection.c)
 *     InitKeyboard @ 0x1C00D6BE0 (InitKeyboard.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C013383C (xxxRemoteStopScreenUpdates.c)
 *     RemoveInputDevices @ 0x1C0133B90 (RemoveInputDevices.c)
 *     UnregisterDeviceClassNotifications @ 0x1C0133C3C (UnregisterDeviceClassNotifications.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0133D00 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     RegisterCDROMNotify @ 0x1C01412D0 (RegisterCDROMNotify.c)
 *     GreMultiUserSetDisplayDriverName @ 0x1C015FD5C (GreMultiUserSetDisplayDriverName.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C015FE8C (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C015FEC4 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C015FF28 (RemoteRedrawScreen.c)
 *     AttachInputDevices @ 0x1C01600B4 (AttachInputDevices.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1C016011C (DrvOpenLocalGraphicsDevices.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x1C01602B0 (DrvCloseRemoteGraphicsDevices.c)
 *     GreDrvDisconnect @ 0x1C0160448 (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C016380C (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0163830 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     GreDrvReconnect @ 0x1C02B8644 (GreDrvReconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteReconnect(unsigned __int64 a1)
{
  BOOL v2; // ebx
  NTSTATUS Win32kDriverObject; // edi
  BOOL v4; // esi
  void *v5; // r12
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 RemoteContext; // r14
  _UNKNOWN **v11; // rcx
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int64 v15; // rdx
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  unsigned __int128 v19; // kr00_16
  wchar_t *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r15
  void *v24; // rax
  int v25; // r15d
  int v26; // r13d
  __int16 v27; // dx
  int v28; // ecx
  bool v29; // zf
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  LeaveEnterCrit *v44; // rcx
  __int64 v45; // rcx
  unsigned int RemoteDeviceCount; // eax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  PVOID *Object; // [rsp+20h] [rbp-388h]
  PVOID *Objecta; // [rsp+20h] [rbp-388h]
  int HandleInformation; // [rsp+28h] [rbp-380h]
  BOOL v53; // [rsp+60h] [rbp-348h]
  _BYTE v54[2]; // [rsp+6Ch] [rbp-33Ch] BYREF
  unsigned __int16 v55; // [rsp+6Eh] [rbp-33Ah]
  int v56; // [rsp+70h] [rbp-338h] BYREF
  int v57; // [rsp+74h] [rbp-334h]
  int v58; // [rsp+78h] [rbp-330h]
  int v59; // [rsp+84h] [rbp-324h]
  int v60; // [rsp+88h] [rbp-320h]
  PVOID v61; // [rsp+90h] [rbp-318h] BYREF
  PVOID v62; // [rsp+98h] [rbp-310h] BYREF
  PVOID v63; // [rsp+A0h] [rbp-308h] BYREF
  _BYTE v64[320]; // [rsp+B0h] [rbp-2F8h] BYREF
  _OWORD v65[20]; // [rsp+1F0h] [rbp-1B8h] BYREF
  _QWORD v66[10]; // [rsp+330h] [rbp-78h] BYREF

  memset(v66, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v66[1]);
  v66[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v66[3]) = 22;
  LOBYTE(v66[6]) = -1;
  v2 = 0;
  Win32kDriverObject = 0;
  v4 = 0;
  v53 = 0;
  v57 = 0;
  v58 = 0;
  v59 = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) + 1;
  v55 = gProtocolType;
  memset(v65, 0, sizeof(v65));
  v5 = 0LL;
  LODWORD(v6) = 0;
  RemoteContext = GreGetRemoteContext();
  v11 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v7,
      9,
      16,
      (__int64)&WPP_2f4edc7644973dcb8f37e7bb2394e69d_Traceguids);
    v2 = 0;
  }
  if ( PsGetCurrentProcess(v11, v7, v8, v9) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x20u;
  v13 = (_OWORD *)a1;
  if ( a1 + 320 < a1 || a1 + 320 > MmUserProbeAddress )
    v13 = (_OWORD *)MmUserProbeAddress;
  v14 = v64;
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
  v16 = v65;
  v17 = v64;
  v18 = 2LL;
  do
  {
    *v16 = *v17;
    v16[1] = v17[1];
    v16[2] = v17[2];
    v16[3] = v17[3];
    v16[4] = v17[4];
    v16[5] = v17[5];
    v16[6] = v17[6];
    v16 += 8;
    *(v16 - 1) = v17[7];
    v17 += 8;
    --v18;
  }
  while ( v18 );
  *v16 = *v17;
  v16[1] = v17[1];
  v16[2] = v17[2];
  v16[3] = v17[3];
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  SetMouseTrails(0);
  gpThinWireCache = ThinWireCache;
  ghRemoteMouseChannel = *(_QWORD *)&v65[3];
  gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
  gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
  v19 = v65[2];
  ghRemoteBeepChannel = v19 >> 64;
  ghRemoteVideoChannel = v19;
  ghRemoteKeyboardChannel = *((_QWORD *)&v65[3] + 1);
  ghRemoteThinwireChannel = *(_QWORD *)&v65[4];
  gRemoteClientKeyboardType = *(_QWORD *)((char *)&v65[16] + 12);
  *((_DWORD *)&gRemoteClientKeyboardType + 2) = DWORD1(v65[17]);
  gfEnableWindowsKey = DWORD1(v65[15]);
  gbClientDoubleClickSupport = v65[15];
  v60 = gbRemoteFxSession;
  gbRemoteFxSession = DWORD1(v65[18]);
  *(_DWORD *)(RemoteContext + 64) = DWORD1(v65[18]);
  gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
  gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
  gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
  *((_OWORD *)&gRemoteDisplayDeviceName + 1) = *(_OWORD *)(a1 + 178);
  *((_QWORD *)&gRemoteDisplayDeviceName + 4) = *(_QWORD *)(a1 + 194);
  *(_OWORD *)&gstrBaseWinStationName = v65[5];
  *((_OWORD *)&gstrBaseWinStationName + 1) = v65[6];
  *((_OWORD *)&gstrBaseWinStationName + 2) = v65[7];
  *((_OWORD *)&gstrBaseWinStationName + 3) = v65[8];
  gWinStationInfo = *(_OWORD *)((char *)&v65[12] + 10);
  *((_WORD *)&gWinStationInfo + 8) = WORD5(v65[13]);
  *(_OWORD *)((char *)&gWinStationInfo + 20) = *(_OWORD *)((char *)&v65[13] + 12);
  *((_DWORD *)&gWinStationInfo + 9) = HIDWORD(v65[14]);
  v20 = wcschr(gstrBaseWinStationName, 0x23u);
  if ( v20 )
    *v20 = 0;
  if ( IsRemoteConnection() )
  {
    HandleInformation = 0;
    Object = (PVOID *)&v56;
    FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable");
    v21 = gpsi;
    if ( !v56 )
    {
      *(_DWORD *)(gpsi + 2236LL) &= ~4u;
      goto LABEL_21;
    }
  }
  else
  {
    v21 = gpsi;
  }
  *(_DWORD *)(v21 + 2236) |= 4u;
LABEL_21:
  v22 = *(_QWORD *)(RemoteContext + 40);
  if ( !v22 )
    goto LABEL_27;
  v23 = -1LL;
  do
    ++v23;
  while ( *(_WORD *)(v22 + 2 * v23) );
  v6 = v23 + 1;
  v24 = (void *)Win32AllocPoolWithQuota(2 * v6, 2020897621LL);
  v5 = v24;
  if ( v24 )
  {
    memmove(v24, *(const void **)(RemoteContext + 40), 2 * v6);
    v2 = 0;
LABEL_27:
    v27 = gVideoFileObject;
    if ( gVideoFileObject || !ghRemoteVideoChannel )
    {
      if ( !ghRemoteVideoChannel )
      {
        LODWORD(Object) = gRemotePrimaryMonitor;
        if ( !(unsigned int)GreMultiUserInitSession(
                              RemoteContext,
                              ghRemoteThinwireChannel,
                              gpThinWireCache,
                              gRemoteNumMonitors,
                              Object,
                              gVideoFileObject,
                              gThinwireFileObject,
                              8,
                              &v65[9],
                              19,
                              gRemoteDisplayDeviceName) )
          Win32kDriverObject = -1073741823;
      }
    }
    else
    {
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v61, 0LL);
      if ( Win32kDriverObject >= 0 )
      {
        gVideoFileObject = v61;
        IoGetRelatedDeviceObject((PFILE_OBJECT)v61);
        Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &v62, 0LL);
        gThinwireFileObject = v62;
        v2 = 0;
        if ( Win32kDriverObject >= 0 )
        {
          LODWORD(Objecta) = gRemotePrimaryMonitor;
          if ( !(unsigned int)GreMultiUserInitSession(
                                RemoteContext,
                                ghRemoteThinwireChannel,
                                gpThinWireCache,
                                gRemoteNumMonitors,
                                Objecta,
                                gVideoFileObject,
                                gThinwireFileObject,
                                8,
                                &v65[9],
                                19,
                                gRemoteDisplayDeviceName) )
            Win32kDriverObject = -1073741823;
        }
      }
    }
    if ( Win32kDriverObject < 0 )
      goto LABEL_47;
    v28 = ghRemoteBeepChannel;
    if ( ghRemoteBeepChannel )
    {
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, &v63, 0LL);
      gpRemoteBeepDevice = v63;
      v2 = 0;
    }
    if ( Win32kDriverObject < 0 )
      goto LABEL_47;
    if ( gnShadowers )
      xxxRemoteStopScreenUpdates(v28, v27);
    if ( WORD4(v65[16]) != gPreviousProtocolType && gPreviousProtocolType )
    {
      if ( v5 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, (unsigned int)(v6 - 1), v5) )
        goto LABEL_46;
      Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode(
                             grpdeskRitInput,
                             gProtocolType,
                             (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v66);
      if ( Win32kDriverObject < 0 )
        goto LABEL_47;
      if ( *(_DWORD *)(a1 + 288) )
        DrvCloseRemoteGraphicsDevices(v31, v30);
      if ( v5 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8LL, &v65[9]) )
      {
LABEL_46:
        Win32kDriverObject = -1073741823;
LABEL_47:
        v25 = 0;
        v26 = 0;
LABEL_48:
        v4 = v53;
        goto LABEL_49;
      }
    }
    SetProtocolType(WORD4(v65[16]));
    if ( !gProtocolType )
      DrvNotifySessionStateChange(3LL);
    v26 = 1;
    if ( (unsigned int)UserRemoteConnectedSessionUsingXddm(v33, v32) )
    {
      if ( gProtocolType == gPreviousProtocolType )
      {
        Win32kDriverObject = GreDrvReconnect(RemoteContext);
        LOBYTE(v2) = Win32kDriverObject >= 0;
        v53 = v2;
        v36 = 0;
      }
      else
      {
        v36 = 1;
        Win32kDriverObject = GreDrvConnect(RemoteContext);
        v53 = Win32kDriverObject >= 0;
      }
    }
    else
    {
      v36 = 1;
      v25 = 0;
      if ( !gProtocolType )
      {
        Win32kDriverObject = DrvOpenLocalGraphicsDevices(v35, v34);
        if ( Win32kDriverObject < 0 )
          goto LABEL_48;
        v58 = 1;
      }
    }
    v25 = 1;
    if ( !(unsigned int)DrvSetGraphicsDevices(&v65[9], gProtocolType) )
    {
      if ( gnShadowers )
        RemoteRedrawScreen(v37, 0LL);
      Win32kDriverObject = -1073741823;
      goto LABEL_48;
    }
    DispBrokerAsyncSessionSwitched();
    if ( DWORD2(v65[17]) || gProtocolType != gPreviousProtocolType || HIDWORD(v65[17]) )
    {
      if ( HIDWORD(v65[17]) || (v38 = 2191LL, !gProtocolType) )
        v38 = 2447LL;
      LOBYTE(HandleInformation) = 0;
      Win32kDriverObject = xxxUserSetDisplayConfig(
                             0LL,
                             0LL,
                             v38,
                             2LL,
                             gspdeskShouldBeForeground,
                             HandleInformation,
                             0LL,
                             0LL,
                             0LL,
                             v66);
      if ( Win32kDriverObject < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v39) = 4;
          WPP_RECORDER_SF_(
            (unsigned int)&WPP_RECORDER_INITIALIZED,
            v39,
            9,
            17,
            (__int64)&WPP_2f4edc7644973dcb8f37e7bb2394e69d_Traceguids);
        }
        goto LABEL_48;
      }
    }
    else
    {
      v25 = 0;
    }
    if ( IsRemoteConnection() )
    {
      if ( v36
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
        Win32kDriverObject = GetWin32kDriverObject(v41, v40);
      AttachInputDevices(1LL);
      (**(void (__fastcall ***)(PVOID))P)(P);
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v54);
      RegisterCDROMNotify();
      v57 = 1;
      LeaveEnterCrit::~LeaveEnterCrit(v44);
    }
    RemoteRedrawScreen(v43, v42);
    if ( v25 && !gProtocolType && gbSnapShotWindowsAndMonitors && grpdeskIODefault )
      xxxRestoreDesktopsMonitorsAndWindowsRects(*(_QWORD *)(grpdeskIODefault + 40LL), gWndsMonitorSnapshotHead);
    InitKeyboard();
    UpdateKeyLights(0LL);
    SetPointer(1LL);
    if ( !IsRemoteConnection() && !gCursorSuppressionState )
    {
      gCursorSuppressionState = 9;
      TransitionCursorSuppressionState(0xAu, 0);
      TransitionCursorSuppressionState(2u, 0);
    }
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(2u, 0);
    SetConnectedState(1LL, gbConnectCompleted);
    if ( IsRemoteConnection() )
    {
      FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable");
      v45 = gpsi;
      if ( !v56 )
      {
        *(_DWORD *)(gpsi + 2236LL) &= ~4u;
LABEL_132:
        RemoteDeviceCount = DrvGetRemoteDeviceCount();
        LOBYTE(v47) = gProtocolType == 0;
        ((void (__fastcall *)(__int64, _QWORD))gDxgkInterface[48])(v47, RemoteDeviceCount);
        LOBYTE(v48) = gProtocolType == 0;
        LOBYTE(v49) = 1;
        CitSessionConnectChange(v49, v48);
        v25 = 1;
        goto LABEL_48;
      }
    }
    else
    {
      v45 = gpsi;
    }
    *(_DWORD *)(v45 + 2236) |= 4u;
    goto LABEL_132;
  }
  Win32kDriverObject = -1073741801;
  v25 = 0;
  v26 = 0;
LABEL_49:
  SetMouseTrails(v59);
  v29 = Win32kDriverObject == 0;
  if ( Win32kDriverObject < 0 )
  {
    if ( v4 )
      GreDrvDisconnect(RemoteContext);
    v29 = Win32kDriverObject == 0;
  }
  if ( v29 && !gProtocolType )
    RtlSetActiveConsoleId((unsigned int)gSessionId);
  if ( !gProtocolType )
    DrvNotifySessionStateChange(4LL);
  if ( Win32kDriverObject < 0 )
    CleanupRemoteHandles(RemoteContext);
  SetConsoleSwitchInProgress(0LL);
  if ( Win32kDriverObject < 0 )
  {
    gbRemoteFxSession = v60;
    *(_DWORD *)(RemoteContext + 64) = v60;
    if ( v57 )
      UnregisterDeviceClassNotifications();
    if ( v58 )
      DrvCloseGraphicsDevices(1LL);
    if ( v26 )
      SetProtocolType(v55);
    if ( v25 )
      DrvSetGraphicsDevices(&v65[9], gProtocolType);
  }
  if ( v5 )
    Win32FreePool(v5);
  if ( !Win32kDriverObject && IsRemoteConnection() )
    DrvEscapeRemoteDrivers(*(_QWORD *)(gpDispInfo + 16LL), gProtocolType, *(_QWORD *)(RemoteContext + 40), 6LL, 0LL, 0);
  DrvOcclusionStateChangeNotify();
  DispBrokerAsyncSessionSwitched();
  return (unsigned int)Win32kDriverObject;
}
