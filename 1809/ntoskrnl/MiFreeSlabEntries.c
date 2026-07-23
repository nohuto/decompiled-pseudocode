/*
 * XREFs of MiFreeSlabEntries @ 0x1402C23C8
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x1402C2824 (MiFreeUnusedSlabPages.c)
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeSlabEntry @ 0x1402C2518 (MiFreeSlabEntry.c)
 *     MiRemoveSlabEntry @ 0x1402C2E44 (MiRemoveSlabEntry.c)
 */

unsigned __int64 __fastcall MiFreeSlabEntries(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  _QWORD *v6; // rbx
  KIRQL v7; // al
  __int64 v8; // rcx
  KIRQL v9; // bp
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v15; // rdx

  result = *(unsigned int *)(a2 + 52);
  if ( (result & 1) == 0 )
    return result;
  if ( !a3 )
  {
    result = KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a2 + 56);
    if ( result < 0x2FAF080 )
      return result;
  }
  v6 = 0LL;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 16));
  v8 = *(_QWORD *)(a2 + 8);
  v9 = v7;
  if ( (v8 & 1) == 0 )
  {
    v10 = *(_QWORD **)(a2 + 8);
LABEL_16:
    while ( v10 )
    {
      v11 = (_QWORD *)v10[1];
      v12 = v10;
      v13 = v10;
      if ( v11 )
      {
        do
        {
          v10 = v11;
          v11 = (_QWORD *)*v11;
        }
        while ( v11 );
      }
      else
      {
        while ( 1 )
        {
          v10 = (_QWORD *)(v10[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v10 || (_QWORD *)*v10 == v13 )
            break;
          v13 = v10;
        }
      }
      if ( *((_DWORD *)v12 + 30) == 512 )
      {
        MiRemoveSlabEntry(a1, a2, v12);
        *v12 = v6;
        v6 = v12;
      }
    }
    goto LABEL_17;
  }
  if ( v8 != 1 )
  {
    v10 = (_QWORD *)(v8 ^ (a2 | 1));
    goto LABEL_16;
  }
LABEL_17:
  *(_DWORD *)(a2 + 52) &= ~1u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v9;
  __writecr8(v9);
  while ( 1 )
  {
    v15 = v6;
    if ( !v6 )
      break;
    v6 = (_QWORD *)*v6;
    result = MiFreeSlabEntry(a2, v15);
  }
  return result;
}
