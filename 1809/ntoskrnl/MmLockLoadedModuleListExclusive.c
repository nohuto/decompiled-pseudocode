/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x1400F5D80
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x1400F5A34 (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x1400F5BAC (MiProcessLoaderEntry.c)
 *     MiSessionRemoveImage @ 0x140158100 (MiSessionRemoveImage.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14016B83C (RtlRemoveInvertedFunctionTable.c)
 *     MiSessionInsertImage @ 0x14017602C (MiSessionInsertImage.c)
 *     MiShowBadMapper @ 0x1402A5A44 (MiShowBadMapper.c)
 *     PsDispatchIumService @ 0x1402EAB94 (PsDispatchIumService.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B720 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MmLockLoadedModuleListExclusive(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v2; // cl

  CurrentIrql = KeGetCurrentIrql();
  *a1 = CurrentIrql;
  if ( CurrentIrql < 0xFu )
  {
    v2 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v2 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
}
