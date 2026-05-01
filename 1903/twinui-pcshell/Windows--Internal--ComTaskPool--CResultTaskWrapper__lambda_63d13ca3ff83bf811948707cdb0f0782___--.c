/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_63d13ca3ff83bf811948707cdb0f0782___::Run @ 0x18009B310
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_63d13ca3ff83bf811948707cdb0f0782_::operator() @ 0x18009AAD0 (_lambda_63d13ca3ff83bf811948707cdb0f0782_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_63d13ca3ff83bf811948707cdb0f0782___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_63d13ca3ff83bf811948707cdb0f0782_::operator()((_QWORD **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
