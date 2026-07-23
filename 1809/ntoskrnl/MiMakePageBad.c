/*
 * XREFs of MiMakePageBad @ 0x1402CF318
 * Callers:
 *     MiScrubLargeMappedPage @ 0x1402CF428 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x1402CF8B8 (MiScrubNode.c)
 *     MiScrubProcessPhysicalPages @ 0x1408515B0 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiMakePageBad(ULONG_PTR a1, char a2)
{
  int v4; // esi
  unsigned __int8 v5; // di
  __int64 v6; // rcx
  ULONG_PTR *v7; // r14
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v5 = MiLockPageInline(a1);
  else
    v5 = 17;
  v6 = (*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL;
  v7 = *(ULONG_PTR **)(qword_14043B808 + 8 * v6);
  if ( (*(_BYTE *)(a1 + 35) & 0x40) == 0 )
  {
    MiChargeCommit(*(_QWORD *)(qword_14043B808 + 8 * v6), 1uLL, 4u);
    MiChargeResident(v7, 1uLL, 0xFFFFFFFFLL);
    *(_BYTE *)(a1 + 35) |= 0x40u;
  }
  if ( (a2 & 2) != 0 )
    MiInsertPageInList(a1, 32);
  if ( v4 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v5);
  }
  _InterlockedIncrement(&dword_14043B93C);
}
