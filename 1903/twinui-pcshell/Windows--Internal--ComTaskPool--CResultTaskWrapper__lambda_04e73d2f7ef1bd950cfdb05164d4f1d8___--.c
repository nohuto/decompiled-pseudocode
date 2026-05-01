/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_04e73d2f7ef1bd950cfdb05164d4f1d8___::Run @ 0x1802AC910
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_04e73d2f7ef1bd950cfdb05164d4f1d8_::operator() @ 0x1802AB7E4 (_lambda_04e73d2f7ef1bd950cfdb05164d4f1d8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_04e73d2f7ef1bd950cfdb05164d4f1d8___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_04e73d2f7ef1bd950cfdb05164d4f1d8_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
