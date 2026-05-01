/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_444d9ef50161db05de1f3c243be563e0___::Run @ 0x180035DC0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_444d9ef50161db05de1f3c243be563e0_::operator() @ 0x180035DE4 (_lambda_444d9ef50161db05de1f3c243be563e0_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_444d9ef50161db05de1f3c243be563e0___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_444d9ef50161db05de1f3c243be563e0_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
