/*
 * XREFs of MmIsAddressValid @ 0x1402AB8B0
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1401A0110 (KiMarkBugCheckRegions.c)
 *     sub_1401AEE14 @ 0x1401AEE14 (sub_1401AEE14.c)
 *     PopMarkComponentsBootPhase @ 0x14056B53C (PopMarkComponentsBootPhase.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140578168 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14081FFC4 (IopLiveDumpDiscardVirtualAddressRange.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400685A0 (MiIsAddressValid.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MiIsAddressValid((__int64)VirtualAddress);
}
