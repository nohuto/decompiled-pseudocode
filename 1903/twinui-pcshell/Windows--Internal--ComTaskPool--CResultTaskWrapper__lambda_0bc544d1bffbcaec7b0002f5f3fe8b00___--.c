/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0bc544d1bffbcaec7b0002f5f3fe8b00___::Run @ 0x1802A10A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0bc544d1bffbcaec7b0002f5f3fe8b00_::operator() @ 0x18029EFDC (_lambda_0bc544d1bffbcaec7b0002f5f3fe8b00_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0bc544d1bffbcaec7b0002f5f3fe8b00___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_0bc544d1bffbcaec7b0002f5f3fe8b00_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
