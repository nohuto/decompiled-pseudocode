/*
 * XREFs of KiSelectNextThread @ 0x1400D7148
 * Callers:
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     KiQuantumEnd @ 0x1400D0000 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0F24 (KiGroupSchedulingQuantumEnd.c)
 *     KiSetSystemAffinityThread @ 0x1400D63E0 (KiSetSystemAffinityThread.c)
 *     KiExitThreadWait @ 0x1400F9E70 (KiExitThreadWait.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114D84 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140115688 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x140298F5C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSelectReadyThread @ 0x140057A20 (KiSelectReadyThread.c)
 *     KiInsertDeferredReadyList @ 0x1400ACBA8 (KiInsertDeferredReadyList.c)
 *     KiSelectLowestRankedThread @ 0x1400D71E0 (KiSelectLowestRankedThread.c)
 *     KiSetProcessorIdle @ 0x1400D7324 (KiSetProcessorIdle.c)
 *     KiCheckThreadAffinity @ 0x140115138 (KiCheckThreadAffinity.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4B7C (KiUpdatePriorityMatrixThreadState.c)
 *     KiAddThreadToReadyQueue @ 0x140297F84 (KiAddThreadToReadyQueue.c)
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
