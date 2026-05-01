/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_213f4bfe591ab9b16b854a9332a0da18___::Run @ 0x1802A7790
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_213f4bfe591ab9b16b854a9332a0da18_::operator() @ 0x1802A5C68 (_lambda_213f4bfe591ab9b16b854a9332a0da18_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_213f4bfe591ab9b16b854a9332a0da18___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_213f4bfe591ab9b16b854a9332a0da18_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
