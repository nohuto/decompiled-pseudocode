/*
 * XREFs of RemotePassthruDisable @ 0x1C0212C50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     RemoteRedrawScreen @ 0x1C015FF28 (RemoteRedrawScreen.c)
 *     GetRemoteHDEV @ 0x1C0212B84 (GetRemoteHDEV.c)
 *     bDrvReconnect @ 0x1C02B8DD0 (bDrvReconnect.c)
 */

__int64 RemotePassthruDisable()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 RemoteContext; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  PVOID v6; // r8
  HANDLE v7; // rdx
  __int64 RemoteHDEV; // rcx
  int v9; // ecx

  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_(v1, v0, 9, 26, (__int64)&WPP_2f4edc7644973dcb8f37e7bb2394e69d_Traceguids);
  }
  if ( PsGetCurrentProcess(v1, v0, v3, v4) != gpepCSRSS )
    return 3221225506LL;
  if ( gbConnected )
  {
    if ( gfRemotingConsole )
    {
      v6 = gConsoleShadowThinwireFileObject;
      v7 = ghConsoleShadowThinwireChannel;
      RemoteHDEV = gConsoleShadowhDev;
    }
    else
    {
      RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
      v6 = (PVOID)gThinwireFileObject;
      v7 = (HANDLE)ghRemoteThinwireChannel;
    }
    if ( !(unsigned int)bDrvReconnect(RemoteHDEV, v7, v6, 1LL) )
      return 3221880856LL;
    RemoteRedrawScreen(v9);
    UpdateKeyLights(0LL);
  }
  return 0LL;
}
