/*
 * XREFs of VmpFaultEntryRemove @ 0x14030C1F8
 * Callers:
 *     VmpAccessFaultBatch @ 0x14030B978 (VmpAccessFaultBatch.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B720 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1400BDDD0 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall VmpFaultEntryRemove(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v3 = a2;
  v5 = a2 + 48LL * a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  while ( v3 < v5 )
  {
    RtlRbRemoveNode(a1 + 48, v3);
    v3 += 48LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
