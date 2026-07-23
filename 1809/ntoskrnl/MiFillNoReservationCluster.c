/*
 * XREFs of MiFillNoReservationCluster @ 0x140150E48
 * Callers:
 *     MiGatherPagefilePages @ 0x14014F0E0 (MiGatherPagefilePages.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     MiReservePageFileSpace @ 0x140081310 (MiReservePageFileSpace.c)
 *     MiReferencePageForModifiedWrite @ 0x14011BC04 (MiReferencePageForModifiedWrite.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFillNoReservationCluster(_DWORD *a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v5; // r13
  unsigned int v6; // edi
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int8 v9; // bp
  int v10; // r12d
  __int64 v12; // r12
  unsigned __int64 v13; // r12
  struct _KPRCB *v14; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v16; // rcx
  char v17; // [rsp+60h] [rbp+8h]

  if ( !a1[286] || (v5 = &a1[8 * a1[285] + 688 + 2 * a1[285]], !*v5) )
    v5 = a1 + 672;
  v6 = 0;
  v17 = 1;
  do
  {
    v7 = v5[2];
    if ( v7 == 0xFFFFFFFFFLL )
      break;
    v8 = 48 * v7 - 0x58000000000LL;
    v9 = MiLockPageInline(v8);
    if ( v7 != v5[2] )
      goto LABEL_19;
    if ( !a1[255] )
      goto LABEL_8;
    if ( (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) == 0 )
      goto LABEL_8;
    v12 = *(_QWORD *)(v8 + 8);
    if ( v12 >= 0 || !(unsigned int)MiSufficientAvailablePages((__int64)a1, 0xA0uLL) )
      goto LABEL_8;
    v13 = v12 | 0x8000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v9);
    MiReservePageFileSpace((__int64)a1, v13, 0LL);
    v9 = MiLockPageInline(48 * v7 - 0x58000000000LL);
    if ( v7 != v5[2] )
    {
LABEL_19:
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
      {
        v14 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v14);
      }
      __writecr8(v9);
    }
    else
    {
LABEL_8:
      v10 = MiReferencePageForModifiedWrite(48 * v7 - 0x58000000000LL, v17);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
      {
        v16 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v16);
      }
      __writecr8(v9);
      if ( !v10 )
        break;
      v17 &= ~1u;
      ++v6;
      *a2++ = v7;
      if ( v10 == 3 && v6 >= 0x10 )
        break;
    }
  }
  while ( v6 < a3 );
  if ( v6 > 1 )
    qsort(&a2[-v6], v6, 8uLL, MiModifiedWriterNoReservationSort);
  return v6;
}
