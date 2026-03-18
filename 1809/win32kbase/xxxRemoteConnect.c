/*
 * XREFs of xxxRemoteConnect @ 0x1C0098740
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     InitLoadResources @ 0x1C003BB24 (InitLoadResources.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0041E08 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     FastGetProfileIntW @ 0x1C0046B90 (FastGetProfileIntW.c)
 *     SetConnectCompletedState @ 0x1C0048FF0 (SetConnectCompletedState.c)
 *     PowerConnectionEvent @ 0x1C0049038 (PowerConnectionEvent.c)
 *     CleanupRemoteHandles @ 0x1C0094280 (CleanupRemoteHandles.c)
 *     SetProtocolType @ 0x1C0098390 (SetProtocolType.c)
 *     SetConsoleSwitchInProgress @ 0x1C0098C00 (SetConsoleSwitchInProgress.c)
 *     InitVideo @ 0x1C0098C74 (InitVideo.c)
 *     GreMultiUserInitSession @ 0x1C0099A20 (GreMultiUserInitSession.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00A5340 (DrvEscapeRemoteDrivers.c)
 *     wcschr @ 0x1C00A667C (wcschr.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     GreDrvConnect @ 0x1C00F9950 (GreDrvConnect.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxRemoteConnect(__int64 a1, int a2, unsigned __int16 *a3, __int64 a4)
{
  NTSTATUS v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  wchar_t *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // ebp
  __int64 v17; // r8
  _DWORD *v18; // rax
  PVOID v19; // rdx
  HANDLE v20; // rcx
  int v21; // ecx
  struct _KTIMER *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  bool v29; // sf
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 result; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  PVOID Object[2]; // [rsp+60h] [rbp-38h] BYREF
  ULONG Value; // [rsp+A0h] [rbp+8h] BYREF

  v8 = 0;
  if ( !*(_DWORD *)a1 )
  {
    gdwHydraHint |= 8u;
    if ( (PVOID)PsGetCurrentProcess(a1) != gpepCSRSS )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    if ( gfSessionSwitchBlock )
      return 3221225473LL;
    SetConsoleSwitchInProgress(1LL);
    *(_QWORD *)&gpThinWireCache = &ThinWireCache;
    ghRemoteMouseChannel = *(_QWORD *)(a1 + 48);
    gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
    gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
    ghRemoteVideoChannel = *(HANDLE *)(a1 + 32);
    ghRemoteBeepChannel = *(HANDLE *)(a1 + 40);
    ghRemoteKeyboardChannel = *(_QWORD *)(a1 + 56);
    ghRemoteThinwireChannel = *(HANDLE *)(a1 + 64);
    SetProtocolType(*(_WORD *)(a1 + 264));
    LOWORD(WPP_MAIN_CB.DeviceLock.Header.Lock) = *(_WORD *)(a1 + 264);
    gRemoteClientKeyboardType = *(_QWORD *)(a1 + 268);
    dword_1C01CBE60 = *(_DWORD *)(a1 + 276);
    gbClientDoubleClickSupport = *(_DWORD *)(a1 + 240);
    gfEnableWindowsKey = *(_DWORD *)(a1 + 244);
    gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
    gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
    gRemotePreviousMonitorsCount = gRemoteNumMonitors;
    *(_OWORD *)&gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
    xmmword_1C01CBE88 = *(_OWORD *)(a1 + 178);
    qword_1C01CBE98 = *(_QWORD *)(a1 + 194);
    gWinStationInfo = *(_OWORD *)(a1 + 202);
    word_1C01CBF00 = *(_WORD *)(a1 + 218);
    xmmword_1C01CBF04 = *(_OWORD *)(a1 + 220);
    dword_1C01CBF14 = *(_DWORD *)(a1 + 236);
    memset(&gstrBaseWinStationName, 0, 0x40uLL);
    *(_OWORD *)&gstrBaseWinStationName = *(_OWORD *)(a1 + 80);
    xmmword_1C01CBDD0 = *(_OWORD *)(a1 + 96);
    xmmword_1C01CBDE0 = *(_OWORD *)(a1 + 112);
    xmmword_1C01CBDF0 = *(_OWORD *)(a1 + 128);
    v12 = wcschr(&gstrBaseWinStationName, 0x23u);
    if ( v12 )
      *v12 = 0;
    v16 = gbRemoteFxSession;
    gbRemoteFxSession = *(_DWORD *)(a1 + 292);
    dword_1C01CE2F0 = *(_DWORD *)(a1 + 292);
    if ( *(_DWORD *)(a1 + 292) )
      qword_1C01CE2F4 = *(_QWORD *)(a1 + 296);
    gbConnected = 1;
    if ( (unsigned int)IsRemoteConnection(v14, v13, v15) )
    {
      FastGetProfileIntW(0LL, 39LL, (const WCHAR *)L"CursorBlinkEnable", 0, &Value, 0);
      v18 = gpsi;
      if ( !Value )
      {
        *((_DWORD *)gpsi + 559) &= ~4u;
        goto LABEL_14;
      }
    }
    else
    {
      v18 = gpsi;
    }
    v18[559] |= 4u;
LABEL_14:
    v19 = gVideoFileObject;
    if ( gVideoFileObject )
    {
      if ( ghRemoteVideoChannel )
        goto LABEL_17;
    }
    else if ( ghRemoteVideoChannel )
    {
      v8 = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, Object, 0LL);
      if ( v8 < 0 )
        goto LABEL_27;
      gVideoFileObject = Object[0];
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object[0]);
      v8 = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, Object, 0LL);
      gThinwireFileObject = Object[0];
      if ( v8 < 0 )
        goto LABEL_27;
      if ( !(unsigned int)GreMultiUserInitSession(
                            (int)&gRemoteContext,
                            (int)ghRemoteThinwireChannel,
                            gpThinWireCache,
                            gRemoteNumMonitors,
                            gRemotePrimaryMonitor,
                            (__int64)gVideoFileObject,
                            (__int64)Object[0],
                            a2,
                            a3,
                            19,
                            &gRemoteDisplayDeviceName) )
      {
LABEL_57:
        v8 = -1073741823;
        goto LABEL_27;
      }
      if ( (unsigned int)IsRemoteConnection(v36, v35, v37) )
      {
        v8 = GreDeviceIoControlImpl(RelatedDeviceObject, 0x381004u, 0LL, 0, 0LL, 0, (unsigned int *)Object, 0, 1);
        if ( v8 < 0 )
          goto LABEL_27;
        v8 = GreDrvConnect(&gRemoteContext);
      }
LABEL_53:
      if ( v8 >= 0 )
        goto LABEL_17;
LABEL_27:
      KeSetEvent(gpevtVideoInitialized, 1, 0);
      v29 = v8 < 0;
      if ( !v8 )
      {
        if ( !gProtocolType )
          RtlSetActiveConsoleId(gSessionId);
        if ( (int)IsxxxUserReinitializeAutoRotationSupported() >= 0 )
          xxxUserReinitializeAutoRotation();
        if ( (unsigned int)IsRemoteConnection(v31, v30, v32) )
          DrvEscapeRemoteDrivers(
            *(_QWORD *)(gpDispInfo + 16),
            (unsigned __int16)gProtocolType,
            (_DWORD)qword_1C01CE2D8,
            6,
            0LL,
            0);
        SetConnectCompletedState(1);
        v29 = 0;
      }
      if ( v29 )
      {
        gbRemoteFxSession = v16;
        dword_1C01CE2F0 = v16;
        CleanupRemoteHandles(&gRemoteContext, v27, v28);
      }
      SetConsoleSwitchInProgress(0LL);
      return (unsigned int)v8;
    }
    if ( (unsigned int)GreMultiUserInitSession(
                         (int)&gRemoteContext,
                         (int)ghRemoteThinwireChannel,
                         gpThinWireCache,
                         gRemoteNumMonitors,
                         gRemotePrimaryMonitor,
                         (__int64)gVideoFileObject,
                         (__int64)gThinwireFileObject,
                         a2,
                         a3,
                         19,
                         &gRemoteDisplayDeviceName) )
    {
LABEL_17:
      v20 = ghRemoteBeepChannel;
      if ( ghRemoteBeepChannel )
      {
        v8 = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, Object, 0LL);
        gpRemoteBeepDevice = Object[0];
      }
      if ( v8 < 0 )
        goto LABEL_27;
      if ( !gbRemoteSession || gbVideoInitialized )
      {
        LOBYTE(v38) = (unsigned int)IsRemoteConnection(v20, v19, v17) == 0;
        ((void (__fastcall *)(__int64))qword_1C01CDA10)(v38);
        v8 = 0;
        goto LABEL_27;
      }
      if ( InitVideo(a4) )
      {
        if ( ((int)IsLW_BrushInitSupported() < 0 || (unsigned int)LW_BrushInit())
          && (InitLoadResources(0),
              v22 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 0x744B7355u),
              (gptmrWD = v22) != 0LL) )
        {
          KeInitializeTimerEx(v22, SynchronizationTimer);
          LOBYTE(v26) = (unsigned int)IsRemoteConnection(v24, v23, v25) == 0;
          ((void (__fastcall *)(__int64))qword_1C01CDA10)(v26);
          gbVideoInitialized = 1;
        }
        else
        {
          v8 = -1073741801;
        }
        goto LABEL_27;
      }
      gbConnected = 0;
      if ( gbConnectCompleted )
      {
        gbConnectCompleted = 0;
        PowerConnectionEvent(v21);
      }
      goto LABEL_57;
    }
    v8 = -1073741823;
    goto LABEL_53;
  }
  result = IsxxxRemoteConsoleShadowStartSupported();
  if ( (int)result >= 0 )
    return xxxRemoteConsoleShadowStart(a1, a3, a4);
  return result;
}
