/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x1401764C0
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x14015887C (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x140191B10 (PopIrpWorkerControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     PopCreatePowerThread @ 0x140176528 (PopCreatePowerThread.c)
 */

__int64 __fastcall PopCreateDynamicIrpWorker(__int64 a1)
{
  _QWORD *v2; // rax
  void *v3; // rdi
  int PowerThread; // ebx

  v2 = ExAllocateFromNPagedLookasideList(&PopDynamicIrpWorkerLookaside);
  v3 = v2;
  if ( v2 )
  {
    *v2 = a1;
    PowerThread = PopCreatePowerThread(PopIrpWorker, v2);
    if ( PowerThread >= 0 )
      PowerThread = 0;
  }
  else
  {
    PowerThread = -1073741670;
  }
  if ( PowerThread < 0 )
  {
    if ( v3 )
      ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, v3);
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    --PopIrpWorkerPendingCount;
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  }
  return (unsigned int)PowerThread;
}
