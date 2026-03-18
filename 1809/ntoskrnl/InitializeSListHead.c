/*
 * XREFs of InitializeSListHead @ 0x1400F3160
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400E44C8 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializeLookasideListExInternal @ 0x1400F2F60 (ExInitializeLookasideListExInternal.c)
 *     ExInitializePagedLookasideListInternal @ 0x1400F38F0 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14015F980 (ExInitializeNPagedLookasideListInternal.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14018E1C8 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     RtlpHpVsDelayFreeContextInitialize @ 0x1401B6D18 (RtlpHpVsDelayFreeContextInitialize.c)
 *     RtlpDynamicLookasideInitialize @ 0x1401B7B58 (RtlpDynamicLookasideInitialize.c)
 *     HvlpSetupCachedHypercallPages @ 0x140272D4C (HvlpSetupCachedHypercallPages.c)
 *     PfTAccessTracingInitialize @ 0x140566100 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x140570370 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x140570414 (KiInitPrcb.c)
 *     MmInitializeProcessAddressSpace @ 0x1406798D8 (MmInitializeProcessAddressSpace.c)
 *     MiInitializePartition @ 0x14072AB48 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x14072B024 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x14072B198 (MiInitializeNuma.c)
 *     WdipSemInitializeGlobalState @ 0x140744EDC (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x14074CB40 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x140751D78 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x140751FD4 (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x140891E14 (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x1408B1294 (WdipSemFreePool.c)
 *     EtwpInitializeStackTracing @ 0x1408B6F24 (EtwpInitializeStackTracing.c)
 *     EtwpEnableStackCaching @ 0x1408C3788 (EtwpEnableStackCaching.c)
 *     EtwpCovSampCaptureContextStart @ 0x1408C3DA0 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1408C6BD0 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1408C6C64 (EtwpCovSampLookasideInitialize.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140934ED4 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140938034 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x1409D9BC0 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeBootDefaults @ 0x1409DBEF0 (MiInitializeBootDefaults.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140128E70 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0uLL;
}
