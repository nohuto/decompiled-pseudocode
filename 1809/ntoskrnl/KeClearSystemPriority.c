/*
 * XREFs of KeClearSystemPriority @ 0x14005B570
 * Callers:
 *     PspRevertContainerImpersonation @ 0x14005B390 (PspRevertContainerImpersonation.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiSetPriorityThread @ 0x1400CF6C0 (KiSetPriorityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
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
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  struct _KPRCB *v13; // rdi
  _QWORD *i; // rbx
  _KTHREAD *CurrentThread; // rbp
  struct _KPRCB *v16; // rbx
  _DWORD *v17; // rcx
  _KTHREAD *NextThread; // rbx
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  _QWORD *v27; // rdx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  struct _KPRCB *v31; // rcx
  int v33; // [rsp+70h] [rbp+8h] BYREF
  int v34; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v35; // [rsp+80h] [rbp+18h] BYREF

  v35 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v33 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v24 = SchedulerAssist[5];
      SchedulerAssist[5] = v24 + 1;
      if ( v24 == -1 )
LABEL_44:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    v22 = CurrentPrcb->SchedulerAssist;
    if ( v22 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v25 = v22[5] - 1;
        v22[5] = v25;
        if ( !v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v33);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    v23 = CurrentPrcb->SchedulerAssist;
    if ( v23 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v26 = v23[5];
        v23[5] = v26 + 1;
        if ( v26 == -1 )
          goto LABEL_44;
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
        if ( (char)(*(_BYTE *)(BugCheckParameter1 + 563) + (v10 & 0xF) + (v10 >> 4)) < v9 )
          LOBYTE(v7) = KiSetPriorityThread(BugCheckParameter1, &v35);
      }
    }
  }
  *(_BYTE *)(BugCheckParameter1 + 795) = 0;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v7 = v12[5] - 1;
      v12[5] = v7;
      if ( !v7 )
        LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  v13 = KeGetCurrentPrcb();
  for ( i = v35; i; LOBYTE(v7) = KiDeferredReadyThread(v13, v27) )
  {
    v27 = i - 27;
    i = (_QWORD *)*i;
  }
  if ( CurrentIrql < 2u )
  {
    CurrentThread = v13->CurrentThread;
    if ( v13->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v13->CurrentThread, 0);
      v16 = KeGetCurrentPrcb();
      v34 = 0;
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v28 = v17[5];
          v17[5] = v28 + 1;
          if ( v28 == -1 )
LABEL_59:
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v13->PrcbLock, 0LL) )
      {
        v20 = v16->SchedulerAssist;
        if ( v20 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v29 = v20[5] - 1;
            v20[5] = v29;
            if ( !v29 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        do
          KeYieldProcessorEx(&v34);
        while ( v13->PrcbLock );
        v21 = v16->SchedulerAssist;
        if ( v21 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v30 = v21[5];
            v21[5] = v30 + 1;
            if ( v30 == -1 )
              goto LABEL_59;
          }
        }
      }
      NextThread = v13->NextThread;
      v13->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(v13, CurrentThread, 0LL);
      _enable();
      KiUpdatePriorityMatrixThreadState(v13, NextThread, 0LL, 2LL);
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(v13, CurrentThread);
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, CurrentIrql) )
        goto LABEL_15;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
        goto LABEL_27;
    }
    else
    {
      if ( (CurrentThread->MiscFlags & 0x40) == 0 )
        goto LABEL_15;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
      {
LABEL_27:
        __writecr8(1uLL);
        CurrentThread->MiscFlags &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
LABEL_15:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v31 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v31);
        }
        LOBYTE(v7) = CurrentIrql;
        __writecr8(CurrentIrql);
        return v7;
      }
    }
    v19 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v19);
    goto LABEL_27;
  }
  if ( v13->NextThread )
  {
    LOBYTE(v7) = v13->DpcRoutineActive;
    if ( !(_BYTE)v7 )
      LOBYTE(v7) = KiRequestSoftwareInterrupt(v13, 2);
  }
  return v7;
}
