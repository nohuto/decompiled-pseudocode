/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x1402A0100
 * Callers:
 *     KseSetCompletionHook @ 0x14029FCE0 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x140681ABC (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6245534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_14041BC28);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_14041BC34);
  }
  return v3;
}
