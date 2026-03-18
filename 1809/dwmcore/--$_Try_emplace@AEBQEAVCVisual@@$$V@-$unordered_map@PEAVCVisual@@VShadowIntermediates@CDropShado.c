/*
 * XREFs of ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$unordered_map@PEAVCVisual@@VShadowIntermediates@CDropShadow@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@5@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x1801942D4
 * Callers:
 *     ?PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18000E470 (-PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ??$_Insert@AEAU?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@1@@Z @ 0x1801940E0 (--$_Insert@AEAU-$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V-$_List_unchecked_it.c)
 *     ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCVisual@@@2@V?$tuple@$$V@2@@?$list@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCVisual@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18019420C (--$_Insert@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCVisual@@@2@V-$tuple@$$V@2@@-$list@U-$.c)
 */

__int64 __fastcall std::unordered_map<CVisual *,CDropShadow::ShadowIntermediates>::_Try_emplace<CVisual * const &,>(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r11
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD **v9; // rdx
  __int64 v10; // rcx
  _QWORD *i; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = std::_Hash_bytes(a3, 8uLL);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 48) & v5;
  v9 = *(_QWORD ***)(a1 + 8);
  v10 = 2 * v8;
  for ( i = *(_QWORD **)(v7 + 16 * v8); ; i = (_QWORD *)*i )
  {
    v12 = *(_QWORD ***)(v7 + 8 * v10) == v9 ? *(_QWORD **)(a1 + 8) : **(_QWORD ***)(v7 + 8 * v10 + 8);
    if ( i == v12 )
      break;
    if ( i[2] == *v6 )
      goto LABEL_9;
  }
  i = *(_QWORD **)(a1 + 8);
LABEL_9:
  if ( i == v9 )
  {
    v13 = *v9;
    v15 = v6;
    std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::_Insert<std::piecewise_construct_t const &,std::tuple<CVisual * const &>,std::tuple<>>(
      a1 + 8,
      v13,
      v7,
      &v15);
    std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Insert<std::pair<CVisual * const,CDropShadow::ShadowIntermediates> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>>(
      (_QWORD *)a1,
      a2,
      (const unsigned __int8 *)(**(_QWORD **)(a1 + 8) + 16LL),
      **(__int64 ***)(a1 + 8));
  }
  else
  {
    *(_QWORD *)a2 = i;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
