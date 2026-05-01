/*
 * XREFs of _lambda_30f657ed8e28792729df8e2fc6b34518_::_lambda_30f657ed8e28792729df8e2fc6b34518__0 @ 0x18027D580
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_30f657ed8e28792729df8e2fc6b34518___ @ 0x18027CB84 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_30f657ed8e28792729df8e2fc6b34518.c)
 *     ?MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z @ 0x180280150 (-MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 *__fastcall lambda_30f657ed8e28792729df8e2fc6b34518_::_lambda_30f657ed8e28792729df8e2fc6b34518__0(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = __abi_winrt_ptr_ctor(*a2);
  a1[1] = a2[1];
  return a1;
}
