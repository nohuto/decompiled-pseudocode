/*
 * XREFs of PopDirectedDripsPnpActionQueueAccountingUpdate @ 0x1402F15FC
 * Callers:
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408A4134 (PopDirectedDripsHandleResiliencyNotification.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PopDirectedDripsPnpActionQueueAccountingUpdateUnsafe @ 0x1402F169C (PopDirectedDripsPnpActionQueueAccountingUpdateUnsafe.c)
 */

__int64 __fastcall PopDirectedDripsPnpActionQueueAccountingUpdate(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v5; // rdx
  KIRQL v6; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = a1 + 576;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 576));
  if ( *(_BYTE *)(v2 + 120) != a2 )
  {
    LOBYTE(v5) = a2;
    PopDirectedDripsPnpActionQueueAccountingUpdateUnsafe(a1, v5);
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v6;
  __writecr8(v6);
  return result;
}
