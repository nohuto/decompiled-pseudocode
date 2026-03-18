/*
 * XREFs of xxxRemoteConnect @ 0x1C00A1760
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0052BF4 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     InitLoadResources @ 0x1C0054BBC (InitLoadResources.c)
 *     wcschr @ 0x1C0073EA8 (wcschr.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     CleanupRemoteHandles @ 0x1C00A1430 (CleanupRemoteHandles.c)
 *     SetConnectCompletedState @ 0x1C00A1570 (SetConnectCompletedState.c)
 *     SetConsoleSwitchInProgress @ 0x1C00A15E0 (SetConsoleSwitchInProgress.c)
 *     SetProtocolType @ 0x1C00A1650 (SetProtocolType.c)
 *     PowerConnectionEvent @ 0x1C00A456C (PowerConnectionEvent.c)
 *     FastGetProfileIntW @ 0x1C00A80D0 (FastGetProfileIntW.c)
 *     InitVideo @ 0x1C00B2994 (InitVideo.c)
 *     GreDrvConnect @ 0x1C00C38D0 (GreDrvConnect.c)
 *     GreMultiUserInitSession @ 0x1C00C3A50 (GreMultiUserInitSession.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00D4BB0 (DrvEscapeRemoteDrivers.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxRemoteConnect(__int64 a1, int a2, unsigned __int16 *a3, __int64 a4)
{
  NTSTATUS v8; // ebx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  wchar_t *v12; // rax
  int v13; // ebp
  _DWORD *v14; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  bool v16; // zf
  struct _KTIMER *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  PVOID Object[2]; // [rsp+60h] [rbp-38h] BYREF
  ULONG Value; // [rsp+A0h] [rbp+8h] BYREF

  v8 = 0;
  if ( !*(_DWORD *)a1 )
  {
    gdwHydraHint |= 8u;
    if ( (PVOID)PsGetCurrentProcess(a1) != gpepCSRSS )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
    if ( gfSwitchInProgress )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
    if ( gfSessionSwitchBlock )
      return 3221225473LL;
    SetConsoleSwitchInProgress(1);
    *(_QWORD *)&gpThinWireCache = &ThinWireCache;
    ghRemoteMouseChannel = *(_QWORD *)(a1 + 48);
    gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
    gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
    ghRemoteVideoChannel = *(HANDLE *)(a1 + 32);
    ghRemoteBeepChannel = *(HANDLE *)(a1 + 40);
    ghRemoteKeyboardChannel = *(_QWORD *)(a1 + 56);
    ghRemoteThinwireChannel = *(HANDLE *)(a1 + 64);
    SetProtocolType(*(_WORD *)(a1 + 264));
    gPreviousProtocolType = *(_WORD *)(a1 + 264);
    gRemoteClientKeyboardType = *(_QWORD *)(a1 + 268);
    dword_1C01A20F0 = *(_DWORD *)(a1 + 276);
    gbClientDoubleClickSupport = *(_DWORD *)(a1 + 240);
    gfEnableWindowsKey = *(_DWORD *)(a1 + 244);
    gRemotePreviousMonitorsCount = gRemoteNumMonitors;
    *(_OWORD *)&gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
    xmmword_1C01A2F58 = *(_OWORD *)(a1 + 178);
    qword_1C01A2F68 = *(_QWORD *)(a1 + 194);
    gWinStationInfo = *(_OWORD *)(a1 + 202);
    word_1C01A2FC0 = *(_WORD *)(a1 + 218);
    xmmword_1C01A2FC4 = *(_OWORD *)(a1 + 220);
    dword_1C01A2FD4 = *(_DWORD *)(a1 + 236);
    memset(&gstrBaseWinStationName, 0, 0x40uLL);
    *(_OWORD *)&gstrBaseWinStationName = *(_OWORD *)(a1 + 80);
    xmmword_1C01A2EC0 = *(_OWORD *)(a1 + 96);
    xmmword_1C01A2ED0 = *(_OWORD *)(a1 + 112);
    xmmword_1C01A2EE0 = *(_OWORD *)(a1 + 128);
    v12 = wcschr(&gstrBaseWinStationName, 0x23u);
    if ( v12 )
      *v12 = 0;
    v13 = gbRemoteFxSession;
    gbRemoteFxSession = *(_DWORD *)(a1 + 292);
    dword_1C01A1750 = *(_DWORD *)(a1 + 292);
    if ( *(_DWORD *)(a1 + 292) )
      qword_1C01A1754 = *(_QWORD *)(a1 + 296);
    gbConnected = 1;
    if ( (unsigned int)IsRemoteConnection() )
    {
      FastGetProfileIntW(0, 39, (int)L"CursorBlinkEnable", 0, &Value, 0);
      v14 = gpsi;
      if ( !Value )
      {
        *((_DWORD *)gpsi + 559) &= ~4u;
        goto LABEL_19;
      }
    }
    else
    {
      v14 = gpsi;
    }
    v14[559] |= 4u;
LABEL_19:
    if ( gVideoFileObject )
    {
      if ( ghRemoteVideoChannel )
        goto LABEL_32;
    }
    else if ( ghRemoteVideoChannel )
    {
      v8 = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, Object, 0LL);
      if ( v8 < 0 )
        goto LABEL_46;
      gVideoFileObject = Object[0];
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object[0]);
      v8 = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, Object, 0LL);
      gThinwireFileObject = Object[0];
      if ( v8 < 0 )
        goto LABEL_46;
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
LABEL_24:
        v8 = -1073741823;
LABEL_56:
        gbRemoteFxSession = v13;
        dword_1C01A1750 = v13;
        CleanupRemoteHandles(&gRemoteContext);
LABEL_57:
        SetConsoleSwitchInProgress(0);
        return (unsigned int)v8;
      }
      if ( (unsigned int)IsRemoteConnection() )
      {
        v8 = GreDeviceIoControlImpl(RelatedDeviceObject, 0x381004u, 0LL, 0, 0LL, 0, (unsigned int *)Object, 0, 1);
        if ( v8 < 0 )
          goto LABEL_46;
        v8 = GreDrvConnect(&gRemoteContext);
      }
      goto LABEL_31;
    }
    if ( !(unsigned int)GreMultiUserInitSession(
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
      v8 = -1073741823;
LABEL_31:
      v16 = v8 == 0;
      if ( v8 < 0 )
        goto LABEL_47;
    }
LABEL_32:
    if ( ghRemoteBeepChannel )
    {
      v8 = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, Object, 0LL);
      gpRemoteBeepDevice = Object[0];
    }
    v16 = v8 == 0;
    if ( v8 < 0 )
    {
LABEL_47:
      if ( v16 )
      {
        if ( !gProtocolType )
          RtlSetActiveConsoleId(gSessionId);
        if ( (int)IsxxxUserReinitializeAutoRotationSupported() >= 0 )
          xxxUserReinitializeAutoRotation();
        if ( (unsigned int)IsRemoteConnection() )
          DrvEscapeRemoteDrivers(
            *(_QWORD *)(gpDispInfo + 16),
            (unsigned __int16)gProtocolType,
            (_DWORD)qword_1C01A1738,
            6,
            0LL,
            0);
        SetConnectCompletedState(1);
      }
      if ( v8 >= 0 )
        goto LABEL_57;
      goto LABEL_56;
    }
    if ( !gbRemoteSession || gbVideoInitialized )
    {
      LOBYTE(v19) = (unsigned int)IsRemoteConnection() == 0;
      ((void (__fastcall *)(__int64))qword_1C01A1B70)(v19);
      v8 = 0;
    }
    else
    {
      if ( !InitVideo(a4) )
      {
        gbConnected = 0;
        if ( gbConnectCompleted )
        {
          gbConnectCompleted = 0;
          PowerConnectionEvent();
        }
        goto LABEL_24;
      }
      if ( (int)IsLW_BrushInitSupported() >= 0 && !(unsigned int)LW_BrushInit()
        || (InitLoadResources(0),
            v17 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 0x744B7355u),
            (gptmrWD = v17) == 0LL) )
      {
        v8 = -1073741801;
        goto LABEL_56;
      }
      KeInitializeTimerEx(v17, SynchronizationTimer);
      LOBYTE(v18) = (unsigned int)IsRemoteConnection() == 0;
      ((void (__fastcall *)(__int64))qword_1C01A1B70)(v18);
      gbVideoInitialized = 1;
    }
LABEL_46:
    v16 = v8 == 0;
    goto LABEL_47;
  }
  result = IsxxxRemoteConsoleShadowStartSupported();
  if ( (int)result >= 0 )
    return xxxRemoteConsoleShadowStart(a1, a3, a4);
  return result;
}
