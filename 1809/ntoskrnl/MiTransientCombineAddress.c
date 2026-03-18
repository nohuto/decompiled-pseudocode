/*
 * XREFs of MiTransientCombineAddress @ 0x1402CC058
 * Callers:
 *     MiRaisedIrqlFault @ 0x140129108 (MiRaisedIrqlFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D110 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D7C0 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall MiTransientCombineAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rbx
  KIRQL v6; // bp
  unsigned __int64 v7; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  if ( !dword_14043A6C4 )
    return 0LL;
  v4 = ExAcquireSpinLockShared(&dword_14043A6C0);
  v5 = (_QWORD *)qword_14043A6C8;
  v6 = v4;
  while ( v5 )
  {
    v7 = v5[3];
    if ( a1 > v7 )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( a1 >= v7 )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  if ( v5 && v5[5] != ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    v5 = 0LL;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14043A6C0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v6);
  return v5 != 0;
}
