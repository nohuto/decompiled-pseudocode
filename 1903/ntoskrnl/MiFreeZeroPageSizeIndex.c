/*
 * XREFs of MiFreeZeroPageSizeIndex @ 0x14002DA70
 * Callers:
 *     MiAssignNonPagedPoolPte @ 0x140023480 (MiAssignNonPagedPoolPte.c)
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     MiTradePage @ 0x1400D93C0 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x1400DA610 (MiPfnsWorthTrying.c)
 *     MiZeroInParallelWorker @ 0x140123300 (MiZeroInParallelWorker.c)
 *     MiSetPfnOwnedAndActive @ 0x140129568 (MiSetPfnOwnedAndActive.c)
 *     MiPurgeZeroList @ 0x14016119C (MiPurgeZeroList.c)
 *     MiFindLargeNodePage @ 0x1402C08B8 (MiFindLargeNodePage.c)
 *     MiFreeLargePagesFinish @ 0x1402DFAC0 (MiFreeLargePagesFinish.c)
 *     MiTransferPartitionPageRun @ 0x1402EB500 (MiTransferPartitionPageRun.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F4120 (MiCombineAllPhysicalMemory.c)
 *     MiAllocateLargeZeroPages @ 0x140899454 (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePage @ 0x140899FD8 (MiGetFastLargePage.c)
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreeZeroPageSizeIndex(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v2 = MiLargePageContainingFrames;
  v3 = 0;
  while ( v1 != *v2 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 3 )
      return 0xFFFFFFFFLL;
  }
  return v3;
}
