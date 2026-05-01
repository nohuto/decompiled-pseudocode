/*
 * XREFs of ?OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerViewEventArgs@3456@@Z @ 0x180253A20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$TabViewManager_OnTabViewOperationRequested@PEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@TabViewManagerTraceLogging@@SAX$$QEAPEAUIApplicationView@@$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@$$QEAI@Z @ 0x180246744 (--$TabViewManager_OnTabViewOperationRequested@PEAUIApplicationView@@PEAUIShellTab@Tabs@Composabl.c)
 *     ?DuplicateTab@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x18024DE30 (-DuplicateTab@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z.c)
 *     ?EnterFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18024E064 (-EnterFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ExitFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18024E52C (-ExitFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?MinimizeView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180251858 (-MinimizeView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025550C (-PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@C.c)
 *     ?SetTabGroupForeground@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180257130 (-SetTabGroupForeground@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@.c)
 *     ?SetViewTransitionsEnabled@TabViewManager@@CAXPEAUIApplicationView@@_N@Z @ 0x180257280 (-SetViewTransitionsEnabled@TabViewManager@@CAXPEAUIApplicationView@@_N@Z.c)
 *     ?SwitchToTitleBar@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18025D4D8 (-SwitchToTitleBar@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ToggleVerticalMaximize@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18025E650 (-ToggleVerticalMaximize@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025FC04 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802618E8 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

__int64 __fastcall TabViewManager::OnTabViewOperationRequested(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabControllerViewEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerViewEventArgs *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **); // rbx
  int v8; // eax
  TabViewManager *v9; // rcx
  struct IApplicationView *v10; // rbx
  int v11; // r8d
  int v12; // esi
  __int64 v13; // rdx
  int v14; // eax
  int v16; // eax
  __int64 v17; // rdx
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v18; // [rsp+28h] [rbp-59h] BYREF
  struct IApplicationView *v19; // [rsp+30h] [rbp-51h] BYREF
  __int64 v20; // [rsp+38h] [rbp-49h] BYREF
  int v21; // [rsp+40h] [rbp-41h] BYREF
  LPVOID v22[4]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v23[24]; // [rsp+68h] [rbp-19h] BYREF
  int v24; // [rsp+80h] [rbp-1h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v25[2]; // [rsp+98h] [rbp+17h] BYREF
  struct _GUID v26; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v25[1] = (struct Windows::Internal::ComposableShell::Tabs::IShellTab *)-2LL;
  TabViewManagerTraceLogging::WatchCurrentThread(v22, "TabViewManager_OnTabViewOperationRequested");
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerViewEventArgs *, int *))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v21);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA4F,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_6;
  }
  v18 = 0LL;
  v7 = *(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerViewEventArgs *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)a3 + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v18);
  v8 = v7(a3, &v18);
  v6 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA52,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v8);
LABEL_5:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
LABEL_6:
    if ( v24 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v23);
    goto LABEL_34;
  }
  TabViewManager::TryGetViewForTab(this, &v19, v18);
  v10 = v19;
  if ( !v19 )
    goto LABEL_31;
  v11 = v21;
  if ( v21 != 7 )
  {
    LODWORD(v20) = v21;
    v25[0] = v18;
    *(_QWORD *)&v26.Data1 = v19;
    TabViewManagerTraceLogging::TabViewManager_OnTabViewOperationRequested<IApplicationView *,Windows::Internal::ComposableShell::Tabs::IShellTab *,unsigned int>(
      (struct IApplicationView **)&v26,
      v25,
      (unsigned int *)&v20);
    TabViewManager::SetViewTransitionsEnabled(v10, 1);
    v11 = v21;
  }
  if ( v11 == 1 )
  {
    v16 = TabViewManager::MinimizeView(v9, (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v10);
    v6 = v16;
    if ( v16 >= 0 )
      goto LABEL_31;
    v17 = 2663LL;
    goto LABEL_49;
  }
  if ( v11 <= 1 )
    goto LABEL_31;
  if ( v11 <= 3 )
  {
    v16 = TabViewManager::PerformWindowPlacementOperation(v9, v10);
    v6 = v16;
    if ( v16 >= 0 )
      goto LABEL_31;
    v17 = 2668LL;
    goto LABEL_49;
  }
  switch ( v11 )
  {
    case 5:
      v16 = TabViewManager::EnterFullScreen(this, v10);
      v6 = v16;
      if ( v16 >= 0 )
        break;
      v17 = 2672LL;
      goto LABEL_49;
    case 6:
      v16 = TabViewManager::ExitFullScreen(this, v10);
      v6 = v16;
      if ( v16 >= 0 )
        break;
      v17 = 2676LL;
      goto LABEL_49;
    case 7:
      v16 = TabViewManager::SetTabGroupForeground(this, v18);
      v6 = v16;
      if ( v16 >= 0 )
        break;
      v17 = 2680LL;
      goto LABEL_49;
    case 8:
      v16 = TabViewManager::ToggleVerticalMaximize(this, v10);
      v6 = v16;
      if ( v16 >= 0 )
        break;
      v17 = 2684LL;
      goto LABEL_49;
    case 9:
      v16 = TabViewManager::SwitchToTitleBar(this, v10);
      v6 = v16;
      if ( v16 >= 0 )
        break;
      v17 = 2688LL;
LABEL_49:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_50;
    case 10:
      *(_QWORD *)&v26.Data1 = 0LL;
      *(_QWORD *)v26.Data4 = 0LL;
      v20 = 0LL;
      v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64 *))(*(_QWORD *)v18 + 168LL))(
              v18,
              &v20);
      if ( v12 < 0 )
      {
        v13 = 2695LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v12);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
        if ( v24 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v23);
        v6 = v12;
        goto LABEL_34;
      }
      if ( v20 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v20 + 48LL))(v20, &v26);
        if ( v12 < 0 )
        {
          v13 = 2698LL;
          goto LABEL_22;
        }
        v14 = TabViewManager::DuplicateTab((TabViewManager *)((char *)this + 136), v10, &v26);
        v6 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA8B,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v14);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
LABEL_50:
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
          goto LABEL_5;
        }
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
      break;
  }
LABEL_31:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
  if ( v24 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v23);
  v6 = 0;
LABEL_34:
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v22);
  return v6;
}
