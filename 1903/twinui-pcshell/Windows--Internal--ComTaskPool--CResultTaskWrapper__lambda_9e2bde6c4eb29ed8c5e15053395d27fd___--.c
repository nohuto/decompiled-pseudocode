/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9e2bde6c4eb29ed8c5e15053395d27fd___::Run @ 0x1802A11E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_9e2bde6c4eb29ed8c5e15053395d27fd_::operator() @ 0x18029FB04 (_lambda_9e2bde6c4eb29ed8c5e15053395d27fd_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9e2bde6c4eb29ed8c5e15053395d27fd___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_9e2bde6c4eb29ed8c5e15053395d27fd_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
