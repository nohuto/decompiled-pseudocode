/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnAnimationCompleted @ 0x18035CAB0
 * Callers:
 *     <none>
 * Callees:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x18035F61C (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_InvokeCallback.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnAnimationCompleted(
        __int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 24))-- == 1 && *(_DWORD *)(a1 + 28) == 2 )
    return CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback();
  return result;
}
