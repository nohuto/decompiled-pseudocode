/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_54354a68eccf76e1b3da83bfdc9f9a3a___::Run @ 0x1802C6CF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_54354a68eccf76e1b3da83bfdc9f9a3a_::operator() @ 0x1802C539C (_lambda_54354a68eccf76e1b3da83bfdc9f9a3a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_54354a68eccf76e1b3da83bfdc9f9a3a___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_54354a68eccf76e1b3da83bfdc9f9a3a_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
