/*
 * XREFs of sub_14072D380 @ 0x14072D380
 * Callers:
 *     sub_1403386F0 @ 0x1403386F0 (sub_1403386F0.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1406A3340 (ExpGenuinePolicyCacheProvider.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406D1F10 (ExpGenuinePolicyPostProcess.c)
 *     ExpGetVMActivationStatus @ 0x14072CC60 (ExpGetVMActivationStatus.c)
 *     ExActivateVMWithSubscription @ 0x14090B6AC (ExActivateVMWithSubscription.c)
 *     ExpIsRunningInWDAGContainer @ 0x14090C450 (ExpIsRunningInWDAGContainer.c)
 *     sub_14090C670 @ 0x14090C670 (sub_14090C670.c)
 *     sub_14090C800 @ 0x14090C800 (sub_14090C800.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14072D380(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
