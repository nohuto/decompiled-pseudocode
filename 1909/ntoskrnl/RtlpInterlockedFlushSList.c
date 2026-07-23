/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1401CC5F0
 * Callers:
 *     ExpHpCompactionRoutine @ 0x140002FF0 (ExpHpCompactionRoutine.c)
 *     RtlpHpVsContextFree @ 0x140062FC0 (RtlpHpVsContextFree.c)
 *     PfFbBufferListFlushStandby @ 0x1400D499C (PfFbBufferListFlushStandby.c)
 *     MiFreePageFileHashPfns @ 0x1400DA914 (MiFreePageFileHashPfns.c)
 *     RtlpHpHeapCompact @ 0x14010AB64 (RtlpHpHeapCompact.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011C0DC (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiDrainZeroLookasides @ 0x140127A1C (MiDrainZeroLookasides.c)
 *     ExpFlushGeneralLookaside @ 0x14012B34C (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x14012B3D0 (ExFlushLookasideListEx.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x140136458 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14015B26C (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402E391C (MiDeleteDeferredCloneDescriptors.c)
 *     MiInsertPteTracker @ 0x1402E7A3C (MiInsertPteTracker.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140335250 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1403354E0 (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     PfTAccessTracingCleanup @ 0x14059E1E4 (PfTAccessTracingCleanup.c)
 *     PfpFlushEventBuffers @ 0x14066D960 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x14066DCC0 (PfpFlushBuffers.c)
 *     CmUnRegisterCallback @ 0x140825250 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x14089F44C (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x14089FED0 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x1408A0F20 (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x14090043C (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140900EE8 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409010A0 (EtwpCovSampCaptureWorkerThread.c)
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
