/*
 * XREFs of ?erase@?$list@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800BFA68
 * Callers:
 *     ??$_Insert@AEAU?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@1@@Z @ 0x1800BA30C (--$_Insert@AEAU-$pair@QEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@@std@@V-$_List.c)
 *     _std::_Hash_std::_Umap_traits_IDCompInputTarget___std::vector_unsigned_long_std::allocator_unsigned_long____std::_Uhash_compare_IDCompInputTarget___DCompTargetHash_DCompTargetEqual__std::allocator_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long________0___::_Insert_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long______&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long______________::_1_::catch$54 @ 0x1800BA45F (_std--_Hash_std--_Umap_traits_IDCompInputTarget___std--vector_unsigned_long_std--allocator_unsig.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800BA6B0 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAUIDCompInputTarget@@V-$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18002B42C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 */

_QWORD *__fastcall std::list<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // rbx

  v3 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --*(_QWORD *)(a1 + 8);
  std::vector<Windows::UI::Color>::_Tidy((__int64)(a3 + 3));
  std::_Deallocate<16,0>(a3, (const struct std::nothrow_t *)0x30);
  *a2 = v3;
  return a2;
}
