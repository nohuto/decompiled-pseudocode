/*
 * XREFs of ObpDeferObjectDeletion @ 0x140125DB0
 * Callers:
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     ObDereferenceObjectEx @ 0x14001CD54 (ObDereferenceObjectEx.c)
 *     NtCancelTimer @ 0x14001CF40 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     CcDeleteSharedCacheMap @ 0x14007C270 (CcDeleteSharedCacheMap.c)
 *     MiEmptyPageAccessLog @ 0x140088580 (MiEmptyPageAccessLog.c)
 *     ExTimerRundown @ 0x14008AFD0 (ExTimerRundown.c)
 *     ObFastReplaceObject @ 0x140094924 (ObFastReplaceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF990 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C1040 (ObDereferenceObjectDeferDelete.c)
 *     IopDropIrp @ 0x1400E097C (IopDropIrp.c)
 *     NtSetInformationFile @ 0x140100E70 (NtSetInformationFile.c)
 *     NtSetInformationWorkerFactory @ 0x1401060E0 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 *     KeAreInterruptsEnabled @ 0x1400CACE4 (KeAreInterruptsEnabled.c)
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 */

void __fastcall ObpDeferObjectDeletion(signed __int64 a1)
{
  signed __int64 v1; // rdx
  signed __int64 i; // rax
  WORK_QUEUE_TYPE v3; // edx

  _m_prefetchw(&ObpRemoveObjectList);
  v1 = ObpRemoveObjectList;
  *(_QWORD *)(a1 + 8) = ObpRemoveObjectList;
  for ( i = _InterlockedCompareExchange64(&ObpRemoveObjectList, a1, v1);
        i != v1;
        i = _InterlockedCompareExchange64(&ObpRemoveObjectList, a1, i) )
  {
    v1 = i;
    *(_QWORD *)(a1 + 8) = i;
  }
  if ( !v1 )
  {
    if ( KeAreInterruptsEnabled() && KeGetCurrentIrql() <= 2u )
      ExQueueWorkItem(&ObpRemoveObjectWorkItem, v3);
    else
      KiInsertQueueDpc((ULONG_PTR)&ObpRemoveObjectDpc, 0LL, 0LL, 0LL, 0);
  }
}
