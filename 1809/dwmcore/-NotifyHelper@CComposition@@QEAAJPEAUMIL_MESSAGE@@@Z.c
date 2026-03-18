/*
 * XREFs of ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18009DAB4
 * Callers:
 *     ?ProcessRoundTripRequest@CCrossThreadComposition@@AEAA_NXZ @ 0x180057F0C (-ProcessRoundTripRequest@CCrossThreadComposition@@AEAA_NXZ.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x18007B298 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180081600 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800CE718 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18015C348 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18009CB9C (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::NotifyHelper(CComposition *this, struct MIL_MESSAGE *a2, __int64 a3)
{
  unsigned int v3; // eax
  int v4; // ebx
  __int64 v7; // rsi
  __int64 v8; // rbp
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // edi

  v3 = *((_DWORD *)this + 110);
  v4 = 0;
  if ( v3 )
  {
    v7 = 0LL;
    v8 = v3;
    do
    {
      v9 = CChannelContext::PostMessageToChannel(*(CConnection ***)(v7 + *((_QWORD *)this + 52)), a2, a3);
      v11 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xB85u);
      if ( !v4 || v4 >= 0 && v11 < 0 )
        v4 = v11;
      v7 += 8LL;
      --v8;
    }
    while ( v8 );
  }
  return (unsigned int)v4;
}
