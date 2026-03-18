/*
 * XREFs of IoStopDiskIoAttributionForContext @ 0x1400EC72C
 * Callers:
 *     PspIoRateEntryActivate @ 0x1405B36C0 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1405B37CC (PspIoRateEntryDeactivate.c)
 *     PspRemoveIoAttribution @ 0x14068AD98 (PspRemoveIoAttribution.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140063910 (RtlRbRemoveNode.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall IoStopDiskIoAttributionForContext(struct _EX_RUNDOWN_REF *a1)
{
  KIRQL v2; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  RtlRbRemoveNode((unsigned __int64 *)&IopDiskIoAttributionTree, (unsigned __int64)a1);
  a1[2].Count = -1LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v2);
  ExWaitForRundownProtectionRelease(a1 + 21);
}
