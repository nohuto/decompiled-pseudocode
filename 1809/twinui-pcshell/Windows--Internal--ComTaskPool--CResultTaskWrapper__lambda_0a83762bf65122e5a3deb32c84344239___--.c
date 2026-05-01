/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0a83762bf65122e5a3deb32c84344239___::Run @ 0x180028FE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0a83762bf65122e5a3deb32c84344239_::operator() @ 0x180028DF8 (_lambda_0a83762bf65122e5a3deb32c84344239_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0a83762bf65122e5a3deb32c84344239___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_0a83762bf65122e5a3deb32c84344239_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
