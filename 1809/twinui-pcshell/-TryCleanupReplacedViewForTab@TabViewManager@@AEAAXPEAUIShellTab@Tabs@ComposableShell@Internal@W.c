/*
 * XREFs of ?TryCleanupReplacedViewForTab@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801ED3A0
 * Callers:
 *     ?OnSelectTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerCancellableEventArgs@3456@@Z @ 0x1801E00B0 (-OnSelectTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 *     ?SelectViewInTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x1801E4DA0 (-SelectViewInTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x18008E57C (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     ?CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801D8CF8 (-CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@@Z @ 0x1801F1808 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna_ea_1801F1808.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabViewManager::TryCleanupReplacedViewForTab(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  struct IApplicationView *v3; // rbx
  RTL_SRWLOCK *v4; // rsi
  __int64 **v5; // r10
  struct IApplicationView *v6; // rdi
  struct IApplicationView *v7; // r14
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v10; // [rsp+68h] [rbp+10h] BYREF
  struct IApplicationView *v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 *v12; // [rsp+78h] [rbp+20h] BYREF

  v10 = a2;
  v3 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    v4 = (RTL_SRWLOCK *)((char *)this + 1472);
    AcquireSRWLockExclusive((PSRWLOCK)this + 184);
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
      (__int64 **)this + 165,
      &v12,
      (unsigned __int64 *)&v10);
    if ( v12 == *v5 )
    {
      v6 = 0LL;
      v7 = 0LL;
    }
    else
    {
      v3 = (struct IApplicationView *)v12[5];
      v6 = v3;
      v12[5] = 0LL;
      v11 = v3;
      std::_Tree<std::_Tmap_traits<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>,0>>::erase(
        v5,
        &v10);
      v7 = v3;
    }
    if ( v4 )
    {
      ReleaseSRWLockExclusive(v4);
      v6 = v7;
    }
    if ( v6 )
    {
      v8 = TabViewManager::CloseView(this, v3);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          4049LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v8);
    }
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v11);
}
