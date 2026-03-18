/*
 * XREFs of ?AcquireForScribble@CFramebuffer@CComputeScribbleRenderer@@AEAA_N_K@Z @ 0x1801B57C0
 * Callers:
 *     ?AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z @ 0x1801B55F8 (-AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z.c)
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1801B5B1C (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 * Callees:
 *     ?_Atomic_compare_exchange_strong_8@std@@YAHPEC_KPEA_K_KW4memory_order@1@3@Z @ 0x1801B6464 (-_Atomic_compare_exchange_strong_8@std@@YAHPEC_KPEA_K_KW4memory_order@1@3@Z.c)
 */

char __fastcall CComputeScribbleRenderer::CFramebuffer::AcquireForScribble(
        CComputeScribbleRenderer::CFramebuffer *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 *v3; // r10
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  v3 = (unsigned __int64 *)((char *)this + 96);
  while ( 1 )
  {
    v5 = *v3;
    if ( v5 >= v2 )
      break;
    if ( (unsigned int)std::_Atomic_compare_exchange_strong_8(v3, &v5) )
      return 1;
  }
  return 0;
}
