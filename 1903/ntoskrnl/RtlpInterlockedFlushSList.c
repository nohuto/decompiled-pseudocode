/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1401CBA70
 * Callers:
 *     ExpHpCompactionRoutine @ 0x140002FF0 (ExpHpCompactionRoutine.c)
 *     RtlpHpVsContextFree @ 0x140062F20 (RtlpHpVsContextFree.c)
 *     PfFbBufferListFlushStandby @ 0x140098220 (PfFbBufferListFlushStandby.c)
 *     MiFreePageFileHashPfns @ 0x1400F23D4 (MiFreePageFileHashPfns.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140105E9C (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     RtlpHpHeapCompact @ 0x14010AF94 (RtlpHpHeapCompact.c)
 *     MiDrainZeroLookasides @ 0x140126FFC (MiDrainZeroLookasides.c)
 *     ExpFlushGeneralLookaside @ 0x14012A92C (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x14012A9B0 (ExFlushLookasideListEx.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x140135A98 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14015ABCC (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402E3BBC (MiDeleteDeferredCloneDescriptors.c)
 *     MiInsertPteTracker @ 0x1402E7CDC (MiInsertPteTracker.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1403357F0 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x140335A80 (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     PfTAccessTracingCleanup @ 0x14059E204 (PfTAccessTracingCleanup.c)
 *     PfpFlushEventBuffers @ 0x14065B0D0 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x14065B420 (PfpFlushBuffers.c)
 *     CmUnRegisterCallback @ 0x140825B50 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x14089FC0C (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x1408A0690 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x1408A16E0 (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x140900ADC (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140901588 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140901740 (EtwpCovSampCaptureWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x14097D650 (ViPoolDelayFreeTrimThreadRoutine.c)
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
