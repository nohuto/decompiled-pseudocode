/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_53fed4f660adfa7f8b558332501fe89f___ @ 0x180129B3C
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x18012AB5C (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_53fed4f660adfa7f8b558332501fe89f___::CAsyncCallbackWithLambda__lambda_53fed4f660adfa7f8b558332501fe89f___ @ 0x18012AF44 (CAsyncCallbackWithLambda__lambda_53fed4f660adfa7f8b558332501fe89f___--CAsyncCallbackWithLambda__.c)
 */

__int64 *__fastcall CreateAsyncCallbackWithLambda__lambda_53fed4f660adfa7f8b558332501fe89f_(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 *result; // rax

  v4 = 0LL;
  v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = CAsyncCallbackWithLambda__lambda_53fed4f660adfa7f8b558332501fe89f___::CAsyncCallbackWithLambda__lambda_53fed4f660adfa7f8b558332501fe89f___(
           v5,
           a2);
  result = a1;
  *a1 = v4;
  return result;
}
