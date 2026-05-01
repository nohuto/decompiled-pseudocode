/*
 * XREFs of ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x1802D9A80
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802B042C (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802B2A84 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802B41B8 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_1802B41B8.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x1802BBDC8 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x1802D6110 (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_adedda421da4a00589298a86f7993fb7___ @ 0x1802D66D8 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_adedda421da4a00589298a86f7993fb7.c)
 *     _lambda_adedda421da4a00589298a86f7993fb7_::_lambda_adedda421da4a00589298a86f7993fb7_ @ 0x1802D6E94 (_lambda_adedda421da4a00589298a86f7993fb7_--_lambda_adedda421da4a00589298a86f7993fb7_.c)
 *     ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802D7A5C (--1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1802DA6D0 (-StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall XamlAltTabViewHost::Navigate(XamlAltTabViewHost *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  int v5; // r12d
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  const char *v13; // r9
  __int64 result; // rax
  _QWORD *v15; // [rsp+28h] [rbp-440h]
  _BYTE v16[328]; // [rsp+58h] [rbp-410h] BYREF
  int v17; // [rsp+1A0h] [rbp-2C8h] BYREF
  __int64 v18; // [rsp+1A8h] [rbp-2C0h]
  _QWORD v19[40]; // [rsp+1B0h] [rbp-2B8h] BYREF
  _QWORD v20[40]; // [rsp+2F0h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+468h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  try
  {
    v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
    v6 = *((_QWORD *)this + 21);
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v20,
      (__int64)"NavigateAltTab");
    v20[0] = &XamlSwitcherTelemetry::NavigateAltTab::`vftable';
    XamlSwitcherTelemetry::NavigateAltTab::StartActivity((XamlSwitcherTelemetry::NavigateAltTab *)v20, v6 != 0);
    v7 = *((_QWORD *)this + 21);
    if ( v7 && (unsigned int)(a2 - 5) <= 1 )
    {
      v8 = __abi_winrt_ptr_ctor(v7);
      v17 = a2;
      v18 = __abi_winrt_ptr_ctor(v8);
      wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v19,
        (__int64)v20);
      v19[0] = &XamlSwitcherTelemetry::NavigateAltTab::`vftable';
      v15 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
      v9 = lambda_adedda421da4a00589298a86f7993fb7_::_lambda_adedda421da4a00589298a86f7993fb7_(
             (__int64)v16,
             (__int64)&v17);
      v10 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_adedda421da4a00589298a86f7993fb7___(v15, v9);
      v11 = Windows::UI::Xaml::IWindow::Dispatcher::get(*((_QWORD *)this + 21));
      v12 = Windows::UI::Core::ICoreDispatcher::RunAsync(v11, 0LL, (__int64)v10);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v10 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab((XamlSwitcherTelemetry::NavigateAltTab *)v19);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    else
    {
      wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v20);
    }
    XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab((XamlSwitcherTelemetry::NavigateAltTab *)v20);
    if ( v5 >= 0 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x131,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
                           v13);
  }
  return result;
}
