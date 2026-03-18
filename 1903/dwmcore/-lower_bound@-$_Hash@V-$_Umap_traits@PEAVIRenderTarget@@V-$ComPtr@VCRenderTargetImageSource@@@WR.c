/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBQEAVIRenderTarget@@@Z @ 0x180005FFC
 * Callers:
 *     ?GetImageSourceForEffectInputNoRef@CWindowBackgroundTreatment@@QEBAPEAVIImageSource@@PEBVIRenderTarget@@@Z @ 0x180005F7C (-GetImageSourceForEffectInputNoRef@CWindowBackgroundTreatment@@QEBAPEAVIImageSource@@PEBVIRender.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x1800060A0 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // r11
  unsigned __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // r10
  _QWORD *i; // rax
  _QWORD *v11; // rcx

  v4 = 0xCBF29CE484222325uLL;
  v5 = a3;
  if ( a3 < a3 + 8 )
  {
    do
    {
      v6 = *v5++ ^ (unsigned __int64)v4;
      v4 = 0x100000001B3LL * v6;
    }
    while ( v5 - a3 != (a3 + 8 >= a3 ? 8 : 0) );
  }
  v7 = a1[3];
  v8 = a1[1];
  v9 = 2 * (v4 & a1[6]);
  for ( i = *(_QWORD **)(v7 + 16 * (v4 & a1[6])); ; i = (_QWORD *)*i )
  {
    v11 = *(_QWORD *)(v7 + 8 * v9) == v8 ? (_QWORD *)a1[1] : **(_QWORD ***)(v7 + 8 * v9 + 8);
    if ( i == v11 )
      break;
    if ( i[2] == *(_QWORD *)a3 )
    {
      *a2 = i;
      return a2;
    }
  }
  *a2 = v8;
  return a2;
}
