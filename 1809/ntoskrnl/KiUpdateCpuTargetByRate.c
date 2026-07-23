/*
 * XREFs of KiUpdateCpuTargetByRate @ 0x1401162B8
 * Callers:
 *     KeInsertSchedulingGroup @ 0x140115A60 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupCpuRates @ 0x140115E5C (KeSetSchedulingGroupCpuRates.c)
 *     KiUpdateChildrenCpuTarget @ 0x14029BA24 (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiCheckForEffectivePriorityChange @ 0x140116904 (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x1401169A4 (KiResetScb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateChildrenCpuTarget @ 0x14029BA24 (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByRate(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r13
  unsigned __int128 v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // r15
  char v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rbp
  struct _KPRCB *v16; // rbx
  _DWORD *v17; // rcx
  struct _KPRCB *v18; // rcx
  _QWORD *v19; // rcx
  _DWORD *v20; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v22; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  __int64 v27; // r8
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // r8
  int v30; // eax
  int v31; // eax
  unsigned __int64 v32; // rax
  unsigned int v34; // [rsp+20h] [rbp-58h]
  bool v35; // [rsp+80h] [rbp+8h]
  char v36; // [rsp+88h] [rbp+10h]
  int v37; // [rsp+90h] [rbp+18h] BYREF
  int v38; // [rsp+98h] [rbp+20h] BYREF

  v36 = a2;
  v3 = a2;
  if ( *((_QWORD *)a1 + 12) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v37 = 0;
    v22 = KiProcessorBlock[0];
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v24 = SchedulerAssist[5];
          SchedulerAssist[5] = v24 + 1;
          if ( v24 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v22 + 48), 0LL) )
        break;
      v25 = CurrentPrcb->SchedulerAssist;
      if ( v25 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v26 = v25[5] - 1;
          v25[5] = v26;
          if ( !v26 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v37, a2, a3);
      while ( *(_QWORD *)(v22 + 48) );
    }
    v27 = *((_QWORD *)a1 + 67);
    v8 = *(_QWORD *)(v27 + 16) * (unsigned __int64)a1[1] * (unsigned __int128)0x346DC5D63886594BuLL;
    v9 = (unsigned __int64)*a1 * *(_QWORD *)(v27 + 8) / 0x2710;
    v10 = *(_QWORD *)(v27 + 16) * (unsigned __int64)a1[1] / 0x2710;
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 48), 0LL);
    v28 = KeGetCurrentPrcb();
    v29 = v28->SchedulerAssist;
    if ( v29 )
    {
      if ( v28->NestingLevel <= 1u )
      {
        LODWORD(v8) = v29[5] - 1;
        v29[5] = v8;
        if ( !(_DWORD)v8 )
          LOBYTE(v8) = KiRemoveSystemWorkPriorityKick(v28);
      }
    }
    v3 = v36;
  }
  else
  {
    v5 = (KiCyclesPerGeneration * (unsigned __int64)*a1 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64;
    v6 = KiCyclesPerGeneration * a1[1];
    v7 = v5;
    v8 = v6 * (unsigned __int128)0x346DC5D63886594BuLL;
    v9 = v7 >> 11;
    v10 = v6 / 0x2710;
  }
  v11 = (unsigned int)KeNumberProcessors_0;
  BYTE8(v8) = v10 == KiCyclesPerGeneration;
  v34 = KeNumberProcessors_0;
  v12 = 0LL;
  v35 = v10 == KiCyclesPerGeneration;
  if ( KeMaximumProcessors )
  {
    v13 = 16 * BYTE8(v8);
    do
    {
      v14 = KiProcessorBlock[v12];
      v15 = (__int64)&a1[212 * (unsigned int)v12 + 64];
      if ( v14 )
      {
        v16 = KeGetCurrentPrcb();
        v38 = 0;
        while ( 1 )
        {
          v17 = v16->SchedulerAssist;
          if ( v17 )
          {
            if ( v16->NestingLevel <= 1u )
            {
              v30 = v17[5];
              v17[5] = v30 + 1;
              if ( v30 == -1 )
                KiRemoveSystemWorkPriorityKick(v16);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
            break;
          v20 = v16->SchedulerAssist;
          if ( v20 )
          {
            if ( v16->NestingLevel <= 1u )
            {
              v31 = v20[5] - 1;
              v20[5] = v31;
              if ( !v31 )
                KiRemoveSystemWorkPriorityKick(v16);
            }
          }
          do
            KeYieldProcessorEx(&v38, *((__int64 *)&v8 + 1), v11);
          while ( *(_QWORD *)(v14 + 48) );
        }
        if ( !v35 && *(_BYTE *)(v14 + 33) )
        {
          v32 = v10 * v34;
          *((_QWORD *)a1 + 5) = v32;
          *((_QWORD *)a1 + 6) = v32;
        }
      }
      v3 = v36;
      LOBYTE(v8) = v13 | *(_BYTE *)(v15 + 112) & 0xEF;
      *(_QWORD *)(v15 + 8) = v9;
      *(_QWORD *)(v15 + 16) = v10;
      *(_BYTE *)(v15 + 112) = v8;
      if ( v14 )
      {
        if ( v36 )
        {
          *(_QWORD *)(v15 + 32) = 0LL;
          *(_QWORD *)(v15 + 48) = 0LL;
          LODWORD(v8) = *((_DWORD *)a1 + 1);
          if ( (v8 & 2) != 0 )
          {
            KiResetScb(v15, v14);
            LOBYTE(v8) = KiCheckForEffectivePriorityChange(v14, v15);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
        v18 = KeGetCurrentPrcb();
        *((_QWORD *)&v8 + 1) = v18->SchedulerAssist;
        if ( *((_QWORD *)&v8 + 1) )
        {
          if ( v18->NestingLevel <= 1u )
          {
            LODWORD(v8) = *(_DWORD *)(*((_QWORD *)&v8 + 1) + 20LL) - 1;
            *(_DWORD *)(*((_QWORD *)&v8 + 1) + 20LL) = v8;
            if ( !(_DWORD)v8 )
              LOBYTE(v8) = KiRemoveSystemWorkPriorityKick(v18);
          }
        }
      }
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < KeMaximumProcessors );
  }
  if ( v3 )
  {
    *(LARGE_INTEGER *)&v8 = KeQueryPerformanceCounter(0LL);
    *((_QWORD *)a1 + 3) = v8;
  }
  v19 = a1 + 40;
  if ( (_QWORD *)*v19 != v19 )
  {
    BYTE8(v8) = v3;
    LOBYTE(v8) = KiUpdateChildrenCpuTarget(v19, *((_QWORD *)&v8 + 1));
  }
  return v8;
}
