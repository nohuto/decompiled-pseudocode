/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1c50d0de6451be37e53a34316762cc87___::Run @ 0x1802A7760
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1c50d0de6451be37e53a34316762cc87_::operator() @ 0x1802A5BC8 (_lambda_1c50d0de6451be37e53a34316762cc87_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1c50d0de6451be37e53a34316762cc87___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_1c50d0de6451be37e53a34316762cc87_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
