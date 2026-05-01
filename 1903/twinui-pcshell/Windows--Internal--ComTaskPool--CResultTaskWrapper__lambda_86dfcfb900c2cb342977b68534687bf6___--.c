/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_86dfcfb900c2cb342977b68534687bf6___::Run @ 0x1802A7820
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_86dfcfb900c2cb342977b68534687bf6_::operator() @ 0x1802A5FE8 (_lambda_86dfcfb900c2cb342977b68534687bf6_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_86dfcfb900c2cb342977b68534687bf6___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_86dfcfb900c2cb342977b68534687bf6_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
