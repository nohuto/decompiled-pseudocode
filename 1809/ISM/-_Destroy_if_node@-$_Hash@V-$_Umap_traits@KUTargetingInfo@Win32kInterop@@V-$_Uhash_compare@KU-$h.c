/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@Z @ 0x180085BD4
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_Win32kInterop::TargetingInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo____0___::_Insert_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo__________::_1_::catch$1 @ 0x180131E57 (_std--_Hash_std--_Umap_traits_unsigned_long_Win32kInterop--TargetingInfo_std--_Uhash_compare_uns.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@Z @ 0x180085148 (-erase@-$list@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-$allocator@U-$pair@$$CBKUTarget.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD **a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>::erase(a1 + 8, &v3, a2);
}
