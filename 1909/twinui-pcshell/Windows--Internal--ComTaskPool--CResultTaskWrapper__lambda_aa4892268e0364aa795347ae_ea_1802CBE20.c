/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_aa4892268e0364aa795347ae8a8bf43d___::Run @ 0x1802CBE20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_aa4892268e0364aa795347ae8a8bf43d_::operator() @ 0x1802CB018 (_lambda_aa4892268e0364aa795347ae8a8bf43d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_aa4892268e0364aa795347ae8a8bf43d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_aa4892268e0364aa795347ae8a8bf43d_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
