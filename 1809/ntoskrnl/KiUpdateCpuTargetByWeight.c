/*
 * XREFs of KiUpdateCpuTargetByWeight @ 0x140115FD4
 * Callers:
 *     KiAssignSchedulingGroupWeights @ 0x140115F1C (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateChildrenCpuTarget @ 0x14029BA24 (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiCheckForEffectivePriorityChange @ 0x140116904 (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x1401169A4 (KiResetScb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateChildrenCpuTarget @ 0x14029BA24 (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByWeight(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  unsigned __int16 v4; // bp
  unsigned __int16 v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 QuadPart; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r13
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
  __int64 v27; // r14
  struct _KPRCB *v28; // rcx
  int v29; // eax
  int v30; // eax
  unsigned __int64 v31; // rax
  unsigned int v33; // [rsp+20h] [rbp-58h]
  bool v34; // [rsp+80h] [rbp+8h]
  char v35; // [rsp+88h] [rbp+10h]
  int v36; // [rsp+90h] [rbp+18h] BYREF
  int v37; // [rsp+98h] [rbp+20h] BYREF

  v35 = a2;
  v3 = a2;
  v4 = *a1;
  v6 = a1[1];
  if ( *((_QWORD *)a1 + 12) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v36 = 0;
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
        KeYieldProcessorEx(&v36, a2, a3);
      while ( *(_QWORD *)(v22 + 48) );
    }
    v27 = *((_QWORD *)a1 + 67);
    QuadPart = (unsigned __int64)*a1 * *(_QWORD *)(v27 + 8) / *(unsigned int *)(*((_QWORD *)a1 + 12) + 20LL);
    v10 = QuadPart;
    if ( v4 == v6 )
      v7 = (unsigned __int64)*a1 * *(_QWORD *)(v27 + 8) / *(unsigned int *)(*((_QWORD *)a1 + 12) + 20LL);
    else
      v7 = *(_QWORD *)(v27 + 16);
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 48), 0LL);
    v28 = KeGetCurrentPrcb();
    v9 = (unsigned __int64)v28->SchedulerAssist;
    if ( v9 )
    {
      if ( v28->NestingLevel <= 1u )
      {
        LODWORD(QuadPart) = *(_DWORD *)(v9 + 20) - 1;
        *(_DWORD *)(v9 + 20) = QuadPart;
        if ( !(_DWORD)QuadPart )
          LOBYTE(QuadPart) = KiRemoveSystemWorkPriorityKick(v28);
      }
    }
    v3 = v35;
  }
  else
  {
    v7 = KiCyclesPerGeneration;
    QuadPart = KiCyclesPerGeneration * (unsigned __int64)v4 / (unsigned int)KiGroupSchedulingTotalWeight;
    v9 = KiCyclesPerGeneration * (unsigned __int64)v4 % (unsigned int)KiGroupSchedulingTotalWeight;
    v10 = QuadPart;
    if ( v4 == v6 )
      v7 = KiCyclesPerGeneration * (unsigned __int64)v4 / (unsigned int)KiGroupSchedulingTotalWeight;
  }
  v11 = (unsigned int)KeNumberProcessors_0;
  LOBYTE(v9) = v7 == KiCyclesPerGeneration;
  v33 = KeNumberProcessors_0;
  v12 = 0LL;
  v34 = v7 == KiCyclesPerGeneration;
  if ( KeMaximumProcessors )
  {
    v13 = 16 * v9;
    do
    {
      v14 = KiProcessorBlock[v12];
      v15 = (__int64)&a1[212 * (unsigned int)v12 + 64];
      if ( v14 )
      {
        v16 = KeGetCurrentPrcb();
        v37 = 0;
        while ( 1 )
        {
          v17 = v16->SchedulerAssist;
          if ( v17 )
          {
            if ( v16->NestingLevel <= 1u )
            {
              v29 = v17[5];
              v17[5] = v29 + 1;
              if ( v29 == -1 )
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
              v30 = v20[5] - 1;
              v20[5] = v30;
              if ( !v30 )
                KiRemoveSystemWorkPriorityKick(v16);
            }
          }
          do
            KeYieldProcessorEx(&v37, v9, v11);
          while ( *(_QWORD *)(v14 + 48) );
        }
        if ( !v34 && *(_BYTE *)(v14 + 33) )
        {
          v31 = v7 * v33;
          *((_QWORD *)a1 + 5) = v31;
          *((_QWORD *)a1 + 6) = v31;
        }
      }
      v3 = v35;
      LOBYTE(QuadPart) = v13 | *(_BYTE *)(v15 + 112) & 0xEF;
      *(_QWORD *)(v15 + 8) = v10;
      *(_QWORD *)(v15 + 16) = v7;
      *(_BYTE *)(v15 + 112) = QuadPart;
      if ( v14 )
      {
        if ( v35 )
        {
          *(_QWORD *)(v15 + 32) = 0LL;
          *(_QWORD *)(v15 + 48) = 0LL;
          LODWORD(QuadPart) = *((_DWORD *)a1 + 1);
          if ( (QuadPart & 2) != 0 )
          {
            KiResetScb(v15, v14);
            LOBYTE(QuadPart) = KiCheckForEffectivePriorityChange(v14, v15);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
        v18 = KeGetCurrentPrcb();
        v9 = (unsigned __int64)v18->SchedulerAssist;
        if ( v9 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            LODWORD(QuadPart) = *(_DWORD *)(v9 + 20) - 1;
            *(_DWORD *)(v9 + 20) = QuadPart;
            if ( !(_DWORD)QuadPart )
              LOBYTE(QuadPart) = KiRemoveSystemWorkPriorityKick(v18);
          }
        }
      }
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < KeMaximumProcessors );
  }
  if ( v3 )
  {
    QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
    *((_QWORD *)a1 + 3) = QuadPart;
  }
  v19 = a1 + 40;
  if ( (_QWORD *)*v19 != v19 )
  {
    LOBYTE(v9) = v3;
    LOBYTE(QuadPart) = KiUpdateChildrenCpuTarget(v19, v9);
  }
  return QuadPart;
}
