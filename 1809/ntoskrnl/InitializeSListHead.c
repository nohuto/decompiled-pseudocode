/*
 * XREFs of InitializeSListHead @ 0x1400F3180
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400E44E8 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializeLookasideListExInternal @ 0x1400F2F80 (ExInitializeLookasideListExInternal.c)
 *     ExInitializePagedLookasideListInternal @ 0x1400F3910 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14015F9A0 (ExInitializeNPagedLookasideListInternal.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14018E1E8 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     RtlpHpVsDelayFreeContextInitialize @ 0x1401B6D38 (RtlpHpVsDelayFreeContextInitialize.c)
 *     RtlpDynamicLookasideInitialize @ 0x1401B7B78 (RtlpDynamicLookasideInitialize.c)
 *     HvlpSetupCachedHypercallPages @ 0x140272E4C (HvlpSetupCachedHypercallPages.c)
 *     PfTAccessTracingInitialize @ 0x140566100 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x140570370 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x140570414 (KiInitPrcb.c)
 *     MmInitializeProcessAddressSpace @ 0x1406798B8 (MmInitializeProcessAddressSpace.c)
 *     MiInitializePartition @ 0x14072AB28 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x14072B004 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x14072B178 (MiInitializeNuma.c)
 *     WdipSemInitializeGlobalState @ 0x140744EBC (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x14074CB20 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x140751D58 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x140751FB4 (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x140891DF4 (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x1408B1274 (WdipSemFreePool.c)
 *     EtwpInitializeStackTracing @ 0x1408B6F04 (EtwpInitializeStackTracing.c)
 *     EtwpEnableStackCaching @ 0x1408C3768 (EtwpEnableStackCaching.c)
 *     EtwpCovSampCaptureContextStart @ 0x1408C3D80 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1408C6BB0 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1408C6C44 (EtwpCovSampLookasideInitialize.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140934ED4 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140938034 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x1409D9BC0 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeBootDefaults @ 0x1409DBEF0 (MiInitializeBootDefaults.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140128E90 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0uLL;
}
