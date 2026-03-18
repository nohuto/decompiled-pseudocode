/*
 * XREFs of ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800D7F60
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180030B48 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800D7DB8 (-Reset@COverlayContext@@QEAAXXZ.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x1800207E4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x1801491D8 (McTemplateU0xq.c)
 */

void __fastcall COverlayContext::ClearDirectFlip(COverlayContext *this)
{
  __int64 v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  v2 = *((_QWORD *)this + 1661);
  if ( v2 )
  {
    CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*(_QWORD *)(v2 + 32) + 48LL), 1, 0);
    v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 1661);
    if ( v3 )
      (**v3)(v3, 1LL);
    *((_QWORD *)this + 1661) = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xq(v3, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *((_QWORD *)this + 11), 0LL);
  }
}
