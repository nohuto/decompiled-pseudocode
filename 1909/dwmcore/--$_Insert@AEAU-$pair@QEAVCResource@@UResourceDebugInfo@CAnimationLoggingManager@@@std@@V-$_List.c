/*
 * XREFs of ??$_Insert@AEAU?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@1@@Z @ 0x180042190
 * Callers:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCResource@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18004248C (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCResource@@@2@V-$tuple@$$V@2@@-$_Hash@.c)
 *     ?_Reinsert@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x1800D46D4 (-_Reinsert@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x18001647C (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x18003FC9C (-_Check_size@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@.c)
 *     ?erase@?$list@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@@Z @ 0x1800C92E0 (-erase@-$list@U-$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V-$alloc.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_Insert<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>>>>(
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
  __int64 **v21; // rax
  __int64 *v22; // rcx
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
  v10 = std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
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
      std::list<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>::erase(v11 + 8, &v23, a4);
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
    v21 = *(__int64 ***)(v18 + 8 * v13 + 8);
    v22 = *v21;
    *(_QWORD *)(v18 + 8 * v13 + 8) = *v21;
    if ( v22 != a4 )
      *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v13 + 8) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v13 + 8)
                                                                   + 8LL);
  }
  std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_Check_size(v11);
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
