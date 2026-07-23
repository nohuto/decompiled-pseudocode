/*
 * XREFs of MiGetPageFromSlabAllocator @ 0x1402C2870
 * Callers:
 *     MiGetSlabPage @ 0x1402C2BCC (MiGetSlabPage.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetPageFromSlabEntry @ 0x1402C2A38 (MiGetPageFromSlabEntry.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402C2F2C (MiUpdateSlabPagePlaceholderState.c)
 */

__int64 __fastcall MiGetPageFromSlabAllocator(__int64 a1)
{
  volatile LONG *v3; // rbp
  KIRQL v4; // al
  __int64 v5; // rcx
  KIRQL v6; // r14
  __int64 PageFromSlabEntry; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v13; // bp
  struct _KPRCB *v14; // rcx

  if ( !*(_QWORD *)(a1 + 32) )
    return -1LL;
  v3 = (volatile LONG *)(a1 + 16);
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 16));
  v5 = *(_QWORD *)(a1 + 24);
  v6 = v4;
  if ( !v5 )
    goto LABEL_6;
  PageFromSlabEntry = MiGetPageFromSlabEntry(v5, a1);
  if ( PageFromSlabEntry == -1 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
LABEL_6:
    v8 = *(_QWORD *)(a1 + 8);
    if ( (v8 & 1) != 0 )
    {
      if ( v8 != 1 )
      {
        v9 = (_QWORD *)(v8 ^ (a1 | 1));
        goto LABEL_17;
      }
    }
    else
    {
      v9 = *(_QWORD **)(a1 + 8);
LABEL_17:
      while ( v9 )
      {
        PageFromSlabEntry = MiGetPageFromSlabEntry(v9, a1);
        if ( PageFromSlabEntry != -1 )
        {
          *(_QWORD *)(a1 + 24) = v9;
          goto LABEL_19;
        }
        v10 = (_QWORD *)v9[1];
        v11 = v9;
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
            if ( !v9 || (_QWORD *)*v9 == v11 )
              break;
            v11 = v9;
          }
        }
      }
    }
    PageFromSlabEntry = -1LL;
  }
LABEL_19:
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v6);
  if ( PageFromSlabEntry != -1 )
  {
    v13 = MiLockPageInline(48 * PageFromSlabEntry - 0x58000000000LL);
    MiUpdateSlabPagePlaceholderState(a1, PageFromSlabEntry, 1LL, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(48 * PageFromSlabEntry - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
    {
      v14 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v14);
    }
    __writecr8(v13);
  }
  return PageFromSlabEntry;
}
