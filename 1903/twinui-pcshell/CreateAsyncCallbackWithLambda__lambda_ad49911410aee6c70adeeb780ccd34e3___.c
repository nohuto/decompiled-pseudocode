/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___ @ 0x180153284
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x180154120 (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___::CAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___ @ 0x180154568 (CAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___--CAsyncCallbackWithLambda__.c)
 */

__int64 *__fastcall CreateAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3_(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 *result; // rax

  v4 = 0LL;
  v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = CAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___::CAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___(
           v5,
           a2);
  result = a1;
  *a1 = v4;
  return result;
}
