/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ecff0a6ad990c549a8393105facc7083___::Run @ 0x180250CC0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ecff0a6ad990c549a8393105facc7083_::operator() @ 0x18024F948 (_lambda_ecff0a6ad990c549a8393105facc7083_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ecff0a6ad990c549a8393105facc7083___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_ecff0a6ad990c549a8393105facc7083_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
