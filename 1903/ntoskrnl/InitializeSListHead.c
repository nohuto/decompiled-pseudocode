/*
 * XREFs of InitializeSListHead @ 0x1400E5520
 * Callers:
 *     ExInitializeLookasideListExInternal @ 0x1400E5320 (ExInitializeLookasideListExInternal.c)
 *     ExInitializePagedLookasideListInternal @ 0x1400E5D80 (ExInitializePagedLookasideListInternal.c)
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1401082DC (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     RtlpHpVsContextInitialize @ 0x140136FB4 (RtlpHpVsContextInitialize.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1401753A0 (ExInitializeNPagedLookasideListInternal.c)
 *     RtlpDynamicLookasideInitialize @ 0x140195ABC (RtlpDynamicLookasideInitialize.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1401983A8 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     HvlpSetupCachedHypercallPages @ 0x140286D60 (HvlpSetupCachedHypercallPages.c)
 *     PfTAccessTracingInitialize @ 0x14059E2FC (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x1405A0548 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x1405A05EC (KiInitPrcb.c)
 *     MmInitializeProcessAddressSpace @ 0x1406921D8 (MmInitializeProcessAddressSpace.c)
 *     MiInitializePartition @ 0x14074FC30 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x140750118 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x14075027C (MiInitializeNuma.c)
 *     WdipSemInitializeGlobalState @ 0x14076CEB8 (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x1407711D8 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x1407774E0 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x140777724 (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x1408D007C (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x1408EE714 (WdipSemFreePool.c)
 *     EtwpInitializeStackTracing @ 0x1408F38A8 (EtwpInitializeStackTracing.c)
 *     EtwpEnableStackCaching @ 0x140900988 (EtwpEnableStackCaching.c)
 *     EtwpCovSampCaptureContextStart @ 0x140900FA0 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x140904030 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1409040C4 (EtwpCovSampLookasideInitialize.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1409744D0 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x14097D548 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A1D1B8 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeBootDefaults @ 0x140A1F230 (MiInitializeBootDefaults.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0uLL;
}
