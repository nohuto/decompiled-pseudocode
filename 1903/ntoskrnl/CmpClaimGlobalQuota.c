/*
 * XREFs of CmpClaimGlobalQuota @ 0x14065EE74
 * Callers:
 *     CmpAllocate @ 0x14065EE10 (CmpAllocate.c)
 *     HvpMapHiveImageFromViewMap @ 0x14065EF78 (HvpMapHiveImageFromViewMap.c)
 *     HvpAddBin @ 0x14065F368 (HvpAddBin.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x14076504C (HvpBuildMapForMemoryBackedHive.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     CmpUpdateGlobalQuotaAllowed @ 0x14065EECC (CmpUpdateGlobalQuotaAllowed.c)
 */

char __fastcall CmpClaimGlobalQuota(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  CmpUpdateGlobalQuotaAllowed(a1, a2, (unsigned int)a1);
  if ( !(_DWORD)v2 || v2 >= CmpGlobalQuotaAllowed - CmpGlobalQuotaUsed )
    return 0;
  _InterlockedExchangeAdd((volatile signed __int32 *)&CmpGlobalQuotaUsed, v2);
  if ( CmpGlobalQuotaUsed > (unsigned __int64)CmpGlobalQuotaWarning
    && !CmpQuotaWarningPopupDisplayed
    && ExReadyForErrors )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))CmpQuotaWarningWorker;
      CmpQuotaWarningPopupDisplayed = 1;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
  }
  return 1;
}
