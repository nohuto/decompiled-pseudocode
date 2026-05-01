/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_175779e8aec8e508ceed20f7fb25cadd___::Run @ 0x18001EEC0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_175779e8aec8e508ceed20f7fb25cadd_::operator() @ 0x18001EEE4 (_lambda_175779e8aec8e508ceed20f7fb25cadd_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_175779e8aec8e508ceed20f7fb25cadd___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_175779e8aec8e508ceed20f7fb25cadd_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
