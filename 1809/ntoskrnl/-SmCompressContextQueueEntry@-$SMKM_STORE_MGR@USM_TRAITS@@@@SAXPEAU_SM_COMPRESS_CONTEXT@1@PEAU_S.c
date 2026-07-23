/*
 * XREFs of ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014DB74
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014D8C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextQueueEntry(struct _KEVENT *SpinLock, __int64 a2)
{
  struct _LIST_ENTRY *v3; // rbx
  KIRQL v4; // si
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = (struct _LIST_ENTRY *)(a2 + 72);
  v4 = ExAcquireSpinLockExclusive(&SpinLock->Header.Lock);
  v3->Flink = (struct _LIST_ENTRY *)((char *)&SpinLock->Header.WaitListHead.Blink->Flink->Flink + 1);
  SpinLock->Header.WaitListHead.Blink->Flink = v3;
  SpinLock->Header.WaitListHead.Blink = v3;
  if ( v3->Flink == (struct _LIST_ENTRY *)1 )
    KeSetEvent(SpinLock + 1, 0, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock->Header.Lock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v4;
  __writecr8(v4);
  return result;
}
