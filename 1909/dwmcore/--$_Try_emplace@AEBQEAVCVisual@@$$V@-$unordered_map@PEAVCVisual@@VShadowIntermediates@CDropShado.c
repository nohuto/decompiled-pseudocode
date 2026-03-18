/*
 * XREFs of ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$unordered_map@PEAVCVisual@@VShadowIntermediates@CDropShadow@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@5@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x1801C87E0
 * Callers:
 *     ?PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18000FD20 (-PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@1@@Z @ 0x1801C85BC (--$_Insert@AEAU-$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V-$_List_unchecked_it.c)
 *     ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCVisual@@@2@V?$tuple@$$V@2@@?$list@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCVisual@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801C8728 (--$_Insert@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCVisual@@@2@V-$tuple@$$V@2@@-$list@U-$.c)
 */

__int64 __fastcall std::unordered_map<CVisual *,CDropShadow::ShadowIntermediates>::_Try_emplace<CVisual * const &,>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // r10
  _QWORD **v9; // rdx
  __int64 v10; // r9
  _QWORD *i; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  unsigned __int8 *v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0xCBF29CE484222325uLL;
  v6 = a3;
  if ( a3 < a3 + 8 )
  {
    do
    {
      v7 = *v6++ ^ (unsigned __int64)v5;
      v5 = 0x100000001B3LL * v7;
    }
    while ( v6 - a3 != (a3 + 8 >= a3 ? 8 : 0) );
  }
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD ***)(a1 + 8);
  v10 = 2 * (v5 & *(_QWORD *)(a1 + 48));
  for ( i = *(_QWORD **)(v8 + 16 * (v5 & *(_QWORD *)(a1 + 48))); ; i = (_QWORD *)*i )
  {
    v12 = *(_QWORD ***)(v8 + 8 * v10) == v9 ? *(_QWORD **)(a1 + 8) : **(_QWORD ***)(v8 + 8 * v10 + 8);
    if ( i == v12 )
      break;
    if ( i[2] == *(_QWORD *)a3 )
      goto LABEL_11;
  }
  i = *(_QWORD **)(a1 + 8);
LABEL_11:
  if ( i == v9 )
  {
    v13 = *v9;
    v15 = a3;
    std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::_Insert<std::piecewise_construct_t const &,std::tuple<CVisual * const &>,std::tuple<>>(
      a1 + 8,
      v13,
      (__int64)a3,
      (_QWORD **)&v15);
    std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Insert<std::pair<CVisual * const,CDropShadow::ShadowIntermediates> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>>(
      (_QWORD *)a1,
      a2,
      (unsigned __int8 *)(**(_QWORD **)(a1 + 8) + 16LL),
      **(__int64 ***)(a1 + 8));
  }
  else
  {
    *(_QWORD *)a2 = i;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
