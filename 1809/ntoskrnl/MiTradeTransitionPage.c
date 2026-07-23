/*
 * XREFs of MiTradeTransitionPage @ 0x14011819C
 * Callers:
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiCanPageMove @ 0x140118464 (MiCanPageMove.c)
 *     MiReplaceTransitionPage @ 0x1401184DC (MiReplaceTransitionPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTradeTransitionPage(__int64 a1, unsigned __int8 a2, __int64 a3, int a4, int a5, __int64 *a6)
{
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // rbp
  int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // ebp
  __int64 Page; // rax
  __int64 v17; // r12
  __int64 v18; // rbp
  unsigned __int8 v19; // r15
  BOOL IsPfnFromSlabAllocation; // eax
  unsigned int v21; // r8d
  unsigned int v22; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v24; // rcx
  struct _KPRCB *v25; // rcx
  struct _KPRCB *v26; // rcx

  if ( *(_WORD *)(a1 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_3;
  }
  if ( !(unsigned int)MiCanPageMove(a1) || MiIsPfnFromSlabAllocation(a1) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_3:
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(a2);
    return 0LL;
  }
  v10 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
  {
    v24 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v24);
  }
  __writecr8(a2);
  v11 = (a1 + 0x58000000000LL) / 48;
  if ( a4 == -1 )
  {
    v12 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
    v13 = MiPageToNode((a1 + 0x58000000000LL) / 48, 0);
    v14 = 128;
    v15 = (v13 << byte_14043B109) | dword_14043B148 & v11 | ((_DWORD)v12 << byte_14043B10A);
    if ( (a5 & 0x3000000) != 0 )
      v14 = 65664;
  }
  else
  {
    v14 = 48;
    v15 = dword_14043B148 & v11 | a4 & ~dword_14043B148;
  }
  Page = MiGetPage(v10, v15, v14);
  v17 = Page;
  if ( Page == -1 )
    return 1LL;
  v18 = 48 * Page - 0x58000000000LL;
  v19 = MiLockPageInline(a1);
  if ( v18 == a1 )
  {
    v17 = -1LL;
LABEL_22:
    *(_QWORD *)(a1 + 16) = ZeroPte;
    MiSetOriginalPtePfnFromFreeList((_QWORD *)(a1 + 16));
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
    {
      v26 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v26);
    }
    __writecr8(v19);
    if ( a6 )
      *a6 = v17;
    return 3LL;
  }
  if ( v11 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 || MiIsPfnFileOnly(a1) )
  {
    v21 = 0;
LABEL_29:
    v22 = v21;
    goto LABEL_27;
  }
  IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(a1);
  v21 = 0;
  if ( IsPfnFromSlabAllocation
    || *(_WORD *)(a1 + 32)
    || v10 != *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))
    || !(unsigned int)MiCanPageMove(a1) )
  {
    goto LABEL_29;
  }
  if ( (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - 2) <= 2u )
  {
    MiReplaceTransitionPage(a1, v18, a3);
    goto LABEL_22;
  }
  v22 = 2;
LABEL_27:
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
  {
    v25 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v25);
  }
  __writecr8(v19);
  MiReleaseFreshPage(v18);
  return v22;
}
