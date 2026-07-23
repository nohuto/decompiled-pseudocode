/*
 * XREFs of KiRemoveBoostThread @ 0x1400CFE60
 * Callers:
 *     ExpReleaseResourceSharedForThreadLite @ 0x14004F6A0 (ExpReleaseResourceSharedForThreadLite.c)
 *     KiCompleteDirectSwitchThread @ 0x1400D2C9C (KiCompleteDirectSwitchThread.c)
 *     KeGenericProcessorCallback @ 0x1400D8710 (KeGenericProcessorCallback.c)
 *     KeSetEventBoostPriorityEx @ 0x140103548 (KeSetEventBoostPriorityEx.c)
 *     KeWakeWaitChain @ 0x140125CA8 (KeWakeWaitChain.c)
 *     KeRemovePriorityBoost @ 0x14028E134 (KeRemovePriorityBoost.c)
 * Callees:
 *     KiSelectReadyThreadEx @ 0x14005ADA0 (KiSelectReadyThreadEx.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 */

char __fastcall KiRemoveBoostThread(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // cl
  char v10; // bp
  unsigned int v11; // eax
  char v12; // si
  unsigned __int8 v13; // r14
  struct _KPRCB *v14; // r15
  _DWORD *v15; // rcx
  _QWORD *v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // r8
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // edx
  int v34; // [rsp+68h] [rbp+10h] BYREF
  int v35; // [rsp+70h] [rbp+18h] BYREF
  int v36; // [rsp+78h] [rbp+20h]

  if ( !*(_BYTE *)(a2 + 564) )
    return *(_BYTE *)(a2 + 195) + 1;
  CurrentPrcb = KeGetCurrentPrcb();
  v34 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v26 = SchedulerAssist[5];
      SchedulerAssist[5] = v26 + 1;
      if ( v26 == -1 )
LABEL_33:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    v22 = CurrentPrcb->SchedulerAssist;
    if ( v22 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = v22[5] - 1;
        v22[5] = v27;
        if ( !v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v34, a2, a3);
    while ( *(_QWORD *)(a2 + 64) );
    v23 = CurrentPrcb->SchedulerAssist;
    if ( v23 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v28 = v23[5];
        v23[5] = v28 + 1;
        if ( v28 == -1 )
          goto LABEL_33;
      }
    }
  }
  v7 = *(unsigned __int8 *)(a2 + 564);
  v8 = *(unsigned __int8 *)(a2 + 195);
  v9 = v7 & 0xF;
  v10 = v8 - (v7 & 0xF);
  if ( (v7 & 0xF) == 0 )
    v10 = *(_BYTE *)(a2 + 195);
  LOBYTE(v7) = (unsigned __int8)v7 >> 4;
  if ( (_BYTE)v7 )
  {
    v11 = *(_DWORD *)(a2 + 1408);
    v12 = v8 - v7;
    *(_BYTE *)(a2 + 564) = v9;
    if ( v11 )
    {
      _BitScanReverse((unsigned int *)&v7, v11);
      if ( v12 < (int)v7 )
        v12 = v7;
      v36 = v7;
    }
    if ( v12 != (_BYTE)v8 )
    {
      v13 = 0;
      v14 = KeGetCurrentPrcb();
      v35 = 0;
      v15 = v14->SchedulerAssist;
      if ( v15 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v29 = v15[5];
          v15[5] = v29 + 1;
          if ( v29 == -1 )
LABEL_42:
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v24 = v14->SchedulerAssist;
        if ( v24 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v30 = v24[5] - 1;
            v24[5] = v30;
            if ( !v30 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
        do
          KeYieldProcessorEx(&v35, v7, v8);
        while ( *(_QWORD *)(a1 + 48) );
        v25 = v14->SchedulerAssist;
        if ( v25 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v31 = v25[5];
            v25[5] = v31 + 1;
            if ( v31 == -1 )
              goto LABEL_42;
          }
        }
      }
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v16 = KiSelectReadyThreadEx((struct _KPRCB *)a1, (_KTHREAD *)a2, 1LL);
        if ( v16 )
          KiUpdatePriorityMatrixThreadState(a1, v16, 2LL, 3LL);
        else
          v13 = 1;
      }
      KiUpdateThreadPriority(a1, a2, (unsigned int)v12, v13);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v17 = KeGetCurrentPrcb();
      v18 = v17->SchedulerAssist;
      if ( v18 )
      {
        if ( v17->NestingLevel <= 1u )
        {
          v32 = v18[5] - 1;
          v18[5] = v32;
          if ( !v32 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
    }
  }
  else
  {
    ++v10;
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  v19 = KeGetCurrentPrcb();
  v20 = v19->SchedulerAssist;
  if ( v20 && v19->NestingLevel <= 1u )
  {
    v33 = v20[5] - 1;
    v20[5] = v33;
    if ( !v33 )
      KiRemoveSystemWorkPriorityKick(v19);
  }
  return v10;
}
