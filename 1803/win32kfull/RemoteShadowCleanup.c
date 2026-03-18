/*
 * XREFs of RemoteShadowCleanup @ 0x1C01D6D50
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C00C09D0 (SetPointer.c)
 *     RemoteRedrawScreen @ 0x1C0137D94 (RemoteRedrawScreen.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     GetRemoteHDEV @ 0x1C01D6BF4 (GetRemoteHDEV.c)
 *     bDrvShadowDisconnect @ 0x1C028EC8C (bDrvShadowDisconnect.c)
 */

__int64 __fastcall RemoteShadowCleanup(void *Src, size_t Size)
{
  SIZE_T v2; // r14
  __int64 RemoteContext; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v8; // rax
  void *v9; // rbx
  __int64 RemoteHDEV; // rax
  int v11; // eax

  v2 = (unsigned int)Size;
  RemoteContext = GreGetRemoteContext(Src);
  if ( PsGetCurrentProcess(v6, v5) != gpepCSRSS )
    return 3221225506LL;
  ProbeForRead(Src, v2, 1u);
  v8 = (void *)Win32AllocPoolWithQuota(v2, 1769435989LL);
  v9 = v8;
  if ( !v8 )
    ExRaiseStatus(-1073741801);
  memmove(v8, Src, v2);
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
  bDrvShadowDisconnect(RemoteHDEV, v9, (unsigned int)v2);
  Win32FreePool(v9);
  v11 = gnShadowers;
  if ( gnShadowers && (--gnShadowers, v11 != 1) || gbConnected )
    RemoteRedrawScreen();
  SetPointer(1);
  if ( !gnShadowers )
    *(_DWORD *)(gpsi + 2236LL) &= ~2u;
  return 0LL;
}
