/*
 * XREFs of ?CleanupPendingWindowOperations@TabViewManager@@AEAAXPEAUIApplicationView@@@Z @ 0x1801D8AA0
 * Callers:
 *     ?OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801DF630 (-OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180026DC4 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801D5F9C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@9@$0A@@std@@@std@@QEAA_KAEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801F1338 (-erase@-$_Tree@V-$_Tmap_traits@UWindowId@WindowManagement@ApplicationModel@Internal_ea_1801F1338.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@9@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801F167C (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna_ea_1801F167C.c)
 */

void __fastcall TabViewManager::CleanupPendingWindowOperations(
        TabViewManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  unsigned int CoreWindowForView; // eax
  unsigned int v4; // ebp
  __int64 *v5; // r9
  __int64 *v6; // r8
  __int64 *v7; // rdx
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  CoreWindowForView = ApplicationViewHelpers::GetCoreWindowForView(a2, (struct IApplicationView *)a2);
  v4 = CoreWindowForView;
  LODWORD(v12) = CoreWindowForView;
  v5 = (__int64 *)*((_QWORD *)this + 169);
  v6 = (__int64 *)v5[1];
  v7 = v5;
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v6 + 8) >= CoreWindowForView )
    {
      v7 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  while ( !*((_BYTE *)v6 + 25) );
  if ( v7 == v5 || CoreWindowForView < *((_DWORD *)v7 + 8) )
LABEL_8:
    v7 = (__int64 *)*((_QWORD *)this + 169);
  if ( v7 != v5 )
    std::_Tree<std::_Tmap_traits<Windows::Internal::ApplicationModel::WindowManagement::WindowId,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<Windows::Internal::ApplicationModel::WindowManagement::WindowId>,std::allocator<std::pair<Windows::Internal::ApplicationModel::WindowManagement::WindowId const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,0>>::erase(
      (char *)this + 1352,
      &v12);
  v8 = (__int64 *)*((_QWORD *)this + 167);
  v9 = *v8;
  v12 = *v8;
  while ( (__int64 *)v9 != v8 )
  {
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v10,
      *(_QWORD *)(v9 + 32));
    v11 = *(_DWORD *)(v9 + 40);
    if ( v11 == v4 )
      std::_Tree<std::_Tmap_traits<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,Windows::Internal::ApplicationModel::WindowManagement::WindowId,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,Windows::Internal::ApplicationModel::WindowManagement::WindowId>>,0>>::erase(
        (char *)this + 1336,
        &v10);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v10);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,Windows::Internal::ApplicationModel::WindowManagement::WindowId>>>,std::_Iterator_base0>::operator++(&v12);
    v9 = v12;
  }
}
