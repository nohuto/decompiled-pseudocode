/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_77f9f186b9cfe4dccc7ff2a084ca1471___::Run @ 0x1801F8D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?TryGetTitleBarForView@TitleBarController@@AEAA?AV?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x1801F92F4 (-TryGetTitleBarForView@TitleBarController@@AEAA-AV-$com_ptr_t@UITitleBar@Experience@Shell@Intern.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_77f9f186b9cfe4dccc7ff2a084ca1471___::Run(
        __int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  TitleBarController::TryGetTitleBarForView(*(_QWORD *)(a1 + 16), &v6, *(_QWORD *)(a1 + 32));
  if ( v6 )
  {
    LOBYTE(v2) = *(_BYTE *)(a1 + 40);
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 200LL))(v6, v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE2,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v3);
  }
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v6);
}
