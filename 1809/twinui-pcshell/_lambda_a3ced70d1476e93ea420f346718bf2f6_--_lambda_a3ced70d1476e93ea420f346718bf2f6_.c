/*
 * XREFs of _lambda_a3ced70d1476e93ea420f346718bf2f6_::_lambda_a3ced70d1476e93ea420f346718bf2f6_ @ 0x18027D680
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_a3ced70d1476e93ea420f346718bf2f6___ @ 0x18027CCF4 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_a3ced70d1476e93ea420f346718bf2f6.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_a3ced70d1476e93ea420f346718bf2f6__void_::__abi_FunctorCapture__lambda_a3ced70d1476e93ea420f346718bf2f6__void_ @ 0x18027D994 (Platform--Details--__abi_FunctorCapture__lambda_a3ced70d1476e93ea420f346718bf2f6__void_--__abi_F.c)
 *     ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x1802822C0 (-SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18027D744 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@.c)
 */

__int64 *__fastcall lambda_a3ced70d1476e93ea420f346718bf2f6_::_lambda_a3ced70d1476e93ea420f346718bf2f6_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = __abi_winrt_ptr_ctor(*a2);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 1));
  a1[1] = (__int64)&XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::`vftable';
  return a1;
}
