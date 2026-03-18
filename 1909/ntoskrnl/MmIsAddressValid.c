/*
 * XREFs of MmIsAddressValid @ 0x1402C4970
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1401AB17C (KiMarkBugCheckRegions.c)
 *     sub_1401BA434 @ 0x1401BA434 (sub_1401BA434.c)
 *     KeBugCheck2 @ 0x1402A78C0 (KeBugCheck2.c)
 *     PopMarkComponentsBootPhase @ 0x14059D210 (PopMarkComponentsBootPhase.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1405A7FB8 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140859714 (IopLiveDumpDiscardVirtualAddressRange.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F910 (MmIsAddressValidEx.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MmIsAddressValidEx((__int64)VirtualAddress);
}
