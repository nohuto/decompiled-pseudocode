/*
 * XREFs of NdisFreeMemoryWithTagPriority @ 0x1C0081120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFreeMemoryWithTagPriority(NDIS_HANDLE NdisHandle, PVOID VirtualAddress, ULONG Tag)
{
  ExFreePoolWithTag(VirtualAddress, Tag);
}
