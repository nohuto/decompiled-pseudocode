/*
 * XREFs of ?deallocate@?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@2@_K@Z @ 0x1800991A8
 * Callers:
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue_Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator_std::allocator_std::pair_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__const__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue____0___::_Buynode_std::piecewise_construct_t_const_&_std::tuple_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__&&__std::tuple_____::_1_::catch$8 @ 0x180097AB0 (_std--_Tree_comp_alloc_std--_Tmap_traits_wil--com_ptr_t_IApplicationView_wil--err_exception_poli.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue_Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator_std::allocator_std::pair_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__const__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue____0___::_Buyheadnode_::_1_::catch$8 @ 0x180098DA3 (_std--_Tree_comp_alloc_std--_Tmap_traits_wil--com_ptr_t_IApplicationView_wil--err_e_ea_180098DA3.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue_Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator_std::allocator_std::pair_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__const__Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue____0___::_Buynode0_::_1_::catch$10 @ 0x180098E07 (_std--_Tree_comp_alloc_std--_Tmap_traits_wil--com_ptr_t_IApplicationView_wil--err_e_ea_180098E07.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x58);
}
