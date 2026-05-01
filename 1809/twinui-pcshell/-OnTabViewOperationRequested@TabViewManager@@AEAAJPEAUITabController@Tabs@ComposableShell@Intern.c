/*
 * XREFs of ?OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerViewEventArgs@3456@@Z @ 0x1801E14B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$TabViewManager_OnTabViewOperationRequested@PEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@TabViewManagerTraceLogging@@SAX$$QEAPEAUIApplicationView@@$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@$$QEAI@Z @ 0x1801D1314 (--$TabViewManager_OnTabViewOperationRequested@PEAUIApplicationView@@PEAUIShellTab@Tabs@Composabl.c)
 *     ?DuplicateTab@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x1801DAEC0 (-DuplicateTab@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z.c)
 *     ?EnterFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801DB0F8 (-EnterFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ExitFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801DB56C (-ExitFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?MinimizeView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801DEC04 (-MinimizeView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801E2EA0 (-PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@C.c)
 *     ?SetTabGroupForeground@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801E503C (-SetTabGroupForeground@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@.c)
 *     ?SetViewTransitionsEnabled@TabViewManager@@CAXPEAUIApplicationView@@_N@Z @ 0x1801E5180 (-SetViewTransitionsEnabled@TabViewManager@@CAXPEAUIApplicationView@@_N@Z.c)
 *     ?SwitchToTitleBar@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801EB95C (-SwitchToTitleBar@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ToggleVerticalMaximize@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801ECDD8 (-ToggleVerticalMaximize@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EE088 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1801EFC44 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

__int64 __fastcall TabViewManager::OnTabViewOperationRequested(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabControllerViewEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  TabViewManager *v8; // rcx
  struct IApplicationView *v9; // rbx
  int v10; // r8d
  int v11; // esi
  __int64 v12; // rdx
  int v13; // eax
  int v15; // eax
  __int64 v16; // rdx
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v17; // [rsp+28h] [rbp-59h] BYREF
  struct IApplicationView *v18; // [rsp+30h] [rbp-51h] BYREF
  __int64 v19; // [rsp+38h] [rbp-49h] BYREF
  int v20; // [rsp+40h] [rbp-41h] BYREF
  LPVOID v21[4]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v22[24]; // [rsp+68h] [rbp-19h] BYREF
  int v23; // [rsp+80h] [rbp-1h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v24[2]; // [rsp+98h] [rbp+17h] BYREF
  struct _GUID v25; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v24[1] = (struct Windows::Internal::ComposableShell::Tabs::IShellTab *)-2LL;
  TabViewManagerTraceLogging::WatchCurrentThread(v21, "TabViewManager_OnTabViewOperationRequested");
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerViewEventArgs *, int *))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v20);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC15,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_6;
  }
  v17 = 0LL;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v17);
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerViewEventArgs *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v17);
  v6 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC18,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v7);
LABEL_5:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v17);
LABEL_6:
    if ( v23 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v22);
    goto LABEL_34;
  }
  TabViewManager::TryGetViewForTab(this, &v18, v17);
  v9 = v18;
  if ( !v18 )
    goto LABEL_31;
  v10 = v20;
  if ( v20 != 7 )
  {
    LODWORD(v19) = v20;
    v24[0] = v17;
    *(_QWORD *)&v25.Data1 = v18;
    TabViewManagerTraceLogging::TabViewManager_OnTabViewOperationRequested<IApplicationView *,Windows::Internal::ComposableShell::Tabs::IShellTab *,unsigned int>(
      (struct IApplicationView **)&v25,
      v24,
      (unsigned int *)&v19);
    TabViewManager::SetViewTransitionsEnabled(v9, 1);
    v10 = v20;
  }
  if ( v10 == 1 )
  {
    v15 = TabViewManager::MinimizeView(v8, (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v9);
    v6 = v15;
    if ( v15 >= 0 )
      goto LABEL_31;
    v16 = 3117LL;
    goto LABEL_49;
  }
  if ( v10 <= 1 )
    goto LABEL_31;
  if ( v10 <= 3 )
  {
    v15 = TabViewManager::PerformWindowPlacementOperation(v8, v9);
    v6 = v15;
    if ( v15 >= 0 )
      goto LABEL_31;
    v16 = 3122LL;
    goto LABEL_49;
  }
  switch ( v10 )
  {
    case 5:
      v15 = TabViewManager::EnterFullScreen(this, v9);
      v6 = v15;
      if ( v15 >= 0 )
        break;
      v16 = 3126LL;
      goto LABEL_49;
    case 6:
      v15 = TabViewManager::ExitFullScreen(this, v9);
      v6 = v15;
      if ( v15 >= 0 )
        break;
      v16 = 3130LL;
      goto LABEL_49;
    case 7:
      v15 = TabViewManager::SetTabGroupForeground(this, v17);
      v6 = v15;
      if ( v15 >= 0 )
        break;
      v16 = 3134LL;
      goto LABEL_49;
    case 8:
      v15 = TabViewManager::ToggleVerticalMaximize(this, v9);
      v6 = v15;
      if ( v15 >= 0 )
        break;
      v16 = 3138LL;
      goto LABEL_49;
    case 9:
      v15 = TabViewManager::SwitchToTitleBar(this, v9);
      v6 = v15;
      if ( v15 >= 0 )
        break;
      v16 = 3142LL;
LABEL_49:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_50;
    case 10:
      *(_QWORD *)&v25.Data1 = 0LL;
      *(_QWORD *)v25.Data4 = 0LL;
      v19 = 0LL;
      v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64 *))(*(_QWORD *)v17 + 168LL))(
              v17,
              &v19);
      if ( v11 < 0 )
      {
        v12 = 3149LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v11);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v17);
        if ( v23 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v22);
        v6 = v11;
        goto LABEL_34;
      }
      if ( v19 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v19 + 48LL))(v19, &v25);
        if ( v11 < 0 )
        {
          v12 = 3152LL;
          goto LABEL_22;
        }
        v13 = TabViewManager::DuplicateTab((TabViewManager *)((char *)this + 136), v9, &v25);
        v6 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC51,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v13);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
LABEL_50:
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
          goto LABEL_5;
        }
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
      break;
  }
LABEL_31:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v17);
  if ( v23 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v22);
  v6 = 0;
LABEL_34:
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v21);
  return v6;
}
