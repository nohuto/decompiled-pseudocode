/*
 * XREFs of MiGetControlAreaPtes @ 0x140072510
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiGetControlAreaPtes(__int64 a1)
{
  int v1; // eax
  volatile LONG *v4; // rsi
  KIRQL v5; // al
  __int64 v6; // rcx
  __int64 v7; // r8
  KIRQL i; // di
  unsigned __int64 v9; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 || !*(_QWORD *)(a1 + 64) || (v1 & 0x400) != 0 )
    return *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
  v4 = (volatile LONG *)(a1 + 72);
  v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v6 = *(_QWORD *)(a1 + 272);
  v7 = 0LL;
  for ( i = v5; v6; v6 = *(_QWORD *)(v6 + 8) )
    v7 = v6;
  v9 = (*(unsigned int *)(v7 - 20) | ((unsigned __int64)(*(_WORD *)(v7 - 24) & 0xFFC0) << 26))
     + *(unsigned int *)(v7 - 12)
     - (unsigned __int64)(*(_DWORD *)(v7 - 4) & 0x3FFFFFFF);
  ExReleaseSpinLockSharedFromDpcLevel(v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && i < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(i);
  return v9;
}
