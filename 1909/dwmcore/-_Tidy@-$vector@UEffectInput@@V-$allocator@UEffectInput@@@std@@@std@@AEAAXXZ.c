/*
 * XREFs of ?_Tidy@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXXZ @ 0x18003C060
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18003C54C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<EffectInput>::_Tidy(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi
  __int64 result; // rax

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v1 + 1);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v1);
        v1 += 13;
      }
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    result = std::_Deallocate<16,0>(v1, 104 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v1) / 104LL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
