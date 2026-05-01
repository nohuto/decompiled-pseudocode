/*
 * XREFs of ?OnBoundingRectRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerRectEventArgs@3456@@Z @ 0x180232D20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x1800484E4 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$TabViewManager_BoundingRectRequestedForTab@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAUtagRECT@@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAUtagRECT@@@Z @ 0x180226EA4 (--$TabViewManager_BoundingRectRequestedForTab@PEAUIShellTab@Tabs@ComposableShell@Internal@Window.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180240614 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802422F8 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabViewManager::OnBoundingRectRequested(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabControllerRectEventArgs *a3)
{
  __int64 (*v5)(void); // rbx
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v13; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+28h] [rbp-A0h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v15; // [rsp+30h] [rbp-98h] BYREF
  float v16; // [rsp+38h] [rbp-90h]
  float v17; // [rsp+3Ch] [rbp-8Ch]
  __int64 v18[2]; // [rsp+40h] [rbp-88h] BYREF
  LPVOID v19[4]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v20[24]; // [rsp+70h] [rbp-58h] BYREF
  int v21; // [rsp+88h] [rbp-40h]
  struct tagRECT v22; // [rsp+A0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v18[1] = -2LL;
  TabViewManagerTraceLogging::WatchCurrentThread(v19, "TabViewManager_OnBoundingRectRequested");
  v13 = 0LL;
  v5 = *(__int64 (**)(void))(*(_QWORD *)a3 + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v13);
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2970LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v6);
    TabViewManager::TryGetViewForTab(this, v18, v13);
    if ( v18[0] )
    {
      v14 = 0LL;
      v7 = *(_QWORD *)v18[0];
      v14 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(v7 + 104))(
             v18[0],
             &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
             &v14);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2977LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v14 + 24LL))(v14, &v22);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2978LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v9);
      *(float *)&v15 = (float)v22.left;
      *((float *)&v15 + 1) = (float)v22.top;
      v16 = (float)(v22.right - v22.left);
      v17 = (float)(v22.bottom - v22.top);
      v10 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerRectEventArgs *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)a3 + 64LL))(
              a3,
              &v15);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2985LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v10);
      v15 = v13;
      TabViewManagerTraceLogging::TabViewManager_BoundingRectRequestedForTab<Windows::Internal::ComposableShell::Tabs::IShellTab *,tagRECT &>(
        &v15,
        &v22);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v18);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v13);
    if ( v21 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v20);
    wil::details::StoredCallContextInfo::~StoredCallContextInfo(v19);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBB0,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v11);
  }
  return result;
}
