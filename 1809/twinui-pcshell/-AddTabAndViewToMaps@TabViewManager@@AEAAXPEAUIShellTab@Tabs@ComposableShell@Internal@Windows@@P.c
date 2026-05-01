/*
 * XREFs of ?AddTabAndViewToMaps@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1801D8128
 * Callers:
 *     ?AddAndInsertTabAtDefaultPositionForWindowId@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationViewTabInsertionContext@ViewManagement@5UI@6@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x1801D7DC0 (-AddAndInsertTabAtDefaultPositionForWindowId@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableS.c)
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x1801D8210 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 *     ?DragEnterForApplicationManagedTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z @ 0x1801DA760 (-DragEnterForApplicationManagedTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@.c)
 *     ?TabTransferCompletedWorker@TabViewManager@@AEAAJPEAUIInspectable@@UShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EB9B8 (-TabTransferCompletedWorker@TabViewManager@@AEAAJPEAUIInspectable@@UShellTabId@Tabs@ComposableSh.c)
 *     ?TryAddView@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801ECE54 (-TryAddView@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Intern.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x18008E57C (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$TabViewManager_AddTabAndViewToMaps@AEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIApplicationView@@@TabViewManagerTraceLogging@@SAXAEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIApplicationView@@@Z @ 0x1801D1058 (--$TabViewManager_AddTabAndViewToMaps@AEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AE.c)
 *     ??$_Buynode@AEAPEAUIApplicationView@@AEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$00@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@1@AEAPEAUIApplicationView@@AEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801D166C (--$_Buynode@AEAPEAUIApplicationView@@AEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@-$.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$00@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@1@@Z @ 0x1801D2E20 (--$_Insert_nohint@AEAU-$pair@$$CBV-$com_ptr_t@UIApplicationView@@Uerr_exception_pol_ea_1801D2E20.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@1@@Z @ 0x1801D2EB4 (--$_Insert_nohint@AEAU-$pair@$$CBV-$com_ptr_t@UIApplicationView@@Uerr_exception_pol_ea_1801D2EB4.c)
 */

void __fastcall TabViewManager::AddTabAndViewToMaps(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        struct IApplicationView *a3)
{
  __int64 *v3; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // r8
  int v9; // eax
  _BYTE v10[16]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 *v12; // [rsp+60h] [rbp+20h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v13; // [rsp+68h] [rbp+28h] BYREF
  struct IApplicationView *v14; // [rsp+70h] [rbp+30h] BYREF

  v14 = a3;
  v13 = a2;
  v3 = (__int64 *)((char *)this + 1272);
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
    (__int64 **)this + 159,
    &v12,
    (unsigned __int64 *)&v13);
  if ( v12 == (__int64 *)*v3 )
  {
    v5 = std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,1>>::_Buynode<IApplicationView * &,Windows::Internal::ComposableShell::Tabs::IShellTab * &>(
           (__int64)this + 1256,
           (__int64 *)&v14,
           (__int64 *)&v13);
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,1>>::_Insert_nohint<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>> &,std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>,void *> *>(
      (__int64 *)this + 157,
      (__int64)v10,
      v6,
      (_QWORD *)(v5 + 32),
      v5);
    v7 = (__int64 *)std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,1>>::_Buynode<IApplicationView * &,Windows::Internal::ComposableShell::Tabs::IShellTab * &>(
                      (__int64)v3,
                      (__int64 *)&v13,
                      (__int64 *)&v14);
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,0>>::_Insert_nohint<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>> &,std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>,void *> *>(
      v3,
      (__int64)v10,
      v8,
      v7 + 4,
      v7);
    TabViewManagerTraceLogging::TabViewManager_AddTabAndViewToMaps<Windows::Internal::ComposableShell::Tabs::IShellTab * &,IApplicationView * &>(
      &v13,
      &v14);
    v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, __int64))(*(_QWORD *)v14 + 464LL))(
           v14,
           8LL,
           8LL);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        3641LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v9);
  }
}
