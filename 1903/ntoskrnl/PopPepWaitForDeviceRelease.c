/*
 * XREFs of PopPepWaitForDeviceRelease @ 0x140191458
 * Callers:
 *     PopPepUnregisterDevice @ 0x14076EC08 (PopPepUnregisterDevice.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopPepWaitForDeviceRelease(__int64 a1)
{
  volatile LONG *v1; // rbx
  KIRQL v2; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = (volatile LONG *)(a1 + 64);
  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}
