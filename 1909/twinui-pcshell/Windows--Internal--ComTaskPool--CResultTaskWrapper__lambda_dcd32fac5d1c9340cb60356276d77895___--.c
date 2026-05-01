/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dcd32fac5d1c9340cb60356276d77895___::Run @ 0x1802C6EF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_dcd32fac5d1c9340cb60356276d77895_::operator() @ 0x1802C5930 (_lambda_dcd32fac5d1c9340cb60356276d77895_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dcd32fac5d1c9340cb60356276d77895___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_dcd32fac5d1c9340cb60356276d77895_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
