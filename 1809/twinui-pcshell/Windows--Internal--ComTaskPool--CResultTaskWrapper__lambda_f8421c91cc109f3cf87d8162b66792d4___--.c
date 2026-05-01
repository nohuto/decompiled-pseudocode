/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f8421c91cc109f3cf87d8162b66792d4___::Run @ 0x180250D20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f8421c91cc109f3cf87d8162b66792d4_::operator() @ 0x18024FA80 (_lambda_f8421c91cc109f3cf87d8162b66792d4_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f8421c91cc109f3cf87d8162b66792d4___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f8421c91cc109f3cf87d8162b66792d4_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
