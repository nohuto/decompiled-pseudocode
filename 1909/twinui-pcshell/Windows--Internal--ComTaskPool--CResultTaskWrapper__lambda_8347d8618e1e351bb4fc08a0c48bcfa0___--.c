/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8347d8618e1e351bb4fc08a0c48bcfa0___::Run @ 0x1802C6D20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8347d8618e1e351bb4fc08a0c48bcfa0_::operator() @ 0x1802C5480 (_lambda_8347d8618e1e351bb4fc08a0c48bcfa0_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8347d8618e1e351bb4fc08a0c48bcfa0___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_8347d8618e1e351bb4fc08a0c48bcfa0_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
