/*
 * XREFs of MiTransientCombineAddress @ 0x1402E64A0
 * Callers:
 *     MiRaisedIrqlFault @ 0x140129A60 (MiRaisedIrqlFault.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall MiTransientCombineAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rbx
  KIRQL v6; // bp
  struct _KPRCB *CurrentPrcb; // rcx

  if ( !dword_140465DC4 )
    return 0LL;
  v4 = ExAcquireSpinLockShared(&dword_140465DC0);
  v5 = (_QWORD *)qword_140465DC8;
  v6 = v4;
  while ( v5 )
  {
    if ( a1 > v5[3] )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( a1 >= v5[3] )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  if ( v5 && v5[5] != ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    v5 = 0LL;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140465DC0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v6);
  return v5 != 0;
}
