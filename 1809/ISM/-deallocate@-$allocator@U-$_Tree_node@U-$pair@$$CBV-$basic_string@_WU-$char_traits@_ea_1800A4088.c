/*
 * XREFs of ?deallocate@?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@_K@Z @ 0x1800A4088
 * Callers:
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Windows::Internal::Holographic::HolographicDisplaySnapshot_Windows::Internal::Holographic::CaseInsensitiveStringLess_std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Windows::Internal::Holographic::HolographicDisplaySnapshot____0___::_Buyheadnode_::_1_::catch$0 @ 0x180133075 (_std--_Tree_comp_alloc_std--_Tmap_traits_std--basic_string_wchar_t_std--char_traits_ea_180133075.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_Tree_node<std::pair<std::wstring const,Windows::Internal::Holographic::HolographicDisplaySnapshot>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2, (const struct std::nothrow_t *)0x3D8);
}
