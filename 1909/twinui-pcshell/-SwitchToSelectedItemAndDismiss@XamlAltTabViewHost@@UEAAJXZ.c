/*
 * XREFs of ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x1802FAE20
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802CF90C (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802D1FA4 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802D36D8 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_1802D36D8.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x1802DB2F8 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x1802F5600 (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb___ @ 0x1802F5A98 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb.c)
 *     _lambda_7e6d277de2b049706e6768307ccc7deb_::_lambda_7e6d277de2b049706e6768307ccc7deb_ @ 0x1802F6324 (_lambda_7e6d277de2b049706e6768307ccc7deb_--_lambda_7e6d277de2b049706e6768307ccc7deb_.c)
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802F6FA4 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1802F9DA0 (-StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall XamlAltTabViewHost::SwitchToSelectedItemAndDismiss(XamlAltTabViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  int v3; // r12d
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 *v7; // rdx
  _QWORD *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  const char *v11; // r9
  __int64 result; // rax
  _QWORD *v13; // [rsp+28h] [rbp-420h]
  __int64 v14[41]; // [rsp+58h] [rbp-3F0h] BYREF
  _QWORD v15[40]; // [rsp+1A0h] [rbp-2A8h] BYREF
  __int64 v16; // [rsp+2E0h] [rbp-168h] BYREF
  _QWORD v17[39]; // [rsp+2E8h] [rbp-160h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+448h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  try
  {
    v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
    v4 = *((_QWORD *)this + 21);
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v15,
      (__int64)"SwitchToSelectedItemAndDismiss");
    v15[0] = &XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::`vftable';
    XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::StartActivity(
      (XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)v15,
      v4 != 0);
    v5 = *((_QWORD *)this + 21);
    if ( v5 )
    {
      v6 = __abi_winrt_ptr_ctor(v5);
      v16 = __abi_winrt_ptr_ctor(v6);
      wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v17,
        (__int64)v15);
      v17[0] = &XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::`vftable';
      v13 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
      v7 = lambda_7e6d277de2b049706e6768307ccc7deb_::_lambda_7e6d277de2b049706e6768307ccc7deb_(v14, &v16);
      v8 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb___(
             v13,
             (_QWORD **)v7);
      v9 = Windows::UI::Xaml::IWindow::Dispatcher::get(*((_QWORD *)this + 21));
      v10 = Windows::UI::Core::ICoreDispatcher::RunAsync(v9, 0LL, (__int64)v8);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( v8 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)v17);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else
    {
      wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v15);
    }
    XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)v15);
    if ( v3 >= 0 )
      LeaveCriticalSection(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x151,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
                           v11);
  }
  return result;
}
