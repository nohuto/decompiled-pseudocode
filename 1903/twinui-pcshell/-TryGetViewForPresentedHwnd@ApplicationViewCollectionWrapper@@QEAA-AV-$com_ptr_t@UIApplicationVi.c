/*
 * XREFs of ?TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x180240524
 * Callers:
 *     _lambda_7776713b7958a1ab94e34a9b72bfa77e_::operator() @ 0x18022B220 (_lambda_7776713b7958a1ab94e34a9b72bfa77e_--operator().c)
 *     ?AddAndInsertTabAtDefaultPositionForWindowId@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationViewTabInsertionContext@ViewManagement@5UI@6@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18022BE00 (-AddAndInsertTabAtDefaultPositionForWindowId@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableS.c)
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18022C340 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 *     ?GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTab@Tabs@ComposableShell@56@@Z @ 0x180230850 (-GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?GetTabsForHwnd@TabViewManager@@UEAAJPEAUHWND__@@AEAV?$vector@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180230BF0 (-GetTabsForHwnd@TabViewManager@@UEAAJPEAUHWND__@@AEAV-$vector@V-$com_ptr_t@UIShellTab@Tabs@Compo.c)
 *     ?OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x18023521C (-OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@.c)
 *     ?TryGetTabGroupForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTabGroup@Tabs@ComposableShell@56@@Z @ 0x180240420 (-TryGetTabGroupForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Inte.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18003C99C (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetFrameWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18040F0FC (-GetFrameWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
ApplicationViewHelpers **__fastcall ApplicationViewCollectionWrapper::TryGetViewForPresentedHwnd(
        __int64 *a1,
        ApplicationViewHelpers **a2,
        HWND a3)
{
  __int64 v5; // r14
  int (__fastcall *v6)(__int64, HWND, ApplicationViewHelpers **); // rbx
  bool v7; // bl
  struct IApplicationView *v8; // rdx
  struct IApplicationView *v9; // rdx
  ApplicationViewHelpers *v10; // rax
  ApplicationViewHelpers *v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF

  v12 = 0LL;
  v5 = *a1;
  if ( *a1
    && (v6 = *(int (__fastcall **)(__int64, HWND, ApplicationViewHelpers **))(*(_QWORD *)v5 + 48LL),
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v12),
        v6(v5, a3, &v12) >= 0)
    && v12
    && (((**(void (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v12)(
           v12,
           &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
           &v13),
         v7 = v13 != 0,
         wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13),
         !v7)
     || (HWND)ApplicationViewHelpers::GetCoreWindowForView(
                (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v12,
                v8) == a3
     || ApplicationViewHelpers::GetFrameWindowForView(v12, v9) == a3) )
  {
    v10 = v12;
    v12 = 0LL;
    *a2 = v10;
  }
  else
  {
    *a2 = 0LL;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v12);
  return a2;
}
