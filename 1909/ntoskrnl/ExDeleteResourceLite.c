/*
 * XREFs of ExDeleteResourceLite @ 0x1400797C0
 * Callers:
 *     CcDeallocateBcb @ 0x140079788 (CcDeallocateBcb.c)
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     SepTokenDeleteMethod @ 0x14060C660 (SepTokenDeleteMethod.c)
 *     CmpInitCmRM @ 0x14068AF98 (CmpInitCmRM.c)
 *     RtlCreateHeap @ 0x1406E7930 (RtlCreateHeap.c)
 *     CmpDelayFreeRMWorker @ 0x1406EDBD0 (CmpDelayFreeRMWorker.c)
 *     RtlDestroyHeap @ 0x140720320 (RtlDestroyHeap.c)
 *     PnpDereferenceNotify @ 0x140737C68 (PnpDereferenceNotify.c)
 *     DrvDbOpenContext @ 0x140756290 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1407564E0 (DrvDbCreateDatabaseNode.c)
 *     MUIInitializeResourceLock @ 0x140788CAC (MUIInitializeResourceLock.c)
 *     PiDrvDbDestroyNode @ 0x140877F24 (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x1408BFDE0 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x14093321C (_PnpCtxCloseMachine.c)
 *     DrvDbDestroyDatabaseNode @ 0x140941B54 (DrvDbDestroyDatabaseNode.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14003D700 (ExpResourceEnforcesOwnershipTransfer.c)
 *     PsBoostThreadIo @ 0x14003DCF0 (PsBoostThreadIo.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpOwnerEntryToThread @ 0x1401009CC (ExpOwnerEntryToThread.c)
 *     PsBoostThreadIoQoS @ 0x140101064 (PsBoostThreadIoQoS.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v5; // edx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _KPRCB *v8; // rcx
  _DWORD *v9; // rdx
  ERESOURCE_THREAD OwnerThread; // rdi
  POWNER_ENTRY OwnerTable; // rcx
  __int64 v13; // rdx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  unsigned int v15; // edi
  ULONG *i; // rsi
  struct _KTHREAD *v17; // rbp
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // eax
  bool v21; // zf
  signed __int32 v22; // eax
  int v23; // eax
  struct _KPRCB *v24; // rcx
  __int64 v25; // rdx
  ULONG v26; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v28; // [rsp+58h] [rbp+10h] BYREF

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  __incgsdword(0x6360u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v28 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = SchedulerAssist[5];
        SchedulerAssist[5] = v19 + 1;
        if ( v19 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
    {
      v18 = CurrentPrcb->SchedulerAssist;
      if ( v18 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v20 = v18[5] - 1;
          v18[5] = v20;
          if ( !v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v28 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock, CurrentIrql);
    }
    v5 = ExpResourceSpinLock;
    while ( (v5 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        v22 = _InterlockedCompareExchange(&ExpResourceSpinLock, v5 | 0x40000000, v5);
        v21 = v5 == v22;
        v5 = v22;
        if ( !v21 )
          continue;
      }
      KeYieldProcessorEx(&v28);
      v5 = ExpResourceSpinLock;
    }
  }
  Flink = Resource->SystemResourcesList.Flink;
  Blink = Resource->SystemResourcesList.Blink;
  if ( (PERESOURCE)Resource->SystemResourcesList.Flink->Blink != Resource || (PERESOURCE)Blink->Flink != Resource )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  v8 = KeGetCurrentPrcb();
  v9 = v8->SchedulerAssist;
  if ( v9 )
  {
    if ( v8->NestingLevel <= 1u )
    {
      v23 = v9[5] - 1;
      v9[5] = v23;
      if ( !v23 )
        KiRemoveSystemWorkPriorityKick(v8);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v24 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v24);
  }
  __writecr8(CurrentIrql);
  Resource->SystemResourcesList.Flink = 0LL;
  Resource->SystemResourcesList.Blink = 0LL;
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_16;
  }
  if ( OwnerThread )
  {
    if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource)
      && (Resource->OwnerEntry.TableSize & 2) == 0
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 1uLL);
    }
    TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    if ( (*(_BYTE *)&TableSize & 1) != 0 )
    {
      LOBYTE(v13) = 1;
      PsBoostThreadIo(OwnerThread, v13);
      TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&TableSize & 4) != 0 )
    {
      PsBoostThreadIoQoS(OwnerThread, 1LL);
      TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&TableSize & 2) != 0 )
      ObDereferenceObjectDeferDelete((PVOID)OwnerThread);
  }
LABEL_16:
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    v15 = 1;
    for ( i = &OwnerTable->TableSize; v15 < OwnerTable->TableSize; ++v15 )
    {
      i += 4;
      v17 = (struct _KTHREAD *)ExpOwnerEntryToThread(i - 2);
      if ( v17 )
      {
        if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource) && (*i & 2) == 0 && v17 != KeGetCurrentThread() )
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v17, 2uLL);
        v26 = *i;
        if ( (*i & 1) != 0 )
        {
          LOBYTE(v25) = 1;
          PsBoostThreadIo((__int64)v17, v25);
          v26 = *i;
        }
        if ( (v26 & 4) != 0 )
        {
          PsBoostThreadIoQoS(v17, 1LL);
          v26 = *i;
        }
        if ( (v26 & 2) != 0 )
          ObDereferenceObjectDeferDelete(v17);
      }
      OwnerTable = Resource->OwnerTable;
    }
    ExFreePoolWithTag(OwnerTable, 0);
  }
  return 0;
}
