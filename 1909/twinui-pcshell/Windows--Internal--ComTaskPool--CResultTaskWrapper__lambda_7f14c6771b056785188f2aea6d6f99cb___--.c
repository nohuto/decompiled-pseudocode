/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7f14c6771b056785188f2aea6d6f99cb___::Run @ 0x180047190
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7f14c6771b056785188f2aea6d6f99cb_::operator() @ 0x1800471B4 (_lambda_7f14c6771b056785188f2aea6d6f99cb_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7f14c6771b056785188f2aea6d6f99cb___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_7f14c6771b056785188f2aea6d6f99cb_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
