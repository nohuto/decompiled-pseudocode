/*
 * XREFs of KiRemoveBoostThread @ 0x140014690
 * Callers:
 *     KiCompleteDirectSwitchThread @ 0x14001461C (KiCompleteDirectSwitchThread.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BAD0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D720 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetEventBoostPriorityEx @ 0x1400C659C (KeSetEventBoostPriorityEx.c)
 *     KeGenericProcessorCallback @ 0x1400FBCAC (KeGenericProcessorCallback.c)
 *     KeWakeWaitChain @ 0x140125CEC (KeWakeWaitChain.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x140014B90 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140014C20 (KiGetThreadEffectiveRankNonZero.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiSelectReadyThread @ 0x140041FA0 (KiSelectReadyThread.c)
 *     KiChooseLowestRankedThread @ 0x1401156A8 (KiChooseLowestRankedThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x14013062C (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0380 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiRemoveBoostThread(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 v6; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  char v8; // cl
  char v9; // bp
  unsigned int v10; // eax
  char v11; // si
  char v12; // r14
  struct _KPRCB *v13; // r15
  _DWORD *v14; // rcx
  char v15; // al
  __int64 v16; // rdx
  int v17; // r10d
  __int64 ready; // rax
  __int64 v19; // r15
  struct _KPRCB *v20; // rcx
  __int64 v21; // rcx
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // r8
  __int64 v27; // rdx
  char v28; // r9
  bool v29; // zf
  char v30; // al
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  _DWORD *v34; // rcx
  char v35; // cl
  __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  char IsThreadRankNonZero; // al
  __int64 v44; // rdx
  struct _SINGLE_LIST_ENTRY *v45; // rdx
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rdx
  int v49; // [rsp+78h] [rbp+10h] BYREF
  int v50; // [rsp+80h] [rbp+18h] BYREF
  int v51; // [rsp+88h] [rbp+20h]

  if ( !*(_BYTE *)(a2 + 564) )
    return *(_BYTE *)(a2 + 195) + 1;
  CurrentPrcb = KeGetCurrentPrcb();
  v49 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v37 = SchedulerAssist[5];
      SchedulerAssist[5] = v37 + 1;
      if ( v37 == -1 )
LABEL_57:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    v31 = CurrentPrcb->SchedulerAssist;
    if ( v31 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v38 = v31[5] - 1;
        v31[5] = v38;
        if ( !v38 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
      }
    }
    do
      KeYieldProcessorEx(&v49);
    while ( *(_QWORD *)(a2 + 64) );
    v32 = CurrentPrcb->SchedulerAssist;
    if ( v32 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v39 = v32[5];
        v32[5] = v39 + 1;
        if ( v39 == -1 )
          goto LABEL_57;
      }
    }
  }
  v6 = *(unsigned __int8 *)(a2 + 564);
  p_AbPropagateBoostsList = (_SINGLE_LIST_ENTRY *)*(unsigned __int8 *)(a2 + 195);
  v8 = v6 & 0xF;
  v9 = (_BYTE)p_AbPropagateBoostsList - (v6 & 0xF);
  if ( (v6 & 0xF) == 0 )
    v9 = *(_BYTE *)(a2 + 195);
  LOBYTE(v6) = (unsigned __int8)v6 >> 4;
  if ( (_BYTE)v6 )
  {
    v10 = *(_DWORD *)(a2 + 1408);
    v11 = (_BYTE)p_AbPropagateBoostsList - v6;
    *(_BYTE *)(a2 + 564) = v8;
    if ( v10 )
    {
      _BitScanReverse((unsigned int *)&v6, v10);
      if ( v11 < (int)v6 )
        v11 = v6;
      v51 = v6;
    }
    if ( v11 != (_BYTE)p_AbPropagateBoostsList )
    {
      v12 = 0;
      v13 = KeGetCurrentPrcb();
      v50 = 0;
      v14 = v13->SchedulerAssist;
      if ( v14 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v40 = v14[5];
          v14[5] = v40 + 1;
          if ( v40 == -1 )
LABEL_66:
            KiRemoveSystemWorkPriorityKick(v13, v6);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v33 = v13->SchedulerAssist;
        if ( v33 )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v41 = v33[5] - 1;
            v33[5] = v41;
            if ( !v41 )
              KiRemoveSystemWorkPriorityKick(v13, v6);
          }
        }
        do
          KeYieldProcessorEx(&v50);
        while ( *(_QWORD *)(a1 + 48) );
        v34 = v13->SchedulerAssist;
        if ( v34 )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v42 = v34[5];
            v34[5] = v42 + 1;
            if ( v42 == -1 )
              goto LABEL_66;
          }
        }
      }
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v15 = *(_BYTE *)(a2 + 195);
        if ( v15 != 31
          && ((v16 = *(_QWORD *)(a2 + 104), v17 = v15, !v16)
           || (v27 = *(unsigned int *)(a1 + 216) + v16) == 0
           || ((struct _KPRCB *)a1 == KeGetCurrentPrcb() || a2 != *(_QWORD *)(a1 + 8) ? (v28 = 1) : (v28 = 0),
               !(unsigned int)KiGetThreadEffectiveRankNonZero(a2, v27, (_DWORD)p_AbPropagateBoostsList, v28, 0LL))
            ? (ready = KiSelectReadyThread((unsigned int)(v17 + 1), a1))
            : (ready = KiChooseLowestRankedThread(a1, a2, (unsigned int)(v17 + 1))),
              (v19 = ready) != 0) )
        {
          if ( (*(_BYTE *)(ready + 2) & 4) == 0
            || (IsThreadRankNonZero = KiIsThreadRankNonZero(ready, a1), v35 = 1, !IsThreadRankNonZero) )
          {
            v35 = *(_BYTE *)(v19 + 195);
          }
          **(_BYTE **)(a1 + 56) = v35;
          v36 = *(_QWORD *)(a1 + 25016);
          if ( v36 )
          {
            v44 = (unsigned int)KiVpThreadSystemWorkPriority;
            if ( v19 != *(_QWORD *)(a1 + 24) )
              v44 = (unsigned int)v35;
            KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 25016), v44, 0LL);
            v36 = *(_QWORD *)(a1 + 25016);
          }
          *(_QWORD *)(a1 + 16) = v19;
          if ( v36 )
            *(_BYTE *)(v36 + 16) = v19 == *(_QWORD *)(a1 + 24);
          if ( *(_BYTE *)(v19 + 388) == 1 )
            *(_DWORD *)(v19 + 132) = *(_DWORD *)(v19 + 132) - *(_DWORD *)(v19 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v19 + 388) = 3;
        }
        else
        {
          v12 = 1;
        }
      }
      v20 = KeGetCurrentPrcb();
      if ( v11 > *(char *)(a2 + 195) )
      {
        if ( *(_BYTE *)(a2 + 793) )
        {
          v45 = (struct _SINGLE_LIST_ENTRY *)(a2 + 1376);
          if ( *(_QWORD *)(a2 + 1376) == 1LL )
          {
            p_AbPropagateBoostsList = &v20->AbPropagateBoostsList;
            if ( v20 != (struct _KPRCB *)-25720LL )
            {
              v45->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = v45;
              _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
              KiAbQueueAutoBoostDpc(v20);
            }
          }
        }
      }
      *(_BYTE *)(a2 + 195) = v11;
      if ( v12 )
      {
        if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
        {
          v29 = (unsigned __int8)KiIsThreadRankNonZero(a2, a1) == 0;
          v30 = 1;
          if ( v29 )
            v30 = *(_BYTE *)(a2 + 195);
          v11 = v30;
        }
        **(_BYTE **)(a1 + 56) = v11;
        v21 = *(_QWORD *)(a1 + 25016);
        if ( v21 )
        {
          v46 = (unsigned int)KiVpThreadSystemWorkPriority;
          if ( a2 != *(_QWORD *)(a1 + 24) )
            v46 = (unsigned int)v11;
          KiSetSchedulerAssistPriority(v21, v46, 0LL);
        }
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      {
        LOBYTE(p_AbPropagateBoostsList) = 1;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 1520), (unsigned int)*(char *)(a2 + 195), p_AbPropagateBoostsList);
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      if ( v23 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v47 = v23[5] - 1;
          v23[5] = v47;
          if ( !v47 )
            KiRemoveSystemWorkPriorityKick(v22, v23);
        }
      }
    }
  }
  else
  {
    ++v9;
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  v24 = KeGetCurrentPrcb();
  v25 = v24->SchedulerAssist;
  if ( v25 && v24->NestingLevel <= 1u )
  {
    v48 = (unsigned int)(v25[5] - 1);
    v25[5] = v48;
    if ( !(_DWORD)v48 )
      KiRemoveSystemWorkPriorityKick(v24, v48);
  }
  return v9;
}
