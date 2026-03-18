/*
 * XREFs of ExpAddResourceToSystemResourceList @ 0x1401766C8
 * Callers:
 *     ExInitializeFastResource @ 0x140176650 (ExInitializeFastResource.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpAddResourceToSystemResourceList(_QWORD *a1)
{
  KIRQL v2; // di
  _QWORD *v3; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = ExAcquireSpinLockExclusive(&ExpResourceSpinLock);
  v3 = (_QWORD *)qword_14042F618;
  if ( *(__int64 **)qword_14042F618 != &ExpSystemResourcesList )
    __fastfail(3u);
  *a1 = &ExpSystemResourcesList;
  a1[1] = v3;
  *v3 = a1;
  qword_14042F618 = (__int64)a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpResourceSpinLock);
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
