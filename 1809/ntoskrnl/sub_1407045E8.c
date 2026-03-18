/*
 * XREFs of sub_1407045E8 @ 0x1407045E8
 * Callers:
 *     sub_140319E10 @ 0x140319E10 (sub_140319E10.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1405A1820 (ExpGenuinePolicyCacheProvider.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406A77C0 (ExpGenuinePolicyPostProcess.c)
 *     ExpGetVMActivationStatus @ 0x140704088 (ExpGetVMActivationStatus.c)
 *     ExActivateVMWithSubscription @ 0x1408CE6A8 (ExActivateVMWithSubscription.c)
 *     ExpIsRunningInWDAGContainer @ 0x1408CF290 (ExpIsRunningInWDAGContainer.c)
 *     sub_1408CF4C0 @ 0x1408CF4C0 (sub_1408CF4C0.c)
 *     sub_1408CF630 @ 0x1408CF630 (sub_1408CF630.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407045E8(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 4;
  if ( a3 < 4 )
    return 3221225507LL;
  if ( a1 )
    *a1 = 4;
  if ( a2 )
    *a2 = a5;
  return result;
}
