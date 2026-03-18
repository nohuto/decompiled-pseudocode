/*
 * XREFs of MiTradeTransitionPage @ 0x1400C32D4
 * Callers:
 *     MiTradePage @ 0x1400B9240 (MiTradePage.c)
 * Callees:
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400B9B40 (MiIsPfnFromSlabAllocation.c)
 *     MiIsPfnFileOnly @ 0x1400B9E30 (MiIsPfnFileOnly.c)
 *     MiReplaceTransitionPage @ 0x1400C2CE8 (MiReplaceTransitionPage.c)
 *     MiCanPageMove @ 0x1400C359C (MiCanPageMove.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTradeTransitionPage(
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a2,
        __int64 *a3,
        int a4,
        int a5,
        __int64 *a6)
{
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // edx
  __int64 Page; // rax
  __int64 v15; // r12
  ULONG_PTR v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 v20; // r15
  BOOL IsPfnFromSlabAllocation; // eax
  int v22; // r8d
  unsigned int v24; // r14d
  struct _KPRCB *v25; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v27; // rcx
  struct _KPRCB *v28; // rcx

  if ( *(_WORD *)(BugCheckParameter2 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    if ( (unsigned int)MiCanPageMove(BugCheckParameter2) && !MiIsPfnFromSlabAllocation(BugCheckParameter2) )
    {
      v9 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(a2);
      v10 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
      if ( a4 == -1 )
      {
        v11 = MiPageToNode((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
        v12 = 128LL;
        v13 = dword_1404657B0 & v10 | (v11 << byte_14046574D) | (((*(_QWORD *)(BugCheckParameter2 + 40) >> 36) & 3) << byte_14046574E);
        if ( (a5 & 0x3000000) != 0 )
          v12 = 65664LL;
      }
      else
      {
        v12 = 48LL;
        v13 = dword_1404657B0 & v10 | a4 & ~dword_1404657B0;
      }
      Page = MiGetPage(v9, v13, v12);
      v15 = Page;
      if ( Page == -1 )
        return 1LL;
      v16 = 48 * Page - 0x58000000000LL;
      v20 = MiLockPageInline(BugCheckParameter2);
      if ( v16 == BugCheckParameter2 )
      {
        v15 = -1LL;
LABEL_19:
        *(_QWORD *)(BugCheckParameter2 + 16) = ZeroPte;
        MiSetOriginalPtePfnFromFreeList(BugCheckParameter2 + 16, v17, v18, v19);
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
        || MiIsPfnFileOnly(BugCheckParameter2) )
      {
        v22 = 0;
      }
      else
      {
        IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(BugCheckParameter2);
        v22 = 0;
        if ( !IsPfnFromSlabAllocation
          && !*(_WORD *)(BugCheckParameter2 + 32)
          && v9 == *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL))
          && (unsigned int)MiCanPageMove(BugCheckParameter2) )
        {
          if ( (unsigned __int8)((*(_BYTE *)(BugCheckParameter2 + 34) & 7) - 2) <= 2u )
          {
            MiReplaceTransitionPage(BugCheckParameter2, v16, v22, a3);
            goto LABEL_19;
          }
          v24 = 2;
          goto LABEL_27;
        }
      }
      v24 = v22;
LABEL_27:
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
