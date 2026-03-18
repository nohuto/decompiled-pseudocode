/*
 * XREFs of ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2074
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00E2B60 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C00161E0 (DrvUpdateGraphicsDeviceList.c)
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     xxxUserSetDisplayConfig @ 0x1C0049150 (xxxUserSetDisplayConfig.c)
 *     DrvLogDiagDisplayChange @ 0x1C004B040 (DrvLogDiagDisplayChange.c)
 *     PostWinlogonMessage @ 0x1C0097ED0 (PostWinlogonMessage.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00A2C80 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1610 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C00FD6D0 (DxgkEngNotifyDisplayChange.c)
 *     DrvCleanupGraphicsDevices @ 0x1C01042FC (DrvCleanupGraphicsDevices.c)
 */

__int64 __fastcall Win32kPnpNotify(
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v4; // ebx
  PVOID PhysDisp; // rbp
  struct tagGRAPHICS_DEVICE *i; // rax
  __int64 v8; // r8
  __int64 v9; // r8
  _DWORD *v10; // rax
  int v11; // eax
  _QWORD v12[2]; // [rsp+50h] [rbp-28h] BYREF
  char v13; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  if ( !gPowerTransitionsState )
    DrvSetWddmDeviceMonitorPowerState((__int64)a1->PhysDisp, 1, 1, (__int64)a2);
  if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0 || grpdeskRitInput )
  {
    DrvLogDiagDisplayChange((__int64)a1, 6);
    if ( a1->Param )
    {
      if ( (unsigned int)UserIsWddmConnectedSession() )
      {
        v12[0] = 0LL;
        WPP_MAIN_CB.DeviceLock.Header.SignalState = 0;
        DrvUpdateGraphicsDeviceList(1LL, gProtocolType == 0, v9);
        v10 = DispBroker::DispBrokerClient::s_pSessionBroker;
        if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
          v10 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
        if ( !*v10 )
        {
          if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
            || (v4 = xxxSetCsrssThreadDesktop(grpdeskRitInput, v12), v4 >= 0) )
          {
            v4 = xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 6u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
            if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
              xxxRestoreCsrssThreadDesktop(v12, 0LL);
          }
        }
      }
      v11 = PnpNotifyForRemoteSession(0LL, a2);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        v4 = v11;
    }
    else
    {
      PhysDisp = a1->PhysDisp;
      for ( i = gpLocalGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
      {
        if ( *((PVOID *)i + 18) == PhysDisp )
          *((_DWORD *)i + 41) |= 1u;
      }
      if ( (unsigned int)UserIsWddmConnectedSession() )
      {
        v12[0] = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
          || (v4 = xxxSetCsrssThreadDesktop(grpdeskRitInput, v12), v4 >= 0) )
        {
          v13 = 0;
          v4 = xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 6u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, &v13, (__int64)a2);
          if ( v4 < 0 )
          {
            v4 = xxxUserSetDisplayConfig(0, 0LL, 0x80u, 1u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
          }
          else if ( a1->SurpriseRemoval && v13 )
          {
            DxgkEngNotifyDisplayChange(0LL);
          }
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
            xxxRestoreCsrssThreadDesktop(v12, 0LL);
        }
      }
      PnpNotifyForRemoteSession(PhysDisp, a2);
      if ( v4 >= 0 )
        DrvCleanupGraphicsDevices(PhysDisp);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        DrvUpdateGraphicsDeviceList(1LL, 0LL, v8);
      if ( a1->LockUserSession )
        PostWinlogonMessage(1027LL, 0);
    }
    if ( !gPowerTransitionsState )
      DrvSetWddmDeviceMonitorPowerState(0LL, 4, 1, (__int64)a2);
    return (unsigned int)v4;
  }
  else
  {
    gbInVideoPnpCallout = 0;
    return 3221225473LL;
  }
}
