/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ad48e2a9f03e6f19cd0dc5a52d00565f___::Run @ 0x1800689F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ad48e2a9f03e6f19cd0dc5a52d00565f_::operator() @ 0x180068A14 (_lambda_ad48e2a9f03e6f19cd0dc5a52d00565f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ad48e2a9f03e6f19cd0dc5a52d00565f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_ad48e2a9f03e6f19cd0dc5a52d00565f_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
