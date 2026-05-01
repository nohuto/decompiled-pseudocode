/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9797597bf431d4ad7279a02679ece25d___::Run @ 0x180250BD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_9797597bf431d4ad7279a02679ece25d_::operator() @ 0x18024F780 (_lambda_9797597bf431d4ad7279a02679ece25d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9797597bf431d4ad7279a02679ece25d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_9797597bf431d4ad7279a02679ece25d_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
