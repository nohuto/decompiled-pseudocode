/*
 * XREFs of ?Invoke@?$AsyncOperationCompletedHandler@_N@Foundation@Windows@@UE$AAAXPE$AAU?$IAsyncOperation@_N@23@W4AsyncStatus@23@@Z @ 0x1802ED4D0
 * Callers:
 *     ?__abi_Windows_Foundation_?$AsyncOperationCompletedHandler@_N___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@?$AsyncOperationCompletedHandler@_N@Foundation@Windows@@234@UE$AAAJPE$AAU?$IAsyncOperation@_N@34@W4AsyncStatus@34@@Z @ 0x1802EF530 (-__abi_Windows_Foundation_-$AsyncOperationCompletedHandler@_N___abi_IDelegate____abi_Invoke@-Q__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802B3920 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::Foundation::AsyncOperationCompletedHandler<bool>::Invoke(_QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &Windows::Foundation::AsyncOperationCompletedHandler<bool>::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}
