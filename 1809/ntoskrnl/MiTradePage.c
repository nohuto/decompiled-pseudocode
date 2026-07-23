/*
 * XREFs of MiTradePage @ 0x14009C030
 * Callers:
 *     MiClaimPhysicalRun @ 0x14009BE60 (MiClaimPhysicalRun.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1400296A4 (MiSetPfnTbFlushStamp.c)
 *     MiPfnZeroingNeeded @ 0x14002BDB0 (MiPfnZeroingNeeded.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInvalidPteConforms @ 0x140039720 (MiInvalidPteConforms.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140039AD0 (MiUnlinkFreeOrZeroedPage.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiReturnFreeZeroPage @ 0x14008228C (MiReturnFreeZeroPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiPfnLargeBitSet @ 0x14009AA90 (MiPfnLargeBitSet.c)
 *     MiFreeZeroPageSizeIndex @ 0x14009B3EC (MiFreeZeroPageSizeIndex.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     MiActivePageClaimCandidate @ 0x14009C990 (MiActivePageClaimCandidate.c)
 *     MiIsPfn @ 0x1400A8820 (MiIsPfn.c)
 *     MiTrimSharedPage @ 0x1400E97F0 (MiTrimSharedPage.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x14011819C (MiTradeTransitionPage.c)
 *     MiDrainZeroLookasides @ 0x14011AD10 (MiDrainZeroLookasides.c)
 *     MiAddMdlPageToTradeBlock @ 0x1401270A4 (MiAddMdlPageToTradeBlock.c)
 *     MiLargeFreePageToMdl @ 0x14012B9B8 (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x14012BB74 (MiDemoteLargeFreePage.c)
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     MiLockAndInsertPageInFreeList @ 0x140188D5C (MiLockAndInsertPageInFreeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReuseStandbyPage @ 0x1402C1190 (MiReuseStandbyPage.c)
 */

__int64 __fastcall MiTradePage(__int64 *a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r9d
  __int64 v6; // r10
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 CurrentIrql; // rbp
  unsigned __int8 v12; // r12
  __int64 v13; // r10
  unsigned __int64 v14; // rbp
  unsigned int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // r10
  char v18; // r11
  int v19; // ecx
  char v20; // al
  unsigned __int64 v21; // rbp
  __int64 active; // rax
  __int64 result; // rax
  int v24; // eax
  ULONG_PTR v25; // rcx
  int v26; // eax
  int v27; // ebp
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // r10
  unsigned __int64 v32; // rax
  unsigned int v33; // ebp
  unsigned int v34; // eax
  unsigned int v35; // r9d
  __int64 v36; // r10
  unsigned int v37; // ebp
  unsigned __int64 v38; // rdx
  ULONG_PTR v39; // rdx
  __int64 v40; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v42; // rcx
  struct _KPRCB *v43; // rcx
  struct _KPRCB *v44; // rcx
  __int64 v45; // rbp
  struct _KPRCB *v46; // rcx
  struct _KPRCB *v47; // rcx
  signed __int32 v48[8]; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v49[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v50; // [rsp+38h] [rbp-80h]
  __int64 v51; // [rsp+40h] [rbp-78h]
  __int64 v52; // [rsp+48h] [rbp-70h] BYREF
  __int64 v53; // [rsp+50h] [rbp-68h]
  __int64 v54; // [rsp+58h] [rbp-60h]
  unsigned __int64 v55; // [rsp+60h] [rbp-58h]
  unsigned int v56; // [rsp+C0h] [rbp+8h]
  int v57; // [rsp+C8h] [rbp+10h]
  int v58; // [rsp+D0h] [rbp+18h] BYREF
  int v59; // [rsp+D8h] [rbp+20h]

  v3 = 0LL;
  v4 = *((_DWORD *)a1 + 6);
  v6 = *a1;
  v53 = a1[1];
  v59 = *((_DWORD *)a1 + 8);
  a1[6] = 0LL;
  v56 = v4;
  v50 = v6;
  v8 = v4 & 0x400000;
  if ( (v4 & 0x400000) != 0 )
    v57 = *((_DWORD *)a1 + 7);
  else
    v57 = -1;
  v9 = 0LL;
  v52 = -1LL;
  v51 = 0LL;
  v10 = 48 * a2 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v54 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v58 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v58, v9, a3);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  v12 = CurrentIrql;
  while ( 1 )
  {
    if ( !(unsigned int)MiIsPfn(a2) )
      goto LABEL_22;
    v14 = *(_QWORD *)(v10 + 40);
    if ( *(_QWORD *)(qword_14043B808 + 8 * ((v14 >> 40) & 0x3FF)) != v13 )
      break;
    if ( (*(_BYTE *)(v10 + 34) & 7) == 5 )
    {
      if ( (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
        || !MiInvalidPteConforms(*(_QWORD *)(v10 + 16)) )
      {
        goto LABEL_22;
      }
      v32 = v30;
      if ( qword_14043B180 && (v30 & 0x10) == 0 )
        v32 = ~qword_14043B180 & v30;
      if ( HIDWORD(v32) != 4294967294 || v29 == v10 )
        goto LABEL_22;
      v33 = dword_14043B148 & a2 | (((v14 >> 36) & 3) << byte_14043B10A) | (v14 >> 58 << byte_14043B109);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v31 = v50;
      }
      __writecr8(v12);
      MiDrainZeroLookasides(v31, 48 * a2 - 0x58000000000LL, a1[2], v33);
      v51 = 48 * a2 - 0x58000000000LL;
      MiLockPageInline(v51);
    }
    else
    {
      if ( (unsigned int)MiIsPfnFileOnly(48 * a2 - 0x58000000000LL) == 1
        || byte_14043EC9E
        && _bittest64((const signed __int64 *)qword_14043F2D8, (unsigned __int64)((__int64)(48 * a2) / 48) >> 9) )
      {
        goto LABEL_22;
      }
      if ( v15 <= 1 )
      {
        v34 = MiFreeZeroPageSizeIndex(48 * a2 - 0x58000000000LL);
        v37 = v34;
        if ( v34 == -1 )
        {
          if ( v8 || (unsigned int)MiUnlinkFreeOrZeroedPage(a2, 0LL, 0) )
          {
            v3 = 1LL;
            MiAddMdlPageToTradeBlock(a1, a2, 0LL);
            goto LABEL_22;
          }
          goto LABEL_130;
        }
        v38 = MiLargePageSizes[v34];
        v55 = v38;
        if ( (v35 & 0x2000000) != 0 && v38 >= 0x200 || (v35 & 0x1000000) != 0 && v38 == 16 )
          goto LABEL_22;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
        {
          v42 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v42);
          v35 = v56;
          v36 = v50;
          v38 = v55;
        }
        __writecr8(v12);
        if ( (a2 & ~(v38 - 1)) == a2 && (v35 & 0x400000) == 0 && a1[2] >= v38 )
        {
          v39 = a2 + v38 - 1;
          if ( v39 <= a1[7] )
          {
            if ( (unsigned int)MiLargeFreePageToMdl(v36, v39, v37, a1[8]) == 1 )
            {
              v3 = v55;
              if ( a1[8] && MiPfnZeroingNeeded(48 * a2 - 0x58000000000LL, v59) )
                *(_QWORD *)(v40 + 24) = 1LL;
              goto LABEL_25;
            }
            v36 = v50;
          }
        }
        if ( (unsigned int)MiDemoteLargeFreePage(v36, a2, v37) != 1 )
          goto LABEL_25;
      }
      else
      {
        v19 = v53;
        if ( *(_QWORD *)(v53 + 16) && (v20 = *(_BYTE *)(v10 + 35), v20 >= 0) )
        {
          if ( v15 <= 4 )
          {
            if ( (v16 & 0x4000000) == 0 && *(__int64 *)(v10 + 8) >= 0 || (v16 & 0x200000) != 0 && (v20 & 0x40) != 0 )
              goto LABEL_22;
            v24 = MiTradeTransitionPage(48 * (int)a2, v12, v53, v57, v16, (__int64)&v52);
            if ( v24 == 3 )
            {
              if ( *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) == v50 )
              {
                if ( v8 )
                {
                  v28 = 48 * a2 - 0x58000000000LL;
LABEL_119:
                  MiLockAndInsertPageInFreeList(v28);
                }
LABEL_42:
                v3 = 1LL;
                MiAddMdlPageToTradeBlock(a1, a2, 1LL);
                goto LABEL_25;
              }
              goto LABEL_118;
            }
            if ( v24 != 2 )
              goto LABEL_25;
            goto LABEL_60;
          }
          if ( v15 != 6 )
            goto LABEL_22;
          v21 = v14 >> 54;
        }
        else
        {
          if ( v15 == 2 )
          {
            if ( *(_WORD *)(v10 + 32) )
              goto LABEL_22;
            if ( (unsigned int)MiReuseStandbyPage(48 * a2 - 0x58000000000LL) )
            {
              v3 = 1LL;
              MiAddMdlPageToTradeBlock(a1, a2, 1LL);
              goto LABEL_22;
            }
LABEL_130:
            MiReturnFreeZeroPage(48 * a2 - 0x58000000000LL);
LABEL_22:
            if ( v12 != 17 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
              {
                v47 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v47);
              }
              __writecr8(v12);
            }
            goto LABEL_25;
          }
          if ( v15 != 6 )
            goto LABEL_22;
          if ( (v18 & 0x10) != 0 )
            goto LABEL_22;
          if ( *(_WORD *)(v10 + 32) != 1 )
            goto LABEL_22;
          v21 = v14 >> 54;
          if ( (v21 & 7) == 2 )
            goto LABEL_22;
          if ( (*(_BYTE *)v10 & 1) == 0 )
            goto LABEL_22;
          v20 = *(_BYTE *)(v10 + 35);
          if ( (v20 & 8) != 0 )
            goto LABEL_22;
        }
        if ( (v16 & 0x200000) != 0 && (v20 & 0x40) != 0 )
          goto LABEL_22;
        if ( (v21 & 7) == 2 )
        {
          if ( (_BYTE)v54 == 2 || (v16 & 8) != 0 )
            goto LABEL_22;
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
          {
            v43 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v43);
            v19 = v53;
          }
          __writecr8(v12);
          if ( (unsigned int)MiSwapStackPage(48 * (int)a2, v19, *((_DWORD *)a1 + 7), (unsigned int)&v52, (__int64)v49) )
            goto LABEL_40;
          if ( ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 2 )
            goto LABEL_25;
        }
        else
        {
          active = MiActivePageClaimCandidate(v17, 48 * a2 - 0x58000000000LL, 1LL, v16);
          if ( active )
          {
            a1[6] = active;
            goto LABEL_22;
          }
          if ( (_BYTE)v54 == 2 || (v56 & 8) != 0 )
            goto LABEL_22;
          v25 = 48 * a2 - 0x58000000000LL;
          if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
            v26 = MiTrimSharedPage(v25, v12, v56);
          else
            v26 = MiStealPage(v25, *((_DWORD *)a1 + 7), (__int64)&v52);
          v27 = v26;
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
          {
            v44 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v44);
          }
          __writecr8(v12);
          if ( !v27 )
            goto LABEL_25;
          if ( v27 != 2 )
          {
            if ( *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) == v50 )
            {
LABEL_40:
              *(_QWORD *)(v10 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList((_QWORD *)(v10 + 16));
              v28 = 48 * a2 - 0x58000000000LL;
              if ( v8 )
                goto LABEL_119;
              _InterlockedOr(v48, 0);
              MiSetPfnTbFlushStamp(v28, KiTbFlushTimeStamp, 0);
              goto LABEL_42;
            }
LABEL_118:
            MiLockAndInsertPageInFreeList(48 * a2 - 0x58000000000LL);
            goto LABEL_25;
          }
        }
      }
LABEL_60:
      v12 = MiLockPageInline(48 * a2 - 0x58000000000LL);
    }
  }
  v45 = (unsigned int)MiPfnLargeBitSet((__int64)&MiSystemPartition, a2);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    v46 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v46);
  }
  __writecr8(v12);
  if ( (_DWORD)v45 != -1 )
    a1[6] = MiLargePageSizes[v45];
LABEL_25:
  result = v3;
  a1[5] = v52;
  return result;
}
