/*
 * XREFs of ??1?$map@KV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAA@XZ @ 0x180204570
 * Callers:
 *     _WindowGroupManager::WindowGroupManager_::_1_::dtor$1 @ 0x180204490 (_WindowGroupManager--WindowGroupManager_--_1_--dtor$1.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@9@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x1801F1274 (-erase@-$_Tree@V-$_Tmap_traits@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V-$.c)
 */

void __fastcall std::map<unsigned long,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>::~map<unsigned long,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>(
        __int64 **a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<Windows::Internal::ApplicationModel::WindowManagement::WindowId,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<Windows::Internal::ApplicationModel::WindowManagement::WindowId>,std::allocator<std::pair<Windows::Internal::ApplicationModel::WindowManagement::WindowId const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,0>>::erase(
    a1,
    &v2,
    **a1,
    (__int64)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
