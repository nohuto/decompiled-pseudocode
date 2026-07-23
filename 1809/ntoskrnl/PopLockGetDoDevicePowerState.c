/*
 * XREFs of PopLockGetDoDevicePowerState @ 0x1402DC3A4
 * Callers:
 *     PiControlGetDevicePowerData @ 0x14083C8C8 (PiControlGetDevicePowerData.c)
 *     NtGetDevicePowerState @ 0x1408708A0 (NtGetDevicePowerState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopLockGetDoDevicePowerState(__int64 a1)
{
  KIRQL v2; // di
  unsigned int v3; // ebx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopIrpSerialLock);
  v3 = (*(_DWORD *)(a1 + 16) >> 4) & 0xF;
  KxReleaseSpinLock(&PopIrpSerialLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v2);
  return v3;
}
