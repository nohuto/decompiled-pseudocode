/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x14017FD40
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x140168AA0 (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x14019C970 (PopIrpWorkerControl.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14008D57C (ExAllocateFromNPagedLookasideList.c)
 *     PopCreatePowerThread @ 0x14017FDA8 (PopCreatePowerThread.c)
 */

__int64 __fastcall PopCreateDynamicIrpWorker(__int64 a1)
{
  _QWORD *v2; // rax
  void *v3; // rbx
  int PowerThread; // edi

  v2 = ExAllocateFromNPagedLookasideList(&PopDynamicIrpWorkerLookaside);
  v3 = v2;
  if ( !v2 )
  {
    PowerThread = -1073741670;
LABEL_7:
    if ( v3 )
      ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, v3);
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    --PopIrpWorkerPendingCount;
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
    return (unsigned int)PowerThread;
  }
  *v2 = a1;
  PowerThread = PopCreatePowerThread(PopIrpWorker, v2);
  if ( PowerThread >= 0 )
    PowerThread = 0;
  if ( PowerThread < 0 )
    goto LABEL_7;
  return (unsigned int)PowerThread;
}
