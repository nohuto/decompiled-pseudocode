/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBII@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBII@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@@Z @ 0x18016F1B8
 * Callers:
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x18016F2E4 (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 *     ?_Reinsert@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1801704E4 (-_Reinsert@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180170398 (-_Check_size@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@_K@Z @ 0x180170418 (-_End@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 *     ?erase@?$list@U?$pair@$$CBII@std@@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@@Z @ 0x180170720 (-erase@-$list@U-$pair@$$CBII@std@@V-$allocator@U-$pair@$$CBII@std@@@2@@std@@QEAA-AV-$_List_itera.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Insert<std::pair<unsigned int const,unsigned int> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,unsigned int>>>>>(
        _QWORD *a1,
        __int64 a2,
        const unsigned __int8 *a3,
        __int64 *a4)
{
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r11
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 **v17; // rax
  __int64 *v18; // rcx
  char v20; // [rsp+40h] [rbp+8h] BYREF

  v8 = std::_Hash_bytes(a3, 4uLL);
  v9 = (__int64 *)std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_End(
                    a1,
                    &v20,
                    a1[6] & v8);
  v11 = 2 * v10;
  v12 = *v9;
  while ( v12 != *(_QWORD *)(a1[3] + 8 * v11) )
  {
    v12 = *(_QWORD *)(v12 + 8);
    if ( *(_DWORD *)a3 == *(_DWORD *)(v12 + 16) )
    {
      std::list<std::pair<unsigned int const,unsigned int>>::erase(a1 + 1, &v20, a4);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v13 = *a4;
  if ( v12 != *a4 )
  {
    *(_QWORD *)a4[1] = v13;
    **(_QWORD **)(v13 + 8) = v12;
    **(_QWORD **)(v12 + 8) = a4;
    v14 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(v13 + 8);
    *(_QWORD *)(v13 + 8) = a4[1];
    a4[1] = v14;
  }
  v15 = a1[3];
  v16 = *(_QWORD *)(v15 + 8 * v11);
  if ( v16 == a1[1] )
  {
    *(_QWORD *)(v15 + 8 * v11) = a4;
    *(_QWORD *)(a1[3] + 8 * v11 + 8) = a4;
  }
  else if ( v16 == v12 )
  {
    *(_QWORD *)(v15 + 8 * v11) = a4;
  }
  else
  {
    v17 = *(__int64 ***)(v15 + 8 * v11 + 8);
    v18 = *v17;
    *(_QWORD *)(v15 + 8 * v11 + 8) = *v17;
    if ( v18 != a4 )
      *(_QWORD *)(a1[3] + 8 * v11 + 8) = *(_QWORD *)(*(_QWORD *)(a1[3] + 8 * v11 + 8) + 8LL);
  }
  std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Check_size(a1);
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
