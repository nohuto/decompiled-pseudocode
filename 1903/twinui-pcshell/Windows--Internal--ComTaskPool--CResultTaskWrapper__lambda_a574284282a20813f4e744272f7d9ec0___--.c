/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a574284282a20813f4e744272f7d9ec0___::Run @ 0x1802A78D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a574284282a20813f4e744272f7d9ec0_::operator() @ 0x1802A60B4 (_lambda_a574284282a20813f4e744272f7d9ec0_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a574284282a20813f4e744272f7d9ec0___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a574284282a20813f4e744272f7d9ec0_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
