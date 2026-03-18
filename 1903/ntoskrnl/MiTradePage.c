/*
 * XREFs of MiTradePage @ 0x1400D93C0
 * Callers:
 *     MiClaimPhysicalRun @ 0x1400D9208 (MiClaimPhysicalRun.c)
 * Callees:
 *     MiIsPfn @ 0x140005EA0 (MiIsPfn.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002BE20 (MiUnlinkFreeOrZeroedPage.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiFreeZeroPageSizeIndex @ 0x14002DA70 (MiFreeZeroPageSizeIndex.c)
 *     MiTradeTransitionPage @ 0x14009D6C8 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400A1750 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReturnFreeZeroPage @ 0x1400A1788 (MiReturnFreeZeroPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1400A3F94 (MiSetPfnTbFlushStamp.c)
 *     MiPfnZeroingNeeded @ 0x1400A452C (MiPfnZeroingNeeded.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiIsPfnFileOnly @ 0x1400D9FB0 (MiIsPfnFileOnly.c)
 *     MiActivePageClaimCandidate @ 0x1400DAA40 (MiActivePageClaimCandidate.c)
 *     MiInvalidPteConforms @ 0x1400DD400 (MiInvalidPteConforms.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiDrainZeroLookasides @ 0x140126FFC (MiDrainZeroLookasides.c)
 *     MiAddMdlPageToTradeBlock @ 0x14012D214 (MiAddMdlPageToTradeBlock.c)
 *     MiTrimSharedPage @ 0x14012E7B4 (MiTrimSharedPage.c)
 *     MiDemoteLargeFreePage @ 0x140130F84 (MiDemoteLargeFreePage.c)
 *     MiSwapStackPage @ 0x1401345A4 (MiSwapStackPage.c)
 *     MiLargeFreePageToMdl @ 0x14017B93C (MiLargeFreePageToMdl.c)
 *     MiLockAndInsertPageInFreeList @ 0x14019344C (MiLockAndInsertPageInFreeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReuseStandbyPage @ 0x1402DA900 (MiReuseStandbyPage.c)
 *     MiPfnLargeBitSet @ 0x1402E6D64 (MiPfnLargeBitSet.c)
 */

__int64 __fastcall MiTradePage(__int64 *a1, unsigned __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rsi
  __int64 *v4; // r10
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
  int v17; // r9d
  __int64 *v18; // r10
  char v19; // al
  __int64 active; // rax
  __int64 result; // rax
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned int v26; // edx
  ULONG_PTR v27; // rcx
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rcx
  int v31; // eax
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rax
  __int64 v34; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v36; // rcx
  struct _KPRCB *v37; // rcx
  struct _KPRCB *v38; // rcx
  __int64 v39; // r14
  struct _KPRCB *v40; // rcx
  struct _KPRCB *v41; // rcx
  signed __int32 v42[8]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v43[8]; // [rsp+30h] [rbp-78h] BYREF
  __int64 *v44; // [rsp+38h] [rbp-70h]
  __int64 v45; // [rsp+40h] [rbp-68h]
  __int64 v46; // [rsp+48h] [rbp-60h] BYREF
  __int64 v47; // [rsp+50h] [rbp-58h]
  unsigned __int64 v48; // [rsp+58h] [rbp-50h]
  unsigned int v49; // [rsp+B8h] [rbp+10h]
  unsigned int v50; // [rsp+B8h] [rbp+10h]
  int v51; // [rsp+B8h] [rbp+10h]
  int v52; // [rsp+C0h] [rbp+18h] BYREF
  int v53; // [rsp+C8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0LL;
  v4 = (__int64 *)a1[1];
  v5 = *((_DWORD *)a1 + 8);
  v7 = *a1;
  a1[6] = 0LL;
  v44 = v4;
  v53 = v5;
  v9 = v2 & 0x400000;
  v45 = 0LL;
  v46 = -1LL;
  v10 = 48 * a2 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v47 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v52 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v52);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  while ( 1 )
  {
    if ( !(unsigned int)MiIsPfn(a2) )
      goto LABEL_17;
    if ( *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) != v7 )
      break;
    v15 = *(_BYTE *)(v10 + 34) & 7;
    if ( (_DWORD)v15 == 5 )
    {
      if ( (v14 | *(_QWORD *)(v10 + 8)) == 0xFFFFFFFFFFFFFFFCuLL
        || !(unsigned int)MiInvalidPteConforms(*(_QWORD *)(v10 + 16)) )
      {
        goto LABEL_17;
      }
      if ( qword_140465B00 )
      {
        if ( (v25 & 0x10) != 0 )
          v25 &= ~0x10uLL;
        else
          v25 &= ~qword_140465B00;
      }
      if ( HIDWORD(v25) != 4294967294 || v24 == v10 )
        goto LABEL_17;
      v26 = dword_140465AB0 & a2 | (*(_QWORD *)(v10 + 40) >> 58 << byte_140465A4D) | (((*(_QWORD *)(v10 + 40) >> 36) & 3) << byte_140465A4E);
      v50 = v26;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v26 = v50;
      }
      __writecr8((unsigned __int8)CurrentIrql);
      MiDrainZeroLookasides(v7, 48 * a2 - 0x58000000000LL, a1[2], v26);
      v45 = 48 * a2 - 0x58000000000LL;
      MiLockPageInline(v45);
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
        v22 = MiFreeZeroPageSizeIndex(48 * a2 - 0x58000000000LL);
        v23 = v22;
        v49 = v22;
        if ( v22 == -1 )
        {
          if ( v9 || (unsigned int)MiUnlinkFreeOrZeroedPage(a2, 0LL, 0) )
          {
            v3 = 1LL;
            MiAddMdlPageToTradeBlock(a1, a2, 0LL);
            goto LABEL_17;
          }
          goto LABEL_126;
        }
        v32 = MiLargePageSizes[v22];
        v48 = v32;
        if ( (v2 & 0x2000000) != 0 && v32 >= 0x200 || (v2 & 0x1000000) != 0 && v32 == 16 )
          goto LABEL_17;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
        {
          v36 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v36);
          v23 = v49;
          v32 = v48;
        }
        __writecr8((unsigned __int8)CurrentIrql);
        if ( (a2 & ~(v32 - 1)) == a2 && (v2 & 0x400000) == 0 && a1[2] >= v32 )
        {
          v33 = v32 + a2 - 1;
          if ( v33 <= a1[7] )
          {
            if ( (unsigned int)MiLargeFreePageToMdl(v7, v33, v23, a1[8]) == 1 )
            {
              v3 = v48;
              if ( a1[8] && MiPfnZeroingNeeded(48 * a2 - 0x58000000000LL, v53) )
                *(_QWORD *)(v34 + 24) = 1LL;
              goto LABEL_20;
            }
            v23 = v49;
          }
        }
        if ( (unsigned int)MiDemoteLargeFreePage(v7, a2, v23) != 1 )
          goto LABEL_20;
      }
      else
      {
        if ( v18[2] && (v19 = *(_BYTE *)(v10 + 35), v19 >= 0) )
        {
          if ( v16 <= 4 )
          {
            if ( (v2 & 0x4000000) == 0 && *(__int64 *)(v10 + 8) >= 0 || (v2 & 0x200000) != 0 && (v19 & 0x40) != 0 )
              goto LABEL_17;
            v31 = MiTradeTransitionPage(48 * a2 - 0x58000000000LL, CurrentIrql, v18, v17, v2, &v46);
            if ( v31 == 3 )
            {
              if ( *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) == v7 )
              {
                if ( v9 )
                {
                  v30 = 48 * a2 - 0x58000000000LL;
LABEL_115:
                  MiLockAndInsertPageInFreeList(v30);
                }
LABEL_44:
                v3 = 1LL;
                MiAddMdlPageToTradeBlock(a1, a2, 1LL);
                goto LABEL_20;
              }
              goto LABEL_114;
            }
            if ( v31 != 2 )
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
            MiReturnFreeZeroPage(48 * a2 - 0x58000000000LL);
LABEL_17:
            if ( (_BYTE)CurrentIrql != 17 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags
                && (KiIrqlFlags & 1) != 0
                && KeGetCurrentIrql() >= 2u
                && (unsigned __int8)CurrentIrql < 2u )
              {
                v41 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v41);
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
          v19 = *(_BYTE *)(v10 + 35);
          if ( (v19 & 8) != 0 )
            goto LABEL_17;
        }
        if ( (v2 & 0x200000) != 0 && (v19 & 0x40) != 0 )
          goto LABEL_17;
        if ( ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 2 )
        {
          if ( (_BYTE)v47 == 2 || (v2 & 8) != 0 )
            goto LABEL_17;
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
          {
            v37 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v37);
            LODWORD(v18) = (_DWORD)v44;
          }
          __writecr8((unsigned __int8)CurrentIrql);
          if ( (unsigned int)MiSwapStackPage(
                               48 * (int)a2,
                               (_DWORD)v18,
                               *((_DWORD *)a1 + 7),
                               (unsigned int)&v46,
                               (__int64)v43) )
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
          if ( (_BYTE)v47 == 2 || (v2 & 8) != 0 )
            goto LABEL_17;
          v27 = 48 * a2 - 0x58000000000LL;
          if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
            v28 = MiTrimSharedPage(v27, (unsigned __int8)CurrentIrql, v2);
          else
            v28 = MiStealPage(v27, CurrentIrql, v2, v44, *((_DWORD *)a1 + 7), (ULONG_PTR *)&v46);
          v29 = v28;
          v51 = v28;
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
          {
            v38 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v38);
            v29 = v51;
          }
          __writecr8((unsigned __int8)CurrentIrql);
          if ( !v29 )
            goto LABEL_20;
          if ( v29 != 2 )
          {
            if ( *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) == v7 )
            {
LABEL_42:
              *(_QWORD *)(v10 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v10 + 16));
              v30 = 48 * a2 - 0x58000000000LL;
              if ( v9 )
                goto LABEL_115;
              _InterlockedOr(v42, 0);
              MiSetPfnTbFlushStamp(v30, KiTbFlushTimeStamp, 0);
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
  v39 = (unsigned int)MiPfnLargeBitSet(&MiSystemPartition, a2);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
  {
    v40 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v40);
  }
  __writecr8((unsigned __int8)CurrentIrql);
  if ( (_DWORD)v39 != -1 )
    a1[6] = MiLargePageSizes[v39];
LABEL_20:
  result = v3;
  a1[5] = v46;
  return result;
}
