/*
 * XREFs of ?_Change_array@?$vector@UMipLevelSurface@CCompositionMipmapSurface@@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@AEAAXQEAUMipLevelSurface@CCompositionMipmapSurface@@_K1@Z @ 0x1801D07FC
 * Callers:
 *     std::vector_CCompositionMipmapSurface::MipLevelSurface_std::allocator_CCompositionMipmapSurface::MipLevelSurface___::_Resize__lambda_a2eaa8aad34492302e036d5b613ed997___ @ 0x1801CFB5C (std--vector_CCompositionMipmapSurface--MipLevelSurface_std--allocator_CCompositionMipmapSurface-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CCompositionMipmapSurface::MipLevelSurface>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFE0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
}
