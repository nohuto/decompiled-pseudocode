/*
 * XREFs of MiFreeZeroPageSizeIndex @ 0x14009B4AC
 * Callers:
 *     MiFreeLargeZeroPages @ 0x14002891C (MiFreeLargeZeroPages.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400992E0 (MiAssignNonPagedPoolPtes.c)
 *     MiPfnsWorthTrying @ 0x14009A7B0 (MiPfnsWorthTrying.c)
 *     MiTradePage @ 0x14009C0F0 (MiTradePage.c)
 *     MiSetPfnOwnedAndActive @ 0x1401295CC (MiSetPfnOwnedAndActive.c)
 *     MiZeroInParallelWorker @ 0x14013C6C0 (MiZeroInParallelWorker.c)
 *     MiPurgeZeroList @ 0x1401519BC (MiPurgeZeroList.c)
 *     MiFindLargeNodePage @ 0x1402A9004 (MiFindLargeNodePage.c)
 *     MiGetSinglePageToZero @ 0x1402C1918 (MiGetSinglePageToZero.c)
 *     MiTransferPartitionPageRun @ 0x1402D26F8 (MiTransferPartitionPageRun.c)
 *     MiCreatePagingFileMap @ 0x14061EB18 (MiCreatePagingFileMap.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D41B0 (MiCombineAllPhysicalMemory.c)
 *     MiAllocateLargeZeroPages @ 0x14085C8E0 (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePage @ 0x14085D42C (MiGetFastLargePage.c)
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
