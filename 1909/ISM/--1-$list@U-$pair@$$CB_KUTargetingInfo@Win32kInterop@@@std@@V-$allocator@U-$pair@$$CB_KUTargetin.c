/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAA@XZ @ 0x1800BA998
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_Win32kInterop::TargetingInfo_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__Win32kInterop::TargetingInfo____0___::_Hash_std::_Umap_traits_unsigned___int64_Win32kInterop::TargetingInfo_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__Win32kInterop::TargetingInfo____0____::_1_::dtor$0 @ 0x18003D5D6 (_std--_Hash_std--_Umap_traits_unsigned___int64_Win32kInterop--TargetingInfo_std--_Uhash_compare_.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAAXXZ @ 0x1800BF468 (-clear@-$list@U-$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V-$allocator@U-$pair@$$CB_KUTarg.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>::~list<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>(
        void **a1)
{
  std::list<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>::clear();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x90);
}
