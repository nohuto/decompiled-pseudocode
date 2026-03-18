/*
 * XREFs of ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180078B10
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180077528 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180078FA0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800B81EC (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801D28CC (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801ECFC4 (-GenerateDrawList@CParticleEmitterVisual@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 */

_QWORD *__fastcall CHWDrawListEntry::ReplacePrimitive(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  __int64 *v5; // rcx
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rax
  __int64 v7; // rax
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rdx

  *(_OWORD *)(a1 + 64) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a4 + 48);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a4 + 64);
  v5 = (__int64 *)(a1 + 144);
  v6 = (__int64 (__fastcall ***)(_QWORD, __int64))*v5;
  *v5 = 0LL;
  *a2 = v6;
  if ( v5 != a3 )
  {
    v7 = *a3;
    *a3 = 0LL;
    v8 = (__int64 (__fastcall ***)(_QWORD, __int64))*v5;
    *v5 = v7;
    if ( v8 )
      std::default_delete<CShape>::operator()((__int64)v5, v8);
  }
  return a2;
}
