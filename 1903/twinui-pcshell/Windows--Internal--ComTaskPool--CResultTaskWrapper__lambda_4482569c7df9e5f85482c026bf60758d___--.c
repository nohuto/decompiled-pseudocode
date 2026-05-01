/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4482569c7df9e5f85482c026bf60758d___::Run @ 0x180078590
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4482569c7df9e5f85482c026bf60758d_::operator() @ 0x1800785B4 (_lambda_4482569c7df9e5f85482c026bf60758d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4482569c7df9e5f85482c026bf60758d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_4482569c7df9e5f85482c026bf60758d_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
