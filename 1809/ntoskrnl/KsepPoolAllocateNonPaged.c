/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x14029FE10
 * Callers:
 *     KseSetCompletionHook @ 0x14029F9F0 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x14068091C (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6245534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_14041AB68);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_14041AB74);
  }
  return v3;
}
