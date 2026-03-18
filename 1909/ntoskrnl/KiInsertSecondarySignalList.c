/*
 * XREFs of KiInsertSecondarySignalList @ 0x1402A9EBC
 * Callers:
 *     KeDispatchSecondaryInterrupt @ 0x1402A9A30 (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSecondarySignalListLock @ 0x1402A9B3C (KiAcquireSecondarySignalListLock.c)
 */

void __fastcall KiInsertSecondarySignalList(_QWORD **a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( *a1 != a1 )
  {
    KiAcquireSecondarySignalListLock(&v5);
    v2 = qword_140446ED8;
    if ( *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList
      || *(__int64 **)qword_140446ED8 != &KiSecondarySignalList
      || (_QWORD **)(*a1)[1] != a1
      || (_QWORD **)*a1[1] != a1 )
    {
      __fastfail(3u);
    }
    *(_QWORD *)qword_140446ED8 = a1;
    qword_140446ED8 = (__int64)a1[1];
    *a1[1] = &KiSecondarySignalList;
    v3 = KiSecondarySignalDpcRunning == 0;
    a1[1] = (_QWORD *)v2;
    if ( v3 )
    {
      KiSecondarySignalDpcRunning = 1;
      KiInsertQueueDpc((ULONG_PTR)&KiSecondarySignalDpc, 0LL, 0LL, 0LL, 0);
    }
    KxReleaseSpinLock(&KiSecondarySignalListLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v5);
  }
}
