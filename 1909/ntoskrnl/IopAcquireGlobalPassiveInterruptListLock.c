/*
 * XREFs of IopAcquireGlobalPassiveInterruptListLock @ 0x14029E2A4
 * Callers:
 *     IopDereferencePassiveInterruptBlock @ 0x14029E354 (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x14029E474 (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x14029E528 (IopInsertPassiveInterruptBlock.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 */

void __fastcall IopAcquireGlobalPassiveInterruptListLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // dl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&PassiveInterruptListLock);
}
