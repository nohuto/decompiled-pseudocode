/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x1400FB460
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x14001B800 (RtlpxLookupFunctionTable.c)
 *     MiLookupDataTableEntry @ 0x1400FB388 (MiLookupDataTableEntry.c)
 *     RtlPcToFileName @ 0x14019BD40 (RtlPcToFileName.c)
 *     MiIsAddressInDriverView @ 0x1402C7AA0 (MiIsAddressInDriverView.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
