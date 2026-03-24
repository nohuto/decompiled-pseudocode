/*
 * XREFs of sub_1407045C8 @ 0x1407045C8
 * Callers:
 *     sub_140319F10 @ 0x140319F10 (sub_140319F10.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1405A1820 (ExpGenuinePolicyCacheProvider.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406A77A0 (ExpGenuinePolicyPostProcess.c)
 *     ExpGetVMActivationStatus @ 0x140704068 (ExpGetVMActivationStatus.c)
 *     ExActivateVMWithSubscription @ 0x1408CE688 (ExActivateVMWithSubscription.c)
 *     ExpIsRunningInWDAGContainer @ 0x1408CF270 (ExpIsRunningInWDAGContainer.c)
 *     sub_1408CF4A0 @ 0x1408CF4A0 (sub_1408CF4A0.c)
 *     sub_1408CF610 @ 0x1408CF610 (sub_1408CF610.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407045C8(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
