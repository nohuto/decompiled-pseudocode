/*
 * XREFs of RegisterKernelLegacyPcc @ 0x1C000D3B0
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C000CF5C (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterKernelLegacyPcc(__int64 a1)
{
  return InitLegacyPccInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterKernelPerfStatesCallback);
}
