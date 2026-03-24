/*
 * XREFs of MiReplenishTransitionPageHeatList @ 0x1402CF0D0
 * Callers:
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x1400B02B0 (MmCheckCachedPageStates.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C5410 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

void MiReplenishTransitionPageHeatList()
{
  struct _SLIST_ENTRY *PoolWithTag; // rax

  while ( LOWORD(stru_14043AAD0.Alignment) < 0x40u )
  {
    PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6C486D4Du);
    if ( !PoolWithTag )
    {
      _InterlockedExchange(&dword_14043AAE0, 32);
      return;
    }
    *((_DWORD *)&PoolWithTag->Next + 2) = 16;
    RtlpInterlockedPushEntrySList(&stru_14043AAD0, PoolWithTag);
  }
}
