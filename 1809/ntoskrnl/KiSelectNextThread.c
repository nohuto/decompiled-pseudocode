/*
 * XREFs of KiSelectNextThread @ 0x1400D7168
 * Callers:
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     KiQuantumEnd @ 0x1400D0020 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0F44 (KiGroupSchedulingQuantumEnd.c)
 *     KiSetSystemAffinityThread @ 0x1400D6400 (KiSetSystemAffinityThread.c)
 *     KiExitThreadWait @ 0x1400F9E90 (KiExitThreadWait.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114DA4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1401156A8 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x14029905C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSelectReadyThread @ 0x140057A20 (KiSelectReadyThread.c)
 *     KiInsertDeferredReadyList @ 0x1400ACBC8 (KiInsertDeferredReadyList.c)
 *     KiSelectLowestRankedThread @ 0x1400D7200 (KiSelectLowestRankedThread.c)
 *     KiSetProcessorIdle @ 0x1400D7344 (KiSetProcessorIdle.c)
 *     KiCheckThreadAffinity @ 0x140115158 (KiCheckThreadAffinity.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4B9C (KiUpdatePriorityMatrixThreadState.c)
 *     KiAddThreadToReadyQueue @ 0x140298084 (KiAddThreadToReadyQueue.c)
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
