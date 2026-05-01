/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f468bdb0f01413f97eaeae986536d321___::Run @ 0x1802C0810
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f468bdb0f01413f97eaeae986536d321_::operator() @ 0x1802BF488 (_lambda_f468bdb0f01413f97eaeae986536d321_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f468bdb0f01413f97eaeae986536d321___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f468bdb0f01413f97eaeae986536d321_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
