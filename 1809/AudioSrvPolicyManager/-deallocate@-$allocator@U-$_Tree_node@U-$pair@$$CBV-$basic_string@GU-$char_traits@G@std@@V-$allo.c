/*
 * XREFs of ?deallocate@?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@_K@Z @ 0x1800186A4
 * Callers:
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____wil::com_ptr_t_IApplicationSpecificEndpointInfo_wil::err_returncode_policy__std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__wil::com_ptr_t_IApplicationSpecificEndpointInfo_wil::err_returncode_policy______0___::_Buynode0_::_1_::catch$0 @ 0x1800390D3 (_std--_Tree_comp_alloc_std--_Tmap_traits_std--basic_string_unsigned_short_std--char_traits_unsig.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____wil::com_ptr_t_IApplicationSpecificEndpointInfo_wil::err_returncode_policy__std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__wil::com_ptr_t_IApplicationSpecificEndpointInfo_wil::err_returncode_policy______0___::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____&&___ptr64__std::tuple_____::_1_::catch$1 @ 0x180039250 (_std--_Tree_comp_alloc_std--_Tmap_traits_std--basic_string_unsigned_short_std--char_ea_180039250.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_Tree_node<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2, (const struct std::nothrow_t *)0x48);
}
