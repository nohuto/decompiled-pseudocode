/*
 * XREFs of RemoteShadowCleanup @ 0x1C01FBA10
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C00BD490 (SetPointer.c)
 *     RemoteRedrawScreen @ 0x1C0158694 (RemoteRedrawScreen.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     GetRemoteHDEV @ 0x1C01FB89C (GetRemoteHDEV.c)
 *     bDrvShadowDisconnect @ 0x1C02A2568 (bDrvShadowDisconnect.c)
 */

__int64 __fastcall RemoteShadowCleanup(void *Src, size_t Size)
{
  SIZE_T v2; // r14
  __int64 RemoteContext; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v10; // rax
  void *v11; // rbx
  __int64 RemoteHDEV; // rax
  int v13; // eax

  v2 = (unsigned int)Size;
  RemoteContext = GreGetRemoteContext(Src);
  if ( PsGetCurrentProcess(v6, v5, v7, v8) != gpepCSRSS )
    return 3221225506LL;
  ProbeForRead(Src, v2, 1u);
  v10 = (void *)Win32AllocPoolWithQuota(v2, 1769435989LL);
  v11 = v10;
  if ( !v10 )
    ExRaiseStatus(-1073741801);
  memmove(v10, Src, v2);
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
  bDrvShadowDisconnect(RemoteHDEV, v11, (unsigned int)v2);
  Win32FreePool(v11);
  v13 = gnShadowers;
  if ( gnShadowers && (--gnShadowers, v13 != 1) || gbConnected )
    RemoteRedrawScreen();
  SetPointer(1);
  if ( !gnShadowers )
    *(_DWORD *)(gpsi + 2236LL) &= ~2u;
  return 0LL;
}
