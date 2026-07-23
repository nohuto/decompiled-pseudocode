/*
 * XREFs of KiAbForceProcessLockEntry @ 0x140166280
 * Callers:
 *     KeAbMarkCrossThreadReleasable @ 0x1401661E0 (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400247E0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140024DA0 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140024E74 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140024EC0 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140024F9C (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbCpuBoostOwners @ 0x140025190 (KiAbCpuBoostOwners.c)
 *     KiAbIoBoostOwners @ 0x140025280 (KiAbIoBoostOwners.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 */

char __fastcall KiAbForceProcessLockEntry(PRTL_BALANCED_NODE Node)
{
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _RTL_RB_TREE *LockedHeadEntry; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // rbx
  char result; // al
  __int64 CurrentThread; // rsi
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KPRCB *v13; // rbx
  _DWORD *SchedulerAssist; // rcx
  _KTHREAD *NextThread; // rbx
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rax
  char v19; // bp
  char v20; // al
  char v21; // dl
  __int64 v22; // rdx
  __int64 v23; // r8
  char CpuPriorityKey; // si
  int v25; // r10d
  int v26; // eax
  _DWORD *v27; // rcx
  int v28; // eax
  struct _KPRCB *v29; // rcx
  struct _KPRCB *v30; // rcx
  volatile signed __int64 *v31[4]; // [rsp+30h] [rbp-48h] BYREF
  int v32; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v33; // [rsp+90h] [rbp+18h] BYREF

  v33 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  LockedHeadEntry = (_RTL_RB_TREE *)KiAbEntryGetLockedHeadEntry(Node, 1LL, v31);
  v7 = (__int64)LockedHeadEntry;
  if ( LockedHeadEntry )
  {
    if ( (BYTE1(Node[1].Children[0]) & 1) == 0 )
    {
LABEL_4:
      KxReleaseQueuedSpinLock(v31);
      goto LABEL_5;
    }
    if ( Node != (PRTL_BALANCED_NODE)LockedHeadEntry )
      KiAbEntryUpdateWaiterTreePosition(Node, LockedHeadEntry);
    v18 = *(_QWORD *)(v7 + 56);
    if ( v18 )
      v19 = *(_BYTE *)(v18 + 48);
    else
      v19 = 15;
    if ( (*(_BYTE *)(v7 + 25) & 1) == 0 )
    {
      v20 = KiAbOwnerComputeCpuPriorityKey(v7);
      v21 = v19;
      if ( v20 < v19 )
        v21 = v20;
      v19 = v21;
    }
    KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)Node, v7);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)Node, v22, v23);
    if ( v19 < CpuPriorityKey )
    {
      if ( !v25 )
      {
LABEL_42:
        KiAbCpuBoostOwners(v7, CpuPriorityKey, (__int64)&v33, 0LL, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        goto LABEL_4;
      }
    }
    else if ( !v25 )
    {
      goto LABEL_4;
    }
    KiAbIoBoostOwners(v7, v25, (__int64)&v33, 0LL, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
    goto LABEL_42;
  }
LABEL_5:
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v33, v5, v6);
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
      v13 = KeGetCurrentPrcb();
      v32 = 0;
      while ( 1 )
      {
        SchedulerAssist = v13->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v26 = SchedulerAssist[5];
            SchedulerAssist[5] = v26 + 1;
            if ( v26 == -1 )
              KiRemoveSystemWorkPriorityKick(v13);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v27 = v13->SchedulerAssist;
        if ( v27 )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v28 = v27[5] - 1;
            v27[5] = v28;
            if ( !v28 )
              KiRemoveSystemWorkPriorityKick(v13);
          }
        }
        do
          KeYieldProcessorEx(&v32, v11, v12);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 0LL, 2LL);
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v16);
      LOBYTE(v17) = CurrentIrql;
      v10 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v17) == 0;
    }
    else
    {
      v10 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v10 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v29);
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v30 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v30);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
