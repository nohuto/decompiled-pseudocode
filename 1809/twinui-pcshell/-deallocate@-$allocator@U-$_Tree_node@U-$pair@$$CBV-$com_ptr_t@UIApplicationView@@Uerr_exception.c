/*
 * XREFs of ?deallocate@?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@2@_K@Z @ 0x18008F6F8
 * Callers:
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue_Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator_std::allocator_std::pair_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__const__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue____0___::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__&&___ptr64__std::tuple_____::_1_::catch$8 @ 0x18008DF8C (_std--_Tree_comp_alloc_std--_Tmap_traits_wil--com_ptr_t_IApplicationView_wil--err_exception_poli.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue_Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator_std::allocator_std::pair_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__const__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue____0___::_Buyheadnode_::_1_::catch$5 @ 0x18008F2E7 (_std--_Tree_comp_alloc_std--_Tmap_traits_wil--com_ptr_t_IApplicationView_wil--err_e_ea_18008F2E7.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue_Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator_std::allocator_std::pair_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__const__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue____0___::_Buynode0_::_1_::catch$14 @ 0x18008F34B (_std--_Tree_comp_alloc_std--_Tmap_traits_wil--com_ptr_t_IApplicationView_wil--err_e_ea_18008F34B.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x58);
}
