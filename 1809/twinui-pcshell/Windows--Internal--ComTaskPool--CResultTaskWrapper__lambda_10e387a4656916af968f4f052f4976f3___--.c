/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_10e387a4656916af968f4f052f4976f3___::Run @ 0x18024AB10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_10e387a4656916af968f4f052f4976f3_::operator() @ 0x180248B88 (_lambda_10e387a4656916af968f4f052f4976f3_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_10e387a4656916af968f4f052f4976f3___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_10e387a4656916af968f4f052f4976f3_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
