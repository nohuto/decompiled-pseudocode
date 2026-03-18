/*
 * XREFs of ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCVisual@@@2@V?$tuple@$$V@2@@?$list@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCVisual@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801C9EC8
 * Callers:
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$unordered_map@PEAVCVisual@@VShadowIntermediates@CDropShadow@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@5@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x1801C9F80 (--$_Try_emplace@AEBQEAVCVisual@@$$V@-$unordered_map@PEAVCVisual@@VShadowIntermediates@CDropShado.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800D839C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@QEAVCVisual@@VShadowIntermediates@CDropShad.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::_Insert<std::piecewise_construct_t const &,std::tuple<CVisual * const &>,std::tuple<>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD **a4)
{
  _QWORD *v4; // r14
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 result; // rax

  v4 = (_QWORD *)a2[1];
  v8 = std::_List_alloc<std::_List_base_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>::_Buynode0(
         a1,
         a2,
         v4);
  v8[2] = **a4;
  memset_0(v8 + 3, 0, 0x40uLL);
  v8[4] = 0LL;
  v8[5] = 0LL;
  v8[6] = 0LL;
  *((_DWORD *)v8 + 14) = 0;
  v8[8] = 0LL;
  v8[10] = 0LL;
  *((_DWORD *)v8 + 18) = 1065353216;
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 == 0x2E8BA2E8BA2E8B9LL )
    std::_Xlength_error((const char *)0x2E8BA2E8BA2E8B9LL);
  result = v9 + 1;
  *(_QWORD *)(a1 + 8) = v9 + 1;
  a2[1] = v8;
  *v4 = v8;
  return result;
}
