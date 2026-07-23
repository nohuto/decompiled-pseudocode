/*
 * XREFs of CmpCanGrowHive @ 0x1405A4870
 * Callers:
 *     HvpAddBin @ 0x1405A49BC (HvpAddBin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

char __fastcall CmpCanGrowHive(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( a2 <= 0x7FFFE000 )
  {
    if ( a1 != qword_1403FFFF0 )
      return 1;
    if ( a2 + 4096 <= CmSystemHiveLimitSize )
    {
      LODWORD(v3) = 393216;
      if ( *(_QWORD *)(*(_QWORD *)qword_14043B808 + 7120LL) >> 1 < 0x60000uLL )
        v3 = *(_QWORD *)(*(_QWORD *)qword_14043B808 + 7120LL) >> 1;
      if ( a2 + 4096 > 36864 * (int)v3 / 0xAu && !CmpSystemQuotaWarningPopupDisplayed && ExReadyForErrors )
      {
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
        if ( PoolWithTag )
        {
          PoolWithTag->List.Flink = 0LL;
          PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))CmpQuotaWarningWorker;
          CmpSystemQuotaWarningPopupDisplayed = 1;
          PoolWithTag->Parameter = PoolWithTag;
          ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
        }
      }
      return 1;
    }
  }
  return 0;
}
