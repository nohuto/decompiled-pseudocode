/*
 * XREFs of MiTransferPartitionPageRun @ 0x1402D28E8
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402D0308 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140039AD0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiFreeZeroPageSizeIndex @ 0x14009B3EC (MiFreeZeroPageSizeIndex.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseNonPagedResources @ 0x1400E1968 (MiReleaseNonPagedResources.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiAcquireNonPagedResourcesForce @ 0x1402A63E0 (MiAcquireNonPagedResourcesForce.c)
 *     MiUnlinkPageFromBadList @ 0x1402BFFF0 (MiUnlinkPageFromBadList.c)
 *     MiMoveLargeFreePage @ 0x1402CCB34 (MiMoveLargeFreePage.c)
 */

__int64 __fastcall MiTransferPartitionPageRun(__int64 a1, unsigned __int16 *a2, ULONG_PTR a3, __int64 a4, KIRQL a5)
{
  ULONG_PTR v5; // rsi
  __int16 v8; // r14
  __int64 v9; // r13
  unsigned __int16 v10; // r12
  int v11; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v13; // rbx
  unsigned __int8 v14; // bp
  struct _KPRCB *v15; // rcx
  unsigned int v16; // r14d
  struct _KPRCB *v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // r12d
  __int64 v20; // r14
  struct _KPRCB *v21; // rcx
  struct _KPRCB *v22; // rcx
  struct _KPRCB *v24; // rcx
  __int16 v25; // [rsp+80h] [rbp+8h]
  unsigned __int16 v26; // [rsp+88h] [rbp+10h]
  int v27; // [rsp+90h] [rbp+18h]
  ULONG_PTR v28; // [rsp+98h] [rbp+20h]

  v5 = a3;
  if ( a2 == (unsigned __int16 *)&MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_14043B810, -a4);
  v8 = *(_WORD *)a1;
  v9 = 0LL;
  v10 = *a2;
  v11 = 0;
  v25 = *(_WORD *)a1;
  v26 = *a2;
  v28 = a3 + a4;
  if ( a3 != a3 + a4 )
  {
    do
    {
      v27 = v11 + 1;
      if ( (((_BYTE)v11 + 1) & 0xF) == 0 && (*(_DWORD *)(a1 + 192) & 0x40000000) != 0 || KeShouldYieldProcessor() )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a5 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(a5);
        --v5;
        a5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 192));
      }
      else
      {
        v13 = 48 * v5 - 0x58000000000LL;
        v14 = MiLockPageInline(v13);
        if ( (((unsigned int)HIDWORD(*(_QWORD *)(v13 + 40)) >> 8) & 0x3FF) == v8 )
        {
          v16 = *(_BYTE *)(v13 + 34) & 7;
          if ( v16 == 5 )
          {
            if ( (*(_BYTE *)(v13 + 35) & 0x40) == 0
              || (*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) != 0xFFFFFFFFFFFFFFFCuLL )
            {
LABEL_55:
              _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
              {
                v24 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick((__int64)v24);
              }
              __writecr8(v14);
              KeBugCheckEx(0x1Au, 0x41000uLL, v5, v16, 0LL);
            }
            MiUnlinkPageFromBadList((_QWORD *)(48 * v5 - 0x58000000000LL), 0);
            MiAcquireNonPagedResourcesForce((ULONG_PTR *)a2);
            MiReleaseNonPagedResources(a1, 1uLL);
            *(_QWORD *)(v13 + 40) ^= (*(_QWORD *)(v13 + 40) ^ ((unsigned __int64)v10 << 40)) & 0x3FF0000000000LL;
            if ( a2 != (unsigned __int16 *)&MiSystemPartition )
            {
              ++*((_QWORD *)a2 + 890);
              *((_BYTE *)a2 + 12) = 1;
            }
            --*(_QWORD *)(a1 + 7120);
            *(_BYTE *)(a1 + 12) = 1;
            MiInsertPageInList(48 * v5 - 0x58000000000LL, 32);
            ++v9;
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
            {
              v17 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)v17);
            }
          }
          else
          {
            if ( v16 > 1 )
              goto LABEL_55;
            v18 = MiFreeZeroPageSizeIndex(48 * v5 - 0x58000000000LL);
            v19 = v18;
            if ( v18 != -1 )
            {
              v20 = MiLargePageSizes[v18];
              _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
              {
                v21 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick((__int64)v21);
              }
              __writecr8(v14);
              if ( a2 != (unsigned __int16 *)&MiSystemPartition )
              {
                *((_QWORD *)a2 + 890) += v20;
                *((_BYTE *)a2 + 12) = 1;
              }
              if ( (unsigned int)MiMoveLargeFreePage(v5, v19, a1, a2) == 1 )
              {
                v5 += v20;
                *(_BYTE *)(a1 + 12) = 1;
                v9 += v20;
                *(_QWORD *)(a1 + 7120) -= v20;
              }
              else if ( a2 != (unsigned __int16 *)&MiSystemPartition )
              {
                *((_QWORD *)a2 + 890) -= v20;
                *((_BYTE *)a2 + 12) = 1;
              }
              v10 = v26;
              --v5;
              v8 = v25;
              goto LABEL_53;
            }
            MiUnlinkFreeOrZeroedPage(v5, 0LL, 0);
            if ( a2 != (unsigned __int16 *)&MiSystemPartition )
            {
              ++*((_QWORD *)a2 + 890);
              *((_BYTE *)a2 + 12) = 1;
            }
            --*(_QWORD *)(a1 + 7120);
            v10 = v26;
            *(_BYTE *)(a1 + 12) = 1;
            *(_QWORD *)(v13 + 40) ^= (*(_QWORD *)(v13 + 40) ^ ((unsigned __int64)v26 << 40)) & 0x3FF0000000000LL;
            MiInsertPageInFreeOrZeroedList(v5, ((*(_DWORD *)(v13 + 16) & 0x3E0) != 0LL) + 1);
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
            {
              v22 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)v22);
            }
            ++v9;
          }
          v8 = v25;
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
          {
            v15 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v15);
          }
        }
        __writecr8(v14);
      }
LABEL_53:
      v11 = v27;
      ++v5;
    }
    while ( v5 != v28 );
  }
  return v9;
}
