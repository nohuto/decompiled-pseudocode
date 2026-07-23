/*
 * XREFs of MmInSwapWorkingSet @ 0x1400E4F04
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1406045AC (PspChangeProcessExecutionState.c)
 * Callees:
 *     MiGetWorkingSetSwapSupport @ 0x14001290C (MiGetWorkingSetSwapSupport.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x1400D2F6C (ExQueueWorkItemToPartition.c)
 *     MiProcessWsInSwapSupport @ 0x1400E5B14 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     SmStoreSetProcessVaRanges @ 0x14066C89C (SmStoreSetProcessVaRanges.c)
 *     MiContractWsSwapPageFile @ 0x14066C944 (MiContractWsSwapPageFile.c)
 *     EtwTraceWorkingSetSwap @ 0x14066C988 (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406BA084 (MiFreeWorkingSetSwapContext.c)
 *     MiInSwapStore @ 0x1406D206C (MiInSwapStore.c)
 *     VmPrefetchVirtualAddresses @ 0x1408B0FAC (VmPrefetchVirtualAddresses.c)
 */

__int64 __fastcall MmInSwapWorkingSet(PEPROCESS Process)
{
  unsigned __int16 *v1; // r15
  __int64 v3; // r14
  KIRQL v4; // si
  __int64 v5; // rdx
  __int64 WorkingSetSwapSupport; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  BOOL v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v16; // rcx

  v1 = &Process[1].IdealNode[12];
  EtwTraceWorkingSetSwap(Process);
  v3 = *(_QWORD *)(qword_14043B808 + 8LL * v1[87]);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1120));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)v1, v5);
  v8 = (_QWORD *)WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    if ( WorkingSetSwapSupport == 1 )
    {
      v13 = -1073740682;
    }
    else if ( WorkingSetSwapSupport == 2 )
    {
      v13 = -1073741558;
    }
    else
    {
      *((_QWORD *)MiGetSharedVm(v7) + 3) = 1LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1120));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v4);
      if ( *(_DWORD *)(v3 + 1144) )
      {
        MiInSwapStore(Process);
        SmStoreSetProcessVaRanges(0LL);
      }
      v9 = 0;
      if ( Process[2].ActiveProcessors.Bitmap[15] )
        v9 = *(_QWORD *)(*v8 + 16LL) != 0LL;
      MiProcessWsInSwapSupport(*v8);
      if ( v9 )
        VmPrefetchVirtualAddresses(*(void **)*v8);
      v10 = v8[7];
      if ( v10 )
        MiProcessWsInSwapSupport(v10);
      if ( v8[1] )
      {
        v8[2] = 0LL;
        v8[4] = MiInSwapSharedWorkingSetWorker;
        v8[5] = v8;
        ObfReferenceObjectWithTag(Process, 0x73576D4Du);
        v8[6] = Process;
        ExQueueWorkItemToPartition(v8 + 2, 3, 0xFFFFFFFF, *(_QWORD *)(v3 + 168));
      }
      else
      {
        MiFreeWorkingSetSwapContext(v3, v8);
      }
      v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1120));
      if ( MiGetWorkingSetSwapSupport((__int64)v1, v11) == 1 )
        *((_QWORD *)MiGetSharedVm(v12) + 3) = 0LL;
      v13 = 0;
    }
  }
  else
  {
    v13 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1120));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v16);
  }
  __writecr8(v4);
  MiContractWsSwapPageFile(v3);
  EtwTraceWorkingSetSwap(Process);
  return v13;
}
