/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_70dfa9c1db30439d8f324967aa0bddeb___::Run @ 0x18006C750
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_70dfa9c1db30439d8f324967aa0bddeb_::operator() @ 0x18006C774 (_lambda_70dfa9c1db30439d8f324967aa0bddeb_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_70dfa9c1db30439d8f324967aa0bddeb___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_70dfa9c1db30439d8f324967aa0bddeb_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
