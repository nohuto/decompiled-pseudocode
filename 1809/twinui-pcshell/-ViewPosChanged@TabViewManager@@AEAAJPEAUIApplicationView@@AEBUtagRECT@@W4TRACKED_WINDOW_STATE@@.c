/*
 * XREFs of ?ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1801EF59C
 * Callers:
 *     ?OnShellTrackedWindowPosChanged@TabViewManager@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1801E0990 (-OnShellTrackedWindowPosChanged@TabViewManager@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagREC.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180026DC4 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$TabViewManager_MaximizedWindowInfo@AEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@AEAU2@AEAU2@@TabViewManagerTraceLogging@@SAXAEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@11@Z @ 0x1801D1238 (--$TabViewManager_MaximizedWindowInfo@AEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@AEAU2@AEAU2@@T.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LazyApplyWindowGroupTemplate@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801E4674 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LazyApplyWindowGroupTemplate@@@wil@@.c)
 *     ?TryGetGroup@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801ED8FC (-TryGetGroup@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Wi.c)
 *     ?TryGetLastSelectedTabForView@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801ED994 (-TryGetLastSelectedTabForView@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell.c)
 *     ?UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EF41C (-UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@Co.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabViewManager::ViewPosChanged(
        __int64 a1,
        ApplicationViewHelpers *a2,
        const struct tagRECT *a3,
        unsigned int a4)
{
  ApplicationViewHelpers *v5; // r8
  int v7; // eax
  int v8; // eax
  struct IApplicationView *v9; // rdx
  HWND CoreWindowForView; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  const char *v16; // r9
  __int64 result; // rax
  ApplicationViewHelpers *v19; // [rsp+38h] [rbp-80h] BYREF
  __int64 v20; // [rsp+40h] [rbp-78h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v21; // [rsp+48h] [rbp-70h] BYREF
  __int64 v22[2]; // [rsp+50h] [rbp-68h] BYREF
  struct tagRECT Rect; // [rsp+60h] [rbp-58h] BYREF
  struct tagRECT v24; // [rsp+70h] [rbp-48h] BYREF
  struct tagRECT v25; // [rsp+80h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v22[1] = -2LL;
  try
  {
    v5 = a2;
    v19 = a2;
    if ( a4 == 1 )
    {
      v20 = 0LL;
      v7 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int64 *, ApplicationViewHelpers *))(*(_QWORD *)a2 + 80LL))(
             a2,
             &v20,
             a2);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2430LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v7);
      *(_QWORD *)&v25.left = 0LL;
      *(_QWORD *)&v25.right = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v20 + 88LL))(v20, &v25);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2433LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v8);
      *(_QWORD *)&Rect.left = 0LL;
      *(_QWORD *)&Rect.right = 0LL;
      CoreWindowForView = (HWND)ApplicationViewHelpers::GetCoreWindowForView(
                                  (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v19,
                                  v9);
      if ( CoreWindowForView )
        GetWindowRect(CoreWindowForView, &Rect);
      *(_QWORD *)&v24.left = 0LL;
      *(_QWORD *)&v24.right = 0LL;
      v11 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, struct tagRECT *))(*(_QWORD *)v19 + 128LL))(v19, &v24);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2443LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v11);
      TabViewManagerTraceLogging::TabViewManager_MaximizedWindowInfo<IApplicationView * &,tagRECT &,tagRECT const &,tagRECT &,tagRECT &>(
        &v19,
        &v25,
        a3,
        &v24,
        &Rect);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
      v5 = v19;
    }
    TabViewManager::TryGetLastSelectedTabForView(a1, (__int64 *)&v21, (unsigned __int64)v5);
    TabViewManager::TryGetGroup(v12, v22, (__int64)v21);
    if ( v21 && v22[0] )
    {
      TabViewManager::UpdateViewAnimationStateForTab(
        (RTL_SRWLOCK *)a1,
        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v19,
        v21);
      (*(void (__fastcall **)(_QWORD, ApplicationViewHelpers *, _QWORD))(**(_QWORD **)(a1 + 1376) + 32LL))(
        *(_QWORD *)(a1 + 1376),
        v19,
        a4);
      wil::Feature<__WilFeatureTraits_Feature_LazyApplyWindowGroupTemplate>::ReportUsageToService(v14, v13, v15);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v22);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v21);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9A0,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v16);
  }
  return result;
}
