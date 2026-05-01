/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a2e6e8c7c47ff621075ed7caffbf1187___::Run @ 0x180070600
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a2e6e8c7c47ff621075ed7caffbf1187_::operator() @ 0x180070624 (_lambda_a2e6e8c7c47ff621075ed7caffbf1187_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a2e6e8c7c47ff621075ed7caffbf1187___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a2e6e8c7c47ff621075ed7caffbf1187_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
