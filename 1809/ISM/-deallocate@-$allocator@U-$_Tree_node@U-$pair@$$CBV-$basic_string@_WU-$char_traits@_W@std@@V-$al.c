/*
 * XREFs of ?deallocate@?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@_K@Z @ 0x1800A364C
 * Callers:
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Windows::Internal::Holographic::SpatialInteractionSnapshot_Windows::Internal::Holographic::CaseInsensitiveStringLess_std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Windows::Internal::Holographic::SpatialInteractionSnapshot____0___::_Buynode0_::_1_::catch$0 @ 0x180132F8B (_std--_Tree_comp_alloc_std--_Tmap_traits_std--basic_string_wchar_t_std--char_traits_wchar_t__std.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Windows::Internal::Holographic::SpatialInteractionSnapshot_Windows::Internal::Holographic::CaseInsensitiveStringLess_std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Windows::Internal::Holographic::SpatialInteractionSnapshot____0___::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const_&___ptr64__std::tuple_____::_1_::catch$6 @ 0x180132FB1 (_std--_Tree_comp_alloc_std--_Tmap_traits_std--basic_string_wchar_t_std--char_traits_ea_180132FB1.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Windows::Internal::Holographic::SpatialInteractionSnapshot_Windows::Internal::Holographic::CaseInsensitiveStringLess_std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Windows::Internal::Holographic::SpatialInteractionSnapshot____0___::_Buyheadnode_::_1_::catch$0 @ 0x18013304F (_std--_Tree_comp_alloc_std--_Tmap_traits_std--basic_string_wchar_t_std--char_traits_ea_18013304F.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_Tree_node<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2, (const struct std::nothrow_t *)0xE0);
}
