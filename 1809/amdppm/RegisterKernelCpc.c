/*
 * XREFs of RegisterKernelCpc @ 0x1C001EC70
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C001EC8C (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterKernelCpc(__int64 a1)
{
  return InitCpcStatesInternal(a1, RegisterKernelPerfStatesCallback);
}
