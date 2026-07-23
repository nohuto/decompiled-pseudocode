/*
 * XREFs of KiSelectNextThread @ 0x1400D71E8
 * Callers:
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0FC4 (KiGroupSchedulingQuantumEnd.c)
 *     KiSetSystemAffinityThread @ 0x1400D6480 (KiSetSystemAffinityThread.c)
 *     KiExitThreadWait @ 0x1400F9F10 (KiExitThreadWait.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114E14 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140115718 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x14029924C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSelectReadyThread @ 0x140057A20 (KiSelectReadyThread.c)
 *     KiInsertDeferredReadyList @ 0x1400ACB08 (KiInsertDeferredReadyList.c)
 *     KiSelectLowestRankedThread @ 0x1400D7280 (KiSelectLowestRankedThread.c)
 *     KiSetProcessorIdle @ 0x1400D73C4 (KiSetProcessorIdle.c)
 *     KiCheckThreadAffinity @ 0x1401151C8 (KiCheckThreadAffinity.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiAddThreadToReadyQueue @ 0x140298274 (KiAddThreadToReadyQueue.c)
 */

__int64 __fastcall KiSelectNextThread(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // r10
  __int64 v6; // r8
  __int64 v7; // r10
  int v9; // r9d

  while ( 1 )
  {
    v5 = KiSelectReadyThread(1, a1, a3);
    if ( !v5 )
    {
      v5 = (_QWORD *)KiSelectLowestRankedThread(a1);
      if ( !v5 )
        v5 = KiSelectReadyThread(0, a1, v6);
    }
    if ( !v5 )
      goto LABEL_5;
    if ( (unsigned int)KiCheckThreadAffinity(v5) )
      goto LABEL_8;
    if ( !a2 )
      break;
    KiInsertDeferredReadyList(a2, v7);
  }
  LOBYTE(v9) = 1;
  KiAddThreadToReadyQueue(a1, 0, v7, v9, 1);
  v7 = 0LL;
LABEL_8:
  if ( !v7 )
LABEL_5:
    KiSetProcessorIdle(a1, 1LL, 1LL);
  return KiUpdatePriorityMatrixThreadState(a1, v7, 2LL, 3LL);
}
