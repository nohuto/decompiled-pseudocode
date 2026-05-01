/*
 * XREFs of ?TryToggleTitleBarFocusForForegroundWindow@TitleBarController@@UEAAJXZ @ 0x1801F9390
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowEventDispatcherInternal@@@Z @ 0x1800FB2D4 (--4-$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAU.c)
 *     ?SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationView@@_N@Z @ 0x1801F8E00 (-SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationVi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TitleBarController::TryToggleTitleBarFocusForForegroundWindow(TitleBarController *this)
{
  HWND ForegroundWindow; // rsi
  int v3; // eax
  __int64 v4; // rbx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v8; // [rsp+48h] [rbp+10h] BYREF

  ForegroundWindow = GetForegroundWindow();
  try
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 104LL))(*((_QWORD *)this + 17));
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        300LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v3);
    v8 = 0LL;
    v4 = *((_QWORD *)this + 15);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v8);
    if ( (*(int (__fastcall **)(__int64, HWND, struct IApplicationView **))(*(_QWORD *)v4 + 48LL))(
           v4,
           ForegroundWindow,
           &v8) >= 0 )
      TitleBarController::SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate(
        (TitleBarController *)((char *)this - 8),
        v8,
        1);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x148,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                           v5);
  }
  return result;
}
