/*
 * XREFs of _lambda_30f657ed8e28792729df8e2fc6b34518_::_lambda_30f657ed8e28792729df8e2fc6b34518_ @ 0x18027D548
 * Callers:
 *     ?MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z @ 0x180280150 (-MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 *__fastcall lambda_30f657ed8e28792729df8e2fc6b34518_::_lambda_30f657ed8e28792729df8e2fc6b34518_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *result; // rax

  *a1 = __abi_winrt_ptr_ctor(*a2);
  result = a1;
  a1[1] = *a3;
  return result;
}
