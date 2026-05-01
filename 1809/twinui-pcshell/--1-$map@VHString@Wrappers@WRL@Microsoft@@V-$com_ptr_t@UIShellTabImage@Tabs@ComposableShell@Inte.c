/*
 * XREFs of ??1?$map@VHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@8@@std@@QEAA@XZ @ 0x1801FD814
 * Callers:
 *     _DefaultIconManager::DefaultIconManager_::_1_::dtor$1 @ 0x1801FD636 (_DefaultIconManager--DefaultIconManager_--_1_--dtor$1.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x180201914 (-erase@-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$com_ptr_t@UIShellTabImage@Tab.c)
 */

void __fastcall std::map<Microsoft::WRL::Wrappers::HString,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>>::~map<Microsoft::WRL::Wrappers::HString,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>>(
        void **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>>>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
