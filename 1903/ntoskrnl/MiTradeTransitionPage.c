/*
 * XREFs of MiTradeTransitionPage @ 0x14009D6C8
 * Callers:
 *     MiTradePage @ 0x1400D93C0 (MiTradePage.c)
 * Callees:
 *     MiReplaceTransitionPage @ 0x14009CF60 (MiReplaceTransitionPage.c)
 *     MiCanPageMove @ 0x14009D990 (MiCanPageMove.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400A1750 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiIsPfnFileOnly @ 0x1400D9FB0 (MiIsPfnFileOnly.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTradeTransitionPage(ULONG_PTR a1, unsigned __int8 a2, __int64 *a3, int a4, int a5, __int64 *a6)
{
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 Page; // rax
  __int64 v15; // r12
  ULONG_PTR v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 v20; // r15
  int IsPfnFromSlabAllocation; // eax
  int v22; // r8d
  unsigned int v24; // r14d
  struct _KPRCB *v25; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v27; // rcx
  struct _KPRCB *v28; // rcx

  if ( *(_WORD *)(a1 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    if ( (unsigned int)MiCanPageMove(a1) && !(unsigned int)MiIsPfnFromSlabAllocation(a1) )
    {
      v9 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(a2);
      v10 = (__int64)(a1 + 0x58000000000LL) / 48;
      if ( a4 == -1 )
      {
        v11 = MiPageToNode((__int64)(a1 + 0x58000000000LL) / 48);
        v12 = 128LL;
        v13 = dword_140465AB0 & (unsigned int)v10 | (v11 << byte_140465A4D) | (((*(_QWORD *)(a1 + 40) >> 36) & 3) << byte_140465A4E);
        if ( (a5 & 0x3000000) != 0 )
          v12 = 65664LL;
      }
      else
      {
        v12 = 48LL;
        v13 = dword_140465AB0 & (unsigned int)v10 | a4 & ~dword_140465AB0;
      }
      Page = MiGetPage(v9, v13, v12);
      v15 = Page;
      if ( Page == -1 )
        return 1LL;
      v16 = 48 * Page - 0x58000000000LL;
      v20 = MiLockPageInline(a1);
      if ( v16 == a1 )
      {
        v15 = -1LL;
LABEL_19:
        *(_QWORD *)(a1 + 16) = ZeroPte;
        MiSetOriginalPtePfnFromFreeList(a1 + 16, v17, v18, v19);
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v20 < 2u )
        {
          v28 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v28);
        }
        __writecr8(v20);
        if ( a6 )
          *a6 = v15;
        return 3LL;
      }
      if ( v10 > 0xFFFFFFFFFLL
        || (*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0
        || (unsigned int)MiIsPfnFileOnly(a1, v17, v18, v19) == 1 )
      {
        v22 = 0;
      }
      else
      {
        IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(a1);
        v22 = 0;
        if ( !IsPfnFromSlabAllocation
          && !*(_WORD *)(a1 + 32)
          && v9 == *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))
          && (unsigned int)MiCanPageMove(a1) )
        {
          if ( (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - 2) <= 2u )
          {
            MiReplaceTransitionPage(a1, v16, v22, a3);
            goto LABEL_19;
          }
          v24 = 2;
          goto LABEL_27;
        }
      }
      v24 = v22;
LABEL_27:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v20 < 2u )
      {
        v27 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v27);
      }
      __writecr8(v20);
      MiReleaseFreshPage(v16);
      return v24;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
  {
    v25 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v25);
  }
  __writecr8(a2);
  return 0LL;
}
