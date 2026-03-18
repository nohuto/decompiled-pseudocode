/*
 * XREFs of MiDeleteKernelStackNode @ 0x1402C406C
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14008F9F4 (MiInPageSingleKernelStack.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteKernelStackNode(unsigned __int64 *P)
{
  KIRQL v2; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = ExAcquireSpinLockExclusive(&dword_140466420);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140466418, P);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140466420);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v2);
  ExFreePoolWithTag(P, 0);
}
