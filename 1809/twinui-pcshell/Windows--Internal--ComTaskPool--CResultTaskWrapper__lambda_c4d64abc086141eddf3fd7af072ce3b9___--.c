/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c4d64abc086141eddf3fd7af072ce3b9___::Run @ 0x180091380
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c4d64abc086141eddf3fd7af072ce3b9_::operator() @ 0x180090CDC (_lambda_c4d64abc086141eddf3fd7af072ce3b9_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c4d64abc086141eddf3fd7af072ce3b9___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_c4d64abc086141eddf3fd7af072ce3b9_::operator()((_QWORD **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
