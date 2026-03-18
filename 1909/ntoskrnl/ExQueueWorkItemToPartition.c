/*
 * XREFs of ExQueueWorkItemToPartition @ 0x140080598
 * Callers:
 *     CcWriteBehind @ 0x14007DB9C (CcWriteBehind.c)
 *     CcWorkerThread @ 0x14007DD40 (CcWorkerThread.c)
 *     CcPostWorkQueue @ 0x14007FA14 (CcPostWorkQueue.c)
 *     CcPostWorkQueueAsyncRead @ 0x140090B98 (CcPostWorkQueueAsyncRead.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x1400C4F60 (MiQueueLargeFreeZeroRebuild.c)
 *     MmInSwapWorkingSet @ 0x1400D8F10 (MmInSwapWorkingSet.c)
 *     MiWorkingSetManager @ 0x1400DA208 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x1400DA8E0 (MiScanPagefiles.c)
 *     MiCheckZeroFreeRebalance @ 0x140109140 (MiCheckZeroFreeRebalance.c)
 *     MiWakeLargePageRebuild @ 0x14016984C (MiWakeLargePageRebuild.c)
 *     CcReEngageWorkerThreads @ 0x140171634 (CcReEngageWorkerThreads.c)
 *     CcAsyncReadWorker @ 0x14018CBA0 (CcAsyncReadWorker.c)
 *     CcIncrementWriteBehindPriority @ 0x14027CA5C (CcIncrementWriteBehindPriority.c)
 *     MiContractWsSwapPageFile @ 0x140673854 (MiContractWsSwapPageFile.c)
 *     MiInSwapStore @ 0x1406F4C34 (MiInSwapStore.c)
 *     MmScrubMemory @ 0x14089CC84 (MmScrubMemory.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14005B338 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x14008081C (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1400809E4 (ExpTypeToPriority.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
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
