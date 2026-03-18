/*
 * XREFs of RemotePassthruDisable @ 0x1C01FB940
 * Callers:
 *     <none>
 * Callees:
 *     RemoteRedrawScreen @ 0x1C0158694 (RemoteRedrawScreen.c)
 *     GetRemoteHDEV @ 0x1C01FB89C (GetRemoteHDEV.c)
 *     bDrvReconnect @ 0x1C02A2174 (bDrvReconnect.c)
 */

__int64 RemotePassthruDisable()
{
  __int64 RemoteContext; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  PVOID v6; // r8
  HANDLE v7; // rdx
  __int64 RemoteHDEV; // rcx

  RemoteContext = GreGetRemoteContext();
  if ( PsGetCurrentProcess(v2, v1, v3, v4) != gpepCSRSS )
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
    RemoteRedrawScreen();
    UpdateKeyLights(0LL);
  }
  return 0LL;
}
