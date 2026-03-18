/*
 * XREFs of ?AcquireForScribble@CFramebuffer@CComputeScribbleRenderer@@AEAA_N_K@Z @ 0x18022D8A8
 * Callers:
 *     ?AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z @ 0x18022D6E0 (-AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z.c)
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18022DBE0 (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 * Callees:
 *     ?_Atomic_compare_exchange_strong_8@std@@YAHPEC_KPEA_K_KW4memory_order@1@3@Z @ 0x18021D340 (-_Atomic_compare_exchange_strong_8@std@@YAHPEC_KPEA_K_KW4memory_order@1@3@Z.c)
 */

char __fastcall CComputeScribbleRenderer::CFramebuffer::AcquireForScribble(
        CComputeScribbleRenderer::CFramebuffer *this,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // r8
  volatile signed __int64 *v5; // r10
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v5 = (volatile signed __int64 *)((char *)this + 96);
  while ( 1 )
  {
    v7 = *v5;
    if ( v7 >= v4 )
      break;
    if ( (unsigned int)std::_Atomic_compare_exchange_strong_8(v5, (signed __int64 *)&v7, v4, a4, 5) )
      return 1;
  }
  return 0;
}
