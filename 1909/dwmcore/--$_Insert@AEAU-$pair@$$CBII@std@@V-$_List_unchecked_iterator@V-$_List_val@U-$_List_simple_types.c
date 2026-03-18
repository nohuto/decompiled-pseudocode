/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBII@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBII@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@@Z @ 0x180195FB8
 * Callers:
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x180196124 (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 *     ?_Reinsert@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180197088 (-_Reinsert@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180196F48 (-_Check_size@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@_K@Z @ 0x180196FC8 (-_End@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-$.c)
 *     ?erase@?$list@U?$pair@$$CBII@std@@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@@Z @ 0x1801972BC (-erase@-$list@U-$pair@$$CBII@std@@V-$allocator@U-$pair@$$CBII@std@@@2@@std@@QEAA-AV-$_List_itera.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Insert<std::pair<unsigned int const,unsigned int> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,unsigned int>>>>>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 *a4)
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
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 **v20; // rax
  __int64 *v21; // rcx
  char v23; // [rsp+30h] [rbp+8h] BYREF

  v6 = a3;
  v7 = 0xCBF29CE484222325uLL;
  v8 = a3 + 4 >= a3 ? 4 : 0;
  if ( a3 < a3 + 4 )
  {
    do
    {
      v9 = *a3++ ^ (unsigned __int64)v7;
      v7 = 0x100000001B3LL * v9;
    }
    while ( a3 - v6 != v8 );
  }
  v10 = (__int64 *)std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
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
    if ( *(_DWORD *)v6 == *(_DWORD *)(v15 + 16) )
    {
      std::list<std::pair<unsigned int const,unsigned int>>::erase(v11 + 8, &v23, a4);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v16 = *a4;
  if ( v15 != *a4 )
  {
    *(_QWORD *)a4[1] = v16;
    **(_QWORD **)(v16 + 8) = v15;
    **(_QWORD **)(v15 + 8) = a4;
    v17 = *(_QWORD *)(v15 + 8);
    *(_QWORD *)(v15 + 8) = *(_QWORD *)(v16 + 8);
    *(_QWORD *)(v16 + 8) = a4[1];
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
    v20 = *(__int64 ***)(v18 + 8 * v13 + 8);
    v21 = *v20;
    *(_QWORD *)(v18 + 8 * v13 + 8) = *v20;
    if ( v21 != a4 )
      *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v13 + 8) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v13 + 8)
                                                                   + 8LL);
  }
  std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Check_size(v11);
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
