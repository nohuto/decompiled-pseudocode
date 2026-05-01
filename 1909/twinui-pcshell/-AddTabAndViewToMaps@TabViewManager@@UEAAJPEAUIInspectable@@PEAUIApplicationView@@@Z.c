/*
 * XREFs of ?AddTabAndViewToMaps@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z @ 0x18024B700
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0UIInspectable@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18024407C (--$-0UIInspectable@@@-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exceptio.c)
 *     ?AddTabAndViewToMapsLockHeld@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18024B7D8 (-AddTabAndViewToMapsLockHeld@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabViewManager::AddTabAndViewToMaps(
        RTL_SRWLOCK *this,
        struct IInspectable *a2,
        struct IApplicationView *a3)
{
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v8; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v9; // [rsp+58h] [rbp+20h]

  try
  {
    wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>(
      (__int64)&v8,
      a2);
    AcquireSRWLockExclusive(this + 163);
    v9 = this + 163;
    TabViewManager::AddTabAndViewToMapsLockHeld((TabViewManager *)&this[-18], v8, a3);
    if ( this != (RTL_SRWLOCK *)-1304LL )
      ReleaseSRWLockExclusive(this + 163);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC6C,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v5);
  }
  return result;
}
