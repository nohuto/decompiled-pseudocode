/*
 * XREFs of ExpDeleteWorkerFactory @ 0x14010AB60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     IoFreeMiniCompletionPacket @ 0x14068FA10 (IoFreeMiniCompletionPacket.c)
 */

void __fastcall ExpDeleteWorkerFactory(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rsi
  char v4; // bp
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v7; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &v7);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 34LL) = 1;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(void **)(v2 + 8);
  v4 = *(_BYTE *)(v2 + 32);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v7);
  OldIrql = v7.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x66577845u);
  ObCloseHandle(*(HANDLE *)(a1 + 40), 0);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  if ( !v4 )
  {
    IoFreeMiniCompletionPacket(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
  }
}
