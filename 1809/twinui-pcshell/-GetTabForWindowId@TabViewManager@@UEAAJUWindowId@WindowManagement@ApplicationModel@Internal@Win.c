/*
 * XREFs of ?GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTab@Tabs@ComposableShell@56@@Z @ 0x1801DD270
 * Callers:
 *     ?GetWindowGroupInfo@TabViewManager@@UEAAJPEAUHWND__@@PEAUWINDOW_GROUP_INFO@@@Z @ 0x1801DDD20 (-GetWindowGroupInfo@TabViewManager@@UEAAJPEAUHWND__@@PEAUWINDOW_GROUP_INFO@@@Z.c)
 *     ?MoveWindowToGroup@TabViewManager@@UEAAJPEAUHWND__@@AEBU_GUID@@I@Z @ 0x1801DEC90 (-MoveWindowToGroup@TabViewManager@@UEAAJPEAUHWND__@@AEBU_GUID@@I@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??$copy_to@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801D37A4 (--$copy_to@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@-$com_ptr_t@UIShellTab@Tabs@Compos.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801D3DB0 (--0-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5B84 (--1TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXI@Z @ 0x1801E59B8 (-StartActivity@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXI@Z.c)
 *     ?Stop@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1801E6FD8 (-Stop@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Ta.c)
 *     ?TryGetTabForViewImpl@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801EDCDC (-TryGetTabForViewImpl@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna.c)
 *     ?TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1801EDFA4 (-TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA-AV-$com_ptr_t@UIApplicationVi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabViewManager::GetTabForWindowId(
        __int64 a1,
        int a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab **a3)
{
  __int64 v4; // rbx
  __int64 *TabForViewImpl; // rax
  const char *v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-188h] BYREF
  __int64 v10[3]; // [rsp+28h] [rbp-180h] BYREF
  _QWORD v11[40]; // [rsp+40h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v10[1] = -2LL;
  v4 = a2;
  wil::ActivityBase<TabShellTelemetryProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v11);
  v11[0] = &TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId::`vftable';
  try
  {
    TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId::StartActivity(
      (TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId *)v11,
      v4);
    *a3 = 0LL;
    ApplicationViewCollectionWrapper::TryGetViewForPresentedHwnd(a1 + 992, &v9, v4);
    if ( v9 )
    {
      TabForViewImpl = (__int64 *)TabViewManager::TryGetTabForViewImpl(a1 - 152, v10, v9);
      wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::copy_to<Windows::Internal::ComposableShell::Tabs::IShellTab>(
        TabForViewImpl,
        a3);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v10);
    }
    TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId::Stop(
      (TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId *)v11,
      *a3,
      *a3 != 0LL);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
    TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId::~TabViewManager_GetOrCreateTabForWindowId((TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId *)v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7DC,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v7);
  }
  return result;
}
