/*
 * XREFs of MiFreeZeroPageSizeIndex @ 0x14009B3EC
 * Callers:
 *     MiFreeLargeZeroPages @ 0x14002891C (MiFreeLargeZeroPages.c)
 *     MiAssignNonPagedPoolPtes @ 0x140099220 (MiAssignNonPagedPoolPtes.c)
 *     MiPfnsWorthTrying @ 0x14009A6F0 (MiPfnsWorthTrying.c)
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 *     MiSetPfnOwnedAndActive @ 0x14012969C (MiSetPfnOwnedAndActive.c)
 *     MiZeroInParallelWorker @ 0x14013C7C0 (MiZeroInParallelWorker.c)
 *     MiPurgeZeroList @ 0x140151ABC (MiPurgeZeroList.c)
 *     MiFindLargeNodePage @ 0x1402A91F4 (MiFindLargeNodePage.c)
 *     MiGetSinglePageToZero @ 0x1402C1B08 (MiGetSinglePageToZero.c)
 *     MiTransferPartitionPageRun @ 0x1402D28E8 (MiTransferPartitionPageRun.c)
 *     MiCreatePagingFileMap @ 0x14061FB18 (MiCreatePagingFileMap.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D5450 (MiCombineAllPhysicalMemory.c)
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePage @ 0x14085E68C (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreeZeroPageSizeIndex(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v2 = MiLargePageContainingFrames;
  result = 0LL;
  while ( v1 != *v2 )
  {
    result = (unsigned int)(result + 1);
    ++v2;
    if ( (unsigned int)result >= 3 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
