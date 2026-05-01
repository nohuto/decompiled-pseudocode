/*
 * XREFs of _lambda_bb329e9869818a924204dbfd8ac58224_::_lambda_bb329e9869818a924204dbfd8ac58224_ @ 0x18027D6E0
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bb329e9869818a924204dbfd8ac58224___ @ 0x18027CE24 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_bb329e9869818a924204dbfd8ac58224.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_::__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_ @ 0x18027D9F8 (Platform--Details--__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_--__abi_F.c)
 *     ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x180280340 (-Navigate@XamlAltTabViewHost@@UEAAJI@Z.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18027D744 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@.c)
 */

__int64 __fastcall lambda_bb329e9869818a924204dbfd8ac58224_::_lambda_bb329e9869818a924204dbfd8ac58224_(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 8));
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = &XamlSwitcherTelemetry::NavigateAltTab::`vftable';
  return a1;
}
