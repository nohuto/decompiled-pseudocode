/*
 * XREFs of MmInSwapWorkingSet @ 0x1400D8F10
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140687F94 (PspChangeProcessExecutionState.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     ExQueueWorkItemToPartition @ 0x140080598 (ExQueueWorkItemToPartition.c)
 *     MiGetWorkingSetSwapSupport @ 0x14008C9EC (MiGetWorkingSetSwapSupport.c)
 *     MiProcessWsInSwapSupport @ 0x1400D9A20 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SmStoreSetProcessVaRanges @ 0x140673668 (SmStoreSetProcessVaRanges.c)
 *     EtwTraceWorkingSetSwap @ 0x140673710 (EtwTraceWorkingSetSwap.c)
 *     MiContractWsSwapPageFile @ 0x140673854 (MiContractWsSwapPageFile.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406ED9BC (MiFreeWorkingSetSwapContext.c)
 *     MiInSwapStore @ 0x1406F4C34 (MiInSwapStore.c)
 *     VmPrefetchVirtualAddresses @ 0x1408EC6D4 (VmPrefetchVirtualAddresses.c)
 */

__int64 __fastcall MmInSwapWorkingSet(PEPROCESS Process)
{
  __int64 v2; // r14
  KIRQL v3; // si
  __int64 WorkingSetSwapSupport; // rax
  __int64 v5; // rcx
  void ***v6; // rdi
  BOOL v7; // ebx
  void **v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v13; // rcx
  _DWORD v14[10]; // [rsp+20h] [rbp-58h] BYREF

  memset(v14, 0, sizeof(v14));
  EtwTraceWorkingSetSwap(Process);
  v2 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)&Process[1].Spare2[69]);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1128));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)&Process[1].IdealNode[6]);
  v6 = (void ***)WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    if ( WorkingSetSwapSupport == 1 )
    {
      v10 = -1073740682;
    }
    else if ( WorkingSetSwapSupport == 2 )
    {
      v10 = -1073741558;
    }
    else
    {
      *((_QWORD *)MiGetSharedVm(v5) + 3) = 1LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1128));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v3);
      if ( *(_DWORD *)(v2 + 1144) )
      {
        MiInSwapStore(Process);
        SmStoreSetProcessVaRanges(0LL);
      }
      v7 = 0;
      if ( Process[2].ActiveProcessors.Bitmap[19] )
        v7 = (*v6)[2] != 0LL;
      MiProcessWsInSwapSupport(*v6);
      if ( v7 )
        VmPrefetchVirtualAddresses(**v6);
      v8 = v6[7];
      if ( v8 )
        MiProcessWsInSwapSupport(v8);
      if ( v6[1] )
      {
        v6[2] = 0LL;
        v6[4] = (void **)MiInSwapSharedWorkingSetWorker;
        v6[5] = (void **)v6;
        ObfReferenceObjectWithTag(Process, 0x73576D4Du);
        v6[6] = (void **)Process;
        ExQueueWorkItemToPartition(v6 + 2, 3, 0xFFFFFFFF, *(_QWORD *)(v2 + 168));
      }
      else
      {
        MiFreeWorkingSetSwapContext(v2, v6);
      }
      v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1128));
      if ( MiGetWorkingSetSwapSupport((__int64)&Process[1].IdealNode[6]) == 1 )
        *((_QWORD *)MiGetSharedVm(v9) + 3) = 0LL;
      v10 = 0;
    }
  }
  else
  {
    v10 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1128));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    v13 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v13);
  }
  __writecr8(v3);
  MiContractWsSwapPageFile(v2);
  v14[8] = v10;
  EtwTraceWorkingSetSwap(Process);
  return v10;
}
