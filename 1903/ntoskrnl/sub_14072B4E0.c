/*
 * XREFs of sub_14072B4E0 @ 0x14072B4E0
 * Callers:
 *     sub_140338C90 @ 0x140338C90 (sub_140338C90.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1406AC990 (ExpGenuinePolicyCacheProvider.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406D2BB0 (ExpGenuinePolicyPostProcess.c)
 *     ExpGetVMActivationStatus @ 0x14072ADC0 (ExpGetVMActivationStatus.c)
 *     ExActivateVMWithSubscription @ 0x14090BC4C (ExActivateVMWithSubscription.c)
 *     ExpIsRunningInWDAGContainer @ 0x14090C9F0 (ExpIsRunningInWDAGContainer.c)
 *     sub_14090CC10 @ 0x14090CC10 (sub_14090CC10.c)
 *     sub_14090CDA0 @ 0x14090CDA0 (sub_14090CDA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14072B4E0(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
