/*
 * XREFs of MiDeleteKernelStackNode @ 0x1402AB7F4
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14013D5A0 (MiInPageSingleKernelStack.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteKernelStackNode(unsigned __int64 *P)
{
  KIRQL v2; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = ExAcquireSpinLockExclusive(&dword_14043BD60);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_14043BD58, P);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043BD60);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v2);
  ExFreePoolWithTag(P, 0);
}
