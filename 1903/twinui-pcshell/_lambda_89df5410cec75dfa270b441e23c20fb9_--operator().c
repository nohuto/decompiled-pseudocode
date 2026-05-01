/*
 * XREFs of _lambda_89df5410cec75dfa270b441e23c20fb9_::operator() @ 0x1802476E8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89df5410cec75dfa270b441e23c20fb9___::Run @ 0x180249C90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_89df5410cec75dfa270b441e23c20fb9___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?ConnectTitleBarToSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@Windows@@PEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@56@@Z @ 0x1802482C0 (-ConnectTitleBarToSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@.c)
 *     ?TryGetTitleBarForView@TitleBarController@@AEAA?AV?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x18024A134 (-TryGetTitleBarForView@TitleBarController@@AEAA-AV-$com_ptr_t@UITitleBar@Experience@Shell@Intern.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_89df5410cec75dfa270b441e23c20fb9_::operator()(__int64 a1)
{
  TitleBarController *v2; // rcx
  __int64 result; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Internal::Shell::Experience::ITitleBar *v6; // [rsp+40h] [rbp+8h] BYREF

  TitleBarController::TryGetTitleBarForView(*(_QWORD *)a1, &v6, *(_QWORD *)(a1 + 16));
  try
  {
    if ( v6 )
      TitleBarController::ConnectTitleBarToSharedVisual(
        v2,
        v6,
        *(struct IWin32ApplicationView **)(a1 + 16),
        (const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *)(a1 + 24));
    result = wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v6);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x108,
             (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
             v4);
  }
  return result;
}
