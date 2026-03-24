/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1401C5450
 * Callers:
 *     PfFbBufferListFlushStandby @ 0x1400E2728 (PfFbBufferListFlushStandby.c)
 *     MiFreePageFileHashPfns @ 0x1400F04F8 (MiFreePageFileHashPfns.c)
 *     MiDrainZeroLookasides @ 0x14011ACA0 (MiDrainZeroLookasides.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011E23C (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExpFlushGeneralLookaside @ 0x140128084 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x140128110 (ExFlushLookasideListEx.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140156840 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     ExpWorkerFactoryManagerThread @ 0x14017FEA0 (ExpWorkerFactoryManagerThread.c)
 *     RtlpHpHeapCompact @ 0x1401B6244 (RtlpHpHeapCompact.c)
 *     RtlpHpVsDelayFreeContextFlush @ 0x1401B6D24 (RtlpHpVsDelayFreeContextFlush.c)
 *     ExpHpCompactionRoutine @ 0x1401B7770 (ExpHpCompactionRoutine.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402C9868 (MiDeleteDeferredCloneDescriptors.c)
 *     MiInsertPteTracker @ 0x1402CDAC0 (MiInsertPteTracker.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140316DC0 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x14031704C (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     PfTAccessTracingCleanup @ 0x14056598C (PfTAccessTracingCleanup.c)
 *     PfpFlushEventBuffers @ 0x140669B10 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x140669E70 (PfpFlushBuffers.c)
 *     MiDereferenceSessionFinal @ 0x1406E05B8 (MiDereferenceSessionFinal.c)
 *     CmUnRegisterCallback @ 0x1407EB010 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x1408631B4 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x140863C2C (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x1408651DC (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x1408C38C0 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1408C4344 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408C44F0 (EtwpCovSampCaptureWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140938140 (ViPoolDelayFreeTrimThreadRoutine.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  union _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  union _SLIST_HEADER v3; // rt0
  unsigned __int8 v4; // tt

  _m_prefetchw(ListHead);
  v1 = *ListHead;
  do
  {
    Alignment = v1.Alignment;
    LOWORD(Alignment) = 0;
    v3 = v1;
    v4 = _InterlockedCompareExchange128((volatile signed __int64 *)ListHead, 0LL, Alignment, (signed __int64 *)&v3);
    v1 = v3;
  }
  while ( !v4 );
  v1.Alignment = v1.Region;
  LOBYTE(v1.Alignment) = *((_BYTE *)&v1.HeaderX64 + 8) & 0xF0;
  return (PSLIST_ENTRY)v1.Alignment;
}
