/*
 * XREFs of MiPurgeZeroList @ 0x140160BEC
 * Callers:
 *     MiFinishResume @ 0x140160B40 (MiFinishResume.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002C210 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFreeZeroPageSizeIndex @ 0x14002DE60 (MiFreeZeroPageSizeIndex.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiPurgeLargeZeroNodePages @ 0x140160D28 (MiPurgeLargeZeroNodePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
    if ( dword_1404657B4 )
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
      while ( v2 < dword_1404657B4 );
    }
    *(_BYTE *)(a1 + 4765) = 0;
  }
}
