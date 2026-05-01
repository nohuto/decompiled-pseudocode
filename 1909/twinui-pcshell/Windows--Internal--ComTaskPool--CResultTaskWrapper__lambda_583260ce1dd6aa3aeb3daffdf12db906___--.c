/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_583260ce1dd6aa3aeb3daffdf12db906___::Run @ 0x18001BC10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_583260ce1dd6aa3aeb3daffdf12db906_::operator() @ 0x18001BC34 (_lambda_583260ce1dd6aa3aeb3daffdf12db906_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_583260ce1dd6aa3aeb3daffdf12db906___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_583260ce1dd6aa3aeb3daffdf12db906_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
