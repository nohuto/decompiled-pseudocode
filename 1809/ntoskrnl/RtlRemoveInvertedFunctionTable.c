/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x14016B81C
 * Callers:
 *     MiProcessLoaderEntry @ 0x1400F5B8C (MiProcessLoaderEntry.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1409CF77C (RtlCreateInvertedFunctionTableCacheEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmLockLoadedModuleListExclusive @ 0x1400F5D60 (MmLockLoadedModuleListExclusive.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x14016B868 (RtlxRemoveInvertedFunctionTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v5; // [rsp+38h] [rbp+10h] BYREF

  MmLockLoadedModuleListExclusive(&v5);
  RtlxRemoveInvertedFunctionTable(v2, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
