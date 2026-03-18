/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x180198C80
 * Callers:
 *     ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180198FF0 (-AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 *     ?_Reinsert@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x18019982C (-_Reinsert@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash_c.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x180189B94 (-erase@-$list@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V-$allocator@U-$.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@_K@Z @ 0x180198888 (-_End@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-$.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x1801997AC (-_Check_size@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Insert<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>>>>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        _QWORD **a4)
{
  unsigned __int8 *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // rdi
  __int64 v15; // r8
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD **v21; // rcx
  __int64 v23; // [rsp+30h] [rbp+8h] BYREF

  v6 = a3;
  v7 = 0xCBF29CE484222325uLL;
  v8 = a3 + 8 >= a3 ? 8 : 0;
  if ( a3 < a3 + 8 )
  {
    do
    {
      v9 = *a3++ ^ (unsigned __int64)v7;
      v7 = 0x100000001B3LL * v9;
    }
    while ( a3 - v6 != v8 );
  }
  v10 = std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
          a1,
          &v23,
          v7 & *(_QWORD *)(a1 + 48));
  v13 = 2 * v12;
  v14 = *v10;
  v15 = *v10;
  while ( v15 != *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v13) )
  {
    v15 = *(_QWORD *)(v14 + 8);
    v14 = v15;
    if ( *(_QWORD *)v6 == *(_QWORD *)(v15 + 16) )
    {
      std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>::erase(v11 + 8, &v23, a4);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v16 = *a4;
  if ( (_QWORD *)v15 != *a4 )
  {
    *a4[1] = v16;
    *(_QWORD *)v16[1] = v15;
    **(_QWORD **)(v15 + 8) = a4;
    v17 = *(_QWORD **)(v15 + 8);
    *(_QWORD *)(v15 + 8) = v16[1];
    v16[1] = a4[1];
    a4[1] = v17;
  }
  v18 = *(_QWORD *)(v11 + 24);
  v19 = *(_QWORD *)(v18 + 8 * v13);
  if ( v19 == *(_QWORD *)(v11 + 8) )
  {
    *(_QWORD *)(v18 + 8 * v13) = a4;
    *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v13 + 8) = a4;
  }
  else if ( v19 == v15 )
  {
    *(_QWORD *)(v18 + 8 * v13) = a4;
  }
  else
  {
    v20 = *(_QWORD **)(v18 + 8 * v13 + 8);
    v21 = (_QWORD **)*v20;
    *(_QWORD *)(v18 + 8 * v13 + 8) = *v20;
    if ( v21 != a4 )
      *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v13 + 8) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v13 + 8)
                                                                   + 8LL);
  }
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Check_size(v11);
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
