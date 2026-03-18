/*
 * XREFs of InitVideo @ 0x1C00767BC
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0073120 (-UserInitialize@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x1C0076D40 (xxxRemoteConnect.c)
 * Callees:
 *     UpdateExternalMonitorConnectedStatus @ 0x1C0005158 (UpdateExternalMonitorConnectedStatus.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C003FAA4 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     DrvSetDisplayConfig @ 0x1C00504D0 (DrvSetDisplayConfig.c)
 *     InitUserScreen @ 0x1C00761B4 (InitUserScreen.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C0076A08 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     DrvInitConsole @ 0x1C0076AE8 (DrvInitConsole.c)
 *     DrvCloseGraphicsDevices @ 0x1C00A7C50 (DrvCloseGraphicsDevices.c)
 */

struct _MDEV *__fastcall InitVideo(__int64 a1)
{
  __int16 v1; // si
  int v2; // ebx
  struct _MDEV *v4; // rdi
  struct _DEVCAPS *v5; // rdx
  struct _MDEV *v7; // [rsp+98h] [rbp+10h] BYREF

  v1 = gProtocolType;
  v7 = 0LL;
  v2 = 0;
  if ( (int)DrvInitConsole() < 0 )
    return 0LL;
  if ( !gbRemoteSession && !gbFirstConnectionDone )
  {
    gbBaseVideo = 0;
    gProtocolType = -1;
    v2 = 1;
  }
  DispBrokerUpdateKernelDisplayPolicies();
  if ( (int)DrvSetDisplayConfig(0, 0LL, 2447LL, 2u, 0LL, 0, 0LL, 0LL, 0LL, &v7, 0LL, 0LL, 0LL, 0LL, a1) < 0 )
    return 0LL;
  if ( !gProtocolType )
    UpdateExternalMonitorConnectedStatus(1);
  v4 = v7;
  v5 = gpGdiDevCaps;
  gbBaseVideo = 0;
  *(_QWORD *)(gpDispInfo + 40) = *(_QWORD *)v7;
  *(_QWORD *)(gpDispInfo + 16) = v4;
  v7 = *(struct _MDEV **)(gpDispInfo + 40);
  vGetDeviceCaps((struct PDEVOBJ *)&v7, v5);
  if ( !(unsigned int)InitUserScreen() )
    return 0LL;
  if ( v2 )
  {
    if ( !v1 )
      RtlSetActiveConsoleId(0xFFFFFFFFLL);
    DrvCloseGraphicsDevices(1LL);
  }
  else if ( (int)IsCacheRotationInfoSupported() >= 0 )
  {
    CacheRotationInfo();
  }
  gdwHydraHint |= 4u;
  return v4;
}
