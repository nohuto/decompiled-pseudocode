/*
 * XREFs of MiTradePage @ 0x1400B9240
 * Callers:
 *     MiClaimPhysicalRun @ 0x1400B9088 (MiClaimPhysicalRun.c)
 * Callees:
 *     MiIsPfn @ 0x140005F30 (MiIsPfn.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002C210 (MiUnlinkFreeOrZeroedPage.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiFreeZeroPageSizeIndex @ 0x14002DE60 (MiFreeZeroPageSizeIndex.c)
 *     MiSetPfnTbFlushStamp @ 0x140096DC4 (MiSetPfnTbFlushStamp.c)
 *     MiPfnZeroingNeeded @ 0x14009735C (MiPfnZeroingNeeded.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400B9B40 (MiIsPfnFromSlabAllocation.c)
 *     MiIsPfnFileOnly @ 0x1400B9E30 (MiIsPfnFileOnly.c)
 *     MiActivePageClaimCandidate @ 0x1400BA8C0 (MiActivePageClaimCandidate.c)
 *     MiInvalidPteConforms @ 0x1400BD280 (MiInvalidPteConforms.c)
 *     MiTradeTransitionPage @ 0x1400C32D4 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiReturnFreeZeroPage @ 0x1400C49C0 (MiReturnFreeZeroPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiDemoteLargeFreePage @ 0x1400F75C4 (MiDemoteLargeFreePage.c)
 *     MiDrainZeroLookasides @ 0x140127A1C (MiDrainZeroLookasides.c)
 *     MiAddMdlPageToTradeBlock @ 0x14012DC64 (MiAddMdlPageToTradeBlock.c)
 *     MiTrimSharedPage @ 0x14012F104 (MiTrimSharedPage.c)
 *     MiSwapStackPage @ 0x140134EA4 (MiSwapStackPage.c)
 *     MiLargeFreePageToMdl @ 0x14017C02C (MiLargeFreePageToMdl.c)
 *     MiLockAndInsertPageInFreeList @ 0x140193C2C (MiLockAndInsertPageInFreeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReuseStandbyPage @ 0x1402DA660 (MiReuseStandbyPage.c)
 *     MiPfnLargeBitSet @ 0x1402E6AC4 (MiPfnLargeBitSet.c)
 */

__int64 __fastcall MiTradePage(__int64 *a1, unsigned __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rsi
  __int64 v4; // r10
  int v5; // eax
  __int64 v7; // r13
  int v9; // r15d
  __int64 v10; // rbx
  __int64 CurrentIrql; // rbp
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r11
  __int64 v15; // r8
  unsigned int v16; // r8d
  __int64 v17; // r10
  char v18; // al
  __int64 active; // rax
  __int64 result; // rax
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned int v25; // edx
  ULONG_PTR v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // ecx
  __int64 v32; // rcx
  int v33; // eax
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rax
  __int64 v36; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v38; // rcx
  struct _KPRCB *v39; // rcx
  struct _KPRCB *v40; // rcx
  __int64 v41; // r14
  struct _KPRCB *v42; // rcx
  struct _KPRCB *v43; // rcx
  signed __int32 v44[8]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v45[8]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v46; // [rsp+38h] [rbp-70h]
  __int64 v47; // [rsp+40h] [rbp-68h]
  __int64 v48; // [rsp+48h] [rbp-60h] BYREF
  __int64 v49; // [rsp+50h] [rbp-58h]
  unsigned __int64 v50; // [rsp+58h] [rbp-50h]
  unsigned int v51; // [rsp+B8h] [rbp+10h]
  unsigned int v52; // [rsp+B8h] [rbp+10h]
  int v53; // [rsp+B8h] [rbp+10h]
  int v54; // [rsp+C0h] [rbp+18h] BYREF
  int v55; // [rsp+C8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0LL;
  v4 = a1[1];
  v5 = *((_DWORD *)a1 + 8);
  v7 = *a1;
  a1[6] = 0LL;
  v46 = v4;
  v55 = v5;
  v9 = v2 & 0x400000;
  v47 = 0LL;
  v48 = -1LL;
  v10 = 48 * a2 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v49 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v54 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v54);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  while ( 1 )
  {
    if ( !(unsigned int)MiIsPfn(a2) )
      goto LABEL_17;
    if ( *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) != v7 )
      break;
    v15 = *(_BYTE *)(v10 + 34) & 7;
    if ( (_DWORD)v15 == 5 )
    {
      if ( (v14 | *(_QWORD *)(v10 + 8)) == 0xFFFFFFFFFFFFFFFCuLL
        || !(unsigned int)MiInvalidPteConforms(*(_QWORD *)(v10 + 16)) )
      {
        goto LABEL_17;
      }
      if ( qword_140465800 )
      {
        if ( (v24 & 0x10) != 0 )
          v24 &= ~0x10uLL;
        else
          v24 &= ~qword_140465800;
      }
      if ( HIDWORD(v24) != 4294967294 || v23 == v10 )
        goto LABEL_17;
      v25 = dword_1404657B0 & a2 | (*(_QWORD *)(v10 + 40) >> 58 << byte_14046574D) | (((*(_QWORD *)(v10 + 40) >> 36) & 3) << byte_14046574E);
      v52 = v25;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v25 = v52;
      }
      __writecr8((unsigned __int8)CurrentIrql);
      MiDrainZeroLookasides(v7, 48 * a2 - 0x58000000000LL, a1[2], v25);
      v47 = 48 * a2 - 0x58000000000LL;
      MiLockPageInline(v47);
    }
    else
    {
      if ( (unsigned int)MiIsPfnFileOnly(48 * a2 - 0x58000000000LL, v12, v15, v13) == 1
        || (unsigned int)MiIsPfnFromSlabAllocation(48 * a2 - 0x58000000000LL) )
      {
        goto LABEL_17;
      }
      if ( v16 <= 1 )
      {
        v21 = MiFreeZeroPageSizeIndex(48 * a2 - 0x58000000000LL);
        v22 = v21;
        v51 = v21;
        if ( v21 == -1 )
        {
          if ( v9 || (unsigned int)MiUnlinkFreeOrZeroedPage(a2, 0LL, 0) )
          {
            v3 = 1LL;
            MiAddMdlPageToTradeBlock(a1, a2, 0LL);
            goto LABEL_17;
          }
          goto LABEL_126;
        }
        v34 = MiLargePageSizes[v21];
        v50 = v34;
        if ( (v2 & 0x2000000) != 0 && v34 >= 0x200 || (v2 & 0x1000000) != 0 && v34 == 16 )
          goto LABEL_17;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
        {
          v38 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v38);
          v22 = v51;
          v34 = v50;
        }
        __writecr8((unsigned __int8)CurrentIrql);
        if ( (a2 & ~(v34 - 1)) == a2 && (v2 & 0x400000) == 0 && a1[2] >= v34 )
        {
          v35 = v34 + a2 - 1;
          if ( v35 <= a1[7] )
          {
            if ( (unsigned int)MiLargeFreePageToMdl(v7, v35, v22, a1[8]) == 1 )
            {
              v3 = v50;
              if ( a1[8] && MiPfnZeroingNeeded(48 * a2 - 0x58000000000LL, v55) )
                *(_QWORD *)(v36 + 24) = 1LL;
              goto LABEL_20;
            }
            v22 = v51;
          }
        }
        if ( (unsigned int)MiDemoteLargeFreePage(v7, a2, v22) != 1 )
          goto LABEL_20;
      }
      else
      {
        if ( *(_QWORD *)(v17 + 16) && (v18 = *(_BYTE *)(v10 + 35), v18 >= 0) )
        {
          if ( v16 <= 4 )
          {
            if ( (v2 & 0x4000000) == 0 && *(__int64 *)(v10 + 8) >= 0 || (v2 & 0x200000) != 0 && (v18 & 0x40) != 0 )
              goto LABEL_17;
            v33 = MiTradeTransitionPage(48 * a2 - 0x58000000000LL, v2, (__int64)&v48);
            if ( v33 == 3 )
            {
              if ( *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) == v7 )
              {
                if ( v9 )
                {
                  v32 = 48 * a2 - 0x58000000000LL;
LABEL_115:
                  MiLockAndInsertPageInFreeList(v32);
                }
LABEL_44:
                v3 = 1LL;
                MiAddMdlPageToTradeBlock(a1, a2, 1LL);
                goto LABEL_20;
              }
              goto LABEL_114;
            }
            if ( v33 != 2 )
              goto LABEL_20;
            goto LABEL_53;
          }
          if ( v16 != 6 )
            goto LABEL_17;
        }
        else
        {
          if ( v16 == 2 )
          {
            if ( *(_WORD *)(v10 + 32) )
              goto LABEL_17;
            if ( (unsigned int)MiReuseStandbyPage(48 * a2 - 0x58000000000LL) )
            {
              v3 = 1LL;
              MiAddMdlPageToTradeBlock(a1, a2, 1LL);
              goto LABEL_17;
            }
LABEL_126:
            MiReturnFreeZeroPage(48 * a2 - 0x58000000000LL, 0LL);
LABEL_17:
            if ( (_BYTE)CurrentIrql != 17 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags
                && (KiIrqlFlags & 1) != 0
                && KeGetCurrentIrql() >= 2u
                && (unsigned __int8)CurrentIrql < 2u )
              {
                v43 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v43);
              }
              __writecr8((unsigned __int8)CurrentIrql);
            }
            goto LABEL_20;
          }
          if ( v16 != 6 )
            goto LABEL_17;
          if ( (*(_BYTE *)(v10 + 34) & 0x10) != 0 )
            goto LABEL_17;
          if ( *(_WORD *)(v10 + 32) != 1 )
            goto LABEL_17;
          if ( ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 2 )
            goto LABEL_17;
          if ( (*(_BYTE *)v10 & 1) == 0 )
            goto LABEL_17;
          v18 = *(_BYTE *)(v10 + 35);
          if ( (v18 & 8) != 0 )
            goto LABEL_17;
        }
        if ( (v2 & 0x200000) != 0 && (v18 & 0x40) != 0 )
          goto LABEL_17;
        if ( ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 2 )
        {
          if ( (_BYTE)v49 == 2 || (v2 & 8) != 0 )
            goto LABEL_17;
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
          {
            v39 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v39);
            LODWORD(v17) = v46;
          }
          __writecr8((unsigned __int8)CurrentIrql);
          if ( (unsigned int)MiSwapStackPage(48 * (int)a2, v17, *((_DWORD *)a1 + 7), (unsigned int)&v48, (__int64)v45) )
            goto LABEL_42;
          if ( ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 2 )
            goto LABEL_20;
        }
        else
        {
          active = MiActivePageClaimCandidate(v7, 48 * a2 - 0x58000000000LL, 1LL);
          if ( active )
          {
            a1[6] = active;
            goto LABEL_17;
          }
          if ( (_BYTE)v49 == 2 || (v2 & 8) != 0 )
            goto LABEL_17;
          v26 = 48 * a2 - 0x58000000000LL;
          if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
            v27 = MiTrimSharedPage(v26, (unsigned __int8)CurrentIrql, v2);
          else
            v27 = MiStealPage(v26, *((_DWORD *)a1 + 7), (__int64)&v48);
          v31 = v27;
          v53 = v27;
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
          {
            v40 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v40);
            v31 = v53;
          }
          __writecr8((unsigned __int8)CurrentIrql);
          if ( !v31 )
            goto LABEL_20;
          if ( v31 != 2 )
          {
            if ( *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) == v7 )
            {
LABEL_42:
              *(_QWORD *)(v10 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList(v10 + 16, v28, v29, v30);
              v32 = 48 * a2 - 0x58000000000LL;
              if ( v9 )
                goto LABEL_115;
              _InterlockedOr(v44, 0);
              MiSetPfnTbFlushStamp(v32, KiTbFlushTimeStamp, 0);
              goto LABEL_44;
            }
LABEL_114:
            MiLockAndInsertPageInFreeList(48 * a2 - 0x58000000000LL);
            goto LABEL_20;
          }
        }
      }
LABEL_53:
      LOBYTE(CurrentIrql) = MiLockPageInline(48 * a2 - 0x58000000000LL);
    }
  }
  v41 = (unsigned int)MiPfnLargeBitSet(&MiSystemPartition, a2);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
  {
    v42 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v42);
  }
  __writecr8((unsigned __int8)CurrentIrql);
  if ( (_DWORD)v41 != -1 )
    a1[6] = MiLargePageSizes[v41];
LABEL_20:
  result = v3;
  a1[5] = v48;
  return result;
}
