/*
 * XREFs of ?erase@?$list@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@2@@Z @ 0x180068D00
 * Callers:
 *     ??$_Insert@AEAU?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@1@@Z @ 0x180067F88 (--$_Insert@AEAU-$pair@$$CB_KUInputObserverClient@-$CBaseInputObserverServer@$0M@@@@std@@V-$_List.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_CBaseInputObserverServer_12_::InputObserverClient_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__CBaseInputObserverServer_12_::InputObserverClient____0___::_Insert_std::pair_unsigned___int64_const__CBaseInputObserverServer_12_::InputObserverClient__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__CBaseInputObserverServer_12_::InputObserverClient__________::_1_::catch$56 @ 0x1800680F8 (_std--_Hash_std--_Umap_traits_unsigned___int64_CBaseInputObserverServer_12_--InputObserverClient.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@2@@Z @ 0x180068C38 (-erase@-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServer@$0M@@@V-$_Uhash.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>::erase(
        __int64 a1,
        _QWORD *a2,
        _QWORD **a3)
{
  _QWORD *v3; // rdi
  _QWORD *v6; // rcx
  _QWORD *result; // rax

  v3 = *a3;
  *a3[1] = *a3;
  (*a3)[1] = a3[1];
  --*(_QWORD *)(a1 + 8);
  v6 = a3[3];
  if ( v6 )
  {
    a3[3] = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
  }
  std::_Deallocate<16,0>(a3, (const struct std::nothrow_t *)0x28);
  result = a2;
  *a2 = v3;
  return result;
}
