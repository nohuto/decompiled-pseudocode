/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_896972b7315e759534395e3cb0475917___::Run @ 0x180033AB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_896972b7315e759534395e3cb0475917_::operator() @ 0x180033AD4 (_lambda_896972b7315e759534395e3cb0475917_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_896972b7315e759534395e3cb0475917___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_896972b7315e759534395e3cb0475917_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
