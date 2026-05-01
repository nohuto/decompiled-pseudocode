/*
 * XREFs of _lambda_79e274840b2675fb7588b73bdd59c211_::operator() @ 0x1801F6C58
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79e274840b2675fb7588b73bdd59c211___::Run @ 0x1801F8DF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_79e274840b2675fb7588b73bdd59c211___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?TryGetTitleBarForView@TitleBarController@@AEAA?AV?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x1801F92F4 (-TryGetTitleBarForView@TitleBarController@@AEAA-AV-$com_ptr_t@UITitleBar@Experience@Shell@Intern.c)
 *     ?UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Experience@Shell@Internal@Windows@@@Z @ 0x1801F9698 (-UpdateWin32TitleBarSize@TitleBarController@@AEAAXPEAUIWin32ApplicationView@@PEAUITitleBar@Exper.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_79e274840b2675fb7588b73bdd59c211_::operator()(__int64 a1)
{
  TitleBarController *v2; // rcx
  struct Windows::Internal::Shell::Experience::ITitleBar *v3; // rbx
  __int64 v4; // rdx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Internal::Shell::Experience::ITitleBar *v9; // [rsp+40h] [rbp+8h] BYREF

  TitleBarController::TryGetTitleBarForView(*(_QWORD *)a1, &v9, *(_QWORD *)(a1 + 16));
  try
  {
    v3 = v9;
    if ( v9 )
    {
      TitleBarController::UpdateWin32TitleBarSize(v2, *(struct IWin32ApplicationView **)(a1 + 16), v9);
      LOBYTE(v4) = *(_DWORD *)(a1 + 24) == 1;
      v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::ITitleBar *, __int64))(*(_QWORD *)v3 + 184LL))(
             v3,
             v4);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          167LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
          (const char *)(unsigned int)v5);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAB,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                           v6);
  }
  return result;
}
