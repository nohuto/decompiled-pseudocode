/*
 * XREFs of ?AddItemForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180303058
 * Callers:
 *     ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18030506C (-InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?OnTabAdded@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180305EB0 (-OnTabAdded@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180301858 (--$_Try_emplace@V-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_po.c)
 *     ?UpdateTabActivationTimestamp@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x180308114 (-UpdateTabActivationTimestamp@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@.c)
 *     ?UpdateTabAppId@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x180308198 (-UpdateTabAppId@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windo.c)
 *     ?UpdateTabDisplayName@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x180308248 (-UpdateTabDisplayName@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal.c)
 *     ?UpdateTabIcon@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x180308308 (-UpdateTabIcon@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Window.c)
 *     ?UpdateTabThumbnail@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x1803085E0 (-UpdateTabThumbnail@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=2
struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem **__fastcall AppViewDataSourceAdapter::AddItemForTab(
        AppViewDataSourceAdapter *this,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem **a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  AppViewDataSourceAdapter *v10; // rcx
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v11; // r14
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v19; // rcx
  __int64 v20; // rdi
  _QWORD v22[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem **v25; // [rsp+68h] [rbp+10h]

  v25 = a2;
  *a2 = 0LL;
  v6 = *((_QWORD *)this + 4);
  *a2 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      430LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, struct Windows::Internal::ComposableShell::Tabs::IShellTab *))(*(_QWORD *)*a2 + 88LL))(
         *a2,
         a3);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      432LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(*(_QWORD *)*a2 + 120LL))(
         *a2,
         2LL);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      433LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  AppViewDataSourceAdapter::UpdateTabDisplayName(retaddr, a3, *a2);
  AppViewDataSourceAdapter::UpdateTabAppId(this, a3, *a2);
  AppViewDataSourceAdapter::UpdateTabActivationTimestamp(v10, a3, *a2);
  v11 = *a2;
  v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64 *))(*(_QWORD *)a3 + 176LL))(
          a3,
          &v24);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      499LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  LOBYTE(v13) = v24;
  v14 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(*(_QWORD *)v11 + 112LL))(
          v11,
          v13);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      500LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  AppViewDataSourceAdapter::UpdateTabIcon(this, a3, *a2);
  AppViewDataSourceAdapter::UpdateTabThumbnail(this, a3, *a2);
  LOBYTE(v15) = 1;
  v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(*(_QWORD *)*a2 + 80LL))(
          *a2,
          v15);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      443LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, _QWORD))(*(_QWORD *)*a2 + 72LL))(
          *a2,
          0LL);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      446LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *))(**((_QWORD **)this + 4) + 56LL))(
          *((_QWORD *)this + 4),
          *a2);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      449LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v24,
    (__int64)a3);
  std::map<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>>::_Try_emplace<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,>(
    (__int64 *)this + 43,
    (unsigned __int64)v22,
    &v24);
  v19 = *a2;
  v20 = *(_QWORD *)(v22[0] + 40LL);
  *(_QWORD *)(v22[0] + 40LL) = *a2;
  if ( v19 )
    (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *))(*(_QWORD *)v19 + 8LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v24);
  return a2;
}
