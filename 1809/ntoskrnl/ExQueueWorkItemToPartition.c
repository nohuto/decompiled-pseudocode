/*
 * XREFs of ExQueueWorkItemToPartition @ 0x1400D2F6C
 * Callers:
 *     CcWorkerThread @ 0x14007F2D0 (CcWorkerThread.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D110 (MiQueueLargeFreeZeroRebuild.c)
 *     CcLazyWriteScan @ 0x1400D57DC (CcLazyWriteScan.c)
 *     CcPostWorkQueue @ 0x1400D6078 (CcPostWorkQueue.c)
 *     CcWriteBehind @ 0x1400D621C (CcWriteBehind.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400E0158 (CcPostWorkQueueAsyncRead.c)
 *     MmInSwapWorkingSet @ 0x1400E4F04 (MmInSwapWorkingSet.c)
 *     MiWorkingSetManager @ 0x1400EF634 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x1400F0544 (MiScanPagefiles.c)
 *     MiCheckZeroFreeRebalance @ 0x14010C5C0 (MiCheckZeroFreeRebalance.c)
 *     CcAsyncReadWorker @ 0x1401404B0 (CcAsyncReadWorker.c)
 *     CcReEngageWorkerThreads @ 0x140160ABC (CcReEngageWorkerThreads.c)
 *     MiWakeLargePageRebuild @ 0x1402CEB90 (MiWakeLargePageRebuild.c)
 *     MiContractWsSwapPageFile @ 0x14066C944 (MiContractWsSwapPageFile.c)
 *     MiInSwapStore @ 0x1406D206C (MiInSwapStore.c)
 *     MmScrubMemory @ 0x140860F24 (MmScrubMemory.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1400B7260 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1400D1AD8 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1400D1AF8 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemToPartition(__int64 *BugCheckParameter2, int a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  ULONG_PTR BugCheckParameter4; // rbp
  int v8; // eax
  __int64 result; // rax

  v4 = a2;
  BugCheckParameter4 = a3;
  ExpValidateWorkItem(BugCheckParameter2, a2);
  v8 = ExpTypeToPriority(v4);
  result = ExpQueueWorkItem(*(_QWORD *)(a4 + 16), BugCheckParameter2, v8, BugCheckParameter4, 0);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v4, BugCheckParameter4);
  return result;
}
