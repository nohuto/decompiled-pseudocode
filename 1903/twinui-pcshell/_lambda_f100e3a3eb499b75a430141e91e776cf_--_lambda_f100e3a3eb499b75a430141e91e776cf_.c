/*
 * XREFs of _lambda_f100e3a3eb499b75a430141e91e776cf_::_lambda_f100e3a3eb499b75a430141e91e776cf_ @ 0x1802EA5C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff___::CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff_____lambda_521142a9b3d1e74a384fab04623ad1ff___ @ 0x1802EA308 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff___--CTaskW.c)
 *     CreateAsyncCallbackWithLambda__lambda_e5f9824fe3ffbbdd694ec0ced6f5fdc3___ @ 0x1802EA370 (CreateAsyncCallbackWithLambda__lambda_e5f9824fe3ffbbdd694ec0ced6f5fdc3___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf___ @ 0x1802EA3F0 (CreationThreadDispatcher--RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf___.c)
 *     CreationThreadDispatcher::RunSync__lambda_f100e3a3eb499b75a430141e91e776cf___ @ 0x1802EA4C4 (CreationThreadDispatcher--RunSync__lambda_f100e3a3eb499b75a430141e91e776cf___.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 *__fastcall lambda_f100e3a3eb499b75a430141e91e776cf_::_lambda_f100e3a3eb499b75a430141e91e776cf_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = __abi_winrt_ptr_ctor(*a2);
  a1[1] = __abi_winrt_ptr_ctor(a2[1]);
  a1[2] = __abi_winrt_ptr_ctor(a2[2]);
  return a1;
}
