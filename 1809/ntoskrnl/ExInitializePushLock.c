/*
 * XREFs of ExInitializePushLock @ 0x14008A400
 * Callers:
 *     IoRegisterPriorityCallback @ 0x1401865D0 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14018E1E8 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     DbgpInsertDebugPrintCallback @ 0x1402ECA50 (DbgpInsertDebugPrintCallback.c)
 *     PfTAccessTracingInitialize @ 0x140566100 (PfTAccessTracingInitialize.c)
 *     CmpHiveInitialize @ 0x1405A717C (CmpHiveInitialize.c)
 *     CmLoadAppKey @ 0x1405CF54C (CmLoadAppKey.c)
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 *     PspIoRateEntryInitialize @ 0x140605F28 (PspIoRateEntryInitialize.c)
 *     PspAllocateProcess @ 0x14064BCB8 (PspAllocateProcess.c)
 *     PfSnPrefetchSections @ 0x140662F50 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1406631FC (PfSnPrefetchSectionsCleanup.c)
 *     PfSnBeginTrace @ 0x140668524 (PfSnBeginTrace.c)
 *     SmKmStoreAdd @ 0x14066B154 (SmKmStoreAdd.c)
 *     IoDiskIoAttributionAllocate @ 0x14068CD40 (IoDiskIoAttributionAllocate.c)
 *     SepCreateLogonSessionTrack @ 0x1406AE1DC (SepCreateLogonSessionTrack.c)
 *     PfSnAsyncContextInitialize @ 0x1406C0FA4 (PfSnAsyncContextInitialize.c)
 *     PoRegisterCoalescingCallback @ 0x140748360 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140748558 (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x140751FB4 (PfFbBufferListInitialize.c)
 *     ObRegisterCallbacks @ 0x14075AB70 (ObRegisterCallbacks.c)
 *     SmcCacheInitialize @ 0x1408AEA80 (SmcCacheInitialize.c)
 *     PspInitPhase0 @ 0x1409B10C8 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 *     EtwpInitializeCoverageSampler @ 0x1409D0554 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x1409D4634 (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x1409D4B8C (PfpRpInitialize.c)
 *     SmGlobalsInitialize @ 0x1409D6DC4 (SmGlobalsInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}
