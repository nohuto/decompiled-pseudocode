/*
 * XREFs of KeClearSystemPriority @ 0x140047950
 * Callers:
 *     PspRevertContainerImpersonation @ 0x140036C00 (PspRevertContainerImpersonation.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14000F8C0 (KiSetPriorityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043050 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1401CB370 (KiSwapContext.c)
 */

char __fastcall KeClearSystemPriority(ULONG_PTR BugCheckParameter1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  ULONG_PTR v5; // rcx
  char v6; // al
  int v7; // eax
  unsigned int v8; // edx
  char v9; // dl
  unsigned __int8 v10; // cl
  signed __int8 v11; // cl
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  struct _KPRCB *v14; // rdi
  _QWORD *i; // rbx
  __int64 CurrentThread; // rbx
  struct _KPRCB *v17; // rbp
  _DWORD *v18; // rcx
  _KTHREAD *NextThread; // rbp
  __int64 v20; // r8
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  _QWORD *v29; // rdx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  struct _KPRCB *v33; // rcx
  int v35; // [rsp+60h] [rbp+8h] BYREF
  int v36; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v37; // [rsp+70h] [rbp+18h] BYREF

  v37 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v35 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v26 = SchedulerAssist[5];
      SchedulerAssist[5] = v26 + 1;
      if ( v26 == -1 )
LABEL_46:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    v24 = CurrentPrcb->SchedulerAssist;
    if ( v24 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = v24[5] - 1;
        v24[5] = v27;
        if ( !v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v35);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    v25 = CurrentPrcb->SchedulerAssist;
    if ( v25 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v28 = v25[5];
        v25[5] = v28 + 1;
        if ( v28 == -1 )
          goto LABEL_46;
      }
    }
  }
  v5 = *(char *)(BugCheckParameter1 + 795);
  v6 = *(_BYTE *)(v5 + BugCheckParameter1 + 1392);
  if ( !v6 )
    KeBugCheckEx(0x157u, BugCheckParameter1, v5, 2uLL, 0LL);
  LOBYTE(v7) = v6 - 1;
  *(_BYTE *)(v5 + BugCheckParameter1 + 1392) = v7;
  if ( !(_BYTE)v7 )
  {
    v8 = *(_DWORD *)(BugCheckParameter1 + 1408) ^ (1 << v5);
    v7 = 1 << v5;
    *(_DWORD *)(BugCheckParameter1 + 1408) = v8;
    if ( v8 < 1 << v5 )
    {
      v9 = *(_BYTE *)(BugCheckParameter1 + 195);
      if ( v9 < 16 )
      {
        v10 = *(_BYTE *)(BugCheckParameter1 + 564);
        LOBYTE(v7) = v10 & 0xF;
        v11 = *(_BYTE *)(BugCheckParameter1 + 563) + (v10 & 0xF) + (v10 >> 4);
        if ( v11 < v9 )
          LOBYTE(v7) = KiSetPriorityThread((_BYTE *)BugCheckParameter1, (__int64 *)&v37, v11);
      }
    }
  }
  *(_BYTE *)(BugCheckParameter1 + 795) = 0;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  v12 = KeGetCurrentPrcb();
  v13 = v12->SchedulerAssist;
  if ( v13 )
  {
    if ( v12->NestingLevel <= 1u )
    {
      v7 = v13[5] - 1;
      v13[5] = v7;
      if ( !v7 )
        LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  v14 = KeGetCurrentPrcb();
  for ( i = v37; i; LOBYTE(v7) = KiDeferredReadyThread(v14, v29) )
  {
    v29 = i - 27;
    i = (_QWORD *)*i;
  }
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (__int64)v14->CurrentThread;
    if ( v14->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v14->CurrentThread, 0);
      v17 = KeGetCurrentPrcb();
      v36 = 0;
      v18 = v17->SchedulerAssist;
      if ( v18 )
      {
        if ( v17->NestingLevel <= 1u )
        {
          v30 = v18[5];
          v18[5] = v30 + 1;
          if ( v30 == -1 )
LABEL_61:
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v14->PrcbLock, 0LL) )
      {
        v22 = v17->SchedulerAssist;
        if ( v22 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v31 = v22[5] - 1;
            v22[5] = v31;
            if ( !v31 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        do
          KeYieldProcessorEx(&v36);
        while ( v14->PrcbLock );
        v23 = v17->SchedulerAssist;
        if ( v23 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v32 = v23[5];
            v23[5] = v32 + 1;
            if ( v32 == -1 )
              goto LABEL_61;
          }
        }
      }
      NextThread = v14->NextThread;
      v14->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v14, CurrentThread, 0LL);
      _enable();
      v14->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v20 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v20 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)v14, CurrentThread, v20);
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, CurrentIrql) )
        goto LABEL_15;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
        goto LABEL_29;
    }
    else
    {
      if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
        goto LABEL_15;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
      {
LABEL_29:
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
LABEL_15:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v33);
        }
        LOBYTE(v7) = CurrentIrql;
        __writecr8(CurrentIrql);
        return v7;
      }
    }
    v21 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v21);
    goto LABEL_29;
  }
  if ( v14->NextThread )
  {
    LOBYTE(v7) = v14->DpcRoutineActive;
    if ( !(_BYTE)v7 )
      LOBYTE(v7) = KiRequestSoftwareInterrupt(v14, 2LL);
  }
  return v7;
}
