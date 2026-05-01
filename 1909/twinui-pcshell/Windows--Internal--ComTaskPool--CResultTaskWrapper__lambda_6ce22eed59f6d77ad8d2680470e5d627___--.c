/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6ce22eed59f6d77ad8d2680470e5d627___::Run @ 0x1800A8190
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6ce22eed59f6d77ad8d2680470e5d627_::operator() @ 0x1800A79E8 (_lambda_6ce22eed59f6d77ad8d2680470e5d627_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6ce22eed59f6d77ad8d2680470e5d627___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_6ce22eed59f6d77ad8d2680470e5d627_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
