/*
 * XREFs of CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::OnAnimationCompleted @ 0x1803E1E90
 * Callers:
 *     <none>
 * Callees:
 *     CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_InvokeCallback @ 0x1803E4B40 (CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___--_InvokeCallback.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::OnAnimationCompleted(
        __int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 24))-- == 1 && *(_DWORD *)(a1 + 28) == 2 )
    return CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_InvokeCallback();
  return result;
}
