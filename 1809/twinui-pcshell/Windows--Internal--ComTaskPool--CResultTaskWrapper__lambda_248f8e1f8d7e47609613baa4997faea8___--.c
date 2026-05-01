/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_248f8e1f8d7e47609613baa4997faea8___::Run @ 0x1800473C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_248f8e1f8d7e47609613baa4997faea8_::operator() @ 0x1800474D8 (_lambda_248f8e1f8d7e47609613baa4997faea8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_248f8e1f8d7e47609613baa4997faea8___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_248f8e1f8d7e47609613baa4997faea8_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
