/*
 * XREFs of ExDeleteResourceLite @ 0x140020F50
 * Callers:
 *     CcDeallocateBcb @ 0x140020F14 (CcDeallocateBcb.c)
 *     PspJobDelete @ 0x14008FD50 (PspJobDelete.c)
 *     SepTokenDeleteMethod @ 0x1405DFE70 (SepTokenDeleteMethod.c)
 *     CmpInitCmRM @ 0x1406804A8 (CmpInitCmRM.c)
 *     CmpDelayFreeRMWorker @ 0x1406CDA30 (CmpDelayFreeRMWorker.c)
 *     PnpDereferenceNotify @ 0x140700378 (PnpDereferenceNotify.c)
 *     RtlDestroyHeap @ 0x140703400 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x14070C1C0 (RtlCreateHeap.c)
 *     MUIInitializeResourceLock @ 0x1407106FC (MUIInitializeResourceLock.c)
 *     DrvDbOpenContext @ 0x14073C388 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x14073C5D8 (DrvDbCreateDatabaseNode.c)
 *     PiDrvDbDestroyNode @ 0x14083E864 (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x1408839C0 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x1408F6DB8 (_PnpCtxCloseMachine.c)
 *     DrvDbDestroyDatabaseNode @ 0x140904D70 (DrvDbDestroyDatabaseNode.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14004F570 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     ExpOwnerEntryToThread @ 0x14010A2F8 (ExpOwnerEntryToThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
  unsigned int v15; // esi
  ULONG *i; // rdi
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
    if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
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
      _InterlockedDecrement((volatile signed __int32 *)(OwnerThread + 1804));
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
        if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
          && (*i & 2) == 0
          && v17 != KeGetCurrentThread() )
        {
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v17, 2uLL);
        }
        v26 = *i;
        if ( (*i & 1) != 0 )
        {
          LOBYTE(v25) = 1;
          PsBoostThreadIo(v17, v25);
          v26 = *i;
        }
        if ( (v26 & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)&v17[1].Timer.DueTime.HighPart);
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
