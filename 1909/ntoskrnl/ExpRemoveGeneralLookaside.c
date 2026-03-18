/*
 * XREFs of ExpRemoveGeneralLookaside @ 0x14012B414
 * Callers:
 *     ExDeletePagedLookasideList @ 0x14012B320 (ExDeletePagedLookasideList.c)
 *     ExDeleteLookasideListEx @ 0x14012B390 (ExDeleteLookasideListEx.c)
 *     ExDeleteNPagedLookasideList @ 0x140177BF0 (ExDeleteNPagedLookasideList.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

PVOID __fastcall ExpRemoveGeneralLookaside(PKSPIN_LOCK SpinLock, __int64 a2)
{
  PVOID *v4; // rbx
  KIRQL v5; // di
  __int64 *v6; // rax
  __int64 **v7; // r8
  PVOID result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = (PVOID *)(a2 + 64);
  v5 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v6 = (__int64 *)*v4;
  v7 = *(__int64 ***)(a2 + 72);
  if ( *((_QWORD *)*v4 + 1) != a2 + 64 || *v7 != (__int64 *)v4 )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  KxReleaseSpinLock(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v5);
  *(_WORD *)(a2 + 16) = 0;
  result = MmBadPointer;
  *v4 = MmBadPointer;
  return result;
}
