/*
 * XREFs of IopFindPassiveInterruptBlock @ 0x14029E474
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x14029E1E8 (IoProcessPassiveInterrupts.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140860FF0 (IopAllocatePassiveInterruptBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x140861148 (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14029E2A4 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x14029E4F0 (IopFindPassiveInterruptBlockLocked.c)
 */

__int64 __fastcall IopFindPassiveInterruptBlock(unsigned int a1)
{
  __int64 PassiveInterruptBlockLocked; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v5; // [rsp+38h] [rbp+10h] BYREF

  IopAcquireGlobalPassiveInterruptListLock(&v5);
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(a1);
  KxReleaseSpinLock(&PassiveInterruptListLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v5);
  return PassiveInterruptBlockLocked;
}
