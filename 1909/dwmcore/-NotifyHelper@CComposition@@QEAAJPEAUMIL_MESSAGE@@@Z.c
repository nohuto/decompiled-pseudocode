/*
 * XREFs of ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800D4D7C
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180070190 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x180075570 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?Reset@CComposition@@UEAAXXZ @ 0x1800D88D0 (-Reset@CComposition@@UEAAXXZ.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x1800E7418 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180193F80 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800AAA84 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 */

__int64 __fastcall CComposition::NotifyHelper(CComposition *this, struct MIL_MESSAGE *a2, __int64 a3)
{
  unsigned int v3; // eax
  int v4; // ebx
  __int64 v7; // rsi
  __int64 v8; // rbp
  signed int v9; // eax
  __int64 v10; // rcx
  int v11; // edi

  v3 = *((_DWORD *)this + 114);
  v4 = 0;
  if ( v3 )
  {
    v7 = 0LL;
    v8 = v3;
    do
    {
      v9 = CChannelContext::PostMessageToChannel(*(CChannelContext **)(v7 + *((_QWORD *)this + 54)), a2, a3);
      v11 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xABAu, 0LL);
      if ( !v4 || v4 >= 0 && v11 < 0 )
        v4 = v11;
      v7 += 8LL;
      --v8;
    }
    while ( v8 );
  }
  return (unsigned int)v4;
}
