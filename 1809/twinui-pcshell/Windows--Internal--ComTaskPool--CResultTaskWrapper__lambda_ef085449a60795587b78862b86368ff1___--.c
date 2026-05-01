/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ef085449a60795587b78862b86368ff1___::Run @ 0x18024ACF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ef085449a60795587b78862b86368ff1_::operator() @ 0x180249A60 (_lambda_ef085449a60795587b78862b86368ff1_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ef085449a60795587b78862b86368ff1___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_ef085449a60795587b78862b86368ff1_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
