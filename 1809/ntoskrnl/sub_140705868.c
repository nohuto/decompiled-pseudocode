/*
 * XREFs of sub_140705868 @ 0x140705868
 * Callers:
 *     sub_14031A100 @ 0x14031A100 (sub_14031A100.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1405A2820 (ExpGenuinePolicyCacheProvider.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406A8A40 (ExpGenuinePolicyPostProcess.c)
 *     ExpGetVMActivationStatus @ 0x140705308 (ExpGetVMActivationStatus.c)
 *     ExActivateVMWithSubscription @ 0x1408CF948 (ExActivateVMWithSubscription.c)
 *     ExpIsRunningInWDAGContainer @ 0x1408D0530 (ExpIsRunningInWDAGContainer.c)
 *     sub_1408D0760 @ 0x1408D0760 (sub_1408D0760.c)
 *     sub_1408D08D0 @ 0x1408D08D0 (sub_1408D08D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140705868(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
