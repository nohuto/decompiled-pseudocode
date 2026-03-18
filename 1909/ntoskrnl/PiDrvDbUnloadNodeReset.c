/*
 * XREFs of PiDrvDbUnloadNodeReset @ 0x14013E184
 * Callers:
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1406F21A0 (PiDrvDbUnloadNodeWorkerCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PiDrvDbUnloadNodeReset(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v3; // al
  KIRQL v4; // si
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = (KSPIN_LOCK *)(a1 + 424);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 424));
  *(_BYTE *)(a1 + 432) = 0;
  v4 = v3;
  KxReleaseSpinLock(v1);
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
