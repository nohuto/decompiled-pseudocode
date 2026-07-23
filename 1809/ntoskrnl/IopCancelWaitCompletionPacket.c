/*
 * XREFs of IopCancelWaitCompletionPacket @ 0x14008DD0C
 * Callers:
 *     IopCloseWaitCompletionPacket @ 0x14008CBA0 (IopCloseWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x14008DB80 (NtCancelWaitCompletionPacket.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     ObpGetWaitObject @ 0x14006310C (ObpGetWaitObject.c)
 *     KeDeregisterObjectNotification @ 0x14008DE40 (KeDeregisterObjectNotification.c)
 *     KeRemoveQueueEntry @ 0x14012C9E0 (KeRemoveQueueEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall IopCancelWaitCompletionPacket(_QWORD *Object, char a2, unsigned __int8 a3)
{
  void *v3; // r14
  __int16 *WaitObject; // rax
  __int16 *v8; // rcx
  char v9; // al
  void *v10; // rsi
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = (void *)Object[10];
  WaitObject = (__int16 *)ObpGetWaitObject((__int64)v3 - 48);
  v8 = 0LL;
  if ( WaitObject != &ObpDefaultObject )
    v8 = WaitObject;
  v9 = KeDeregisterObjectNotification(v8, Object);
  v10 = (void *)Object[11];
  if ( !v9 && (!a2 || !(unsigned __int8)KeRemoveQueueEntry(Object[11], Object)) )
    return 0;
  Object[11] = 0LL;
  *((_BYTE *)Object + 104) = 0;
  KxReleaseSpinLock(Object + 12);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(a3);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return 1;
}
