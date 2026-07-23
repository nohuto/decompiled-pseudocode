/*
 * XREFs of SmpFpReleaseResource @ 0x140308434
 * Callers:
 *     SmFpFree @ 0x14014CB3C (SmFpFree.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SmpFpReleaseResource(PEX_SPIN_LOCK SpinLock, int a2, __int64 a3)
{
  __int64 v4; // rbx
  KIRQL v6; // al
  _QWORD *v7; // rdx
  KIRQL v8; // si
  __int64 v9; // r8
  unsigned int v10; // ebx
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = a2;
  v6 = ExAcquireSpinLockExclusive(SpinLock);
  v7 = *(_QWORD **)&SpinLock[2 * v4 + 8];
  v8 = v6;
  while ( 1 )
  {
    if ( !v7 )
    {
      v10 = 0;
      goto LABEL_6;
    }
    v9 = v7[1];
    if ( (v9 & 0xFFFFFFFFFFFFFFF8uLL) == a3 )
      break;
    v7 = (_QWORD *)*v7;
  }
  *((_DWORD *)v7 + 2) = v9 & 0xFFFFFFFE;
  --*((_BYTE *)SpinLock + v4 + 80);
  v10 = 1;
  --*((_BYTE *)SpinLock + 86);
LABEL_6:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v8);
  return v10;
}
