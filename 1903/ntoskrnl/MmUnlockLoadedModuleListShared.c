/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x1400F79C0
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x14001B410 (RtlpxLookupFunctionTable.c)
 *     MiLookupDataTableEntry @ 0x1400F78E8 (MiLookupDataTableEntry.c)
 *     RtlPcToFileName @ 0x14019B6E0 (RtlPcToFileName.c)
 *     MiIsAddressInDriverView @ 0x1402C7D40 (MiIsAddressInDriverView.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
