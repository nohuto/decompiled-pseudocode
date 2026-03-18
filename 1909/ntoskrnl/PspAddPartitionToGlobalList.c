/*
 * XREFs of PspAddPartitionToGlobalList @ 0x14019ABF4
 * Callers:
 *     PspAllocatePartition @ 0x140785400 (PspAllocatePartition.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspAddPartitionToGlobalList(__int64 a1)
{
  KIRQL v2; // di
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = ExAcquireSpinLockExclusive(&PspActivePartitionListLock);
  v3 = off_1404265B8;
  v4 = a1 + 40;
  if ( *off_1404265B8 != (_UNKNOWN *)&PspActivePartitionListHead )
    __fastfail(3u);
  *(_QWORD *)v4 = &PspActivePartitionListHead;
  *(_QWORD *)(v4 + 8) = v3;
  *v3 = v4;
  off_1404265B8 = (_UNKNOWN **)v4;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspActivePartitionListLock);
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
