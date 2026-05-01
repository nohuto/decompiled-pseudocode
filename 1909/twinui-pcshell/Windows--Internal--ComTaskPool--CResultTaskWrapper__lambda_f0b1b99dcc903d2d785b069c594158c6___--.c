/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f0b1b99dcc903d2d785b069c594158c6___::Run @ 0x1802CEA20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f0b1b99dcc903d2d785b069c594158c6_::operator() @ 0x1802CDCC8 (_lambda_f0b1b99dcc903d2d785b069c594158c6_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f0b1b99dcc903d2d785b069c594158c6___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f0b1b99dcc903d2d785b069c594158c6_::operator()((_DWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
