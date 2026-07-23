/*
 * XREFs of MiReplenishTransitionPageHeatList @ 0x1402EBFA8
 * Callers:
 *     MmCopyToCachedPage @ 0x14006EAA0 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

void MiReplenishTransitionPageHeatList()
{
  _SLIST_ENTRY *PoolWithTag; // rax

  while ( LOWORD(stru_140466250.Alignment) < 0x40u )
  {
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6C486D4Du);
    if ( !PoolWithTag )
    {
      _InterlockedExchange(&dword_140466260, 32);
      return;
    }
    *((_DWORD *)&PoolWithTag->Next + 2) = 16;
    RtlpInterlockedPushEntrySList(&stru_140466250, PoolWithTag);
  }
}
