/*
 * XREFs of RemoteShadowStart @ 0x1C02129E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     SetPointer @ 0x1C0138BE0 (SetPointer.c)
 *     RemoteRedrawScreen @ 0x1C0160EE8 (RemoteRedrawScreen.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     GetRemoteHDEV @ 0x1C0212644 (GetRemoteHDEV.c)
 *     bDrvShadowConnect @ 0x1C02B8B2C (bDrvShadowConnect.c)
 */

__int64 __fastcall RemoteShadowStart(void *Src, size_t Size)
{
  SIZE_T v2; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 RemoteContext; // r15
  void *v10; // rax
  void *v11; // rdi
  __int64 RemoteHDEV; // rax
  int v13; // ebx
  int v14; // ecx

  v2 = (unsigned int)Size;
  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_(v5, v4, 9, 22, (__int64)&WPP_2f4edc7644973dcb8f37e7bb2394e69d_Traceguids);
  }
  if ( PsGetCurrentProcess(v5, v4, v6, v7) != gpepCSRSS )
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
  v13 = bDrvShadowConnect(RemoteHDEV, v11, (unsigned int)v2);
  Win32FreePool(v11);
  if ( !v13 )
    return 3221880856LL;
  RemoteRedrawScreen(v14);
  SetPointer(1LL);
  *(_DWORD *)(gpsi + 2236LL) |= 2u;
  return 0LL;
}
