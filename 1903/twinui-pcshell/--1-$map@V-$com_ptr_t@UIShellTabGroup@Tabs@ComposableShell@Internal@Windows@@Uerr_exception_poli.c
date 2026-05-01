/*
 * XREFs of ??1?$map@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAA@XZ @ 0x18022A3A4
 * Callers:
 *     _TabViewManager::TabViewManager_::_1_::dtor$25 @ 0x180229D16 (_TabViewManager--TabViewManager_--_1_--dtor$25.c)
 *     _AppViewDataSourceAdapterBase::AppViewDataSourceAdapterBase_::_1_::dtor$11 @ 0x1803022D4 (_AppViewDataSourceAdapterBase--AppViewDataSourceAdapterBase_--_1_--dtor$11.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@0@Z @ 0x180242B4C (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Ue.c)
 */

void __fastcall std::map<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>::~map<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>(
        void **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>,std::less<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>>>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
