/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_eccf4a5edd71f12daaca6c5537fa4813___::Run @ 0x180255AA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_eccf4a5edd71f12daaca6c5537fa4813_::operator() @ 0x180254EE8 (_lambda_eccf4a5edd71f12daaca6c5537fa4813_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_eccf4a5edd71f12daaca6c5537fa4813___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_eccf4a5edd71f12daaca6c5537fa4813_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
