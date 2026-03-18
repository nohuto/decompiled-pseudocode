/*
 * XREFs of ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x180194E04
 * Callers:
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x1800C4320 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801949E4 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z @ 0x180194C54 (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180187718 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<CRegion>::reset(_QWORD *a1)
{
  std::_Ref_count_base *v1; // rax

  *a1 = 0LL;
  v1 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
