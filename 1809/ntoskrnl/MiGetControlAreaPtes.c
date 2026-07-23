/*
 * XREFs of MiGetControlAreaPtes @ 0x140077D08
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x1405ECA20 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiFindLastSubsection @ 0x140092D30 (MiFindLastSubsection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiGetControlAreaPtes(__int64 a1)
{
  int v1; // eax
  volatile LONG *v4; // rbx
  KIRQL v5; // si
  __int64 LastSubsection; // rax
  unsigned __int64 v7; // rdi
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 || !*(_QWORD *)(a1 + 64) || (v1 & 0x400) != 0 )
    return *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
  v4 = (volatile LONG *)(a1 + 72);
  v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  LastSubsection = MiFindLastSubsection(a1, 1LL);
  v7 = (*(unsigned int *)(LastSubsection + 36) | ((unsigned __int64)(*(_WORD *)(LastSubsection + 32) & 0xFFC0) << 26))
     + *(unsigned int *)(LastSubsection + 44)
     - (unsigned __int64)(*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF);
  ExReleaseSpinLockSharedFromDpcLevel(v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v5);
  return v7;
}
