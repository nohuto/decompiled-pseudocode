/*
 * XREFs of PsGetIoPriorityThread @ 0x14005A5C0
 * Callers:
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     ExpWorkerThread @ 0x140059CD0 (ExpWorkerThread.c)
 *     CcScheduleReadAheadEx @ 0x140090340 (CcScheduleReadAheadEx.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiFinishMdlForMappedFileFault @ 0x140093AC0 (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     IoPageReadEx @ 0x140094BE0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140094EEC (IoSynchronousPageWriteEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x14009AF50 (IopBuildDeviceIoControlRequest.c)
 *     KiAbSetMinimumThreadPriority @ 0x1400C6EA8 (KiAbSetMinimumThreadPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1400C71C4 (KiAbTryIncrementIoWaiterCounts.c)
 *     PfSnCheckLoggingForThread @ 0x1400D25BC (PfSnCheckLoggingForThread.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400EE6D4 (FsRtlpWaitForIoAtEof.c)
 *     IoRetrievePriorityInfo @ 0x140104400 (IoRetrievePriorityInfo.c)
 *     MiIssueFlowThroughFault @ 0x140109814 (MiIssueFlowThroughFault.c)
 *     ExpApplyPrewaitBoost @ 0x140122CA4 (ExpApplyPrewaitBoost.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1401265B0 (CcBoostLowPriorityWorkerThread.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140127C80 (IopBuildAsynchronousFsdRequest.c)
 *     CcForceWriteThrough @ 0x1401370E0 (CcForceWriteThrough.c)
 *     EtwpTraceThreadRundown @ 0x140147240 (EtwpTraceThreadRundown.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14014CC88 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CABE0 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x1402CAF9C (MiCopyImageExtentContents.c)
 *     NtSetInformationVirtualMemory @ 0x1405E9E10 (NtSetInformationVirtualMemory.c)
 *     MiLogRelocationRva @ 0x14066AE50 (MiLogRelocationRva.c)
 *     PfSnBeginScenario @ 0x14066C07C (PfSnBeginScenario.c)
 *     PspBoostJobIoPriorityCallback @ 0x14068A490 (PspBoostJobIoPriorityCallback.c)
 *     EtwTraceThread @ 0x1406C3C30 (EtwTraceThread.c)
 *     MmPrefetchVirtualAddresses @ 0x1406DC3D0 (MmPrefetchVirtualAddresses.c)
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
