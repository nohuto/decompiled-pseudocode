/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1801883EC
 * Callers:
 *     ?RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z @ 0x180188220 (-RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z.c)
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180197D88 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1801884B4 (-erase@-$list@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V-$allocator@U-$.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::erase(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax

  v5 = 0xCBF29CE484222325uLL;
  v6 = (unsigned __int8 *)(a3 + 2);
  if ( a3 + 2 <= a3 + 3 )
  {
    do
    {
      v7 = *v6++ ^ (unsigned __int64)v5;
      v5 = 0x100000001B3LL * v7;
    }
    while ( v6 - (unsigned __int8 *)(a3 + 2) != (a3 + 3 >= a3 + 2 ? 8 : 0) );
  }
  v8 = a1[3];
  v9 = 2 * (v5 & a1[6]);
  if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6]) + 8) == a3 )
  {
    if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6])) == a3 )
    {
      *(_QWORD *)(v8 + 16 * (v5 & a1[6])) = a1[1];
      v8 = a1[3];
      v10 = a1[1];
    }
    else
    {
      v10 = a3[1];
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6])) == a3 )
  {
    *(_QWORD *)(v8 + 16 * (v5 & a1[6])) = *a3;
  }
  std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>::erase(a1 + 1, a2, a3);
  return a2;
}
