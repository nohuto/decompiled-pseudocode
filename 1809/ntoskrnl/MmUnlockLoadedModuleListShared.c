/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x1400DA688
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x1400A18B0 (RtlpxLookupFunctionTable.c)
 *     MiLookupDataTableEntry @ 0x1400DA590 (MiLookupDataTableEntry.c)
 *     RtlPcToFileName @ 0x14018E890 (RtlPcToFileName.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D110 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MmUnlockLoadedModuleListShared(unsigned __int8 a1)
{
  struct _KPRCB *CurrentPrcb; // rcx

  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( a1 < 0xFu )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a1 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(a1);
  }
}
