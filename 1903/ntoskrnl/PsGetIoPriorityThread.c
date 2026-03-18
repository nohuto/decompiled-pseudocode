/*
 * XREFs of PsGetIoPriorityThread @ 0x14005A520
 * Callers:
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     ExpWorkerThread @ 0x140059C30 (ExpWorkerThread.c)
 *     PfSnCheckLoggingForThread @ 0x14009529C (PfSnCheckLoggingForThread.c)
 *     FsRtlpWaitForIoAtEof @ 0x14009AA84 (FsRtlpWaitForIoAtEof.c)
 *     KiAbSetMinimumThreadPriority @ 0x14009F06C (KiAbSetMinimumThreadPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14009F388 (KiAbTryIncrementIoWaiterCounts.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MiFinishMdlForMappedFileFault @ 0x1400A6290 (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 *     IoPageReadEx @ 0x1400A7640 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400A794C (IoSynchronousPageWriteEx.c)
 *     CcScheduleReadAheadEx @ 0x1400A9CA0 (CcScheduleReadAheadEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400BB0E0 (IopBuildDeviceIoControlRequest.c)
 *     IoRetrievePriorityInfo @ 0x1400FFD60 (IoRetrievePriorityInfo.c)
 *     MiIssueFlowThroughFault @ 0x140100DF4 (MiIssueFlowThroughFault.c)
 *     ExpApplyPrewaitBoost @ 0x140121E54 (ExpApplyPrewaitBoost.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140125F40 (CcBoostLowPriorityWorkerThread.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140127260 (IopBuildAsynchronousFsdRequest.c)
 *     CcForceWriteThrough @ 0x140136740 (CcForceWriteThrough.c)
 *     EtwpTraceThreadRundown @ 0x140146BA0 (EtwpTraceThreadRundown.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14014C5E8 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CAE80 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x1402CB23C (MiCopyImageExtentContents.c)
 *     NtSetInformationVirtualMemory @ 0x1405E9640 (NtSetInformationVirtualMemory.c)
 *     MiLogRelocationRva @ 0x140657E30 (MiLogRelocationRva.c)
 *     PfSnBeginScenario @ 0x14065905C (PfSnBeginScenario.c)
 *     PspBoostJobIoPriorityCallback @ 0x140696F20 (PspBoostJobIoPriorityCallback.c)
 *     MmPrefetchVirtualAddresses @ 0x1406A5860 (MmPrefetchVirtualAddresses.c)
 *     EtwTraceThread @ 0x1406C4A70 (EtwTraceThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1760) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 780LL) & 0x100000) != 0 )
    result = 0LL;
  if ( (unsigned int)result < 2 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(a1 + 1816) )
      return 2LL;
  }
  return result;
}
