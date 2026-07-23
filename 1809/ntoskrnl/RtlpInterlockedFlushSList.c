/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1401C55B0
 * Callers:
 *     PfFbBufferListFlushStandby @ 0x1400E27A8 (PfFbBufferListFlushStandby.c)
 *     MiFreePageFileHashPfns @ 0x1400F0578 (MiFreePageFileHashPfns.c)
 *     MiDrainZeroLookasides @ 0x14011AD10 (MiDrainZeroLookasides.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011E2AC (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExpFlushGeneralLookaside @ 0x140128154 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x1401281E0 (ExFlushLookasideListEx.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140156940 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     ExpWorkerFactoryManagerThread @ 0x14017FFE0 (ExpWorkerFactoryManagerThread.c)
 *     RtlpHpHeapCompact @ 0x1401B63AC (RtlpHpHeapCompact.c)
 *     RtlpHpVsDelayFreeContextFlush @ 0x1401B6E8C (RtlpHpVsDelayFreeContextFlush.c)
 *     ExpHpCompactionRoutine @ 0x1401B78D0 (ExpHpCompactionRoutine.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402C9A58 (MiDeleteDeferredCloneDescriptors.c)
 *     MiInsertPteTracker @ 0x1402CDCB0 (MiInsertPteTracker.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140316FB0 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x14031723C (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     PfTAccessTracingCleanup @ 0x14056698C (PfTAccessTracingCleanup.c)
 *     PfpFlushEventBuffers @ 0x14066ACD0 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x14066B030 (PfpFlushBuffers.c)
 *     MiDereferenceSessionFinal @ 0x1406E1858 (MiDereferenceSessionFinal.c)
 *     CmUnRegisterCallback @ 0x1407EC210 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x140864414 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x140864E8C (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x14086643C (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x1408C4B80 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1408C5604 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408C57B0 (EtwpCovSampCaptureWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140939140 (ViPoolDelayFreeTrimThreadRoutine.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0
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
