/*
 * XREFs of ?deallocate@?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@_K@Z @ 0x1800AE5EC
 * Callers:
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_HWND_____ExeData_std::less_HWND______std::allocator_std::pair_HWND_____const_ExeData____0___::_Buynode_std::piecewise_construct_t_const_&_std::tuple_HWND_____const_&__std::tuple_unsigned_int_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&____::_1_::catch$12 @ 0x1800AA980 (_std--_Tree_comp_alloc_std--_Tmap_traits_HWND_____ExeData_std--less_HWND______std--allocator_std.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_HWND_____ExeData_std::less_HWND______std::allocator_std::pair_HWND_____const_ExeData____0___::_Buyheadnode_::_1_::catch$8 @ 0x1800AE0D7 (_std--_Tree_comp_alloc_std--_Tmap_traits_HWND_____ExeData_std--less_HWND______std--_ea_1800AE0D7.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_HWND_____ExeData_std::less_HWND______std::allocator_std::pair_HWND_____const_ExeData____0___::_Buynode0_::_1_::catch$10 @ 0x1800AE1FB (_std--_Tree_comp_alloc_std--_Tmap_traits_HWND_____ExeData_std--less_HWND______std--_ea_1800AE1FB.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x70);
}
