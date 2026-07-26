/*
 * XREFs of NdisFreeMemoryWithTag @ 0x1C0025E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFreeMemoryWithTag(PVOID VirtualAddress, ULONG Tag)
{
  ExFreePoolWithTag(VirtualAddress, Tag);
}
