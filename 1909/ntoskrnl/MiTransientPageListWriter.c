/*
 * XREFs of MiTransientPageListWriter @ 0x1402E7814
 * Callers:
 *     MiSystemFault @ 0x140075390 (MiSystemFault.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTransientPageListWriter(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rbx
  KIRQL v6; // r14
  unsigned int v7; // edi
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = ExAcquireSpinLockShared(&dword_140465DE0);
  v5 = (_QWORD *)qword_140465DE8;
  v6 = v4;
  v7 = 0;
  while ( v5 )
  {
    if ( a1 > v5[7] )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( a1 >= v5[7] )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  if ( v5 && (!v5[4] || a2 < v5[5] || a2 > v5[6]) )
    v5 = 0LL;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140465DE0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v6);
  LOBYTE(v7) = v5 != 0LL;
  return v7;
}
