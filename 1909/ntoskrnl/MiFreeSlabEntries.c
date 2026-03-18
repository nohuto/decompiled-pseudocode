/*
 * XREFs of MiFreeSlabEntries @ 0x1402DB930
 * Callers:
 *     MiDeleteSlabAllocator @ 0x1402DB620 (MiDeleteSlabAllocator.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeSlabEntry @ 0x1402DBAB8 (MiFreeSlabEntry.c)
 *     MiPurgeSlabEntries @ 0x1402DC7F4 (MiPurgeSlabEntries.c)
 *     MiRemoveSlabEntry @ 0x1402DCBC0 (MiRemoveSlabEntry.c)
 */

__int64 __fastcall MiFreeSlabEntries(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v5; // rbx
  KIRQL v6; // al
  KIRQL v7; // bp
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rcx
  int v13; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v15; // rdx

  if ( (*(_DWORD *)(a2 + 56) & 1) == 0
    || !a3 && (unsigned __int64)(KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a2 + 104)) < 0x2FAF080 )
  {
    return 0LL;
  }
  MiPurgeSlabEntries(a2);
  v5 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 16));
  *(_DWORD *)(a2 + 56) &= ~1u;
  v7 = v6;
  v8 = *(_QWORD *)(a2 + 8);
  if ( (v8 & 1) == 0 )
  {
    v9 = *(_QWORD **)(a2 + 8);
LABEL_19:
    while ( v9 )
    {
      v10 = (_QWORD *)v9[1];
      v11 = v9;
      v12 = v9;
      if ( v10 )
      {
        do
        {
          v9 = v10;
          v10 = (_QWORD *)*v10;
        }
        while ( v10 );
      }
      else
      {
        while ( 1 )
        {
          v9 = (_QWORD *)(v9[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v9 || (_QWORD *)*v9 == v12 )
            break;
          v12 = v9;
        }
      }
      if ( (*((_DWORD *)v11 + 35) & 1) == 0 )
      {
        v13 = *((_DWORD *)v11 + 33);
        if ( v13 == 512 )
        {
          MiRemoveSlabEntry(a1, a2, v11);
          *v11 = v5;
          v5 = v11;
        }
        else if ( (unsigned int)(v13 + *((_DWORD *)v11 + 34)) >= 0x200 )
        {
          *(_DWORD *)(a2 + 56) |= 1u;
        }
      }
    }
    goto LABEL_20;
  }
  if ( v8 != 1 )
  {
    v9 = (_QWORD *)(v8 ^ (a2 | 1));
    goto LABEL_19;
  }
LABEL_20:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v7);
  while ( 1 )
  {
    v15 = v5;
    if ( !v5 )
      break;
    v5 = (_QWORD *)*v5;
    MiFreeSlabEntry(a2, v15);
  }
  return 0LL;
}
