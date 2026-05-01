/*
 * XREFs of CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::OnBeginBatchUpdate @ 0x1803E1EE0
 * Callers:
 *     <none>
 * Callees:
 *     CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_InitializeTimer @ 0x1803E4A28 (CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___--_InitializeTimer.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::OnBeginBatchUpdate(
        __int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 40);
  if ( !v1 )
  {
    *(_DWORD *)(a1 + 28) = 1;
    CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_InitializeTimer();
    v1 = *(_DWORD *)(a1 + 40);
  }
  result = (unsigned int)(v1 + 1);
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
