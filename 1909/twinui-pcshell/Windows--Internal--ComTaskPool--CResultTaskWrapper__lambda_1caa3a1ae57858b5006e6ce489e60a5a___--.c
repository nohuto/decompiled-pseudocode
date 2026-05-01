/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1caa3a1ae57858b5006e6ce489e60a5a___::Run @ 0x18001DF60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1caa3a1ae57858b5006e6ce489e60a5a_::operator() @ 0x18001DF84 (_lambda_1caa3a1ae57858b5006e6ce489e60a5a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1caa3a1ae57858b5006e6ce489e60a5a___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_1caa3a1ae57858b5006e6ce489e60a5a_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
