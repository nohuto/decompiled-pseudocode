/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_60221e79019ecf56c4402e49e3564341___::Run @ 0x180021270
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_60221e79019ecf56c4402e49e3564341_::operator() @ 0x180021294 (_lambda_60221e79019ecf56c4402e49e3564341_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_60221e79019ecf56c4402e49e3564341___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_60221e79019ecf56c4402e49e3564341_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
