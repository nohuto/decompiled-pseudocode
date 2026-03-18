/*
 * XREFs of MiFreeZeroPageSizeIndex @ 0x14002DE60
 * Callers:
 *     MiAssignNonPagedPoolPte @ 0x140023870 (MiAssignNonPagedPoolPte.c)
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     MiTradePage @ 0x1400B9240 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x1400BA490 (MiPfnsWorthTrying.c)
 *     MiZeroInParallelWorker @ 0x1400F8EC0 (MiZeroInParallelWorker.c)
 *     MiSetPfnOwnedAndActive @ 0x140129F88 (MiSetPfnOwnedAndActive.c)
 *     MiPurgeZeroList @ 0x140160BEC (MiPurgeZeroList.c)
 *     MiFindLargeNodePage @ 0x1402C0618 (MiFindLargeNodePage.c)
 *     MiFreeLargePagesFinish @ 0x1402DF820 (MiFreeLargePagesFinish.c)
 *     MiTransferPartitionPageRun @ 0x1402EB260 (MiTransferPartitionPageRun.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F5EB0 (MiCombineAllPhysicalMemory.c)
 *     MiAllocateLargeZeroPages @ 0x140898C74 (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePage @ 0x1408997F8 (MiGetFastLargePage.c)
 *     MiMapUserLargePages @ 0x140899CBC (MiMapUserLargePages.c)
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
