/*
 * XREFs of ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01047F0
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0105800 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C003C300 (DrvUpdateGraphicsDeviceList.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C003D510 (UserRemoteConnectedSessionUsingXddm.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062C00 (xxxUserSetDisplayConfig.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C012A884 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvNeedToSwitchAdapterForRemoteSession @ 0x1C012B970 (DrvNeedToSwitchAdapterForRemoteSession.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C012C218 (DrvUpdateRemoteGraphicsDeviceList.c)
 */

__int64 __fastcall PnpNotifyForRemoteSession(void *a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+50h] [rbp-18h] BYREF

  v4[0] = 0LL;
  v4[1] = 0LL;
  if ( !(unsigned int)DrvNeedToSwitchAdapterForRemoteSession(a1) )
    return 0LL;
  if ( !(unsigned int)UserRemoteConnectedSessionUsingXddm() )
  {
LABEL_6:
    DrvCleanupRemoteGraphicsDevices();
    DrvUpdateRemoteGraphicsDeviceList();
    if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
    {
      xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 2u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
      if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
        xxxRestoreCsrssThreadDesktop(v4, 0LL);
    }
    return 0LL;
  }
  if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
    || (result = xxxSetCsrssThreadDesktop(grpdeskRitInput, v4), (int)result >= 0) )
  {
    DrvUpdateGraphicsDeviceList(1, 0);
    xxxUserSetDisplayConfig(0, 0LL, 0x80u, 1u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
    goto LABEL_6;
  }
  return result;
}
