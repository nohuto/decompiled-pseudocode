/*
 * XREFs of LoggingUtil::GetTabGroupSize @ 0x18024FF50
 * Callers:
 *     LoggingUtil::GetGroupSizeFromTab @ 0x18024F35C (LoggingUtil--GetGroupSizeFromTab.c)
 *     ?InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTabGroup@5678@@Z @ 0x18025117C (-InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasu.c)
 *     ?StartActivity@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@4567@@Z @ 0x1802585C8 (-StartActivity@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUISh.c)
 *     ?TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@I@Z @ 0x18025D84C (-TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationVi.c)
 *     ?TabViewManagerSelectTab@TabViewManagerSelectTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@@Z @ 0x18025D9C8 (-TabViewManagerSelectTab@TabViewManagerSelectTabRequested@TabViewManagerMeasures@@QEAAXPEAUIAppl.c)
 *     ?TabViewManagerTabAddedForView@TabViewManagerConnectTabToView@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@_N@Z @ 0x18025DB10 (-TabViewManagerTabAddedForView@TabViewManagerConnectTabToView@TabViewManagerMeasures@@QEAAXPEAUI.c)
 *     ?TabViewManager_RemovingViewFromTabGroup_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x18025E434 (-TabViewManager_RemovingViewFromTabGroup_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LoggingUtil::GetTabGroupSize(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v4 = 0;
  if ( a1 )
  {
    v2 = *a1;
    v5 = 0LL;
    if ( !(*(unsigned int (__fastcall **)(__int64 *, __int64 *))(v2 + 56))(a1, &v5) )
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 56LL))(v5, &v4);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v5);
    return v4;
  }
  return v1;
}
