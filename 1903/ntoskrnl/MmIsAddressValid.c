/*
 * XREFs of MmIsAddressValid @ 0x1402C4C10
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1401AAA5C (KiMarkBugCheckRegions.c)
 *     sub_1401B9D14 @ 0x1401B9D14 (sub_1401B9D14.c)
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 *     PopMarkComponentsBootPhase @ 0x14059D990 (PopMarkComponentsBootPhase.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1405A7FD8 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14085A014 (IopLiveDumpDiscardVirtualAddressRange.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F520 (MmIsAddressValidEx.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MmIsAddressValidEx((__int64)VirtualAddress);
}
