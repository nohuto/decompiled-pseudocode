/*
 * XREFs of IopInsertPassiveInterruptBlock @ 0x1402885DC
 * Callers:
 *     IopAllocatePassiveInterruptBlock @ 0x140827490 (IopAllocatePassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x140288358 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x1402885A4 (IopFindPassiveInterruptBlockLocked.c)
 */

__int64 __fastcall IopInsertPassiveInterruptBlock(__int64 a1, _BYTE *a2)
{
  __int64 PassiveInterruptBlockLocked; // rsi
  __int64 *v5; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 1;
  IopAcquireGlobalPassiveInterruptListLock(&v8);
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(*(_DWORD *)(a1 + 20));
  if ( !PassiveInterruptBlockLocked )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 192));
    v5 = (__int64 *)qword_140435588;
    if ( *(__int64 **)qword_140435588 != &PassiveInterruptList )
      __fastfail(3u);
    *(_QWORD *)a1 = &PassiveInterruptList;
    *(_QWORD *)(a1 + 8) = v5;
    *v5 = a1;
    qword_140435588 = a1;
  }
  KxReleaseSpinLock(&PassiveInterruptListLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v8);
  if ( PassiveInterruptBlockLocked )
    *a2 = 0;
  return 0LL;
}
