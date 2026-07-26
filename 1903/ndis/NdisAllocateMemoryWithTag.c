/*
 * XREFs of NdisAllocateMemoryWithTag @ 0x1C001C740
 * Callers:
 *     Duplicate802_11AttachAttributesCommon @ 0x1C00C836C (Duplicate802_11AttachAttributesCommon.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisAllocateMemoryWithTag(PVOID *VirtualAddress, UINT Length, ULONG Tag)
{
  PVOID PoolWithTag; // rax

  if ( !Tag )
    Tag = 1835091022;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length, Tag);
  *VirtualAddress = PoolWithTag;
  return PoolWithTag == 0LL ? 0xC0000001 : 0;
}
