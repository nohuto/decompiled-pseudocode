/*
 * XREFs of KiAcquireThreadStateLock @ 0x14000FCA0
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F8C0 (KiSetPriorityThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x140012DE0 (KeQueryTotalCycleTimeThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400E9970 (KiApplyForegroundBoostThread.c)
 *     KiSetAffinityThread @ 0x1400FB8E0 (KiSetAffinityThread.c)
 *     KiSetThreadSchedulingGroup @ 0x140114330 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1401143F8 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeSetIdealProcessorThreadEx @ 0x1401275D0 (KeSetIdealProcessorThreadEx.c)
 *     KeUpdateThreadTag @ 0x140142DA0 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSets @ 0x140196F34 (KiUpdateThreadCpuSets.c)
 *     KeTryToFreezeThreadStack @ 0x1402A4998 (KeTryToFreezeThreadStack.c)
 *     KeSetThreadSchedulerAssist @ 0x1402AE954 (KeSetThreadSchedulerAssist.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402AFA34 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x1402AFDA0 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAcquireThreadStateLock(__int64 a1, __int64 *a2, volatile signed __int32 **a3)
{
  __int64 *v4; // rbp
  int v6; // ebx
  __int64 v7; // rdi
  volatile signed __int32 *v8; // r14
  __int64 v9; // rax
  struct _KPRCB *v10; // r13
  _DWORD *v11; // rcx
  __int64 result; // rax
  char v13; // al
  __int64 v14; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v17; // rcx
  __int64 v18; // r12
  struct _KPRCB *v19; // rdi
  __int64 v20; // rax
  _DWORD *v21; // rcx
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  struct _KPRCB *v26; // r13
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // [rsp+20h] [rbp-48h] BYREF
  int v47[17]; // [rsp+24h] [rbp-44h] BYREF
  int v48; // [rsp+70h] [rbp+8h] BYREF
  int v49; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(unsigned __int8 *)(a1 + 388);
      v7 = 0LL;
      v8 = 0LL;
      if ( v6 == 2 )
        goto LABEL_3;
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) == 3 )
      {
        v14 = *(unsigned int *)(a1 + 536);
        if ( (int)v14 >= 0 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = KiProcessorBlock[v14];
          v48 = 0;
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v32 = SchedulerAssist[5];
              SchedulerAssist[5] = v32 + 1;
              if ( v32 == -1 )
LABEL_56:
                KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          {
            v24 = CurrentPrcb->SchedulerAssist;
            if ( v24 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v33 = v24[5] - 1;
                v24[5] = v33;
                if ( !v33 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
              }
            }
            do
              KeYieldProcessorEx(&v48);
            while ( *(_QWORD *)(v7 + 48) );
            v25 = CurrentPrcb->SchedulerAssist;
            if ( v25 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v34 = v25[5];
                v25[5] = v34 + 1;
                if ( v34 == -1 )
                  goto LABEL_56;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v7 + 16) )
            goto LABEL_7;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v14 )
            __fastfail(0x1Eu);
LABEL_19:
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
          goto LABEL_20;
        }
      }
      else
      {
        if ( *(_BYTE *)(a1 + 388) != 5 )
          goto LABEL_7;
        v13 = *(_BYTE *)(a1 + 112) & 7;
        if ( v13 == 1 || (unsigned __int8)(v13 - 3) <= 3u )
          goto LABEL_7;
        LOBYTE(v6) = 2;
LABEL_3:
        v9 = *(unsigned int *)(a1 + 536);
        if ( (int)v9 >= 0 )
        {
          v10 = KeGetCurrentPrcb();
          v7 = KiProcessorBlock[v9];
          v47[0] = 0;
          v11 = v10->SchedulerAssist;
          if ( v11 )
          {
            if ( v10->NestingLevel <= 1u )
            {
              v42 = v11[5];
              v11[5] = v42 + 1;
              if ( v42 == -1 )
LABEL_86:
                KiRemoveSystemWorkPriorityKick(v10, a2);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          {
            v22 = v10->SchedulerAssist;
            if ( v22 )
            {
              if ( v10->NestingLevel <= 1u )
              {
                v43 = v22[5] - 1;
                v22[5] = v43;
                if ( !v43 )
                  KiRemoveSystemWorkPriorityKick(v10, a2);
              }
            }
            do
              KeYieldProcessorEx(v47);
            while ( *(_QWORD *)(v7 + 48) );
            v23 = v10->SchedulerAssist;
            if ( v23 )
            {
              if ( v10->NestingLevel <= 1u )
              {
                v44 = v23[5];
                v23[5] = v44 + 1;
                if ( v44 == -1 )
                  goto LABEL_86;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v7 + 8) )
            goto LABEL_7;
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
          v17 = KeGetCurrentPrcb();
          a2 = (__int64 *)v17->SchedulerAssist;
          if ( a2 )
          {
            if ( v17->NestingLevel <= 1u )
            {
              v45 = *((_DWORD *)a2 + 5) - 1;
              *((_DWORD *)a2 + 5) = v45;
              if ( !v45 )
LABEL_83:
                KiRemoveSystemWorkPriorityKick(v17, a2);
            }
          }
        }
      }
    }
    v18 = *(unsigned int *)(a1 + 536);
    if ( (int)v18 >= 0 )
    {
      v26 = KeGetCurrentPrcb();
      v7 = KiProcessorBlock[v18];
      v46 = 0;
      v27 = v26->SchedulerAssist;
      if ( v27 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v38 = v27[5];
          v27[5] = v38 + 1;
          if ( v38 == -1 )
LABEL_74:
            KiRemoveSystemWorkPriorityKick(v26, a2);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
      {
        v30 = v26->SchedulerAssist;
        if ( v30 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v39 = v30[5] - 1;
            v30[5] = v39;
            if ( !v39 )
              KiRemoveSystemWorkPriorityKick(v26, a2);
          }
        }
        do
          KeYieldProcessorEx(&v46);
        while ( *(_QWORD *)(v7 + 48) );
        v31 = v26->SchedulerAssist;
        if ( v31 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v40 = v31[5];
            v31[5] = v40 + 1;
            if ( v40 == -1 )
              goto LABEL_74;
          }
        }
      }
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v18 )
        goto LABEL_7;
      goto LABEL_19;
    }
    v19 = KeGetCurrentPrcb();
    v20 = (unsigned int)v18;
    LODWORD(v20) = v18 & 0x7FFFFFFF;
    v49 = 0;
    v21 = v19->SchedulerAssist;
    v8 = *(volatile signed __int32 **)(KiProcessorBlock[v20] + 24904);
    if ( v21 )
    {
      if ( v19->NestingLevel <= 1u )
      {
        v35 = v21[5];
        v21[5] = v35 + 1;
        if ( v35 == -1 )
LABEL_65:
          KiRemoveSystemWorkPriorityKick(v19, a2);
      }
    }
    while ( _interlockedbittestandset64(v8, 0LL) )
    {
      v28 = v19->SchedulerAssist;
      if ( v28 )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v36 = v28[5] - 1;
          v28[5] = v36;
          if ( !v36 )
            KiRemoveSystemWorkPriorityKick(v19, a2);
        }
      }
      do
        KeYieldProcessorEx(&v49);
      while ( *(_QWORD *)v8 );
      v29 = v19->SchedulerAssist;
      if ( v29 )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v37 = v29[5];
          v29[5] = v37 + 1;
          if ( v37 == -1 )
            goto LABEL_65;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v18 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
LABEL_20:
    v17 = KeGetCurrentPrcb();
    a2 = (__int64 *)v17->SchedulerAssist;
    if ( a2 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v41 = *((_DWORD *)a2 + 5) - 1;
        *((_DWORD *)a2 + 5) = v41;
        if ( !v41 )
          goto LABEL_83;
      }
    }
  }
  v7 = 0LL;
LABEL_7:
  result = (unsigned __int8)v6;
  *v4 = v7;
  *a3 = v8;
  return result;
}
