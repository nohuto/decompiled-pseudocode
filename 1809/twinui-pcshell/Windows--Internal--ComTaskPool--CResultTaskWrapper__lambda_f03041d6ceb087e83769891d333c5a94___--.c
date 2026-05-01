/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f03041d6ceb087e83769891d333c5a94___::Run @ 0x18024AD20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f03041d6ceb087e83769891d333c5a94_::operator() @ 0x180249B60 (_lambda_f03041d6ceb087e83769891d333c5a94_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f03041d6ceb087e83769891d333c5a94___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f03041d6ceb087e83769891d333c5a94_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
