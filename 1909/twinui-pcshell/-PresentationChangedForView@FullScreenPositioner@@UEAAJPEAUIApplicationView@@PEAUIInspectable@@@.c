/*
 * XREFs of ?PresentationChangedForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x18018D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ApplyPresentationChanges@FullScreenPositioner@@AEAAXPEAUIApplicationView@@PEAUIPresentationRequestedArgs@@@Z @ 0x18018B3F4 (-ApplyPresentationChanges@FullScreenPositioner@@AEAAXPEAUIApplicationView@@PEAUIPresentationRequ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::PresentationChangedForView(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  FullScreenPositioner *v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IPresentationRequestedArgs *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  try
  {
    if ( ((__int64 (__fastcall *)(struct IInspectable *))a3->lpVtbl->QueryInterface)(a3) >= 0 )
      FullScreenPositioner::ApplyPresentationChanges(v4, a2, v8);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x249,
                           (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                           v5);
  }
  return result;
}
