/*
 * XREFs of KeQueryValuesThread @ 0x14008EE70
 * Callers:
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     PsQueryStatisticsProcess @ 0x1405FF700 (PsQueryStatisticsProcess.c)
 *     NtQueryInformationThread @ 0x14064B720 (NtQueryInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiGetThreadReadyTime @ 0x1401B4AD0 (KiGetThreadReadyTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryValuesThread(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // di
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // eax
  __int64 *v12; // rdx
  char v13; // r15
  __int64 v14; // rbx
  volatile signed __int32 *v15; // r14
  char v16; // al
  __int64 v17; // rax
  struct _KPRCB *v18; // rdi
  _DWORD *v19; // rcx
  int v20; // eax
  _DWORD *v21; // rcx
  int v22; // eax
  __int64 v23; // rsi
  struct _KPRCB *v24; // rdi
  _DWORD *v25; // rcx
  int v26; // eax
  _DWORD *v27; // rcx
  int v28; // eax
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  int v31; // eax
  __int64 v32; // rsi
  struct _KPRCB *v33; // rbx
  __int64 v34; // rax
  _DWORD *v35; // rcx
  int v36; // eax
  _DWORD *v37; // rcx
  int v38; // eax
  struct _KPRCB *v39; // rdi
  _DWORD *v40; // rcx
  int v41; // eax
  _DWORD *v42; // rcx
  int v43; // eax
  _DWORD *v44; // rdx
  int v45; // eax
  struct _KPRCB *v46; // rcx
  _DWORD *v47; // rdx
  int v48; // eax
  struct _KPRCB *v49; // rcx
  _DWORD *v50; // rdx
  int v51; // eax
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  int v54; // eax
  struct _KPRCB *v55; // rcx
  __int64 result; // rax
  int v57[6]; // [rsp+20h] [rbp-58h] BYREF
  int v58; // [rsp+80h] [rbp+8h] BYREF
  int v59; // [rsp+88h] [rbp+10h] BYREF
  int v60; // [rsp+90h] [rbp+18h] BYREF
  int v61; // [rsp+98h] [rbp+20h] BYREF

  *(_DWORD *)a2 = 0;
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v58 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v9 = SchedulerAssist[5];
        SchedulerAssist[5] = v9 + 1;
        if ( v9 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v10[5] - 1;
        v10[5] = v11;
        if ( !v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v58, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
  {
    v13 = *(_BYTE *)(a1 + 388);
    *(_BYTE *)(a2 + 10) = 1;
    goto LABEL_111;
  }
LABEL_18:
  v12 = KiProcessorBlock;
  while ( 1 )
  {
    v13 = *(_BYTE *)(a1 + 388);
    v14 = 0LL;
    v15 = 0LL;
    if ( v13 == 1 )
      break;
    switch ( *(_BYTE *)(a1 + 388) )
    {
      case 2:
        goto LABEL_26;
      case 3:
        v23 = *(unsigned int *)(a1 + 536);
        if ( (int)v23 >= 0 )
        {
          v24 = KeGetCurrentPrcb();
          v14 = KiProcessorBlock[v23];
          v59 = 0;
          while ( 1 )
          {
            v25 = v24->SchedulerAssist;
            if ( v25 )
            {
              if ( v24->NestingLevel <= 1u )
              {
                v26 = v25[5];
                v25[5] = v26 + 1;
                if ( v26 == -1 )
                  KiRemoveSystemWorkPriorityKick(v24);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
              break;
            v27 = v24->SchedulerAssist;
            if ( v27 )
            {
              if ( v24->NestingLevel <= 1u )
              {
                v28 = v27[5] - 1;
                v27[5] = v28;
                if ( !v28 )
                  KiRemoveSystemWorkPriorityKick(v24);
              }
            }
            do
              KeYieldProcessorEx(&v59, (__int64)v12, a3);
            while ( *(_QWORD *)(v14 + 48) );
          }
          if ( a1 == *(_QWORD *)(v14 + 16) )
            goto LABEL_97;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v23 )
            __fastfail(0x1Eu);
LABEL_91:
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
LABEL_92:
          v29 = KeGetCurrentPrcb();
          v44 = v29->SchedulerAssist;
          if ( !v44 || v29->NestingLevel > 1u )
            goto LABEL_18;
          v45 = v44[5] - 1;
          v44[5] = v45;
          v12 = KiProcessorBlock;
          if ( !v45 )
            goto LABEL_60;
        }
        break;
      case 5:
        v16 = *(_BYTE *)(a1 + 112) & 7;
        if ( v16 == 1 || (unsigned __int8)(v16 - 3) <= 3u )
          goto LABEL_97;
        v13 = 2;
LABEL_26:
        v17 = *(unsigned int *)(a1 + 536);
        if ( (int)v17 >= 0 )
        {
          v18 = KeGetCurrentPrcb();
          v14 = KiProcessorBlock[v17];
          v60 = 0;
          while ( 1 )
          {
            v19 = v18->SchedulerAssist;
            if ( v19 )
            {
              if ( v18->NestingLevel <= 1u )
              {
                v20 = v19[5];
                v19[5] = v20 + 1;
                if ( v20 == -1 )
                  KiRemoveSystemWorkPriorityKick(v18);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
              break;
            v21 = v18->SchedulerAssist;
            if ( v21 )
            {
              if ( v18->NestingLevel <= 1u )
              {
                v22 = v21[5] - 1;
                v21[5] = v22;
                if ( !v22 )
                  KiRemoveSystemWorkPriorityKick(v18);
              }
            }
            do
              KeYieldProcessorEx(&v60, (__int64)v12, a3);
            while ( *(_QWORD *)(v14 + 48) );
          }
          if ( a1 == *(_QWORD *)(v14 + 8) )
            goto LABEL_97;
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          if ( !v30 || v29->NestingLevel > 1u )
            goto LABEL_18;
          v31 = v30[5] - 1;
          v30[5] = v31;
          v12 = KiProcessorBlock;
          if ( !v31 )
          {
LABEL_60:
            KiRemoveSystemWorkPriorityKick(v29);
            goto LABEL_18;
          }
        }
        break;
      default:
        goto LABEL_97;
    }
  }
  v32 = *(unsigned int *)(a1 + 536);
  if ( (int)v32 >= 0 )
  {
    v39 = KeGetCurrentPrcb();
    v14 = KiProcessorBlock[v32];
    v57[0] = 0;
    while ( 1 )
    {
      v40 = v39->SchedulerAssist;
      if ( v40 )
      {
        if ( v39->NestingLevel <= 1u )
        {
          v41 = v40[5];
          v40[5] = v41 + 1;
          if ( v41 == -1 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
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
        KeYieldProcessorEx(v57, (__int64)v12, a3);
      while ( *(_QWORD *)(v14 + 48) );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v32 )
      goto LABEL_97;
    goto LABEL_91;
  }
  v33 = KeGetCurrentPrcb();
  v34 = (unsigned int)v32;
  LODWORD(v34) = v32 & 0x7FFFFFFF;
  v61 = 0;
  v15 = *(volatile signed __int32 **)(KiProcessorBlock[v34] + 24904);
  while ( 1 )
  {
    v35 = v33->SchedulerAssist;
    if ( v35 )
    {
      if ( v33->NestingLevel <= 1u )
      {
        v36 = v35[5];
        v35[5] = v36 + 1;
        if ( v36 == -1 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    if ( !_interlockedbittestandset64(v15, 0LL) )
      break;
    v37 = v33->SchedulerAssist;
    if ( v37 )
    {
      if ( v33->NestingLevel <= 1u )
      {
        v38 = v37[5] - 1;
        v37[5] = v38;
        if ( !v38 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    do
      KeYieldProcessorEx(&v61, (__int64)v12, a3);
    while ( *(_QWORD *)v15 );
  }
  if ( *(_BYTE *)(a1 + 388) != 1 || *(_DWORD *)(a1 + 536) != (_DWORD)v32 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
    goto LABEL_92;
  }
  v14 = 0LL;
LABEL_97:
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 436);
  *(_DWORD *)(a2 + 4) = KiGetThreadReadyTime(a1, v12);
  if ( v14 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
    v46 = KeGetCurrentPrcb();
    v47 = v46->SchedulerAssist;
    if ( v47 )
    {
      if ( v46->NestingLevel <= 1u )
      {
        v48 = v47[5] - 1;
        v47[5] = v48;
        if ( !v48 )
          KiRemoveSystemWorkPriorityKick(v46);
      }
    }
  }
  if ( v15 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
    v49 = KeGetCurrentPrcb();
    v50 = v49->SchedulerAssist;
    if ( v50 )
    {
      if ( v49->NestingLevel <= 1u )
      {
        v51 = v50[5] - 1;
        v50[5] = v51;
        if ( !v51 )
          KiRemoveSystemWorkPriorityKick(v49);
      }
    }
  }
  v5 = *(_BYTE *)(a1 + 643);
  *(_BYTE *)(a2 + 10) = *(_BYTE *)(a1 + 195);
  if ( v13 == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
    v5 = 5;
LABEL_111:
  *(_BYTE *)(a2 + 11) = *(_BYTE *)(a1 + 563);
  *(_QWORD *)(a1 + 64) = 0LL;
  v52 = KeGetCurrentPrcb();
  v53 = v52->SchedulerAssist;
  if ( v53 )
  {
    if ( v52->NestingLevel <= 1u )
    {
      v54 = v53[5] - 1;
      v53[5] = v54;
      if ( !v54 )
        KiRemoveSystemWorkPriorityKick(v52);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v55 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v55->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v55);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *(_BYTE *)(a2 + 8) = v13;
  *(_BYTE *)(a2 + 9) = v5;
  return result;
}
