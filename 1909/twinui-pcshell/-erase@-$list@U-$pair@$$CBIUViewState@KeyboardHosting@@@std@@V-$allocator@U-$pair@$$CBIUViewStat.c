/*
 * XREFs of ?erase@?$list@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@@Z @ 0x18034D1DC
 * Callers:
 *     ??$_Insert@AEAU?$pair@$$CBIUViewState@KeyboardHosting@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBIUViewState@KeyboardHosting@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@@Z @ 0x180349514 (--$_Insert@AEAU-$pair@$$CBIUViewState@KeyboardHosting@@@std@@V-$_List_unchecked_iterator@V-$_Lis.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_KeyboardHosting::ViewState_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__KeyboardHosting::ViewState____0___::_Insert_std::pair_unsigned_int_const__KeyboardHosting::ViewState__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__KeyboardHosting::ViewState__________::_1_::catch$56 @ 0x18034967D (_std--_Hash_std--_Umap_traits_unsigned_int_KeyboardHosting--ViewState_std--_Uhash_compare_unsign.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@@Z @ 0x18034D00C (-erase@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned int const,KeyboardHosting::ViewState>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // rbx

  v4 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --*(_QWORD *)(a1 + 8);
  std::_Deallocate<16,0>(a3, (const struct std::nothrow_t *)0x48);
  *a2 = v4;
  return a2;
}
