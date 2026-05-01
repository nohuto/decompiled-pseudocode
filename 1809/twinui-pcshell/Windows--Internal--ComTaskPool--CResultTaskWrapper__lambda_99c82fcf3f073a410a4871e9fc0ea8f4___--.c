/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_99c82fcf3f073a410a4871e9fc0ea8f4___::Run @ 0x180255A70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_99c82fcf3f073a410a4871e9fc0ea8f4_::operator() @ 0x180254B94 (_lambda_99c82fcf3f073a410a4871e9fc0ea8f4_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_99c82fcf3f073a410a4871e9fc0ea8f4___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_99c82fcf3f073a410a4871e9fc0ea8f4_::operator()((_QWORD *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
