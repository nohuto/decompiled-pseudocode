/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f468bdb0f01413f97eaeae986536d321___::Run @ 0x1802A1320
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f468bdb0f01413f97eaeae986536d321_::operator() @ 0x18029FF98 (_lambda_f468bdb0f01413f97eaeae986536d321_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f468bdb0f01413f97eaeae986536d321___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f468bdb0f01413f97eaeae986536d321_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
