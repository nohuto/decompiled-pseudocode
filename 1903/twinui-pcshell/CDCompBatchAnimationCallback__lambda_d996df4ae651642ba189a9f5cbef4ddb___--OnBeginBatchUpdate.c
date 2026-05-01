/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnBeginBatchUpdate @ 0x1803C2910
 * Callers:
 *     <none>
 * Callees:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InitializeTimer @ 0x1803C53AC (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_InitializeTimer.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnBeginBatchUpdate(
        __int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 40);
  if ( !v1 )
  {
    *(_DWORD *)(a1 + 28) = 1;
    CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InitializeTimer();
    v1 = *(_DWORD *)(a1 + 40);
  }
  result = (unsigned int)(v1 + 1);
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
