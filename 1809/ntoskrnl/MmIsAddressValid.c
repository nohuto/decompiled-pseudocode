/*
 * XREFs of MmIsAddressValid @ 0x1402ABBA0
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1401A0270 (KiMarkBugCheckRegions.c)
 *     sub_1401AEF74 @ 0x1401AEF74 (sub_1401AEF74.c)
 *     PopMarkComponentsBootPhase @ 0x14056C53C (PopMarkComponentsBootPhase.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140579168 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1408211A4 (IopLiveDumpDiscardVirtualAddressRange.c)
 * Callees:
 *     MiIsAddressValid @ 0x140068590 (MiIsAddressValid.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MiIsAddressValid((__int64)VirtualAddress);
}
