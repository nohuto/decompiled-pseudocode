/*
 * XREFs of RtlpCtContextInit @ 0x1408D82C4
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1403142D0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExSubscribeWnfStateChange @ 0x14063F220 (ExSubscribeWnfStateChange.c)
 *     RtlpCtContextFree @ 0x1408D8268 (RtlpCtContextFree.c)
 *     RtlpCtInitializeNotificationEvent @ 0x1408D83A8 (RtlpCtInitializeNotificationEvent.c)
 *     RtlpCtInitializeWorkItem @ 0x1408D83F0 (RtlpCtInitializeWorkItem.c)
 */

__int64 __fastcall RtlpCtContextInit(PVOID **a1, int a2)
{
  PVOID *PoolWithTag; // rbx
  int v5; // edi

  *a1 = 0LL;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x67744364u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    v5 = RtlpCtInitializeNotificationEvent(PoolWithTag + 2);
    if ( v5 < 0
      || (v5 = RtlpCtInitializeWorkItem(PoolWithTag, PoolWithTag), v5 < 0)
      || (v5 = ExSubscribeWnfStateChange(
                 (int)PoolWithTag + 8,
                 (int)&WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED,
                 8,
                 a2,
                 (__int64)RtlpRtlpCtSelfSubscribeCallback,
                 (__int64)PoolWithTag),
          v5 < 0) )
    {
      RtlpCtContextFree(PoolWithTag);
    }
    else
    {
      *a1 = PoolWithTag;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
