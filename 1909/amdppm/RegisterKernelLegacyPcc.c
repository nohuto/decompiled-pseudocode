/*
 * XREFs of RegisterKernelLegacyPcc @ 0x1C0008990
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C00089AC (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterKernelLegacyPcc(__int64 a1)
{
  return InitLegacyPccInternal(a1, RegisterKernelPerfStatesCallback);
}
