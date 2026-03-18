/*
 * XREFs of PsGetIoPriorityThread @ 0x1400B6B20
 * Callers:
 *     MiIssueFlowThroughFault @ 0x140003D9C (MiIssueFlowThroughFault.c)
 *     KiAbSetMinimumThreadPriority @ 0x1400245F0 (KiAbSetMinimumThreadPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140024EC0 (KiAbTryIncrementIoWaiterCounts.c)
 *     MiFinishMdlForMappedFileFault @ 0x14002CB18 (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     CcScheduleReadAheadEx @ 0x14008DFD0 (CcScheduleReadAheadEx.c)
 *     ExpWorkerThread @ 0x1400B5C50 (ExpWorkerThread.c)
 *     ExpApplyPrewaitBoost @ 0x1400D1BB8 (ExpApplyPrewaitBoost.c)
 *     PfSnCheckLoggingForThread @ 0x1400D5320 (PfSnCheckLoggingForThread.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCD0 (IopBuildDeviceIoControlRequest.c)
 *     IoPageReadEx @ 0x1400DE720 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEA00 (IoSynchronousPageWriteEx.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E05F0 (IopBuildAsynchronousFsdRequest.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400E1488 (FsRtlpWaitForIoAtEof.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140107F30 (CcBoostLowPriorityWorkerThread.c)
 *     IoRetrievePriorityInfo @ 0x140108D30 (IoRetrievePriorityInfo.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14014E9B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiResolvePageFileFault @ 0x140154B24 (MiResolvePageFileFault.c)
 *     EtwpTraceThreadRundown @ 0x14017C3EC (EtwpTraceThreadRundown.c)
 *     NtSetInformationVirtualMemory @ 0x1405F6680 (NtSetInformationVirtualMemory.c)
 *     EtwTraceThread @ 0x1406237EC (EtwTraceThread.c)
 *     MiLogRelocationRva @ 0x14064B1AC (MiLogRelocationRva.c)
 *     PfSnBeginScenario @ 0x1406672A4 (PfSnBeginScenario.c)
 *     MmPrefetchVirtualAddresses @ 0x14066BD30 (MmPrefetchVirtualAddresses.c)
 *     PspBoostJobIoPriorityCallback @ 0x14068D370 (PspBoostJobIoPriorityCallback.c)
 *     CmpBoostActiveHiveWriter @ 0x1406CF1D8 (CmpBoostActiveHiveWriter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1744) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 )
    result = 0LL;
  if ( (unsigned int)result < 2 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(a1 + 1800) )
      return 2LL;
  }
  return result;
}
