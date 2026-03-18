/*
 * XREFs of InitVideo @ 0x1C00B2994
 * Callers:
 *     xxxRemoteConnect @ 0x1C00A1760 (xxxRemoteConnect.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00B23A4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     DrvSetDisplayConfig @ 0x1C004A830 (DrvSetDisplayConfig.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0066DD0 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1C00A544C (UpdateExternalMonitorConnectedStatus.c)
 *     InitUserScreen @ 0x1C00A67B0 (InitUserScreen.c)
 *     DrvCloseLocalGraphicsDevices @ 0x1C00D3BA0 (DrvCloseLocalGraphicsDevices.c)
 *     DrvInitConsole @ 0x1C00D52B8 (DrvInitConsole.c)
 */

struct _MDEV *__fastcall InitVideo(__int64 a1)
{
  __int16 v1; // si
  int v2; // ebx
  struct _MDEV *v5; // rdi
  struct _DEVCAPS *v6; // rdx
  struct _MDEV *v7; // [rsp+98h] [rbp+10h] BYREF

  v1 = gProtocolType;
  v7 = 0LL;
  v2 = 0;
  if ( (int)DrvInitConsole() < 0 )
    return 0LL;
  if ( !gbFirstConnectionDone && !gbRemoteSession )
  {
    gbBaseVideo = 0;
    gProtocolType = -1;
    v2 = 1;
  }
  if ( (int)DrvSetDisplayConfig(0, 0LL, 2447LL, 2u, 0LL, 0, 0LL, 0LL, 0LL, &v7, 0LL, 0LL, 0LL, 0LL, a1) < 0 )
    return 0LL;
  if ( !gProtocolType )
    UpdateExternalMonitorConnectedStatus(1);
  v5 = v7;
  v6 = gpGdiDevCaps;
  gbBaseVideo = 0;
  *(_QWORD *)(gpDispInfo + 40) = *(_QWORD *)v7;
  *(_QWORD *)(gpDispInfo + 16) = v5;
  v7 = *(struct _MDEV **)(gpDispInfo + 40);
  vGetDeviceCaps((struct PDEVOBJ *)&v7, v6);
  if ( !(unsigned int)InitUserScreen() )
    return 0LL;
  if ( v2 )
  {
    if ( !v1 )
      RtlSetActiveConsoleId(0xFFFFFFFFLL);
    DrvCloseLocalGraphicsDevices();
  }
  else if ( (int)IsCacheRotationInfoSupported() >= 0 )
  {
    CacheRotationInfo();
  }
  gdwHydraHint |= 4u;
  return v5;
}
