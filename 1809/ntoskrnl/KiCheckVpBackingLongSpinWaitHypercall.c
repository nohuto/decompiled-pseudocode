/*
 * XREFs of KiCheckVpBackingLongSpinWaitHypercall @ 0x140298330
 * Callers:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiLockOwnedProtoPage @ 0x140030EC0 (MiLockOwnedProtoPage.c)
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x140056210 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x140057A20 (KiSelectReadyThread.c)
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140067770 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140068270 (MiGetVadWakeList.c)
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA20 (MiLockPageTableInternal.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3D0 (MiMakeHyperRangeAccessible.c)
 *     MiFlushTbList @ 0x1400740C0 (MiFlushTbList.c)
 *     KeFlushTb @ 0x1400755B0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140075BB0 (KeFlushMultipleRangeTb.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF20 (KxWaitForLockOwnerShip.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14008CFD0 (KxWaitForSpinLockAndAcquire.c)
 *     MmCheckCachedPageStates @ 0x1400B02B0 (MmCheckCachedPageStates.c)
 *     KeRemovePriQueue @ 0x1400B61A0 (KeRemovePriQueue.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4E0 (ExAcquireSpinLockExclusive.c)
 *     KiChooseTargetProcessor @ 0x1400C43D0 (KiChooseTargetProcessor.c)
 *     KiQuantumEnd @ 0x1400D0020 (KiQuantumEnd.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E77A0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiIpiSendRequestEx @ 0x1400ED160 (KiIpiSendRequestEx.c)
 *     KxFlushNonGlobalTb @ 0x1400ED220 (KxFlushNonGlobalTb.c)
 *     MiMapPagesToZero @ 0x1400F90E0 (MiMapPagesToZero.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE10 (KiAcquireKobjectLockSafe.c)
 *     KiGenericCallDpcWorker @ 0x140112080 (KiGenericCallDpcWorker.c)
 *     ExpGetPoolTagInfoTarget @ 0x1401127B0 (ExpGetPoolTagInfoTarget.c)
 *     KxSetTimeStampBusy @ 0x140117C50 (KxSetTimeStampBusy.c)
 *     MiZeroPageThread @ 0x140179200 (MiZeroPageThread.c)
 *     KiIdleLoop @ 0x1401C0520 (KiIdleLoop.c)
 *     KxDispatchInterrupt @ 0x1401C40E0 (KxDispatchInterrupt.c)
 *     SwapContext @ 0x1401C42C0 (SwapContext.c)
 *     PopHandleNextState @ 0x140569410 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

char KiCheckVpBackingLongSpinWaitHypercall()
{
  char v0; // dl
  int v1; // ecx
  __int64 *i; // r8
  __int64 v3; // r10

  v0 = 1;
  if ( (KiVelocityFlags & 0x400) != 0 && KeGetCurrentIrql() >= 2u && KeGetCurrentPrcb()->SchedulerAssist )
  {
    v1 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      for ( i = KiProcessorBlock; ; ++i )
      {
        if ( (*(_BYTE *)(*i + 35) & 1) != 0 )
        {
          v3 = *(_QWORD *)(*i + 25016);
          if ( !v3 || !*(_BYTE *)(v3 + 65) || !*(_BYTE *)(v3 + 64) )
            break;
        }
        if ( ++v1 >= (unsigned int)KeNumberProcessors_0 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return v0;
}
