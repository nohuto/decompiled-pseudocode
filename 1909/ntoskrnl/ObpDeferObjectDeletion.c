/*
 * XREFs of ObpDeferObjectDeletion @ 0x140128EA4
 * Callers:
 *     ObDereferenceObjectEx @ 0x140008694 (ObDereferenceObjectEx.c)
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x14001CD20 (MiEmptyPageAccessLog.c)
 *     ObFastReferenceObject @ 0x14003ACD0 (ObFastReferenceObject.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400656F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     ObFastReplaceObject @ 0x14007FED4 (ObFastReplaceObject.c)
 *     ExTimerRundown @ 0x140081674 (ExTimerRundown.c)
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     IopDropIrp @ 0x1400FEDA0 (IopDropIrp.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
 *     KeAreInterruptsEnabled @ 0x1400A3040 (KeAreInterruptsEnabled.c)
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
