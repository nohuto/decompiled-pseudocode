/*
 * XREFs of InitializeSListHead @ 0x1400EA4C0
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400D8218 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializeLookasideListExInternal @ 0x1400EA2C0 (ExInitializeLookasideListExInternal.c)
 *     ExInitializePagedLookasideListInternal @ 0x1400EAD20 (ExInitializePagedLookasideListInternal.c)
 *     RtlpHpVsContextInitialize @ 0x140137934 (RtlpHpVsContextInitialize.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140175AD0 (ExInitializeNPagedLookasideListInternal.c)
 *     RtlpDynamicLookasideInitialize @ 0x14019629C (RtlpDynamicLookasideInitialize.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140198A08 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     HvlpSetupCachedHypercallPages @ 0x140286AC0 (HvlpSetupCachedHypercallPages.c)
 *     PfTAccessTracingInitialize @ 0x14059E2DC (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x1405A0528 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x1405A05CC (KiInitPrcb.c)
 *     MmInitializeProcessAddressSpace @ 0x140685748 (MmInitializeProcessAddressSpace.c)
 *     MiInitializePartition @ 0x1407506C0 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x140750BA8 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x140750D0C (MiInitializeNuma.c)
 *     WdipSemInitializeGlobalState @ 0x14076FD0C (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x1407747B8 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x14077AAC0 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x14077AD04 (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x1408CF97C (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x1408EE024 (WdipSemFreePool.c)
 *     EtwpInitializeStackTracing @ 0x1408F3218 (EtwpInitializeStackTracing.c)
 *     EtwpEnableStackCaching @ 0x1409002E8 (EtwpEnableStackCaching.c)
 *     EtwpCovSampCaptureContextStart @ 0x140900900 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x140903990 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x140903A24 (EtwpCovSampLookasideInitialize.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1409744D0 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x14097D548 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A1D394 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeBootDefaults @ 0x140A1F410 (MiInitializeBootDefaults.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0uLL;
}
