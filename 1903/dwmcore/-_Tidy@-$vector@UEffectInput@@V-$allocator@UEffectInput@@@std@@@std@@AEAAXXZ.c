/*
 * XREFs of ?_Tidy@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXXZ @ 0x180075CBC
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180076874 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v1 + 1);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v1);
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
