/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_53a04da55905c8211e57e0dfa928362b___::Run @ 0x18024ABE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_53a04da55905c8211e57e0dfa928362b_::operator() @ 0x18024912C (_lambda_53a04da55905c8211e57e0dfa928362b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_53a04da55905c8211e57e0dfa928362b___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_53a04da55905c8211e57e0dfa928362b_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
