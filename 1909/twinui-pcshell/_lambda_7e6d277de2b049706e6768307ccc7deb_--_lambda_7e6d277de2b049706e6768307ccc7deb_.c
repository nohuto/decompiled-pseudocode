/*
 * XREFs of _lambda_7e6d277de2b049706e6768307ccc7deb_::_lambda_7e6d277de2b049706e6768307ccc7deb_ @ 0x1802F6324
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb___ @ 0x1802F5A98 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_::__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_ @ 0x1802F65C8 (Platform--Details--__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_--__abi_F.c)
 *     ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x1802FAE20 (-SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802D36D8 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_1802D36D8.c)
 */

__int64 *__fastcall lambda_7e6d277de2b049706e6768307ccc7deb_::_lambda_7e6d277de2b049706e6768307ccc7deb_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = __abi_winrt_ptr_ctor(*a2);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 1),
    (__int64)(a2 + 1));
  a1[1] = (__int64)&XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::`vftable';
  return a1;
}
