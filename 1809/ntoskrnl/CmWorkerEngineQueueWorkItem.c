/*
 * XREFs of CmWorkerEngineQueueWorkItem @ 0x1406C749C
 * Callers:
 *     CmpDoQueueLateUnloadWorker @ 0x1405B1550 (CmpDoQueueLateUnloadWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 */

void __fastcall CmWorkerEngineQueueWorkItem(_QWORD *a1)
{
  char v2; // di
  _QWORD *v3; // rax

  v2 = 0;
  ExAcquireFastMutex(&CmpWorkerEngineLock);
  v3 = (_QWORD *)qword_140438168;
  if ( *(PVOID **)qword_140438168 != &CmpWorkerEngineListHead )
    __fastfail(3u);
  *a1 = &CmpWorkerEngineListHead;
  a1[1] = v3;
  *v3 = a1;
  qword_140438168 = (__int64)a1;
  if ( !CmpWorkerEngineWorkItemActive )
  {
    CmpWorkerEngineWorkItemActive = 1;
    v2 = 1;
  }
  KeReleaseGuardedMutex(&CmpWorkerEngineLock);
  if ( v2 )
    ExQueueWorkItem(&CmpWorkerEngineWorkItem, DelayedWorkQueue);
}
