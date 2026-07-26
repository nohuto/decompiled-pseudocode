/*
 * XREFs of NdisAllocateMemoryWithTagPriority @ 0x1C001A440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall NdisAllocateMemoryWithTagPriority(
        NDIS_HANDLE NdisHandle,
        UINT Length,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  bool v5; // zf
  ULONG v6; // r8d

  v5 = Tag == 0;
  v6 = 1835091022;
  if ( !v5 )
    v6 = Tag;
  return ExAllocatePoolWithTagPriority(NonPagedPoolNx, Length, v6, Priority);
}
