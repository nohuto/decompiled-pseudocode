/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_904c37ef293efce91a72f5cf76f69278___::Run @ 0x180047D00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_904c37ef293efce91a72f5cf76f69278_::operator() @ 0x180047D24 (_lambda_904c37ef293efce91a72f5cf76f69278_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_904c37ef293efce91a72f5cf76f69278___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_904c37ef293efce91a72f5cf76f69278_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
