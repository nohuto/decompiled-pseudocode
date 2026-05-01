/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cb9480a65b67d34783b381c09999efdd___::Run @ 0x180020AF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_cb9480a65b67d34783b381c09999efdd_::operator() @ 0x180020B14 (_lambda_cb9480a65b67d34783b381c09999efdd_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cb9480a65b67d34783b381c09999efdd___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_cb9480a65b67d34783b381c09999efdd_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
