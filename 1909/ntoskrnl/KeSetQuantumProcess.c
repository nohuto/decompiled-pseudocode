/*
 * XREFs of KeSetQuantumProcess @ 0x1400E9704
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x1400E9064 (KeSetPriorityAndQuantumProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x140687CF4 (PspApplyJobLimitsToProcess.c)
 *     PsChangeQuantumTable @ 0x140746DEC (PsChangeQuantumTable.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

_UNKNOWN **__fastcall KeSetQuantumProcess(__int64 a1, char a2)
{
  _UNKNOWN **result; // rax
  unsigned __int8 CurrentIrql; // bl
  volatile LONG *v6; // rbp
  _QWORD **v7; // rdi
  _QWORD *i; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(_BYTE *)(a1 + 449) != a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v6 = (volatile LONG *)(a1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    *(_BYTE *)(a1 + 449) = a2;
    v7 = (_QWORD **)(a1 + 48);
    for ( i = *v7; i != v7; i = (_QWORD *)*i )
      *((_BYTE *)i - 109) = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = (_UNKNOWN **)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
