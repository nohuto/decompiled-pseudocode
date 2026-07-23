/*
 * XREFs of ExInitializePushLock @ 0x14008A3F0
 * Callers:
 *     IoRegisterPriorityCallback @ 0x140186710 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14018E328 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     DbgpInsertDebugPrintCallback @ 0x1402ECC40 (DbgpInsertDebugPrintCallback.c)
 *     PfTAccessTracingInitialize @ 0x140567100 (PfTAccessTracingInitialize.c)
 *     CmpHiveInitialize @ 0x1405A817C (CmpHiveInitialize.c)
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     PspIoRateEntryInitialize @ 0x140606F28 (PspIoRateEntryInitialize.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     PfSnPrefetchSections @ 0x140664110 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1406643BC (PfSnPrefetchSectionsCleanup.c)
 *     PfSnBeginTrace @ 0x1406696E4 (PfSnBeginTrace.c)
 *     SmKmStoreAdd @ 0x14066C314 (SmKmStoreAdd.c)
 *     IoDiskIoAttributionAllocate @ 0x14068DF00 (IoDiskIoAttributionAllocate.c)
 *     SepCreateLogonSessionTrack @ 0x1406AF47C (SepCreateLogonSessionTrack.c)
 *     PfSnAsyncContextInitialize @ 0x1406C2244 (PfSnAsyncContextInitialize.c)
 *     PoRegisterCoalescingCallback @ 0x140749550 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140749748 (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x1407531A4 (PfFbBufferListInitialize.c)
 *     ObRegisterCallbacks @ 0x14075BD60 (ObRegisterCallbacks.c)
 *     SmcCacheInitialize @ 0x1408AFCE0 (SmcCacheInitialize.c)
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 *     EtwpInitializeCoverageSampler @ 0x1409D1554 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x1409D5634 (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x1409D5B8C (PfpRpInitialize.c)
 *     SmGlobalsInitialize @ 0x1409D7DC4 (SmGlobalsInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}
