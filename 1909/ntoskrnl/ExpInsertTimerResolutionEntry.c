/*
 * XREFs of ExpInsertTimerResolutionEntry @ 0x1400F8814
 * Callers:
 *     NtSetTimerResolution @ 0x1406A63D0 (NtSetTimerResolution.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpInsertTimerResolutionEntry(__int64 a1)
{
  KIRQL v2; // di
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v3 = ExpTimerResolutionListHead;
  v4 = (__int64 *)(a1 + 1696);
  if ( *(__int64 **)(ExpTimerResolutionListHead + 8) != &ExpTimerResolutionListHead )
    __fastfail(3u);
  v4[1] = (__int64)&ExpTimerResolutionListHead;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  ExpTimerResolutionListHead = (__int64)v4;
  KxReleaseSpinLock(&ExpKernelResolutionLock);
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
