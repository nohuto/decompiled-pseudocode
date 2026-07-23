/*
 * XREFs of KiAcquireThreadStateLock @ 0x1400CFAD0
 * Callers:
 *     KeSetPriorityBoost @ 0x1400CEF60 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF6C0 (KiSetPriorityThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400D1E00 (KeQueryTotalCycleTimeThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7EEC (KiApplyForegroundBoostThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400F3B18 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400F4738 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetAffinityThread @ 0x1401154EC (KiSetAffinityThread.c)
 *     KeUpdateThreadTag @ 0x14013E8F0 (KeUpdateThreadTag.c)
 *     KeSetIdealProcessorThreadEx @ 0x14015CF4C (KeSetIdealProcessorThreadEx.c)
 *     KeTryToFreezeThreadStack @ 0x140160F24 (KeTryToFreezeThreadStack.c)
 *     KiUpdateThreadCpuSets @ 0x14018CC14 (KiUpdateThreadCpuSets.c)
 *     KeSetThreadSchedulerAssist @ 0x140297F34 (KeSetThreadSchedulerAssist.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140298EE0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x14029924C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAcquireThreadStateLock(__int64 a1, __int64 a2, volatile signed __int32 **a3)
{
  _QWORD *v4; // rbp
  __int64 *v6; // r8
  int v7; // ebx
  __int64 v8; // rdi
  volatile signed __int32 *v9; // r14
  __int64 v10; // rax
  struct _KPRCB *v11; // r13
  _DWORD *v12; // rcx
  __int64 result; // rax
  char v14; // al
  __int64 v15; // r12
  struct _KPRCB *v16; // rdi
  __int64 v17; // rax
  _DWORD *v18; // rcx
  __int64 v19; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  struct _KPRCB *v27; // r13
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
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
  int v46; // eax
  int v47; // [rsp+20h] [rbp-48h] BYREF
  int v48[17]; // [rsp+24h] [rbp-44h] BYREF
  int v49; // [rsp+70h] [rbp+8h] BYREF
  int v50; // [rsp+88h] [rbp+20h] BYREF

  v4 = (_QWORD *)a2;
LABEL_2:
  v6 = KiProcessorBlock;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(unsigned __int8 *)(a1 + 388);
      v8 = 0LL;
      v9 = 0LL;
      if ( v7 == 2 )
        goto LABEL_4;
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) == 3 )
      {
        v19 = *(unsigned int *)(a1 + 536);
        if ( (int)v19 >= 0 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = KiProcessorBlock[v19];
          v49 = 0;
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v33 = SchedulerAssist[5];
              SchedulerAssist[5] = v33 + 1;
              if ( v33 == -1 )
LABEL_57:
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
          {
            v25 = CurrentPrcb->SchedulerAssist;
            if ( v25 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v34 = v25[5] - 1;
                v25[5] = v34;
                if ( !v34 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            do
              KeYieldProcessorEx(&v49, a2, (__int64)v6);
            while ( *(_QWORD *)(v8 + 48) );
            v26 = CurrentPrcb->SchedulerAssist;
            if ( v26 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v35 = v26[5];
                v26[5] = v35 + 1;
                if ( v35 == -1 )
                  goto LABEL_57;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v8 + 16) )
            goto LABEL_8;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v19 )
            __fastfail(0x1Eu);
LABEL_26:
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
          goto LABEL_27;
        }
      }
      else
      {
        if ( *(_BYTE *)(a1 + 388) != 5 )
          goto LABEL_8;
        v14 = *(_BYTE *)(a1 + 112) & 7;
        if ( v14 == 1 || (unsigned __int8)(v14 - 3) <= 3u )
          goto LABEL_8;
        LOBYTE(v7) = 2;
LABEL_4:
        v10 = *(unsigned int *)(a1 + 536);
        if ( (int)v10 >= 0 )
        {
          v11 = KeGetCurrentPrcb();
          v8 = KiProcessorBlock[v10];
          v48[0] = 0;
          v12 = v11->SchedulerAssist;
          if ( v12 )
          {
            if ( v11->NestingLevel <= 1u )
            {
              v43 = v12[5];
              v12[5] = v43 + 1;
              if ( v43 == -1 )
LABEL_87:
                KiRemoveSystemWorkPriorityKick(v11);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
          {
            v23 = v11->SchedulerAssist;
            if ( v23 )
            {
              if ( v11->NestingLevel <= 1u )
              {
                v44 = v23[5] - 1;
                v23[5] = v44;
                if ( !v44 )
                  KiRemoveSystemWorkPriorityKick(v11);
              }
            }
            do
              KeYieldProcessorEx(v48, a2, (__int64)v6);
            while ( *(_QWORD *)(v8 + 48) );
            v24 = v11->SchedulerAssist;
            if ( v24 )
            {
              if ( v11->NestingLevel <= 1u )
              {
                v45 = v24[5];
                v24[5] = v45 + 1;
                if ( v45 == -1 )
                  goto LABEL_87;
              }
            }
          }
          if ( a1 == *(_QWORD *)(v8 + 8) )
            goto LABEL_8;
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
          v22 = KeGetCurrentPrcb();
          v6 = KiProcessorBlock;
          a2 = (__int64)v22->SchedulerAssist;
          if ( a2 )
          {
            v6 = KiProcessorBlock;
            if ( v22->NestingLevel <= 1u )
            {
              v6 = KiProcessorBlock;
              v46 = *(_DWORD *)(a2 + 20) - 1;
              *(_DWORD *)(a2 + 20) = v46;
              if ( !v46 )
              {
LABEL_84:
                KiRemoveSystemWorkPriorityKick(v22);
                goto LABEL_2;
              }
            }
          }
        }
      }
    }
    v15 = *(unsigned int *)(a1 + 536);
    if ( (int)v15 >= 0 )
    {
      v27 = KeGetCurrentPrcb();
      v8 = KiProcessorBlock[v15];
      v47 = 0;
      v28 = v27->SchedulerAssist;
      if ( v28 )
      {
        if ( v27->NestingLevel <= 1u )
        {
          v39 = v28[5];
          v28[5] = v39 + 1;
          if ( v39 == -1 )
LABEL_75:
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
      {
        v29 = v27->SchedulerAssist;
        if ( v29 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v40 = v29[5] - 1;
            v29[5] = v40;
            if ( !v40 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
        do
          KeYieldProcessorEx(&v47, a2, (__int64)v6);
        while ( *(_QWORD *)(v8 + 48) );
        v30 = v27->SchedulerAssist;
        if ( v30 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v41 = v30[5];
            v30[5] = v41 + 1;
            if ( v41 == -1 )
              goto LABEL_75;
          }
        }
      }
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v15 )
        goto LABEL_8;
      goto LABEL_26;
    }
    v16 = KeGetCurrentPrcb();
    v17 = (unsigned int)v15;
    LODWORD(v17) = v15 & 0x7FFFFFFF;
    v50 = 0;
    v18 = v16->SchedulerAssist;
    v9 = *(volatile signed __int32 **)(KiProcessorBlock[v17] + 24904);
    if ( v18 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v36 = v18[5];
        v18[5] = v36 + 1;
        if ( v36 == -1 )
LABEL_66:
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    while ( _interlockedbittestandset64(v9, 0LL) )
    {
      v31 = v16->SchedulerAssist;
      if ( v31 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v37 = v31[5] - 1;
          v31[5] = v37;
          if ( !v37 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      do
        KeYieldProcessorEx(&v50, a2, (__int64)v6);
      while ( *(_QWORD *)v9 );
      v32 = v16->SchedulerAssist;
      if ( v32 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v38 = v32[5];
          v32[5] = v38 + 1;
          if ( v38 == -1 )
            goto LABEL_66;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v15 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
LABEL_27:
    v22 = KeGetCurrentPrcb();
    v6 = KiProcessorBlock;
    a2 = (__int64)v22->SchedulerAssist;
    if ( a2 )
    {
      v6 = KiProcessorBlock;
      if ( v22->NestingLevel <= 1u )
      {
        v6 = KiProcessorBlock;
        v42 = *(_DWORD *)(a2 + 20) - 1;
        *(_DWORD *)(a2 + 20) = v42;
        if ( !v42 )
          goto LABEL_84;
      }
    }
  }
  v8 = 0LL;
LABEL_8:
  result = (unsigned __int8)v7;
  *v4 = v8;
  *a3 = v9;
  return result;
}
