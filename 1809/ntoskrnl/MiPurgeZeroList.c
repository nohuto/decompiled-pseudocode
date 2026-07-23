/*
 * XREFs of MiPurgeZeroList @ 0x140151ABC
 * Callers:
 *     MiFinishResume @ 0x140151A10 (MiFinishResume.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140039AD0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFreeZeroPageSizeIndex @ 0x14009B3EC (MiFreeZeroPageSizeIndex.c)
 *     MiPurgeLargeZeroNodePages @ 0x140151BF8 (MiPurgeLargeZeroNodePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiPurgeZeroList(__int64 a1)
{
  unsigned int v2; // r14d
  ULONG_PTR *v3; // rsi
  ULONG_PTR v4; // rbx
  __int64 v5; // rbp
  unsigned __int8 v6; // r12
  struct _KPRCB *CurrentPrcb; // rcx

  if ( *(_BYTE *)(a1 + 4765) )
  {
    MiPurgeLargeZeroNodePages();
    v2 = 0;
    if ( dword_14043B14C )
    {
      v3 = (ULONG_PTR *)(*(_QWORD *)(a1 + 2112) + 16LL);
      do
      {
        while ( 1 )
        {
          v4 = *v3;
          if ( *v3 == 0xFFFFFFFFFLL )
            break;
          v5 = 48 * v4 - 0x58000000000LL;
          v6 = MiLockPageInline(v5);
          if ( v4 <= 0xFFFFFFFFFLL
            && (*(_QWORD *)(48 * v4 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0
            && (*(_BYTE *)(v5 + 34) & 7) == 0
            && (unsigned int)MiFreeZeroPageSizeIndex(48 * v4 - 0x58000000000LL) == -1 )
          {
            MiUnlinkFreeOrZeroedPage(v4, 0LL, 0);
            MiInsertPageInFreeOrZeroedList(v4, 2);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          __writecr8(v6);
        }
        ++v2;
        v3 += 5;
      }
      while ( v2 < dword_14043B14C );
    }
    *(_BYTE *)(a1 + 4765) = 0;
  }
}
