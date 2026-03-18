/*
 * XREFs of MmOnlySystemCacheViewsPresent @ 0x140133DDC
 * Callers:
 *     CcCoherencyFlushAndPurgeCache @ 0x1400C09E0 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x14005F6F0 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmOnlySystemCacheViewsPresent(_QWORD *a1)
{
  __int64 v1; // rax
  bool v2; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = MiLockSectionControlArea(a1, 1, &v5);
  if ( !v1 )
    return 1;
  v2 = *(_QWORD *)(v1 + 40) == *(unsigned int *)(v1 + 88);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v5);
  return v2;
}
