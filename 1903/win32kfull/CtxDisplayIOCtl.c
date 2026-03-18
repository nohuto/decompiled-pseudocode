/*
 * XREFs of CtxDisplayIOCtl @ 0x1C0212AC0
 * Callers:
 *     NtUserCtxDisplayIOCtl @ 0x1C022A950 (NtUserCtxDisplayIOCtl.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     RemoteRedrawRectangle @ 0x1C020D198 (RemoteRedrawRectangle.c)
 *     GetRemoteHDEV @ 0x1C0212B84 (GetRemoteHDEV.c)
 *     bDrvDisplayIOCtl @ 0x1C02B8C20 (bDrvDisplayIOCtl.c)
 */

__int64 __fastcall CtxDisplayIOCtl(char a1, __int64 a2, unsigned int a3)
{
  int v6; // edx
  int v7; // ecx
  __int64 RemoteContext; // rdi
  __int64 RemoteHDEV; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_(v7, v6, 9, 27, (__int64)&WPP_2f4edc7644973dcb8f37e7bb2394e69d_Traceguids);
  }
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
  if ( !(unsigned int)bDrvDisplayIOCtl(RemoteHDEV, a2, a3) )
    return 3221880856LL;
  if ( (a1 & 1) != 0 )
    RemoteRedrawRectangle(0LL, v10, v11, v12);
  return 0LL;
}
