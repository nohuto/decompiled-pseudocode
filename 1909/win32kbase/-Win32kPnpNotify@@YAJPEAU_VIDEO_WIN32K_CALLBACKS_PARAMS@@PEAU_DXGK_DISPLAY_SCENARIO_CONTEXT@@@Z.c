/*
 * XREFs of ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0105800
 * Callers:
 *     VideoPortCalloutThread @ 0x1C0106BA0 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C003C300 (DrvUpdateGraphicsDeviceList.c)
 *     UserIsWddmConnectedSession @ 0x1C003CF30 (UserIsWddmConnectedSession.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C003E0F0 (UserRemoteConnectedSessionUsingWddm.c)
 *     DrvLogDiagDisplayChange @ 0x1C00462E0 (DrvLogDiagDisplayChange.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062C00 (xxxUserSetDisplayConfig.c)
 *     PostWinlogonMessage @ 0x1C00679D0 (PostWinlogonMessage.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00AB1F4 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01047F0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C012A674 (DrvCleanupGraphicsDevices.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x1C012B8E8 (DrvIsNotUsingGraphicsDevice.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C012DD70 (DxgkEngNotifyDisplayChange.c)
 */

__int64 __fastcall Win32kPnpNotify(
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v4; // ebx
  __int64 v6; // rcx
  PVOID PhysDisp; // rbp
  wchar_t *i; // rax
  _DWORD *v9; // rax
  int v10; // eax
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]
  char v13; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  if ( !gPowerTransitionsState )
    DrvSetWddmDeviceMonitorPowerState((__int64)a1->PhysDisp, 1, 1, (__int64)a2);
  if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0 || grpdeskRitInput )
  {
    DrvLogDiagDisplayChange((__int64)a1, 6);
    v6 = *(_QWORD *)(gpDispInfo + 16);
    if ( a1->Param )
    {
      if ( (unsigned int)UserIsWddmConnectedSession() )
      {
        v12 = 0LL;
        v11 = 0LL;
        gcLocalNextGlobalDeviceNumber = 0;
        DrvUpdateGraphicsDeviceList(1, gProtocolType == 0);
        v9 = DispBroker::DispBrokerClient::s_pSessionBroker;
        if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
          v9 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
        if ( !*v9 )
        {
          if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
            || (v4 = xxxSetCsrssThreadDesktop(grpdeskRitInput, &v11), v4 >= 0) )
          {
            v4 = xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 6u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
            if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
              xxxRestoreCsrssThreadDesktop(&v11, 0LL);
          }
        }
      }
      v10 = PnpNotifyForRemoteSession(0LL, a2);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        v4 = v10;
    }
    else
    {
      PhysDisp = a1->PhysDisp;
      for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
      {
        if ( *((PVOID *)i + 18) == PhysDisp )
          *((_DWORD *)i + 41) |= 1u;
      }
      if ( !(unsigned int)DrvIsNotUsingGraphicsDevice(v6) )
      {
        if ( (unsigned int)UserIsWddmConnectedSession() )
        {
          v12 = 0LL;
          v11 = 0LL;
          if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
            || (v4 = xxxSetCsrssThreadDesktop(grpdeskRitInput, &v11), v4 >= 0) )
          {
            v13 = 0;
            v4 = xxxUserSetDisplayConfig(
                   0,
                   0LL,
                   0x88Fu,
                   0x406u,
                   (__int64)grpdeskRitInput,
                   0,
                   0LL,
                   0LL,
                   &v13,
                   (__int64)a2);
            if ( v4 < 0 )
            {
              v4 = xxxUserSetDisplayConfig(0, 0LL, 0x80u, 1u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
            }
            else if ( a1->SurpriseRemoval && v13 )
            {
              DxgkEngNotifyDisplayChange(0LL);
            }
            if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
              xxxRestoreCsrssThreadDesktop(&v11, 0LL);
          }
        }
      }
      PnpNotifyForRemoteSession(PhysDisp, a2);
      if ( v4 >= 0 )
        DrvCleanupGraphicsDevices(PhysDisp);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        DrvUpdateGraphicsDeviceList(1, 0);
      if ( a1->LockUserSession )
        PostWinlogonMessage(1027LL, 0);
    }
    if ( !gProtocolType && !gPowerTransitionsState
      || (unsigned int)UserRemoteConnectedSessionUsingWddm() && gbFreezeScreenUpdates )
    {
      DrvSetWddmDeviceMonitorPowerState(0LL, 4, 1, (__int64)a2);
    }
    return (unsigned int)v4;
  }
  else
  {
    gbInVideoPnpCallout = 0;
    return 3221225473LL;
  }
}
