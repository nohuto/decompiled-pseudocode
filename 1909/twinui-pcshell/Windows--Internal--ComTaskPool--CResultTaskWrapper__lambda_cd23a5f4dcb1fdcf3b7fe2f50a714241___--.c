/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cd23a5f4dcb1fdcf3b7fe2f50a714241___::Run @ 0x1800A81C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_cd23a5f4dcb1fdcf3b7fe2f50a714241_::operator() @ 0x1800A7B30 (_lambda_cd23a5f4dcb1fdcf3b7fe2f50a714241_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cd23a5f4dcb1fdcf3b7fe2f50a714241___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_cd23a5f4dcb1fdcf3b7fe2f50a714241_::operator()((_QWORD **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
