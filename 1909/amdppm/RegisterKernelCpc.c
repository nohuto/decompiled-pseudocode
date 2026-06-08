/*
 * XREFs of RegisterKernelCpc @ 0x1C002A4C0
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C002A4DC (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterKernelCpc(__int64 a1)
{
  return InitCpcStatesInternal(a1, RegisterKernelPerfStatesCallback);
}
