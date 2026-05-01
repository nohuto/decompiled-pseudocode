/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ce5d3d3f20d65dfcfb2bf58c8cf013b6___::Run @ 0x180250C90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ce5d3d3f20d65dfcfb2bf58c8cf013b6_::operator() @ 0x18024F864 (_lambda_ce5d3d3f20d65dfcfb2bf58c8cf013b6_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ce5d3d3f20d65dfcfb2bf58c8cf013b6___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_ce5d3d3f20d65dfcfb2bf58c8cf013b6_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
