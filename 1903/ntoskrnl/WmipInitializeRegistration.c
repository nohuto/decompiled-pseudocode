/*
 * XREFs of WmipInitializeRegistration @ 0x140A18D0C
 * Callers:
 *     WMIInitialize @ 0x140A02DB0 (WMIInitialize.c)
 *     WmipDriverEntry @ 0x140A18760 (WmipDriverEntry.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1401753A0 (ExInitializeNPagedLookasideListInternal.c)
 */

void __fastcall WmipInitializeRegistration(int a1)
{
  if ( a1 )
  {
    WmipRegWorkQueue.Parameter = 0LL;
    WmipRegWorkQueue.WorkerRoutine = (void (__fastcall *)(void *))WmipRegistrationWorker;
    WmipRegWorkQueue.List.Flink = 0LL;
    if ( _InterlockedExchangeAdd(&WmipRegWorkItemCount, 0xFFFFFFFF) != 1 )
      ExQueueWorkItem(&WmipRegWorkQueue, DelayedWorkQueue);
  }
  else
  {
    ExInitializeNPagedLookasideListInternal((__int64)&WmipRegLookaside, 0LL, 0LL, 512, 64, 1382640983, 0, 0);
    WmipRegistrationSpinLock = 0LL;
    WmipCancelSpinLock = 0LL;
  }
}
