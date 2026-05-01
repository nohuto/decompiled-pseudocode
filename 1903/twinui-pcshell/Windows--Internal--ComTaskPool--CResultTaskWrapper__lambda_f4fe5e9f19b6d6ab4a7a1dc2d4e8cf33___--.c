/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f4fe5e9f19b6d6ab4a7a1dc2d4e8cf33___::Run @ 0x1802A7A20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f4fe5e9f19b6d6ab4a7a1dc2d4e8cf33_::operator() @ 0x1802A6810 (_lambda_f4fe5e9f19b6d6ab4a7a1dc2d4e8cf33_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f4fe5e9f19b6d6ab4a7a1dc2d4e8cf33___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f4fe5e9f19b6d6ab4a7a1dc2d4e8cf33_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
