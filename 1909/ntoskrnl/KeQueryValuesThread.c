/*
 * XREFs of KeQueryValuesThread @ 0x1400837B0
 * Callers:
 *     NtQueryInformationThread @ 0x1405E5C60 (NtQueryInformationThread.c)
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 *     PsQueryStatisticsProcess @ 0x140613A50 (PsQueryStatisticsProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryValuesThread(__int64 a1, __int64 a2)
{
  char v3; // bp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v8; // esi
  __int64 v9; // rbp
  volatile signed __int32 *v10; // r14
  char v11; // al
  char v12; // al
  int v13; // ecx
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  __int64 result; // rax
  __int64 v17; // r12
  struct _KPRCB *v18; // r13
  _DWORD *v19; // rcx
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  __int64 v22; // rax
  struct _KPRCB *v23; // r13
  _DWORD *v24; // rcx
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  __int64 v27; // r12
  struct _KPRCB *v28; // rbp
  __int64 v29; // rax
  _DWORD *v30; // rcx
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  struct _KPRCB *v33; // r13
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  _DWORD *v39; // rcx
  _DWORD *v40; // rcx
  _DWORD *v41; // rcx
  _DWORD *v42; // rcx
  _DWORD *v43; // rcx
  _DWORD *v44; // rcx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  struct _KPRCB *v64; // rcx
  int v65[6]; // [rsp+20h] [rbp-58h] BYREF
  int v66; // [rsp+80h] [rbp+8h] BYREF
  int v67; // [rsp+88h] [rbp+10h] BYREF
  int v68; // [rsp+90h] [rbp+18h] BYREF
  int v69; // [rsp+98h] [rbp+20h] BYREF

  *(_DWORD *)a2 = 0;
  v3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v66 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v45 = SchedulerAssist[5];
      SchedulerAssist[5] = v45 + 1;
      if ( v45 == -1 )
LABEL_81:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v35 = CurrentPrcb->SchedulerAssist;
    if ( v35 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v46 = v35[5] - 1;
        v35[5] = v46;
        if ( !v46 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v66);
    while ( *(_QWORD *)(a1 + 64) );
    v36 = CurrentPrcb->SchedulerAssist;
    if ( v36 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v47 = v36[5];
        v36[5] = v47 + 1;
        if ( v47 == -1 )
          goto LABEL_81;
      }
    }
  }
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
  {
    LOBYTE(v8) = *(_BYTE *)(a1 + 388);
    *(_BYTE *)(a2 + 10) = 1;
    goto LABEL_14;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(a1 + 388);
      v9 = 0LL;
      v10 = 0LL;
      if ( v8 == 5 )
      {
        v11 = *(_BYTE *)(a1 + 112) & 7;
        if ( v11 == 1 || (unsigned __int8)(v11 - 3) <= 3u )
          goto LABEL_7;
        LOBYTE(v8) = 2;
        goto LABEL_30;
      }
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) == 2 )
      {
LABEL_30:
        v22 = *(unsigned int *)(a1 + 536);
        if ( (int)v22 >= 0 )
        {
          v23 = KeGetCurrentPrcb();
          v9 = KiProcessorBlock[v22];
          v65[0] = 0;
          v24 = v23->SchedulerAssist;
          if ( v24 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v58 = v24[5];
              v24[5] = v58 + 1;
              if ( v58 == -1 )
LABEL_120:
                KiRemoveSystemWorkPriorityKick(v23);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
          {
            v37 = v23->SchedulerAssist;
            if ( v37 )
            {
              if ( v23->NestingLevel <= 1u )
              {
                v59 = v37[5] - 1;
                v37[5] = v59;
                if ( !v59 )
                  KiRemoveSystemWorkPriorityKick(v23);
              }
            }
            do
              KeYieldProcessorEx(v65);
            while ( *(_QWORD *)(v9 + 48) );
            v38 = v23->SchedulerAssist;
            if ( v38 )
            {
              if ( v23->NestingLevel <= 1u )
              {
                v60 = v38[5];
                v38[5] = v60 + 1;
                if ( v60 == -1 )
                  goto LABEL_120;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v9 + 8) )
            goto LABEL_7;
LABEL_25:
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
          goto LABEL_26;
        }
      }
      else
      {
        if ( *(_BYTE *)(a1 + 388) != 3 )
          goto LABEL_7;
        v17 = *(unsigned int *)(a1 + 536);
        if ( (int)v17 >= 0 )
        {
          v18 = KeGetCurrentPrcb();
          v9 = KiProcessorBlock[v17];
          v67 = 0;
          v19 = v18->SchedulerAssist;
          if ( v19 )
          {
            if ( v18->NestingLevel <= 1u )
            {
              v48 = v19[5];
              v19[5] = v48 + 1;
              if ( v48 == -1 )
LABEL_90:
                KiRemoveSystemWorkPriorityKick(v18);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
          {
            v43 = v18->SchedulerAssist;
            if ( v43 )
            {
              if ( v18->NestingLevel <= 1u )
              {
                v49 = v43[5] - 1;
                v43[5] = v49;
                if ( !v49 )
                  KiRemoveSystemWorkPriorityKick(v18);
              }
            }
            do
              KeYieldProcessorEx(&v67);
            while ( *(_QWORD *)(v9 + 48) );
            v44 = v18->SchedulerAssist;
            if ( v44 )
            {
              if ( v18->NestingLevel <= 1u )
              {
                v50 = v44[5];
                v44[5] = v50 + 1;
                if ( v50 == -1 )
                  goto LABEL_90;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v9 + 16) )
            goto LABEL_7;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v17 )
            __fastfail(0x1Eu);
          goto LABEL_25;
        }
      }
    }
    v27 = *(unsigned int *)(a1 + 536);
    if ( (int)v27 >= 0 )
    {
      v33 = KeGetCurrentPrcb();
      v9 = KiProcessorBlock[v27];
      v69 = 0;
      v34 = v33->SchedulerAssist;
      if ( v34 )
      {
        if ( v33->NestingLevel <= 1u )
        {
          v54 = v34[5];
          v34[5] = v54 + 1;
          if ( v54 == -1 )
LABEL_108:
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
      {
        v41 = v33->SchedulerAssist;
        if ( v41 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v55 = v41[5] - 1;
            v41[5] = v55;
            if ( !v55 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
        do
          KeYieldProcessorEx(&v69);
        while ( *(_QWORD *)(v9 + 48) );
        v42 = v33->SchedulerAssist;
        if ( v42 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v56 = v42[5];
            v42[5] = v56 + 1;
            if ( v56 == -1 )
              goto LABEL_108;
          }
        }
      }
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v27 )
        goto LABEL_7;
      goto LABEL_25;
    }
    v28 = KeGetCurrentPrcb();
    v29 = (unsigned int)v27;
    LODWORD(v29) = v27 & 0x7FFFFFFF;
    v68 = 0;
    v30 = v28->SchedulerAssist;
    v10 = *(volatile signed __int32 **)(KiProcessorBlock[v29] + 24904);
    if ( v30 )
    {
      if ( v28->NestingLevel <= 1u )
      {
        v51 = v30[5];
        v30[5] = v51 + 1;
        if ( v51 == -1 )
LABEL_99:
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
    while ( _interlockedbittestandset64(v10, 0LL) )
    {
      v39 = v28->SchedulerAssist;
      if ( v39 )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v52 = v39[5] - 1;
          v39[5] = v52;
          if ( !v52 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
      do
        KeYieldProcessorEx(&v68);
      while ( *(_QWORD *)v10 );
      v40 = v28->SchedulerAssist;
      if ( v40 )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v53 = v40[5];
          v40[5] = v53 + 1;
          if ( v53 == -1 )
            goto LABEL_99;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v27 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
LABEL_26:
    v20 = KeGetCurrentPrcb();
    v21 = v20->SchedulerAssist;
    if ( v21 )
    {
      if ( v20->NestingLevel <= 1u )
      {
        v57 = v21[5] - 1;
        v21[5] = v57;
        if ( !v57 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  v9 = 0LL;
LABEL_7:
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 436);
  v12 = *(_BYTE *)(a1 + 388);
  v13 = *(_DWORD *)(a1 + 132);
  if ( v12 == 1 || v12 == 7 && (*(_DWORD *)(a1 + 116) & 2) != 0 )
    v13 += MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436);
  *(_DWORD *)(a2 + 4) = v13;
  if ( v9 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
    v25 = KeGetCurrentPrcb();
    v26 = v25->SchedulerAssist;
    if ( v26 )
    {
      if ( v25->NestingLevel <= 1u )
      {
        v61 = v26[5] - 1;
        v26[5] = v61;
        if ( !v61 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
  }
  if ( v10 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    v31 = KeGetCurrentPrcb();
    v32 = v31->SchedulerAssist;
    if ( v32 )
    {
      if ( v31->NestingLevel <= 1u )
      {
        v62 = v32[5] - 1;
        v32[5] = v62;
        if ( !v62 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
  }
  v3 = *(_BYTE *)(a1 + 643);
  *(_BYTE *)(a2 + 10) = *(_BYTE *)(a1 + 195);
  if ( (_BYTE)v8 == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
    v3 = 5;
LABEL_14:
  *(_BYTE *)(a2 + 11) = *(_BYTE *)(a1 + 563);
  *(_QWORD *)(a1 + 64) = 0LL;
  v14 = KeGetCurrentPrcb();
  v15 = v14->SchedulerAssist;
  if ( v15 )
  {
    if ( v14->NestingLevel <= 1u )
    {
      v63 = v15[5] - 1;
      v15[5] = v63;
      if ( !v63 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v64 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v64->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v64);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *(_BYTE *)(a2 + 9) = v3;
  *(_BYTE *)(a2 + 8) = v8;
  return result;
}
