/*
 * XREFs of ?OnBoundingRectRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerRectEventArgs@3456@@Z @ 0x1801DF830
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$TabViewManager_BoundingRectRequestedForTab@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAUtagRECT@@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAUtagRECT@@@Z @ 0x1801D1100 (--$TabViewManager_BoundingRectRequestedForTab@PEAUIShellTab@Tabs@ComposableShell@Internal@Window.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EE088 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1801EFC44 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabViewManager::OnBoundingRectRequested(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabControllerRectEventArgs *a3)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  __int64 v11[2]; // [rsp+20h] [rbp-B8h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v12; // [rsp+30h] [rbp-A8h] BYREF
  float v13; // [rsp+38h] [rbp-A0h]
  float v14; // [rsp+3Ch] [rbp-9Ch]
  __int64 v15; // [rsp+40h] [rbp-98h] BYREF
  __int64 v16[3]; // [rsp+48h] [rbp-90h] BYREF
  LPVOID v17[4]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v18[24]; // [rsp+80h] [rbp-58h] BYREF
  int v19; // [rsp+98h] [rbp-40h]
  struct tagRECT v20; // [rsp+B0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v16[1] = -2LL;
  TabViewManagerTraceLogging::WatchCurrentThread(v17, "TabViewManager_OnBoundingRectRequested");
  v11[0] = 0LL;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(v11);
  try
  {
    v5 = (*(__int64 (**)(void))(*(_QWORD *)a3 + 48LL))();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3416LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v5);
    TabViewManager::TryGetViewForTab(this, v16, v11[0]);
    if ( v16[0] )
    {
      v15 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v16[0] + 104LL))(
             v16[0],
             &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
             &v15);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          3423LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v6);
      v7 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v15 + 24LL))(v15, &v20);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          3424LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v7);
      *(float *)&v12 = (float)v20.left;
      *((float *)&v12 + 1) = (float)v20.top;
      v13 = (float)(v20.right - v20.left);
      v14 = (float)(v20.bottom - v20.top);
      v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerRectEventArgs *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)a3 + 64LL))(
             a3,
             &v12);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          3431LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v8);
      v12 = (struct Windows::Internal::ComposableShell::Tabs::IShellTab *)v11[0];
      TabViewManagerTraceLogging::TabViewManager_BoundingRectRequestedForTab<Windows::Internal::ComposableShell::Tabs::IShellTab *,tagRECT &>(
        &v12,
        &v20);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v16);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v11);
    if ( v19 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v18);
    wil::details::StoredCallContextInfo::~StoredCallContextInfo(v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD6E,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v9);
  }
  return result;
}
