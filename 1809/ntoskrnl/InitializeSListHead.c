/*
 * XREFs of InitializeSListHead @ 0x1400F3200
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400E4568 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializeLookasideListExInternal @ 0x1400F3000 (ExInitializeLookasideListExInternal.c)
 *     ExInitializePagedLookasideListInternal @ 0x1400F3990 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14015FAA0 (ExInitializeNPagedLookasideListInternal.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14018E328 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     RtlpHpVsDelayFreeContextInitialize @ 0x1401B6EA0 (RtlpHpVsDelayFreeContextInitialize.c)
 *     RtlpDynamicLookasideInitialize @ 0x1401B7CD8 (RtlpDynamicLookasideInitialize.c)
 *     HvlpSetupCachedHypercallPages @ 0x14027303C (HvlpSetupCachedHypercallPages.c)
 *     PfTAccessTracingInitialize @ 0x140567100 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x140571370 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x140571414 (KiInitPrcb.c)
 *     MmInitializeProcessAddressSpace @ 0x14067AA78 (MmInitializeProcessAddressSpace.c)
 *     MiInitializePartition @ 0x14072BD18 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x14072C1F4 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x14072C368 (MiInitializeNuma.c)
 *     WdipSemInitializeGlobalState @ 0x1407460AC (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x14074DD10 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x140752F48 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x1407531A4 (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x140893054 (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x1408B24D4 (WdipSemFreePool.c)
 *     EtwpInitializeStackTracing @ 0x1408B81C4 (EtwpInitializeStackTracing.c)
 *     EtwpEnableStackCaching @ 0x1408C4A28 (EtwpEnableStackCaching.c)
 *     EtwpCovSampCaptureContextStart @ 0x1408C5040 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1408C7E70 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1408C7F04 (EtwpCovSampLookasideInitialize.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140935ED4 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140939034 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x1409DABC0 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeBootDefaults @ 0x1409DCEF0 (MiInitializeBootDefaults.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0uLL;
}
