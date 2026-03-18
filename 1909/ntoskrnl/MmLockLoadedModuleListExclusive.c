/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x14015586C
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x14015552C (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x1401556A4 (MiProcessLoaderEntry.c)
 *     MiSessionRemoveImage @ 0x140168214 (MiSessionRemoveImage.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14017E7A8 (RtlRemoveInvertedFunctionTable.c)
 *     MiSessionInsertImage @ 0x14017FD04 (MiSessionInsertImage.c)
 *     MiShowBadMapper @ 0x1402BCB38 (MiShowBadMapper.c)
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
