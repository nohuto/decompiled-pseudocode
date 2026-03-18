/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x1402B72F4
 * Callers:
 *     KseSetCompletionHook @ 0x1402B6F00 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x140709B34 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6245534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_1404467C8);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_1404467D4);
  }
  return v3;
}
