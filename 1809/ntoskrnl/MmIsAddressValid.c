/*
 * XREFs of MmIsAddressValid @ 0x1402AB9B0
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1401A0130 (KiMarkBugCheckRegions.c)
 *     sub_1401AEE34 @ 0x1401AEE34 (sub_1401AEE34.c)
 *     PopMarkComponentsBootPhase @ 0x14056B53C (PopMarkComponentsBootPhase.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140578168 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14081FFA4 (IopLiveDumpDiscardVirtualAddressRange.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400685A0 (MiIsAddressValid.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MiIsAddressValid((__int64)VirtualAddress);
}
