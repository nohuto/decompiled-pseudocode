/*
 * XREFs of ?erase@?$list@U?$pair@$$CBI_N@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@2@@Z @ 0x1802C94F4
 * Callers:
 *     ??$_Insert@AEAU?$pair@$$CBI_N@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBI_N@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@1@@Z @ 0x1802BF1A0 (--$_Insert@AEAU-$pair@$$CBI_N@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_type.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_bool_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__bool____0___::_Insert_std::pair_unsigned_int_const__bool__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__bool__________::_1_::catch$56 @ 0x1802BF2D1 (_std--_Hash_std--_Umap_traits_unsigned_int_bool_std--_Uhash_compare_unsigned_int_std--hash_unsig.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@1@V21@@Z @ 0x1802BF858 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBI_N@std@@@std@@@std@@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned int const,bool>>::erase(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rbx

  v4 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --*(_QWORD *)(a1 + 8);
  std::_Deallocate<16,0>(a3, (const struct std::nothrow_t *)0x18);
  *a2 = v4;
  return a2;
}
