/*
 * XREFs of ?GetViewForTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAPEAUIApplicationView@@@Z @ 0x1801DD9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0UIInspectable@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1801CDB98 (--$-0UIInspectable@@@-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exceptio.c)
 *     ??$TabViewManager_ViewForTabNotFound@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801D15D4 (--$TabViewManager_ViewForTabNotFound@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@TabVi.c)
 *     ?GetViewForTabLockHeld@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DDAE0 (-GetViewForTabLockHeld@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_poli.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabViewManager::GetViewForTab(
        RTL_SRWLOCK *this,
        struct IInspectable *a2,
        struct IApplicationView **a3)
{
  struct IApplicationView **ViewForTabLockHeld; // rax
  struct IApplicationView *v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned int v8; // ebx
  const char *v9; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v12; // [rsp+58h] [rbp+10h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v13; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v14; // [rsp+68h] [rbp+20h]

  *a3 = 0LL;
  try
  {
    wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>(
      (__int64)&v12,
      a2);
    AcquireSRWLockShared(this + 167);
    v14 = this + 167;
    ViewForTabLockHeld = (struct IApplicationView **)TabViewManager::GetViewForTabLockHeld(&this[-17], &v13, v12);
    v6 = *ViewForTabLockHeld;
    *ViewForTabLockHeld = 0LL;
    *a3 = v6;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v13);
    if ( !*a3 )
    {
      v13 = v12;
      TabViewManagerTraceLogging::TabViewManager_ViewForTabNotFound<Windows::Internal::ComposableShell::Tabs::IShellTab *>(
        &v13,
        v7);
    }
    v8 = *a3 == 0LL ? 0x80070490 : 0;
    if ( this != (RTL_SRWLOCK *)-1336LL )
      ReleaseSRWLockShared(this + 167);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v12);
    result = v8;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x401,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v9);
  }
  return result;
}
