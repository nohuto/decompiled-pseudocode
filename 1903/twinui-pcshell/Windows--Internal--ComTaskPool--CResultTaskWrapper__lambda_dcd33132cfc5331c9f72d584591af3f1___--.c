/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dcd33132cfc5331c9f72d584591af3f1___::Run @ 0x1802A79F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_dcd33132cfc5331c9f72d584591af3f1_::operator() @ 0x1802A6738 (_lambda_dcd33132cfc5331c9f72d584591af3f1_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dcd33132cfc5331c9f72d584591af3f1___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_dcd33132cfc5331c9f72d584591af3f1_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
