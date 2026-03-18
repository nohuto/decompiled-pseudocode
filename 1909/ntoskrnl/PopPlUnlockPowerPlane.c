/*
 * XREFs of PopPlUnlockPowerPlane @ 0x1403055A4
 * Callers:
 *     PopFxUnregisterDevice @ 0x14077189C (PopFxUnregisterDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopPlUnlockPowerPlane(__int64 a1)
{
  unsigned __int8 v1; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 24);
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 16));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v1;
  __writecr8(v1);
  return result;
}
