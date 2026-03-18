/*
 * XREFs of ExInitializePushLock @ 0x140082420
 * Callers:
 *     IoRegisterPriorityCallback @ 0x14018A1E0 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140198A08 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     DbgpInsertDebugPrintCallback @ 0x14030ACD0 (DbgpInsertDebugPrintCallback.c)
 *     PfTAccessTracingInitialize @ 0x14059E2DC (PfTAccessTracingInitialize.c)
 *     PspAllocateThread @ 0x14060F754 (PspAllocateThread.c)
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 *     SmKmStoreAdd @ 0x140672BC0 (SmKmStoreAdd.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     PspIoRateEntryInitialize @ 0x140689A68 (PspIoRateEntryInitialize.c)
 *     IoDiskIoAttributionAllocate @ 0x14068ACE4 (IoDiskIoAttributionAllocate.c)
 *     CmpHiveInitialize @ 0x14068ED2C (CmpHiveInitialize.c)
 *     PfSnAsyncContextInitialize @ 0x140697258 (PfSnAsyncContextInitialize.c)
 *     PfSnPrefetchSections @ 0x140697DAC (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140698068 (PfSnPrefetchSectionsCleanup.c)
 *     SepCreateLogonSessionTrack @ 0x1406D159C (SepCreateLogonSessionTrack.c)
 *     PfSnBeginTrace @ 0x1406D9D68 (PfSnBeginTrace.c)
 *     PoRegisterCoalescingCallback @ 0x140758F80 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140759178 (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x14077AD04 (PfFbBufferListInitialize.c)
 *     ObRegisterCallbacks @ 0x140784010 (ObRegisterCallbacks.c)
 *     SmcCacheInitialize @ 0x1408EB3AC (SmcCacheInitialize.c)
 *     PspInitPhase0 @ 0x140A04A98 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 *     EtwpInitializeCoverageSampler @ 0x140A162B0 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x140A19260 (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x140A197A8 (PfpRpInitialize.c)
 *     SmcCacheManagerInitialize @ 0x140A1A12C (SmcCacheManagerInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}
