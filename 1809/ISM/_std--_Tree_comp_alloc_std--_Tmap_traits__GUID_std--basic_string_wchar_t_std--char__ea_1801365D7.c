/*
 * XREFs of _std::_Tree_comp_alloc_std::_Tmap_traits__GUID_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Windows::Internal::Holographic::GuidLess_std::allocator_std::pair__GUID_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________0___::_Buynode_std::pair__GUID_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________::_1_::catch$2 @ 0x1801365D7
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@2@_K@Z @ 0x180085C78 (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Tree_comp_alloc_std::_Tmap_traits__GUID_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Windows::Internal::Holographic::GuidLess_std::allocator_std::pair__GUID_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________0___::_Buynode_std::pair__GUID_const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<unsigned long const,Win32kInterop::TargetingInfo>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
