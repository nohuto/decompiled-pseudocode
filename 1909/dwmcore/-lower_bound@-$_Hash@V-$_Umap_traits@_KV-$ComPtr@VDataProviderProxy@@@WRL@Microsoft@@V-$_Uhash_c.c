/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x180188528
 * Callers:
 *     ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x1800100F0 (-GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z.c)
 *     ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x1801880C4 (-GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z.c)
 *     ?GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z @ 0x180188118 (-GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z.c)
 *     ?RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z @ 0x180188220 (-RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::lower_bound(
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
