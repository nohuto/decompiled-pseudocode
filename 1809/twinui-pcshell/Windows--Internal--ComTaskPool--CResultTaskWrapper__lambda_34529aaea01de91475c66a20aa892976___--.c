/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_34529aaea01de91475c66a20aa892976___::Run @ 0x1800750F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_34529aaea01de91475c66a20aa892976_::operator() @ 0x180075114 (_lambda_34529aaea01de91475c66a20aa892976_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_34529aaea01de91475c66a20aa892976___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_34529aaea01de91475c66a20aa892976_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
