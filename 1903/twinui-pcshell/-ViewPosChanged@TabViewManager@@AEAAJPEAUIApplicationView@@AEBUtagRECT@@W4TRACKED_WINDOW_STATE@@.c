/*
 * XREFs of ?ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x180241C2C
 * Callers:
 *     ?OnShellTrackedWindowPosChanged@TabViewManager@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x180233EA0 (-OnShellTrackedWindowPosChanged@TabViewManager@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagREC.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18003C99C (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$TabViewManager_MaximizedWindowInfo@AEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@AEAU2@AEAU2@@TabViewManagerTraceLogging@@SAXAEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@11@Z @ 0x180226FDC (--$TabViewManager_MaximizedWindowInfo@AEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@AEAU2@AEAU2@@T.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LazyApplyWindowGroupTemplate@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180237380 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LazyApplyWindowGroupTemplate@@@wil@@.c)
 *     ?TryGetGroup@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18023FE74 (-TryGetGroup@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Wi.c)
 *     ?TryGetLastSelectedTabForView@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18023FF0C (-TryGetLastSelectedTabForView@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell.c)
 *     ?UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180241AA8 (-UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@Co.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabViewManager::ViewPosChanged(
        __int64 a1,
        ApplicationViewHelpers *a2,
        const struct tagRECT *a3,
        unsigned int a4)
{
  ApplicationViewHelpers *v5; // r8
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  struct IApplicationView *v10; // rdx
  HWND CoreWindowForView; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  const char *v17; // r9
  __int64 result; // rax
  ApplicationViewHelpers *v20; // [rsp+38h] [rbp-80h] BYREF
  __int64 v21; // [rsp+40h] [rbp-78h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v22; // [rsp+48h] [rbp-70h] BYREF
  __int64 v23[2]; // [rsp+50h] [rbp-68h] BYREF
  struct tagRECT Rect; // [rsp+60h] [rbp-58h] BYREF
  struct tagRECT v25; // [rsp+70h] [rbp-48h] BYREF
  struct tagRECT v26; // [rsp+80h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v23[1] = -2LL;
  try
  {
    v5 = a2;
    v20 = a2;
    if ( a4 == 1 )
    {
      v21 = 0LL;
      v7 = *(_QWORD *)a2;
      v21 = 0LL;
      v8 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int64 *, ApplicationViewHelpers *))(v7 + 80))(
             a2,
             &v21,
             a2);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1986LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v8);
      *(_QWORD *)&v26.left = 0LL;
      *(_QWORD *)&v26.right = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v21 + 88LL))(v21, &v26);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1989LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v9);
      *(_QWORD *)&Rect.left = 0LL;
      *(_QWORD *)&Rect.right = 0LL;
      CoreWindowForView = (HWND)ApplicationViewHelpers::GetCoreWindowForView(
                                  (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v20,
                                  v10);
      if ( CoreWindowForView )
        GetWindowRect(CoreWindowForView, &Rect);
      *(_QWORD *)&v25.left = 0LL;
      *(_QWORD *)&v25.right = 0LL;
      v12 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, struct tagRECT *))(*(_QWORD *)v20 + 128LL))(v20, &v25);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1999LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v12);
      TabViewManagerTraceLogging::TabViewManager_MaximizedWindowInfo<IApplicationView * &,tagRECT &,tagRECT const &,tagRECT &,tagRECT &>(
        &v20,
        &v26,
        a3,
        &v25,
        &Rect);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
      v5 = v20;
    }
    TabViewManager::TryGetLastSelectedTabForView(a1, (__int64 *)&v22, (unsigned __int64)v5);
    TabViewManager::TryGetGroup(v13, v23, (__int64 *)v22);
    if ( v22 && v23[0] )
    {
      TabViewManager::UpdateViewAnimationStateForTab(
        (RTL_SRWLOCK *)a1,
        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v20,
        v22);
      (*(void (__fastcall **)(_QWORD, ApplicationViewHelpers *, _QWORD))(**(_QWORD **)(a1 + 1376) + 32LL))(
        *(_QWORD *)(a1 + 1376),
        v20,
        a4);
      wil::Feature<__WilFeatureTraits_Feature_LazyApplyWindowGroupTemplate>::ReportUsageToService(v15, v14, v16);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v23);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v22);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7E4,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v17);
  }
  return result;
}
