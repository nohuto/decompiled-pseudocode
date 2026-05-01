/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_63a03028b23601c3eeae25fd2827bd0e___::Run @ 0x18007FD60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_63a03028b23601c3eeae25fd2827bd0e_::operator() @ 0x18007FD84 (_lambda_63a03028b23601c3eeae25fd2827bd0e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_63a03028b23601c3eeae25fd2827bd0e___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_63a03028b23601c3eeae25fd2827bd0e_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
