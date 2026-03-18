/*
 * XREFs of KiUpdateCpuTargetByRate @ 0x14011513C
 * Callers:
 *     KeInsertSchedulingGroup @ 0x140114808 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupCpuRates @ 0x140114C24 (KeSetSchedulingGroupCpuRates.c)
 *     KiUpdateChildrenCpuTarget @ 0x1402B2A6C (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiCheckForEffectivePriorityChange @ 0x14011561C (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x140115E20 (KiResetScb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateChildrenCpuTarget @ 0x1402B2A6C (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByRate(unsigned __int16 *a1, char a2)
{
  char v2; // bl
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r13
  unsigned __int128 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  char v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rbp
  struct _KPRCB *v14; // rbx
  _DWORD *v15; // rcx
  struct _KPRCB *v16; // rcx
  _QWORD *v17; // rcx
  _DWORD *v18; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v20; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  __int64 v25; // r8
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // r8
  int v28; // eax
  int v29; // eax
  unsigned __int64 v30; // rax
  unsigned int v32; // [rsp+20h] [rbp-58h]
  bool v33; // [rsp+80h] [rbp+8h]
  int v35; // [rsp+90h] [rbp+18h] BYREF
  int v36; // [rsp+98h] [rbp+20h] BYREF

  v2 = a2;
  if ( *((_QWORD *)a1 + 12) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v35 = 0;
    v20 = KiProcessorBlock[0];
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v22 = SchedulerAssist[5];
          SchedulerAssist[5] = v22 + 1;
          if ( v22 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v20 + 48), 0LL) )
        break;
      v23 = CurrentPrcb->SchedulerAssist;
      if ( v23 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v24 = v23[5] - 1;
          v23[5] = v24;
          if ( !v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v35);
      while ( *(_QWORD *)(v20 + 48) );
    }
    v25 = *((_QWORD *)a1 + 67);
    v7 = *(_QWORD *)(v25 + 16) * (unsigned __int64)a1[1] * (unsigned __int128)0x346DC5D63886594BuLL;
    v8 = (unsigned __int64)*a1 * *(_QWORD *)(v25 + 8) / 0x2710;
    v9 = *(_QWORD *)(v25 + 16) * (unsigned __int64)a1[1] / 0x2710;
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
    v26 = KeGetCurrentPrcb();
    v27 = v26->SchedulerAssist;
    if ( v27 )
    {
      if ( v26->NestingLevel <= 1u )
      {
        LODWORD(v7) = v27[5] - 1;
        v27[5] = v7;
        if ( !(_DWORD)v7 )
          LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    v2 = a2;
  }
  else
  {
    v4 = (KiCyclesPerGeneration * (unsigned __int64)*a1 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64;
    v5 = KiCyclesPerGeneration * a1[1];
    v6 = v4;
    v7 = v5 * (unsigned __int128)0x346DC5D63886594BuLL;
    v8 = v6 >> 11;
    v9 = v5 / 0x2710;
  }
  v32 = KeNumberProcessors_0;
  v10 = 0LL;
  v33 = v9 == KiCyclesPerGeneration;
  if ( KeMaximumProcessors )
  {
    v11 = 16 * (v9 == KiCyclesPerGeneration);
    do
    {
      v12 = KiProcessorBlock[v10];
      v13 = (__int64)&a1[212 * (unsigned int)v10 + 64];
      if ( v12 )
      {
        v14 = KeGetCurrentPrcb();
        v36 = 0;
        while ( 1 )
        {
          v15 = v14->SchedulerAssist;
          if ( v15 )
          {
            if ( v14->NestingLevel <= 1u )
            {
              v28 = v15[5];
              v15[5] = v28 + 1;
              if ( v28 == -1 )
                KiRemoveSystemWorkPriorityKick(v14);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
            break;
          v18 = v14->SchedulerAssist;
          if ( v18 )
          {
            if ( v14->NestingLevel <= 1u )
            {
              v29 = v18[5] - 1;
              v18[5] = v29;
              if ( !v29 )
                KiRemoveSystemWorkPriorityKick(v14);
            }
          }
          do
            KeYieldProcessorEx(&v36);
          while ( *(_QWORD *)(v12 + 48) );
        }
        if ( !v33 && *(_BYTE *)(v12 + 33) )
        {
          v30 = v9 * v32;
          *((_QWORD *)a1 + 5) = v30;
          *((_QWORD *)a1 + 6) = v30;
        }
      }
      v2 = a2;
      LOBYTE(v7) = v11 | *(_BYTE *)(v13 + 112) & 0xEF;
      *(_QWORD *)(v13 + 8) = v8;
      *(_QWORD *)(v13 + 16) = v9;
      *(_BYTE *)(v13 + 112) = v7;
      if ( v12 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_QWORD *)(v13 + 48) = 0LL;
          LODWORD(v7) = *((_DWORD *)a1 + 1);
          if ( (v7 & 2) != 0 )
          {
            KiResetScb(v13, v12);
            LOBYTE(v7) = KiCheckForEffectivePriorityChange(v12, v13);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
        v16 = KeGetCurrentPrcb();
        *((_QWORD *)&v7 + 1) = v16->SchedulerAssist;
        if ( *((_QWORD *)&v7 + 1) )
        {
          if ( v16->NestingLevel <= 1u )
          {
            LODWORD(v7) = *(_DWORD *)(*((_QWORD *)&v7 + 1) + 20LL) - 1;
            *(_DWORD *)(*((_QWORD *)&v7 + 1) + 20LL) = v7;
            if ( !(_DWORD)v7 )
              LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(v16);
          }
        }
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < KeMaximumProcessors );
  }
  if ( v2 )
  {
    *(LARGE_INTEGER *)&v7 = KeQueryPerformanceCounter(0LL);
    *((_QWORD *)a1 + 3) = v7;
  }
  v17 = a1 + 40;
  if ( (_QWORD *)*v17 != v17 )
  {
    BYTE8(v7) = v2;
    LOBYTE(v7) = KiUpdateChildrenCpuTarget(v17, *((_QWORD *)&v7 + 1));
  }
  return v7;
}
