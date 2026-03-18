/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x180030590
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800303B0 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uhash_compare@.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x180030E44 (-_Init@-$_Hash@V-$_Umap_traits@PEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WRL@Micr.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E1D50 (-_Init@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uhash_compare.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>>>>::_Reallocate_exactly(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  SIZE_T v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rdi
  _QWORD *v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 result; // rax

  v3 = (a1[1] - *a1) >> 3;
  v4 = 8 * a2;
  v5 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  v7 = (_QWORD *)*a1;
  v8 = v6;
  v9 = (_QWORD *)v6;
  v10 = 0LL;
  v11 = (unsigned __int64)(a1[1] - *a1 + 7) >> 3;
  if ( *a1 > (unsigned __int64)a1[1] )
    v11 = 0LL;
  if ( v11 )
  {
    do
    {
      ++v10;
      *v9++ = *v7++;
    }
    while ( v10 != v11 );
    v7 = (_QWORD *)*a1;
  }
  if ( v7 )
    std::_Deallocate<16,0>(v7, (a1[2] - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = v8;
  a1[1] = v8 + 8 * v3;
  result = v4 + v8;
  a1[2] = v4 + v8;
  return result;
}
