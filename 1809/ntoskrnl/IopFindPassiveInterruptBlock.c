/*
 * XREFs of IopFindPassiveInterruptBlock @ 0x140288528
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x14028829C (IoProcessPassiveInterrupts.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140827490 (IopAllocatePassiveInterruptBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1408275E8 (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x140288358 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x1402885A4 (IopFindPassiveInterruptBlockLocked.c)
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
