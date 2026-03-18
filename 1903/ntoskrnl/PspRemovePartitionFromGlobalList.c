/*
 * XREFs of PspRemovePartitionFromGlobalList @ 0x140309978
 * Callers:
 *     PspDeletePartition @ 0x1408CB980 (PspDeletePartition.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspRemovePartitionFromGlobalList(__int64 a1)
{
  KIRQL v2; // al
  __int64 **v3; // rdx
  __int64 *v4; // rbx
  KIRQL v5; // di
  __int64 *v6; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = ExAcquireSpinLockExclusive(&PspActivePartitionListLock);
  v3 = *(__int64 ***)(a1 + 48);
  v4 = (__int64 *)(a1 + 40);
  v5 = v2;
  v6 = (__int64 *)*v4;
  if ( *(__int64 **)(*v4 + 8) != v4 || *v3 != v4 )
    __fastfail(3u);
  *v3 = v6;
  v6[1] = (__int64)v3;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspActivePartitionListLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
