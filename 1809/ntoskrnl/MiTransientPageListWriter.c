/*
 * XREFs of MiTransientPageListWriter @ 0x1402CDA84
 * Callers:
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTransientPageListWriter(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rbx
  KIRQL v6; // r14
  unsigned int v7; // edi
  unsigned __int64 v8; // r8
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = ExAcquireSpinLockShared(&dword_14043B798);
  v5 = (_QWORD *)qword_14043B7A0;
  v6 = v4;
  v7 = 0;
  while ( v5 )
  {
    v8 = v5[7];
    if ( a1 > v8 )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( a1 >= v8 )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  if ( v5 && (!v5[4] || a2 < v5[5] || a2 > v5[6]) )
    v5 = 0LL;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14043B798);
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
