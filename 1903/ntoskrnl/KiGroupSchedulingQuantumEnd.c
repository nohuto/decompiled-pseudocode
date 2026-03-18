/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x140011CF4
 * Callers:
 *     KiQuantumEnd @ 0x140010F00 (KiQuantumEnd.c)
 * Callees:
 *     KiSelectNextThread @ 0x1400136A0 (KiSelectNextThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140014610 (KiGroupSchedulingGenerationEnd.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140015164 (KiCheckForMaxOverQuotaScb.c)
 *     KiShouldPreemptionBeDeferred @ 0x1400153B0 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadRankNonZero @ 0x140015570 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140015600 (KiGetThreadEffectiveRankNonZero.c)
 *     KiComputeGroupSchedulingRank @ 0x1400156CC (KiComputeGroupSchedulingRank.c)
 *     KiCheckMaxOverQuotaTransition @ 0x140015754 (KiCheckMaxOverQuotaTransition.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSelectReadyThread @ 0x140042260 (KiSelectReadyThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400AF054 (KiInsertDeferredPreemptionApc.c)
 *     KiAddThreadToPrcbQueue @ 0x1400E4D74 (KiAddThreadToPrcbQueue.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1400E8418 (KiRecomputeGroupSchedulingRank.c)
 *     KiChooseLowestRankedThread @ 0x1400E8A30 (KiChooseLowestRankedThread.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400E8DBC (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToScbQueue @ 0x1400E8E44 (KiAddThreadToScbQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0620 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiGroupSchedulingQuantumEnd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 ready; // rax
  char v6; // r15
  char v7; // r13
  __int64 v8; // rdx
  unsigned __int64 v9; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v12; // rbp
  __int64 v13; // rsi
  char v14; // r12
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rdi
  char v18; // bp
  char v19; // al
  __int64 v20; // rdi
  __int64 v21; // rbp
  __int64 v22; // r14
  int ThreadEffectiveRankNonZero; // eax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  __int64 v28; // rdx
  struct _KPRCB *v29; // rdi
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  char v34; // cl
  __int64 v35; // r9
  __int64 v36; // rax
  char v37; // r8
  int v38; // r9d
  unsigned __int64 v39; // rdi
  char IsThreadRankNonZero; // al
  int v41; // eax
  bool v42; // zf
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  char v46; // al
  char v47; // cl
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r10
  __int64 v51; // r10
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v56; // [rsp+30h] [rbp-68h] BYREF
  int v57; // [rsp+34h] [rbp-64h] BYREF
  __int64 v58; // [rsp+38h] [rbp-60h]
  __int64 v59; // [rsp+40h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  char v61; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v62; // [rsp+A8h] [rbp+10h]
  char v63; // [rsp+B0h] [rbp+18h]
  __int64 v64; // [rsp+B8h] [rbp+20h]

  ready = (unsigned __int64)&retaddr;
  v64 = a4;
  v63 = a3;
  v62 = a2;
  v6 = 0;
  v7 = 0;
  v8 = 1LL;
  v9 = MEMORY[0xFFFFF78000000320];
  CurrentPrcb = KeGetCurrentPrcb();
  v56 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v41 = SchedulerAssist[5];
      v42 = v41 == -1;
      LODWORD(ready) = v41 + 1;
      SchedulerAssist[5] = ready;
      if ( v42 )
        LOBYTE(ready) = KiRemoveSystemWorkPriorityKick(CurrentPrcb, 1LL);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    v32 = CurrentPrcb->SchedulerAssist;
    if ( v32 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v43 = v32[5] - 1;
        v32[5] = v43;
        if ( !v43 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v8);
      }
    }
    do
    {
      KeYieldProcessorEx(&v56);
      ready = *(_QWORD *)(a1 + 48);
    }
    while ( ready );
    v33 = CurrentPrcb->SchedulerAssist;
    if ( v33 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v44 = v33[5];
        v42 = v44 == -1;
        LODWORD(ready) = v44 + 1;
        v33[5] = ready;
        if ( v42 )
          LOBYTE(ready) = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v8);
      }
    }
  }
  v12 = *(_QWORD *)(a1 + 16);
  v13 = 0LL;
  v59 = v12;
  v14 = 0;
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 104);
    if ( v13 )
    {
      ready = *(unsigned int *)(a1 + 216);
      v13 += ready;
    }
  }
  if ( v9 > *(_QWORD *)(a1 + 23520) )
  {
    LOBYTE(ready) = KiGroupSchedulingGenerationEnd(a1, v9, 0LL);
    return ready;
  }
  v15 = *(_QWORD *)(v62 + 104);
  v58 = v15;
  v16 = v15;
  if ( v15 )
  {
    ready = *(unsigned int *)(a1 + 216);
    v17 = ready + v15;
    if ( v17 )
    {
      v18 = v63;
      while ( 1 )
      {
        v19 = *(_BYTE *)(v17 + 112);
        if ( (v19 & 4) != 0 )
        {
          if ( (v19 & 2) != 0 )
          {
            LOBYTE(ready) = 1;
            v6 = 1;
            v14 = 1;
          }
          else
          {
            LOBYTE(ready) = KiCheckMaxOverQuotaTransition(v17, v16);
            if ( (_BYTE)ready )
            {
              if ( (*(_BYTE *)(v17 + 112) & 1) != 0 )
              {
                LOBYTE(a3) = 1;
                LOBYTE(ready) = KiRemoveSchedulingGroupQueue(a1, v17, a3);
              }
              goto LABEL_16;
            }
            ready = *(_QWORD *)(v17 + 24);
            if ( *(_QWORD *)v17 >= ready )
            {
              LOBYTE(ready) = KiRecomputeGroupSchedulingRank(v16, v17, a1);
              if ( v13 == v17 )
                v7 = 1;
LABEL_16:
              v6 = 1;
              v14 = 1;
              goto LABEL_17;
            }
            if ( v18 )
              v6 = 1;
          }
        }
        else
        {
          LOBYTE(ready) = KiComputeGroupSchedulingRank(v16, a1, v17);
          if ( (*(_BYTE *)(v17 + 112) & 4) != 0 )
          {
            v6 = 1;
            v14 = 1;
            if ( v13 == v17 )
              v7 = 1;
          }
        }
LABEL_17:
        v17 = *(_QWORD *)(v17 + 408);
        if ( !v17 )
        {
          v20 = v62;
          v21 = v59;
          v22 = *(_QWORD *)(v62 + 104);
          if ( v22 )
          {
            ready = *(unsigned int *)(a1 + 216);
            v22 += ready;
          }
          if ( v6 && !v59 )
          {
            LOBYTE(a4) = 1;
            ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v62, v22, (_BYTE)a3, a4, 0LL);
            v24 = (unsigned int)*(char *)(v20 + 195);
            if ( ThreadEffectiveRankNonZero )
              ready = KiChooseLowestRankedThread(a1, v20, (unsigned int)v24);
            else
              ready = KiSelectReadyThread(v24, a1);
            v25 = ready;
            if ( ready )
            {
              if ( (*(_BYTE *)(ready + 2) & 4) == 0
                || (IsThreadRankNonZero = KiIsThreadRankNonZero(ready, a1), v34 = 1, !IsThreadRankNonZero) )
              {
                v34 = *(_BYTE *)(v25 + 195);
              }
              **(_BYTE **)(a1 + 56) = v34;
              v35 = *(_QWORD *)(a1 + 25016);
              if ( v35 )
              {
                v45 = (unsigned int)KiVpThreadSystemWorkPriority;
                if ( v25 != *(_QWORD *)(a1 + 24) )
                  v45 = (unsigned int)v34;
                KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 25016), v45, 0LL);
                v35 = *(_QWORD *)(a1 + 25016);
              }
              v36 = *(_QWORD *)(a1 + 24);
              *(_QWORD *)(a1 + 16) = v25;
              if ( v35 )
                *(_BYTE *)(v35 + 16) = v25 == v36;
              LOBYTE(ready) = *(_BYTE *)(v25 + 388);
              if ( (_BYTE)ready == 1 )
              {
                LODWORD(ready) = *(_DWORD *)(v25 + 132) - *(_DWORD *)(v25 + 436) + MEMORY[0xFFFFF78000000320];
                *(_DWORD *)(v25 + 132) = ready;
              }
              *(_BYTE *)(v25 + 388) = 3;
            }
            goto LABEL_25;
          }
          if ( v14 && v59 && v13 )
          {
            if ( v13 == v22 )
              goto LABEL_62;
            do
            {
              if ( !v13 )
                break;
              v13 = *(_QWORD *)(v13 + 408);
            }
            while ( v13 != v22 );
            if ( v22 == v13 || v7 )
            {
LABEL_62:
              ready = KiChooseLowestRankedThread(a1, v59, (unsigned int)(*(char *)(v59 + 195) + 1));
              v39 = ready;
              if ( ready )
              {
                *(_BYTE *)(v21 + 388) = 1;
                *(_DWORD *)(v21 + 436) = MEMORY[0xFFFFF78000000320];
                if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v46 = KiIsThreadRankNonZero(ready, a1), v47 = 1, !v46) )
                  v47 = *(_BYTE *)(v39 + 195);
                **(_BYTE **)(a1 + 56) = v47;
                v48 = *(_QWORD *)(a1 + 25016);
                if ( v48 )
                {
                  v49 = (unsigned int)KiVpThreadSystemWorkPriority;
                  if ( v39 != *(_QWORD *)(a1 + 24) )
                    v49 = (unsigned int)v47;
                  KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 25016), v49, 0LL);
                  v48 = *(_QWORD *)(a1 + 25016);
                }
                *(_QWORD *)(a1 + 16) = v39;
                if ( v48 )
                  *(_BYTE *)(v48 + 16) = v39 == *(_QWORD *)(a1 + 24);
                if ( *(_BYTE *)(v39 + 388) == 1 )
                  *(_DWORD *)(v39 + 132) = *(_DWORD *)(v39 + 132) - *(_DWORD *)(v39 + 436) + MEMORY[0xFFFFF78000000320];
                *(_BYTE *)(v39 + 388) = 3;
                v50 = *(_QWORD *)(v21 + 104);
                if ( v50 )
                  LODWORD(v50) = *(_DWORD *)(a1 + 216) + v50;
                LOBYTE(v38) = 1;
                if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v21, v50, v37, v38, (__int64)&v61) )
                  LOBYTE(ready) = KiAddThreadToScbQueue(a1, v51, v21, 1LL);
                else
                  LOBYTE(ready) = KiAddThreadToPrcbQueue(a1, v21, *(char *)(v21 + 195), 1, v61);
              }
LABEL_25:
              v20 = v62;
            }
          }
          if ( v22 )
          {
            LOBYTE(ready) = KiShouldPreemptionBeDeferred(v20);
            if ( (_BYTE)ready )
            {
              if ( (*(_DWORD *)(v20 + 120) & 0xC00) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
                v26 = KeGetCurrentPrcb();
                v27 = v26->SchedulerAssist;
                if ( v27 )
                {
                  if ( v26->NestingLevel <= 1u )
                  {
                    v52 = v27[5] - 1;
                    v27[5] = v52;
                    if ( !v52 )
                      KiRemoveSystemWorkPriorityKick(v26, v27);
                  }
                }
                LOBYTE(ready) = KiInsertDeferredPreemptionApc(a1, v20, 0LL);
                v29 = KeGetCurrentPrcb();
                v57 = 0;
                while ( 1 )
                {
                  v30 = v29->SchedulerAssist;
                  if ( v30 )
                  {
                    if ( v29->NestingLevel <= 1u )
                    {
                      v53 = v30[5];
                      v42 = v53 == -1;
                      LODWORD(ready) = v53 + 1;
                      v30[5] = ready;
                      if ( v42 )
                        LOBYTE(ready) = KiRemoveSystemWorkPriorityKick(v29, v28);
                    }
                  }
                  if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
                    break;
                  v31 = v29->SchedulerAssist;
                  if ( v31 )
                  {
                    if ( v29->NestingLevel <= 1u )
                    {
                      v54 = v31[5] - 1;
                      v31[5] = v54;
                      if ( !v54 )
                        KiRemoveSystemWorkPriorityKick(v29, v28);
                    }
                  }
                  do
                  {
                    KeYieldProcessorEx(&v57);
                    ready = *(_QWORD *)(a1 + 48);
                  }
                  while ( ready );
                }
              }
            }
            else
            {
              LOBYTE(ready) = KiCheckForMaxOverQuotaScb(v22);
              if ( (_BYTE)ready && !*(_QWORD *)(a1 + 16) )
                LOBYTE(ready) = KiSelectNextThread(a1, v64);
            }
          }
          return ready;
        }
        v16 = v17 - *(unsigned int *)(a1 + 216);
        v58 = v16;
      }
    }
  }
  return ready;
}
