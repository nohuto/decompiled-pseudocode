/*
 * XREFs of ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@2@_K@Z @ 0x180085C78
 * Callers:
 *     _std::_List_alloc_std::_List_base_types_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo__std::allocator_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo_______::_Buynode0_::_1_::catch$0 @ 0x180131F16 (_std--_List_alloc_std--_List_base_types_std--pair_unsigned_long_const__Win32kInterop--TargetingI.c)
 *     _std::_List_buy_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo__std::allocator_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo_____::_Buynode_unsigned_long_&___ptr64_Win32kInterop::TargetingInfo__::_1_::catch$3 @ 0x180131F62 (_std--_List_buy_std--pair_unsigned_long_const__Win32kInterop--TargetingInfo__std--allocator_std-.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits__GUID_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Windows::Internal::Holographic::GuidLess_std::allocator_std::pair__GUID_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________0___::_Buyheadnode_::_1_::catch$0 @ 0x1801330C1 (_std--_Tree_comp_alloc_std--_Tmap_traits__GUID_std--basic_string_wchar_t_std--char_traits_wchar_.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits__GUID_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Windows::Internal::Holographic::GuidLess_std::allocator_std::pair__GUID_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________0___::_Buynode_std::pair__GUID_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________::_1_::catch$2 @ 0x1801365D7 (_std--_Tree_comp_alloc_std--_Tmap_traits__GUID_std--basic_string_wchar_t_std--char__ea_1801365D7.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits__GUID_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Windows::Internal::Holographic::GuidLess_std::allocator_std::pair__GUID_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________0___::_Buynode0_::_1_::catch$0 @ 0x18013669B (_std--_Tree_comp_alloc_std--_Tmap_traits__GUID_std--basic_string_wchar_t_std--char__ea_18013669B.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_node<std::pair<unsigned long const,Win32kInterop::TargetingInfo>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2, (const struct std::nothrow_t *)0x50);
}
