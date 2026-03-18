/*
 * XREFs of ??$_Insert@AEAU?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@1@@Z @ 0x1801C85BC
 * Callers:
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$unordered_map@PEAVCVisual@@VShadowIntermediates@CDropShadow@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@5@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x1801C87E0 (--$_Try_emplace@AEBQEAVCVisual@@$$V@-$unordered_map@PEAVCVisual@@VShadowIntermediates@CDropShado.c)
 *     ?_Reinsert@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x1801C9330 (-_Reinsert@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uhash_comp.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x1801C92B0 (-_Check_size@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uhash_co.c)
 *     ?erase@?$list@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@Z @ 0x1801C9450 (-erase@-$list@U-$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V-$allocator@U-$pair@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Insert<std::pair<CVisual * const,CDropShadow::ShadowIntermediates> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 *a4)
{
  unsigned __int8 *v6; // r11
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 **v21; // rax
  __int64 *v22; // rcx
  char v24; // [rsp+30h] [rbp+8h] BYREF

  v6 = a3;
  v8 = 0xCBF29CE484222325uLL;
  v9 = a3 + 8 >= a3 ? 8 : 0;
  if ( a3 < a3 + 8 )
  {
    do
    {
      v10 = *a3++ ^ (unsigned __int64)v8;
      v8 = 0x100000001B3LL * v10;
    }
    while ( a3 - v6 != v9 );
  }
  v11 = a1[1];
  v12 = v8 & a1[6];
  v13 = a1[3];
  v14 = 2 * v12;
  v15 = *(_QWORD *)(v13 + 8 * v14);
  if ( v15 != v11 )
    v11 = **(_QWORD **)(v13 + 8 * v14 + 8);
  v16 = v11;
  while ( v16 != v15 )
  {
    v16 = *(_QWORD *)(v11 + 8);
    v11 = v16;
    if ( *(_QWORD *)v6 == *(_QWORD *)(v16 + 16) )
    {
      std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::erase(a1 + 1, &v24, a4);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v17 = *a4;
  if ( v16 != *a4 )
  {
    *(_QWORD *)a4[1] = v17;
    **(_QWORD **)(v17 + 8) = v16;
    **(_QWORD **)(v16 + 8) = a4;
    v18 = *(_QWORD *)(v16 + 8);
    *(_QWORD *)(v16 + 8) = *(_QWORD *)(v17 + 8);
    *(_QWORD *)(v17 + 8) = a4[1];
    a4[1] = v18;
  }
  v19 = a1[3];
  v20 = *(_QWORD *)(v19 + 8 * v14);
  if ( v20 == a1[1] )
  {
    *(_QWORD *)(v19 + 8 * v14) = a4;
    *(_QWORD *)(a1[3] + 8 * v14 + 8) = a4;
  }
  else if ( v20 == v16 )
  {
    *(_QWORD *)(v19 + 8 * v14) = a4;
  }
  else
  {
    v21 = *(__int64 ***)(v19 + 8 * v14 + 8);
    v22 = *v21;
    *(_QWORD *)(v19 + 8 * v14 + 8) = *v21;
    if ( v22 != a4 )
      *(_QWORD *)(a1[3] + 8 * v14 + 8) = *(_QWORD *)(*(_QWORD *)(a1[3] + 8 * v14 + 8) + 8LL);
  }
  std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Check_size(a1);
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
