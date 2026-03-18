/*
 * XREFs of PopPepGetDeviceVetoMasks @ 0x1402F954C
 * Callers:
 *     PopFxTraceDeviceRegistration @ 0x14071A4AC (PopFxTraceDeviceRegistration.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopPepGetDeviceVetoMasks(__int64 a1, __int64 a2)
{
  char v4; // si
  KIRQL v5; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = 0;
  v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  if ( *(_DWORD *)(a1 + 172) == 2 )
  {
    v4 = 1;
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 144);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 152);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v5);
  return v4;
}
