/*
 * XREFs of KiAbForceProcessLockEntry @ 0x14016B534
 * Callers:
 *     KeAbMarkCrossThreadReleasable @ 0x14016B494 (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140060B90 (KiAbEntryGetLockedHeadEntry.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiAbIoBoostOwners @ 0x14009DD40 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14009DE3C (KiAbCpuBoostOwners.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14009F26C (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14009F340 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14009F388 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14009F478 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiSetThreadState @ 0x14013AC0C (KiSetThreadState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 */

char __fastcall KiAbForceProcessLockEntry(char *Node)
{
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  char *LockedHeadEntry; // rax
  __int64 v5; // rdi
  char result; // al
  __int64 CurrentThread; // rsi
  bool v8; // zf
  struct _KPRCB *v9; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 NextThread; // rdi
  __int64 v12; // r8
  __int64 v13; // r8
  struct _KPRCB *v14; // rcx
  __int64 v15; // rax
  char v16; // r9
  char v17; // r14
  char v18; // al
  char v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char CpuPriorityKey; // si
  int v24; // r10d
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  struct _KPRCB *v28; // rcx
  _QWORD *v29; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  int v31; // [rsp+A0h] [rbp+50h] BYREF
  int v32; // [rsp+A8h] [rbp+58h]

  v29 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v32 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LockedHeadEntry = KiAbEntryGetLockedHeadEntry(Node, 1, &LockHandle);
  v5 = (__int64)LockedHeadEntry;
  if ( LockedHeadEntry )
  {
    if ( (Node[25] & 1) == 0 )
    {
LABEL_4:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_5;
    }
    if ( Node != LockedHeadEntry )
      KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)Node, (_RTL_RB_TREE *)LockedHeadEntry);
    v15 = *(_QWORD *)(v5 + 56);
    if ( v15 )
      v16 = *(_BYTE *)(v15 + 48);
    else
      v16 = 15;
    v17 = v16;
    if ( (*(_BYTE *)(v5 + 25) & 1) == 0 )
    {
      v18 = KiAbOwnerComputeCpuPriorityKey(v5);
      if ( v18 < v19 )
        v17 = v18;
    }
    KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)Node, v5);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)Node, v20, v21, v22);
    if ( v17 < CpuPriorityKey )
    {
      if ( !v24 )
      {
LABEL_44:
        KiAbCpuBoostOwners(v5, CpuPriorityKey, (int)&v29, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        goto LABEL_4;
      }
    }
    else if ( !v24 )
    {
      goto LABEL_4;
    }
    KiAbIoBoostOwners(v5, v24, (int)&v29, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
    goto LABEL_44;
  }
LABEL_5:
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v29);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v9 = KeGetCurrentPrcb();
      v31 = 0;
      while ( 1 )
      {
        SchedulerAssist = v9->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v9->NestingLevel <= 1u )
          {
            v25 = SchedulerAssist[5];
            SchedulerAssist[5] = v25 + 1;
            if ( v25 == -1 )
              KiRemoveSystemWorkPriorityKick(v9);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v26 = v9->SchedulerAssist;
        if ( v26 )
        {
          if ( v9->NestingLevel <= 1u )
          {
            v27 = v26[5] - 1;
            v26[5] = v27;
            if ( !v27 )
              KiRemoveSystemWorkPriorityKick(v9);
          }
        }
        do
          KeYieldProcessorEx(&v31);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = (__int64)CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      KiSetThreadState(NextThread, 2);
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v12);
      LOBYTE(v13) = CurrentIrql;
      v8 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v13) == 0;
    }
    else
    {
      v8 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v8 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v14);
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v28 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v28);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
