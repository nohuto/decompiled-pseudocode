/*
 * XREFs of SmpFpReleaseResource @ 0x140325C98
 * Callers:
 *     SmFpFree @ 0x140149E64 (SmFpFree.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SmpFpReleaseResource(PEX_SPIN_LOCK SpinLock, int a2, __int64 a3)
{
  __int64 v4; // rbx
  KIRQL v6; // al
  _QWORD *v7; // r9
  KIRQL v8; // si
  unsigned int v9; // ebx
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = a2;
  v6 = ExAcquireSpinLockExclusive(SpinLock);
  v7 = *(_QWORD **)&SpinLock[2 * v4 + 8];
  v8 = v6;
  while ( 1 )
  {
    if ( !v7 )
    {
      v9 = 0;
      goto LABEL_6;
    }
    if ( (v7[1] & 0xFFFFFFFFFFFFFFF8uLL) == a3 )
      break;
    v7 = (_QWORD *)*v7;
  }
  *((_DWORD *)v7 + 2) &= ~1u;
  --*((_BYTE *)SpinLock + v4 + 80);
  v9 = 1;
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
  return v9;
}
