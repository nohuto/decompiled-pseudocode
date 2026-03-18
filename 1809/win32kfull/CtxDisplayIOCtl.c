/*
 * XREFs of CtxDisplayIOCtl @ 0x1C01FB810
 * Callers:
 *     NtUserCtxDisplayIOCtl @ 0x1C0212BC0 (NtUserCtxDisplayIOCtl.c)
 * Callees:
 *     RemoteRedrawRectangle @ 0x1C01F6EDC (RemoteRedrawRectangle.c)
 *     GetRemoteHDEV @ 0x1C01FB89C (GetRemoteHDEV.c)
 *     bDrvDisplayIOCtl @ 0x1C02A1FC4 (bDrvDisplayIOCtl.c)
 */

__int64 __fastcall CtxDisplayIOCtl(char a1, __int64 a2, unsigned int a3)
{
  __int64 RemoteContext; // rax
  __int64 RemoteHDEV; // rax
  __int64 v8; // rdx

  RemoteContext = GreGetRemoteContext();
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
  if ( !(unsigned int)bDrvDisplayIOCtl(RemoteHDEV, a2, a3) )
    return 3221880856LL;
  if ( (a1 & 1) != 0 )
    RemoteRedrawRectangle(0LL, v8);
  return 0LL;
}
