/*
 * XREFs of xxxRemoteConnect @ 0x1C0063E60
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0010990 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C003D540 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     InitLoadResources @ 0x1C004F0B0 (InitLoadResources.c)
 *     WPP_RECORDER_SF_S @ 0x1C005836C (WPP_RECORDER_SF_S.c)
 *     FastGetProfileIntW @ 0x1C0061580 (FastGetProfileIntW.c)
 *     InitVideo @ 0x1C0063730 (InitVideo.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___ @ 0x1C0063A5C (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C0063B28 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     SetConsoleSwitchInProgress @ 0x1C0064360 (SetConsoleSwitchInProgress.c)
 *     SetProtocolType @ 0x1C00643E0 (SetProtocolType.c)
 *     SetConnectCompletedState @ 0x1C0064750 (SetConnectCompletedState.c)
 *     PowerConnectionEvent @ 0x1C0064798 (PowerConnectionEvent.c)
 *     GreMultiUserInitSession @ 0x1C00A6450 (GreMultiUserInitSession.c)
 *     CleanupRemoteHandles @ 0x1C00A6FB0 (CleanupRemoteHandles.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00B5B30 (DrvEscapeRemoteDrivers.c)
 *     wcschr @ 0x1C00B80DC (wcschr.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     GreDrvConnect @ 0x1C0123500 (GreDrvConnect.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxRemoteConnect(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  int v6; // r15d
  NTSTATUS v8; // ebx
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  wchar_t *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // ebp
  __int64 v18; // r8
  _DWORD *v19; // rax
  PVOID v20; // rdx
  HANDLE v21; // rcx
  struct _KTIMER *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  bool v27; // sf
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 result; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // edx
  PVOID Object[2]; // [rsp+60h] [rbp-38h] BYREF
  ULONG Value; // [rsp+A0h] [rbp+8h] BYREF

  v6 = a2;
  v8 = 0;
  if ( !*(_DWORD *)a1 )
  {
    v9 = &WPP_13cd4e2e91f138a525144d38f52d6bef_Traceguids;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_S(
        (_DWORD)gBaseLog,
        a2,
        15,
        10,
        (__int64)&WPP_13cd4e2e91f138a525144d38f52d6bef_Traceguids,
        (__int64)a3);
    }
    gdwHydraHint |= 8u;
    if ( (PVOID)PsGetCurrentProcess(v9, a2) != gpepCSRSS )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
    if ( gfSwitchInProgress )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
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
    SetProtocolType(*(unsigned __int16 *)(a1 + 264));
    gPreviousProtocolType = *(_WORD *)(a1 + 264);
    gRemoteClientKeyboardType = *(_QWORD *)(a1 + 268);
    dword_1C0210B00 = *(_DWORD *)(a1 + 276);
    gbClientDoubleClickSupport = *(_DWORD *)(a1 + 240);
    gfEnableWindowsKey = *(_DWORD *)(a1 + 244);
    gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
    gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
    gRemotePreviousMonitorsCount = gRemoteNumMonitors;
    *(_OWORD *)&gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
    xmmword_1C0210B28 = *(_OWORD *)(a1 + 178);
    qword_1C0210B38 = *(_QWORD *)(a1 + 194);
    gWinStationInfo = *(_OWORD *)(a1 + 202);
    word_1C0210BA0 = *(_WORD *)(a1 + 218);
    xmmword_1C0210BA4 = *(_OWORD *)(a1 + 220);
    dword_1C0210BB4 = *(_DWORD *)(a1 + 236);
    memset(&gstrBaseWinStationName, 0, 0x40uLL);
    *(_OWORD *)&gstrBaseWinStationName = *(_OWORD *)(a1 + 80);
    xmmword_1C0210A70 = *(_OWORD *)(a1 + 96);
    xmmword_1C0210A80 = *(_OWORD *)(a1 + 112);
    xmmword_1C0210A90 = *(_OWORD *)(a1 + 128);
    v13 = wcschr(&gstrBaseWinStationName, 0x23u);
    if ( v13 )
      *v13 = 0;
    v17 = gbRemoteFxSession;
    gbRemoteFxSession = *(_DWORD *)(a1 + 292);
    dword_1C0212BA0 = *(_DWORD *)(a1 + 292);
    if ( *(_DWORD *)(a1 + 292) )
      qword_1C0212BA4 = *(_QWORD *)(a1 + 296);
    gbConnected = 1;
    if ( (unsigned int)IsRemoteConnection(v15, v14, v16) )
    {
      FastGetProfileIntW(0LL, 39LL, (const WCHAR *)L"CursorBlinkEnable", 0, &Value, 0);
      v19 = gpsi;
      if ( !Value )
      {
        *((_DWORD *)gpsi + 559) &= ~4u;
        goto LABEL_16;
      }
    }
    else
    {
      v19 = gpsi;
    }
    v19[559] |= 4u;
LABEL_16:
    v20 = gVideoFileObject;
    if ( gVideoFileObject )
    {
      if ( ghRemoteVideoChannel )
        goto LABEL_19;
    }
    else if ( ghRemoteVideoChannel )
    {
      v8 = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, Object, 0LL);
      if ( v8 < 0 )
        goto LABEL_29;
      gVideoFileObject = Object[0];
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object[0]);
      v8 = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, Object, 0LL);
      gThinwireFileObject = Object[0];
      if ( v8 < 0 )
        goto LABEL_29;
      if ( !(unsigned int)GreMultiUserInitSession(
                            (int)&gRemoteContext,
                            (int)ghRemoteThinwireChannel,
                            gpThinWireCache,
                            gRemoteNumMonitors,
                            gRemotePrimaryMonitor,
                            (__int64)gVideoFileObject,
                            (__int64)Object[0],
                            v6,
                            a3,
                            19,
                            &gRemoteDisplayDeviceName) )
        goto LABEL_59;
      if ( (unsigned int)IsRemoteConnection(v34, v33, v35) )
      {
        v8 = GreDeviceIoControlImpl(RelatedDeviceObject, 0x381004u, 0LL, 0, 0LL, 0, (unsigned int *)Object, 0, 1);
        if ( v8 < 0 )
          goto LABEL_29;
        v8 = GreDrvConnect(&gRemoteContext);
      }
LABEL_55:
      if ( v8 >= 0 )
        goto LABEL_19;
LABEL_29:
      KeSetEvent(gpevtVideoInitialized, 1, 0);
      v27 = v8 < 0;
      if ( !v8 )
      {
        if ( !gProtocolType )
          RtlSetActiveConsoleId(gSessionId);
        if ( (int)IsxxxUserReinitializeAutoRotationSupported() >= 0 )
          xxxUserReinitializeAutoRotation();
        if ( (unsigned int)IsRemoteConnection(v29, v28, v30) )
          DrvEscapeRemoteDrivers(
            *(_QWORD *)(gpDispInfo + 16),
            (unsigned __int16)gProtocolType,
            (_DWORD)qword_1C0212B88,
            6,
            0LL,
            0);
        SetConnectCompletedState(1LL);
        v27 = 0;
      }
      if ( v27 )
      {
        gbRemoteFxSession = v17;
        dword_1C0212BA0 = v17;
        CleanupRemoteHandles(&gRemoteContext);
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
                         v6,
                         a3,
                         19,
                         &gRemoteDisplayDeviceName) )
    {
LABEL_19:
      v21 = ghRemoteBeepChannel;
      if ( ghRemoteBeepChannel )
      {
        v8 = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, Object, 0LL);
        gpRemoteBeepDevice = Object[0];
      }
      if ( v8 < 0 )
        goto LABEL_29;
      if ( !gbRemoteSession || gbVideoInitialized )
      {
        LOBYTE(v36) = (unsigned int)IsRemoteConnection(v21, v20, v18) == 0;
        ((void (__fastcall *)(__int64))qword_1C0212178)(v36);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v37) = 4;
          WPP_RECORDER_SF_D(
            (_DWORD)gBaseLog,
            v37,
            15,
            11,
            (__int64)&WPP_13cd4e2e91f138a525144d38f52d6bef_Traceguids,
            gSessionId);
        }
        v8 = 0;
        goto LABEL_29;
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
          ((void (__fastcall *)(__int64))qword_1C0212178)(v26);
          DispBrokerUpdateKernelDisplayPolicies();
          DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___();
          gbVideoInitialized = 1;
        }
        else
        {
          v8 = -1073741801;
        }
        goto LABEL_29;
      }
      gbConnected = 0;
      if ( gbConnectCompleted )
      {
        gbConnectCompleted = 0;
        PowerConnectionEvent();
      }
LABEL_59:
      v8 = -1073741823;
      goto LABEL_29;
    }
    v8 = -1073741823;
    goto LABEL_55;
  }
  result = IsxxxRemoteConsoleShadowStartSupported();
  if ( (int)result >= 0 )
    return xxxRemoteConsoleShadowStart(a1, a3, a4);
  return result;
}
