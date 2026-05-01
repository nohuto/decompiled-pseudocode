/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___ @ 0x1801D6710
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___ @ 0x1801D6B18 (CreationThreadDispatcher--RunSync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___::CAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___ @ 0x1801D6C34 (CAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___--CAsyncCallbackWithLambda__.c)
 */

__int64 *__fastcall CreateAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330_(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 *result; // rax

  v4 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = CAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___::CAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___(
           v5,
           a2);
  result = a1;
  *a1 = v4;
  return result;
}
