/*
 * XREFs of ExQueueWorkItemToPartition @ 0x140080198
 * Callers:
 *     CcWriteBehind @ 0x14007D79C (CcWriteBehind.c)
 *     CcWorkerThread @ 0x14007D940 (CcWorkerThread.c)
 *     CcPostWorkQueue @ 0x14007F614 (CcPostWorkQueue.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009FE80 (MiQueueLargeFreeZeroRebuild.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400A9898 (CcPostWorkQueueAsyncRead.c)
 *     MiWorkingSetManager @ 0x1400F1CC8 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x1400F23A0 (MiScanPagefiles.c)
 *     MmInSwapWorkingSet @ 0x1400F3B7C (MmInSwapWorkingSet.c)
 *     MiCheckZeroFreeRebalance @ 0x140109FB0 (MiCheckZeroFreeRebalance.c)
 *     MiWakeLargePageRebuild @ 0x140169DAC (MiWakeLargePageRebuild.c)
 *     CcReEngageWorkerThreads @ 0x140170F44 (CcReEngageWorkerThreads.c)
 *     CcAsyncReadWorker @ 0x14018C320 (CcAsyncReadWorker.c)
 *     CcIncrementWriteBehindPriority @ 0x14027CCFC (CcIncrementWriteBehindPriority.c)
 *     MiInSwapStore @ 0x1406A4C38 (MiInSwapStore.c)
 *     MiContractWsSwapPageFile @ 0x1406A4FE0 (MiContractWsSwapPageFile.c)
 *     MmScrubMemory @ 0x14089D464 (MmScrubMemory.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14005B298 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x14008041C (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1400805E4 (ExpTypeToPriority.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemToPartition(_QWORD *BugCheckParameter2, int a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  ULONG_PTR BugCheckParameter4; // rbp
  int v8; // eax
  __int64 result; // rax

  v4 = a2;
  BugCheckParameter4 = a3;
  ExpValidateWorkItem(BugCheckParameter2, a2);
  v8 = ExpTypeToPriority((unsigned int)v4);
  result = ExpQueueWorkItem(*(_QWORD *)(a4 + 16), (_DWORD)BugCheckParameter2, v8, BugCheckParameter4, 0);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v4, BugCheckParameter4);
  return result;
}
