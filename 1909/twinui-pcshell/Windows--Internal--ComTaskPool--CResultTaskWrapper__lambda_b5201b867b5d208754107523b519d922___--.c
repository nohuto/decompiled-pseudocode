/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b5201b867b5d208754107523b519d922___::Run @ 0x180076720
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b5201b867b5d208754107523b519d922_::operator() @ 0x180076744 (_lambda_b5201b867b5d208754107523b519d922_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b5201b867b5d208754107523b519d922___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_b5201b867b5d208754107523b519d922_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
