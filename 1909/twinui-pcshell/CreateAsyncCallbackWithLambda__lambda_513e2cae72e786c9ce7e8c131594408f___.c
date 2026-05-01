/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___ @ 0x18017249C
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___ @ 0x180173204 (CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___::CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___ @ 0x18017376C (CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___--CAsyncCallbackWithLambda__.c)
 */

__int64 *__fastcall CreateAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f_(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 *result; // rax

  v4 = 0LL;
  v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___::CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___(
           v5,
           a2);
  result = a1;
  *a1 = v4;
  return result;
}
