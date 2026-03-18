/*
 * XREFs of KiRemoveBoostThread @ 0x140043940
 * Callers:
 *     KiCompleteDirectSwitchThread @ 0x1400143EC (KiCompleteDirectSwitchThread.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BD90 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D9E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetEventBoostPriorityEx @ 0x14009E75C (KeSetEventBoostPriorityEx.c)
 *     KeGenericProcessorCallback @ 0x1400F820C (KeGenericProcessorCallback.c)
 *     KeWakeWaitChain @ 0x14012567C (KeWakeWaitChain.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x140015570 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140015600 (KiGetThreadEffectiveRankNonZero.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSelectReadyThread @ 0x140042260 (KiSelectReadyThread.c)
 *     KiChooseLowestRankedThread @ 0x1400E8A30 (KiChooseLowestRankedThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x1401126E0 (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0620 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiRemoveBoostThread(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  unsigned __int8 v6; // dl
  __int64 p_AbPropagateBoostsList; // r8
  char v8; // cl
  char v9; // bp
  char v10; // dl
  unsigned int v11; // eax
  char v12; // si
  char v13; // r14
  struct _KPRCB *v14; // r15
  _DWORD *v15; // rcx
  char v16; // al
  __int64 v17; // rdx
  int v18; // r10d
  __int64 ready; // rax
  __int64 v20; // r15
  struct _KPRCB *v21; // rcx
  __int64 v22; // rcx
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // r8
  __int64 v28; // rdx
  char v29; // r9
  bool v30; // zf
  char v31; // al
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  int v34; // edx
  _DWORD *v35; // rcx
  _DWORD *v36; // rcx
  char v37; // cl
  __int64 v38; // rax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  bool IsThreadRankNonZero; // al
  __int64 v46; // rdx
  _QWORD *v47; // rdx
  __int64 v48; // rdx
  int v49; // eax
  int v50; // edx
  int v51; // [rsp+78h] [rbp+10h] BYREF
  int v52; // [rsp+80h] [rbp+18h] BYREF
  int v53; // [rsp+88h] [rbp+20h]

  if ( !*(_BYTE *)(a2 + 564) )
    return *(_BYTE *)(a2 + 195) + 1;
  CurrentPrcb = KeGetCurrentPrcb();
  v51 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v39 = SchedulerAssist[5];
      SchedulerAssist[5] = v39 + 1;
      if ( v39 == -1 )
LABEL_57:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    v32 = CurrentPrcb->SchedulerAssist;
    if ( v32 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v40 = v32[5] - 1;
        v32[5] = v40;
        if ( !v40 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v51);
    while ( *(_QWORD *)(a2 + 64) );
    v33 = CurrentPrcb->SchedulerAssist;
    if ( v33 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v41 = v33[5];
        v33[5] = v41 + 1;
        if ( v41 == -1 )
          goto LABEL_57;
      }
    }
  }
  v6 = *(_BYTE *)(a2 + 564);
  p_AbPropagateBoostsList = *(unsigned __int8 *)(a2 + 195);
  v8 = v6 & 0xF;
  v9 = p_AbPropagateBoostsList - (v6 & 0xF);
  if ( (v6 & 0xF) == 0 )
    v9 = *(_BYTE *)(a2 + 195);
  v10 = v6 >> 4;
  if ( v10 )
  {
    v11 = *(_DWORD *)(a2 + 1408);
    v12 = p_AbPropagateBoostsList - v10;
    *(_BYTE *)(a2 + 564) = v8;
    if ( v11 )
    {
      _BitScanReverse((unsigned int *)&v34, v11);
      if ( v12 < v34 )
        v12 = v34;
      v53 = v34;
    }
    if ( v12 != (_BYTE)p_AbPropagateBoostsList )
    {
      v13 = 0;
      v14 = KeGetCurrentPrcb();
      v52 = 0;
      v15 = v14->SchedulerAssist;
      if ( v15 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v42 = v15[5];
          v15[5] = v42 + 1;
          if ( v42 == -1 )
LABEL_66:
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v35 = v14->SchedulerAssist;
        if ( v35 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v43 = v35[5] - 1;
            v35[5] = v43;
            if ( !v43 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
        do
          KeYieldProcessorEx(&v52);
        while ( *(_QWORD *)(a1 + 48) );
        v36 = v14->SchedulerAssist;
        if ( v36 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v44 = v36[5];
            v36[5] = v44 + 1;
            if ( v44 == -1 )
              goto LABEL_66;
          }
        }
      }
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v16 = *(_BYTE *)(a2 + 195);
        if ( v16 != 31
          && ((v17 = *(_QWORD *)(a2 + 104), v18 = v16, !v17)
           || (v28 = *(unsigned int *)(a1 + 216) + v17) == 0
           || ((struct _KPRCB *)a1 == KeGetCurrentPrcb() || a2 != *(_QWORD *)(a1 + 8) ? (v29 = 1) : (v29 = 0),
               !(unsigned int)KiGetThreadEffectiveRankNonZero(a2, v28, p_AbPropagateBoostsList, v29, 0LL))
            ? (ready = KiSelectReadyThread(v18 + 1, a1))
            : (ready = KiChooseLowestRankedThread(a1, a2, (unsigned int)(v18 + 1))),
              (v20 = ready) != 0) )
        {
          if ( (*(_BYTE *)(ready + 2) & 4) == 0
            || (IsThreadRankNonZero = KiIsThreadRankNonZero(ready, (struct _KPRCB *)a1), v37 = 1, !IsThreadRankNonZero) )
          {
            v37 = *(_BYTE *)(v20 + 195);
          }
          **(_BYTE **)(a1 + 56) = v37;
          v38 = *(_QWORD *)(a1 + 25016);
          if ( v38 )
          {
            v46 = (unsigned int)KiVpThreadSystemWorkPriority;
            if ( v20 != *(_QWORD *)(a1 + 24) )
              v46 = (unsigned int)v37;
            KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 25016), v46, 0LL);
            v38 = *(_QWORD *)(a1 + 25016);
          }
          *(_QWORD *)(a1 + 16) = v20;
          if ( v38 )
            *(_BYTE *)(v38 + 16) = v20 == *(_QWORD *)(a1 + 24);
          if ( *(_BYTE *)(v20 + 388) == 1 )
            *(_DWORD *)(v20 + 132) = *(_DWORD *)(v20 + 132) - *(_DWORD *)(v20 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v20 + 388) = 3;
        }
        else
        {
          v13 = 1;
        }
      }
      v21 = KeGetCurrentPrcb();
      if ( v12 > *(char *)(a2 + 195) )
      {
        if ( *(_BYTE *)(a2 + 793) )
        {
          v47 = (_QWORD *)(a2 + 1376);
          if ( *(_QWORD *)(a2 + 1376) == 1LL )
          {
            p_AbPropagateBoostsList = (__int64)&v21->AbPropagateBoostsList;
            if ( v21 != (struct _KPRCB *)-25720LL )
            {
              *v47 = *(_QWORD *)p_AbPropagateBoostsList;
              *(_QWORD *)p_AbPropagateBoostsList = v47;
              _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
              KiAbQueueAutoBoostDpc(v21);
            }
          }
        }
      }
      *(_BYTE *)(a2 + 195) = v12;
      if ( v13 )
      {
        if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
        {
          v30 = !KiIsThreadRankNonZero(a2, (struct _KPRCB *)a1);
          v31 = 1;
          if ( v30 )
            v31 = *(_BYTE *)(a2 + 195);
          v12 = v31;
        }
        **(_BYTE **)(a1 + 56) = v12;
        v22 = *(_QWORD *)(a1 + 25016);
        if ( v22 )
        {
          v48 = (unsigned int)KiVpThreadSystemWorkPriority;
          if ( a2 != *(_QWORD *)(a1 + 24) )
            v48 = (unsigned int)v12;
          KiSetSchedulerAssistPriority(v22, v48, 0LL);
        }
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      {
        LOBYTE(p_AbPropagateBoostsList) = 1;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 1520), (unsigned int)*(char *)(a2 + 195), p_AbPropagateBoostsList);
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      if ( v24 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          v49 = v24[5] - 1;
          v24[5] = v49;
          if ( !v49 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
    }
  }
  else
  {
    ++v9;
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  v25 = KeGetCurrentPrcb();
  v26 = v25->SchedulerAssist;
  if ( v26 && v25->NestingLevel <= 1u )
  {
    v50 = v26[5] - 1;
    v26[5] = v50;
    if ( !v50 )
      KiRemoveSystemWorkPriorityKick(v25);
  }
  return v9;
}
