/*
 * XREFs of ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180187778
 * Callers:
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800220CC (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801906A4 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C5CD0 (-GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ??4?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180187744 (--4-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV.c)
 */

__int64 *__fastcall CHWDrawListEntry::ReplacePrimitive(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 *v5; // rcx
  __int64 v6; // rax

  *(_OWORD *)(a1 + 56) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a4 + 48);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a4 + 64);
  v5 = (__int64 *)(a1 + 136);
  v6 = *v5;
  *v5 = 0LL;
  *a2 = v6;
  std::unique_ptr<CDrawListPrimitive>::operator=(v5, a3);
  return a2;
}
