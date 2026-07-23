/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x1400D0FC4
 * Callers:
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 * Callees:
 *     KiSelectReadyThread @ 0x140057A20 (KiSelectReadyThread.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400D15A0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400D2FD4 (KiCheckForMaxOverQuotaScb.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D312C (KiGroupSchedulingGenerationEnd.c)
 *     KiComputeGroupSchedulingRank @ 0x1400D3720 (KiComputeGroupSchedulingRank.c)
 *     KiShouldPreemptionBeDeferred @ 0x1400D3850 (KiShouldPreemptionBeDeferred.c)
 *     KiSelectNextThread @ 0x1400D71E8 (KiSelectNextThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400F2868 (KiInsertDeferredPreemptionApc.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140116A70 (KiRecomputeGroupSchedulingRank.c)
 *     KiChooseLowestRankedThread @ 0x140116B1C (KiChooseLowestRankedThread.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140116F58 (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToScbQueue @ 0x140117004 (KiAddThreadToScbQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x1401175DC (KiAddThreadToPrcbQueue.c)
 *     KiCheckMaxOverQuotaTransition @ 0x14012AF0C (KiCheckMaxOverQuotaTransition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 */

char __fastcall KiGroupSchedulingQuantumEnd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  char v5; // r12
  char v6; // r13
  unsigned __int64 v9; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v12; // eax
  bool v13; // zf
  _DWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rdi
  char v21; // bp
  char v22; // dl
  __int64 v23; // r15
  __int64 v24; // rbp
  __int64 v25; // rdi
  int ThreadEffectiveRankNonZero; // eax
  __int64 v27; // r8
  char v28; // cl
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // r10
  __int64 v32; // r10
  __int64 v33; // rdx
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  struct _KPRCB *v39; // rdi
  _DWORD *v40; // rcx
  int v41; // eax
  _DWORD *v42; // rcx
  int v43; // eax
  char v45; // [rsp+30h] [rbp-68h]
  int v46; // [rsp+34h] [rbp-64h] BYREF
  int v47; // [rsp+38h] [rbp-60h] BYREF
  __int64 v48; // [rsp+40h] [rbp-58h]
  __int64 v49; // [rsp+48h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  char v51; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v52; // [rsp+A8h] [rbp+10h]
  char v53; // [rsp+B0h] [rbp+18h]
  __int64 v54; // [rsp+B8h] [rbp+20h]

  v4 = (unsigned __int64)&retaddr;
  v54 = a4;
  v53 = a3;
  v52 = a2;
  v5 = 0;
  v6 = 0;
  v45 = 0;
  v9 = MEMORY[0xFFFFF78000000320];
  CurrentPrcb = KeGetCurrentPrcb();
  v46 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = SchedulerAssist[5];
        v13 = v12 == -1;
        LODWORD(v4) = v12 + 1;
        SchedulerAssist[5] = v4;
        if ( v13 )
          LOBYTE(v4) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = v14[5] - 1;
        v14[5] = v15;
        if ( !v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
    {
      KeYieldProcessorEx(&v46, a2, a3);
      v4 = *(_QWORD *)(a1 + 48);
    }
    while ( v4 );
  }
  v16 = *(_QWORD *)(a1 + 16);
  v17 = 0LL;
  v49 = v16;
  if ( v16 )
  {
    v17 = *(_QWORD *)(v16 + 104);
    if ( v17 )
    {
      v4 = *(unsigned int *)(a1 + 216);
      v17 += v4;
    }
  }
  if ( v9 > *(_QWORD *)(a1 + 23520) )
  {
    LOBYTE(v4) = KiGroupSchedulingGenerationEnd(a1, v9, 0LL);
    return v4;
  }
  v18 = *(_QWORD *)(a2 + 104);
  v48 = v18;
  v19 = v18;
  if ( v18 )
  {
    v4 = *(unsigned int *)(a1 + 216);
    v20 = v4 + v18;
    if ( v20 )
    {
      v21 = v53;
      while ( 1 )
      {
        LOBYTE(v4) = *(_BYTE *)(v20 + 112);
        if ( (v4 & 4) == 0 )
        {
          LOBYTE(v4) = KiComputeGroupSchedulingRank(v19, a1, v20);
          if ( (*(_BYTE *)(v20 + 112) & 4) != 0 )
          {
            v5 = 1;
            v6 = 1;
            if ( v17 == v20 )
            {
              v22 = 1;
              v45 = 1;
              goto LABEL_28;
            }
          }
          goto LABEL_27;
        }
        if ( (v4 & 2) != 0 )
          break;
        LOBYTE(v4) = KiCheckMaxOverQuotaTransition(v20, v19);
        if ( (_BYTE)v4 )
        {
          if ( (*(_BYTE *)(v20 + 112) & 1) != 0 )
          {
            LOBYTE(a3) = 1;
            LOBYTE(v4) = KiRemoveSchedulingGroupQueue(a1, v20, a3);
          }
          v22 = v45;
        }
        else
        {
          v4 = *(_QWORD *)(v20 + 24);
          if ( *(_QWORD *)v20 < v4 )
          {
            if ( v21 )
              v5 = 1;
            goto LABEL_27;
          }
          LOBYTE(v4) = KiRecomputeGroupSchedulingRank(v19, v20, a1);
          v22 = v45;
          if ( v17 == v20 )
            v22 = 1;
          v45 = v22;
        }
        v5 = 1;
        v6 = 1;
LABEL_28:
        v20 = *(_QWORD *)(v20 + 408);
        if ( !v20 )
        {
          v23 = v52;
          v24 = v49;
          v25 = *(_QWORD *)(v52 + 104);
          if ( v25 )
          {
            v4 = *(unsigned int *)(a1 + 216);
            v25 += v4;
          }
          if ( !v5 || v49 )
          {
            if ( v6 && v49 && v17 )
            {
              if ( v17 == v25 )
                goto LABEL_58;
              do
              {
                if ( !v17 )
                  break;
                v17 = *(_QWORD *)(v17 + 408);
              }
              while ( v17 != v25 );
              if ( v25 == v17 || v22 )
              {
LABEL_58:
                v4 = KiChooseLowestRankedThread(a1, v49, (unsigned int)(*(char *)(v49 + 195) + 1));
                if ( v4 )
                {
                  *(_BYTE *)(v24 + 388) = 1;
                  *(_DWORD *)(v24 + 436) = MEMORY[0xFFFFF78000000320];
                  KiUpdatePriorityMatrixThreadState(a1, v4, 2LL, 3LL);
                  v31 = *(_QWORD *)(v24 + 104);
                  if ( v31 )
                    LODWORD(v31) = *(_DWORD *)(a1 + 216) + v31;
                  LOBYTE(v30) = 1;
                  if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v24, v31, v29, v30, (__int64)&v51) )
                    LOBYTE(v4) = KiAddThreadToScbQueue(a1, v32, v24, 1LL);
                  else
                    LOBYTE(v4) = KiAddThreadToPrcbQueue(a1, v24, *(char *)(v24 + 195), 1, v51);
                }
              }
            }
          }
          else
          {
            LOBYTE(a4) = 1;
            ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v52, v25, a3, a4, 0LL);
            v28 = *(_BYTE *)(v23 + 195);
            if ( ThreadEffectiveRankNonZero )
              v4 = KiChooseLowestRankedThread(a1, v23, (unsigned int)v28);
            else
              v4 = (unsigned __int64)KiSelectReadyThread(v28, a1, v27);
            if ( v4 )
              LOBYTE(v4) = KiUpdatePriorityMatrixThreadState(a1, v4, 2LL, 3LL);
          }
          if ( v25 )
          {
            LOBYTE(v4) = KiShouldPreemptionBeDeferred(v23);
            if ( (_BYTE)v4 )
            {
              if ( (*(_DWORD *)(v23 + 120) & 0xC00) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
                v34 = KeGetCurrentPrcb();
                v35 = v34->SchedulerAssist;
                if ( v35 )
                {
                  if ( v34->NestingLevel <= 1u )
                  {
                    v36 = v35[5] - 1;
                    v35[5] = v36;
                    if ( !v36 )
                      KiRemoveSystemWorkPriorityKick(v34);
                  }
                }
                LOBYTE(v4) = KiInsertDeferredPreemptionApc(a1, v23, 0LL);
                v39 = KeGetCurrentPrcb();
                v47 = 0;
                while ( 1 )
                {
                  v40 = v39->SchedulerAssist;
                  if ( v40 )
                  {
                    if ( v39->NestingLevel <= 1u )
                    {
                      v41 = v40[5];
                      v13 = v41 == -1;
                      LODWORD(v4) = v41 + 1;
                      v40[5] = v4;
                      if ( v13 )
                        LOBYTE(v4) = KiRemoveSystemWorkPriorityKick(v39);
                    }
                  }
                  if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
                    break;
                  v42 = v39->SchedulerAssist;
                  if ( v42 )
                  {
                    if ( v39->NestingLevel <= 1u )
                    {
                      v43 = v42[5] - 1;
                      v42[5] = v43;
                      if ( !v43 )
                        KiRemoveSystemWorkPriorityKick(v39);
                    }
                  }
                  do
                  {
                    KeYieldProcessorEx(&v47, v37, v38);
                    v4 = *(_QWORD *)(a1 + 48);
                  }
                  while ( v4 );
                }
              }
            }
            else
            {
              LOBYTE(v4) = KiCheckForMaxOverQuotaScb(v25, v33);
              if ( (_BYTE)v4 && !*(_QWORD *)(a1 + 16) )
                LOBYTE(v4) = KiSelectNextThread(a1, v54);
            }
          }
          return v4;
        }
        v19 = v20 - *(unsigned int *)(a1 + 216);
        v48 = v19;
      }
      v5 = 1;
      v6 = 1;
LABEL_27:
      v22 = v45;
      goto LABEL_28;
    }
  }
  return v4;
}
