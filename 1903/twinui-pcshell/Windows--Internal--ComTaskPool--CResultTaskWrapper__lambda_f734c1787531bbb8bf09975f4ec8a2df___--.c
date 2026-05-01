/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f734c1787531bbb8bf09975f4ec8a2df___::Run @ 0x180079D90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f734c1787531bbb8bf09975f4ec8a2df_::operator() @ 0x180079DB4 (_lambda_f734c1787531bbb8bf09975f4ec8a2df_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f734c1787531bbb8bf09975f4ec8a2df___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f734c1787531bbb8bf09975f4ec8a2df_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
