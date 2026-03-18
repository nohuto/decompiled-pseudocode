/*
 * XREFs of PspRundownProcess @ 0x1408C9598
 * Callers:
 *     PspProcessClose @ 0x1406C63C0 (PspProcessClose.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtectionEx @ 0x1400D3DF0 (ExAcquireRundownProtectionEx.c)
 */

void __fastcall PspRundownProcess(signed __int64 Object)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(Object + 768), 0) )
  {
    ObfReferenceObjectWithTag((PVOID)Object, 0x77537350u);
    if ( !_InterlockedCompareExchange64(&PspRundownProcessCache, Object, 0LL) )
    {
      if ( _InterlockedIncrement(&PspRundownNeededCountCache) != 1 )
        return;
      v2 = &PspProcessRundownCacheWorkItem;
      goto LABEL_9;
    }
    if ( _interlockedbittestandset((volatile signed __int32 *)(Object + 776), 8u) )
    {
      ObfDereferenceObjectWithTag((PVOID)Object, 0x77537350u);
      return;
    }
    if ( _InterlockedIncrement(&PspRundownNeededCount) == 1 )
    {
      v2 = (struct _WORK_QUEUE_ITEM *)&PspProcessRundownWorkItem;
LABEL_9:
      ExQueueWorkItem(v2, NormalWorkQueue);
    }
  }
}
