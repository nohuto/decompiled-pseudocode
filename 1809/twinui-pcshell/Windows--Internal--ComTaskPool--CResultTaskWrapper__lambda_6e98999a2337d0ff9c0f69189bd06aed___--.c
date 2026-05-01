/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6e98999a2337d0ff9c0f69189bd06aed___::Run @ 0x180250BA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6e98999a2337d0ff9c0f69189bd06aed_::operator() @ 0x18024F6B8 (_lambda_6e98999a2337d0ff9c0f69189bd06aed_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6e98999a2337d0ff9c0f69189bd06aed___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_6e98999a2337d0ff9c0f69189bd06aed_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
