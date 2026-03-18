/*
 * XREFs of ExInitializePushLock @ 0x140082020
 * Callers:
 *     IoRegisterPriorityCallback @ 0x14018F2A0 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1401983A8 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     DbgpInsertDebugPrintCallback @ 0x14030B220 (DbgpInsertDebugPrintCallback.c)
 *     PfTAccessTracingInitialize @ 0x14059E2FC (PfTAccessTracingInitialize.c)
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 *     CmpHiveInitialize @ 0x14065ECC0 (CmpHiveInitialize.c)
 *     PfSnAsyncContextInitialize @ 0x140669E38 (PfSnAsyncContextInitialize.c)
 *     PfSnPrefetchSections @ 0x14066AEDC (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x14066B198 (PfSnPrefetchSectionsCleanup.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     PspIoRateEntryInitialize @ 0x1406964F8 (PspIoRateEntryInitialize.c)
 *     IoDiskIoAttributionAllocate @ 0x140697774 (IoDiskIoAttributionAllocate.c)
 *     SmKmStoreAdd @ 0x1406B3CEC (SmKmStoreAdd.c)
 *     SepCreateLogonSessionTrack @ 0x1406D223C (SepCreateLogonSessionTrack.c)
 *     PfSnBeginTrace @ 0x1406D9C78 (PfSnBeginTrace.c)
 *     PoRegisterCoalescingCallback @ 0x14076A750 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x14076A948 (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x140777724 (PfFbBufferListInitialize.c)
 *     ObRegisterCallbacks @ 0x140781CB0 (ObRegisterCallbacks.c)
 *     SmcCacheInitialize @ 0x1408EBAA4 (SmcCacheInitialize.c)
 *     PspInitPhase0 @ 0x140A0457C (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 *     EtwpInitializeCoverageSampler @ 0x140A160D0 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x140A18DA0 (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x140A192E8 (PfpRpInitialize.c)
 *     SmcCacheManagerInitialize @ 0x140A19F9C (SmcCacheManagerInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}
