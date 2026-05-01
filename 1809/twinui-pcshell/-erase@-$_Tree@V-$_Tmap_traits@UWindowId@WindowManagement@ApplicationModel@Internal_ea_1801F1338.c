/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@9@$0A@@std@@@std@@QEAA_KAEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801F1338
 * Callers:
 *     ?CleanupPendingWindowOperations@TabViewManager@@AEAAXPEAUIApplicationView@@@Z @ 0x1801D8AA0 (-CleanupPendingWindowOperations@TabViewManager@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?DragEnterForApplicationManagedTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z @ 0x1801DA760 (-DragEnterForApplicationManagedTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@.c)
 *     ?RemoveWindowFromWindowGroup@WindowGroupManager@@UEAAJPEAUHWND__@@I@Z @ 0x180205130 (-RemoveWindowFromWindowGroup@WindowGroupManager@@UEAAJPEAUHWND__@@I@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801D5F9C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@9@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x1801F1274 (-erase@-$_Tree@V-$_Tmap_traits@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V-$.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<Windows::Internal::ApplicationModel::WindowManagement::WindowId,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<Windows::Internal::ApplicationModel::WindowManagement::WindowId>,std::allocator<std::pair<Windows::Internal::ApplicationModel::WindowManagement::WindowId const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,0>>::erase(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 v2; // r11
  __int64 v3; // rbx
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  v7 = v6;
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( *(_DWORD *)(v7 + 32) >= v8 )
      {
        if ( *(_BYTE *)(v5 + 25) && v8 < *(_DWORD *)(v7 + 32) )
          v5 = v7;
        v2 = v7;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
  }
  if ( !*(_BYTE *)(v5 + 25) )
    v6 = *(_QWORD *)v5;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( *a2 >= *(_DWORD *)(v6 + 32) )
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
    else
    {
      v5 = v6;
      v6 = *(_QWORD *)v6;
    }
  }
  v9 = v2;
  v11 = v2;
  while ( v9 != v5 )
  {
    ++v3;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,Windows::Internal::ApplicationModel::WindowManagement::WindowId>>>,std::_Iterator_base0>::operator++(&v11);
    v9 = v11;
  }
  std::_Tree<std::_Tmap_traits<Windows::Internal::ApplicationModel::WindowManagement::WindowId,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<Windows::Internal::ApplicationModel::WindowManagement::WindowId>,std::allocator<std::pair<Windows::Internal::ApplicationModel::WindowManagement::WindowId const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,0>>::erase(
    a1,
    &v11,
    v2,
    v5);
  return v3;
}
