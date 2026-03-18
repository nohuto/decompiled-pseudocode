/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x140180430
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x1401684F0 (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x14019D0F0 (PopIrpWorkerControl.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400CA44C (ExAllocateFromNPagedLookasideList.c)
 *     PopCreatePowerThread @ 0x140180498 (PopCreatePowerThread.c)
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
