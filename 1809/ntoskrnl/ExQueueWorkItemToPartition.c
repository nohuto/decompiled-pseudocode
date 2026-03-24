/*
 * XREFs of ExQueueWorkItemToPartition @ 0x1400D2EEC
 * Callers:
 *     CcWorkerThread @ 0x14007F2E0 (CcWorkerThread.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D1D0 (MiQueueLargeFreeZeroRebuild.c)
 *     CcLazyWriteScan @ 0x1400D575C (CcLazyWriteScan.c)
 *     CcPostWorkQueue @ 0x1400D5FF8 (CcPostWorkQueue.c)
 *     CcWriteBehind @ 0x1400D619C (CcWriteBehind.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400E00D8 (CcPostWorkQueueAsyncRead.c)
 *     MmInSwapWorkingSet @ 0x1400E4E84 (MmInSwapWorkingSet.c)
 *     MiWorkingSetManager @ 0x1400EF5B4 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x1400F04C4 (MiScanPagefiles.c)
 *     MiCheckZeroFreeRebalance @ 0x14010C540 (MiCheckZeroFreeRebalance.c)
 *     CcAsyncReadWorker @ 0x1401403B0 (CcAsyncReadWorker.c)
 *     CcReEngageWorkerThreads @ 0x1401609BC (CcReEngageWorkerThreads.c)
 *     MiWakeLargePageRebuild @ 0x1402CE9A0 (MiWakeLargePageRebuild.c)
 *     MiContractWsSwapPageFile @ 0x14066B784 (MiContractWsSwapPageFile.c)
 *     MiInSwapStore @ 0x1406D0DCC (MiInSwapStore.c)
 *     MmScrubMemory @ 0x14085FCC4 (MmScrubMemory.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1400B7320 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1400D1A58 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1400D1A78 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
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
