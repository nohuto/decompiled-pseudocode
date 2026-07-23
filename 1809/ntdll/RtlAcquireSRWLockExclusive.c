/*
 * XREFs of RtlAcquireSRWLockExclusive @ 0x180015FF0
 * Callers:
 *     RtlSetSearchPathMode @ 0x1800027B0 (RtlSetSearchPathMode.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByName @ 0x18000A7C8 (LdrpFindLoadedDllByName.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800110C0 (RtlpHpLfhSlotAllocate.c)
 *     TppWorkPost @ 0x180014F60 (TppWorkPost.c)
 *     TpPostTask @ 0x1800159A0 (TpPostTask.c)
 *     TppWorkerFindTask @ 0x180015BF4 (TppWorkerFindTask.c)
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x180016F10 (TppCallbackEpilog.c)
 *     TppPrepareDirectParams @ 0x180017430 (TppPrepareDirectParams.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180019B90 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18001CA30 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18001D778 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpSegPageRangeShrink @ 0x18001D914 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x18001DC90 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180020014 (RtlpHpSegPageRangeCoalesce.c)
 *     EtwpInsertRegistration @ 0x180020A4C (EtwpInsertRegistration.c)
 *     EtwNotificationRegister @ 0x180020CB0 (EtwNotificationRegister.c)
 *     EtwpFindGuidEntry @ 0x180020FF4 (EtwpFindGuidEntry.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x180021964 (RtlpHpVsSubsegmentCommitPages.c)
 *     LdrpMapDllWithSectionHandle @ 0x180021D1C (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadKnownDll @ 0x1800223F4 (LdrpLoadKnownDll.c)
 *     LdrpMapAndSnapDependency @ 0x18002385C (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpBuildForwarderLink @ 0x180026AA0 (LdrpBuildForwarderLink.c)
 *     LdrpIncrementModuleLoadCount @ 0x180026B34 (LdrpIncrementModuleLoadCount.c)
 *     LdrpProcessMappedModule @ 0x180026F8C (LdrpProcessMappedModule.c)
 *     RtlInsertInvertedFunctionTable @ 0x180027528 (RtlInsertInvertedFunctionTable.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800279F0 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpCondenseGraphRecurse @ 0x180029398 (LdrpCondenseGraphRecurse.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18002B5A0 (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlRegisterWait @ 0x18002BA40 (RtlRegisterWait.c)
 *     TppWaitCompletion @ 0x18002BD00 (TppWaitCompletion.c)
 *     TpSetWaitEx @ 0x18002C0B0 (TpSetWaitEx.c)
 *     TpReleaseTimer @ 0x18002C440 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x18002C6D0 (TpWaitForTimer.c)
 *     TpSetTimerEx @ 0x18002C800 (TpSetTimerEx.c)
 *     TppCancelTimer @ 0x18002C984 (TppCancelTimer.c)
 *     TppTimerQueueExpiration @ 0x18002CAB0 (TppTimerQueueExpiration.c)
 *     TppSingleTimerExpiration @ 0x18002CE38 (TppSingleTimerExpiration.c)
 *     TppSetTimer @ 0x18002CFD4 (TppSetTimer.c)
 *     TppCleanupGroupMemberDestroy @ 0x18002D600 (TppCleanupGroupMemberDestroy.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18002D82C (TppPoolpDereferenceGlobalPool.c)
 *     TppCleanupGroupMemberInitialize @ 0x18002DB64 (TppCleanupGroupMemberInitialize.c)
 *     TppPoolpReferenceGlobalPool @ 0x18002E600 (TppPoolpReferenceGlobalPool.c)
 *     TppCleanupGroupRemoveMember @ 0x18002F0D4 (TppCleanupGroupRemoveMember.c)
 *     TppCleanupGroupAddMember @ 0x18002F138 (TppCleanupGroupAddMember.c)
 *     RtlCreateTimer @ 0x18002F2A0 (RtlCreateTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x18002F520 (TpTimerOutstandingCallbackCount.c)
 *     RtlDeleteTimer @ 0x18002F570 (RtlDeleteTimer.c)
 *     TpReleaseWait @ 0x18002F6C0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x18002F850 (TpWaitOutstandingCallbackCount.c)
 *     RtlDeregisterWaitEx @ 0x18002F8A0 (RtlDeregisterWaitEx.c)
 *     RtlpTpWaitCheckReset @ 0x18003035C (RtlpTpWaitCheckReset.c)
 *     TpWaitForWait @ 0x1800303D0 (TpWaitForWait.c)
 *     TpAllocPoolInternal @ 0x180030848 (TpAllocPoolInternal.c)
 *     RtlUpdateTimer @ 0x180032010 (RtlUpdateTimer.c)
 *     TppJobpRundownJob @ 0x180032968 (TppJobpRundownJob.c)
 *     TpSetDefaultPoolStackInformation @ 0x180032AA0 (TpSetDefaultPoolStackInformation.c)
 *     LdrpFindLoadedDllByAddress @ 0x180034CB0 (LdrpFindLoadedDllByAddress.c)
 *     RtlFlsFree @ 0x180035A00 (RtlFlsFree.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180035C68 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlFlsAlloc @ 0x180036010 (RtlFlsAlloc.c)
 *     LdrpHandleTlsData @ 0x18003629C (LdrpHandleTlsData.c)
 *     LdrpQueueDeferredTlsData @ 0x180037354 (LdrpQueueDeferredTlsData.c)
 *     LdrpFindLoadedDllByHandle @ 0x180042010 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180042678 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpPinModule @ 0x180047C80 (LdrpPinModule.c)
 *     EtwNotificationUnregister @ 0x18004E980 (EtwNotificationUnregister.c)
 *     EtwpRemoveRegistrationFromTable @ 0x18004EAC4 (EtwpRemoveRegistrationFromTable.c)
 *     EtwProcessPrivateLoggerRequest @ 0x18004FE80 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpDisableTraceProviders @ 0x180050414 (EtwpDisableTraceProviders.c)
 *     EtwDeliverDataBlock @ 0x1800506D0 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x180050A70 (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x180050BA4 (EtwpFindRegistration.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180050D6C (EtwpDereferenceUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180050D94 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpInsertGuidEntry @ 0x180050E5C (EtwpInsertGuidEntry.c)
 *     LdrpComputeLazyDllPath @ 0x180054250 (LdrpComputeLazyDllPath.c)
 *     RtlpGetCachedPath @ 0x1800545E8 (RtlpGetCachedPath.c)
 *     LdrpUnloadNode @ 0x180055870 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180055B60 (LdrUnloadAlternateResourceModuleEx.c)
 *     TpTrimPools @ 0x1800586A0 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x1800589C0 (RtlSleepConditionVariableSRW.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x18005BF98 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x18005C110 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18005C388 (RtlpCreateSerializationGroup.c)
 *     RtlDeleteCriticalSection @ 0x18005C6B0 (RtlDeleteCriticalSection.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005C818 (LdrEnsureMrdataHeapExists.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18005C9C8 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpCSparseBitmapLock @ 0x18005D5B4 (RtlpCSparseBitmapLock.c)
 *     RtlpHpSegMgrReserve @ 0x18005D6A4 (RtlpHpSegMgrReserve.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x18005DDCC (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18005E058 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18005E1EC (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18005E718 (RtlpDecRefWnfNameSubscription.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     LdrProtectMrdataHeap @ 0x1800605F4 (LdrProtectMrdataHeap.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180061B00 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x180061D5C (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHpVaMgrAlloc @ 0x180063220 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpHeapExtendContext @ 0x180063B20 (RtlpHpHeapExtendContext.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x1800644F4 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpTagContextAllocateTag @ 0x180064ED0 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x180065274 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpVaMgrCtxFree @ 0x180065734 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpLargeFree @ 0x1800663DC (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x18006657C (RtlpHpLargeAlloc.c)
 *     RtlpHpSegContextCompact @ 0x180068ADC (RtlpHpSegContextCompact.c)
 *     TppAlpcpExecuteCallback @ 0x180069EA0 (TppAlpcpExecuteCallback.c)
 *     RtlpCallVectoredHandlers @ 0x18006CC90 (RtlpCallVectoredHandlers.c)
 *     RtlpHpHeapLock @ 0x18006D704 (RtlpHpHeapLock.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x18006E5D8 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlDeleteFunctionTable @ 0x18006EB60 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006ED50 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18006F2B0 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006F5E0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006F8F0 (RtlAddGrowableFunctionTable.c)
 *     LdrpFindExistingModule @ 0x180071428 (LdrpFindExistingModule.c)
 *     RtlReleasePath @ 0x180071700 (RtlReleasePath.c)
 *     LdrpLoadContextReplaceModule @ 0x180071770 (LdrpLoadContextReplaceModule.c)
 *     AlpcGetMessageFromCompletionList @ 0x180072B30 (AlpcGetMessageFromCompletionList.c)
 *     RtlpLockAtomTable @ 0x180073668 (RtlpLockAtomTable.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800739F0 (TpReleaseCleanupGroupMembers.c)
 *     TppBarrierAdjust @ 0x180073CC8 (TppBarrierAdjust.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x180075CA4 (RtlpLowFragHeapAllocateFromZone.c)
 *     EtwpSetProviderTraits @ 0x1800760F4 (EtwpSetProviderTraits.c)
 *     RtlProcessFlsData @ 0x180076280 (RtlProcessFlsData.c)
 *     LdrpCleanupThreadTlsData @ 0x180076A88 (LdrpCleanupThreadTlsData.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180076BEC (RtlRemoveInvertedFunctionTable.c)
 *     LdrpFindLoadedDllByMapping @ 0x180076F70 (LdrpFindLoadedDllByMapping.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x180079870 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x1800798D0 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x180079960 (RtlpUnregisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800799A0 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlLockMemoryBlockLookaside @ 0x180079A00 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x180079A70 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryZone @ 0x180079B1C (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180079BAC (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockModuleSection @ 0x180079C40 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180079CF0 (RtlLockModuleSection.c)
 *     TppPoolAddWorker @ 0x18007D040 (TppPoolAddWorker.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007E924 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     TppPoolRemoveWorker @ 0x18007F0B0 (TppPoolRemoveWorker.c)
 *     TppDirectExecuteCallback @ 0x18007F440 (TppDirectExecuteCallback.c)
 *     TppPoolUpdateTrimmedWorker @ 0x18007F638 (TppPoolUpdateTrimmedWorker.c)
 *     LdrpReleaseTlsEntry @ 0x1800818CC (LdrpReleaseTlsEntry.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180082090 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrGetDllDirectory @ 0x180082760 (LdrGetDllDirectory.c)
 *     TpReleasePool @ 0x180082880 (TpReleasePool.c)
 *     TppPoolpFree @ 0x180082A9C (TppPoolpFree.c)
 *     LdrSetDllDirectory @ 0x1800835B0 (LdrSetDllDirectory.c)
 *     LdrpInsertModuleToIndex @ 0x1800836F0 (LdrpInsertModuleToIndex.c)
 *     RtlSetProtectedPolicy @ 0x180083740 (RtlSetProtectedPolicy.c)
 *     RtlpGetNormalization @ 0x180083E54 (RtlpGetNormalization.c)
 *     RtlpAddVectoredHandler @ 0x180084210 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180085530 (RtlpRemoveVectoredHandler.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180086780 (RtlpInitializeStaticCriticalSection.c)
 *     RtlDeleteTimerQueueEx @ 0x1800870A0 (RtlDeleteTimerQueueEx.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180087FB0 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x180088010 (RtlDestroyMemoryZone.c)
 *     TpDisablePoolCallbackChecks @ 0x1800882F0 (TpDisablePoolCallbackChecks.c)
 *     TppTimerpStopCallbackGeneration @ 0x180088340 (TppTimerpStopCallbackGeneration.c)
 *     TppStopWaitCallbackGeneration @ 0x180089120 (TppStopWaitCallbackGeneration.c)
 *     TppQueueRemoveHead @ 0x18008AE5C (TppQueueRemoveHead.c)
 *     RtlpTpIoDllLoaded @ 0x18008BAB8 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoDllUnloaded @ 0x18008BB68 (RtlpTpIoDllUnloaded.c)
 *     RtlSetIoCompletionCallback @ 0x18008BCA0 (RtlSetIoCompletionCallback.c)
 *     RtlpTpIoLookup @ 0x18008BDF0 (RtlpTpIoLookup.c)
 *     EtwpTrackProviderBinary @ 0x18008D304 (EtwpTrackProviderBinary.c)
 *     LdrFlushAlternateResourceModules @ 0x18008E090 (LdrFlushAlternateResourceModules.c)
 *     LdrAddDllDirectory @ 0x18008F920 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x18008FB20 (LdrRemoveDllDirectory.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x18009F744 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x18009F81C (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFreeInternal @ 0x18009FBFC (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsContextFreeList @ 0x18009FD94 (RtlpHpVsContextFreeList.c)
 *     LdrQueryModuleServiceTags @ 0x1800CFF90 (LdrQueryModuleServiceTags.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D0C80 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     LdrForkMrdata @ 0x1800D7B0C (LdrForkMrdata.c)
 *     RtlCloneUserProcess @ 0x1800D8540 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D8AC0 (RtlPrepareForProcessCloning.c)
 *     RtlpLockFlsCallbackVector @ 0x1800D8D48 (RtlpLockFlsCallbackVector.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800E00E0 (RtlpWnfRetryTimerCallback.c)
 *     LdrUpdatePackageSearchPath @ 0x1800E0310 (LdrUpdatePackageSearchPath.c)
 *     RtlpSignalSystemDirsModification @ 0x1800E09A0 (RtlpSignalSystemDirsModification.c)
 *     RtlGrowFunctionTable @ 0x1800E2110 (RtlGrowFunctionTable.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800EB930 (RtlResetMemoryBlockLookaside.c)
 *     RtlExtendMemoryZone @ 0x1800EB990 (RtlExtendMemoryZone.c)
 *     RtlResetMemoryZone @ 0x1800EBA90 (RtlResetMemoryZone.c)
 *     RtlDeleteBarrier @ 0x1800ED4B0 (RtlDeleteBarrier.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F21A0 (RtlLockHeapManagerForCloning.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800F6CD0 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800F6E00 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800F6EB0 (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800F9F8C (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x1800FA9D0 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x1800FAAA8 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FAB94 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpHeapTrkTrackStack @ 0x1800FACD4 (RtlpHeapTrkTrackStack.c)
 *     RtlpStdLockAcquire @ 0x1800FE18C (RtlpStdLockAcquire.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1801045C0 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x1801049E4 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceDisable @ 0x180104BE0 (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceEnable @ 0x180104C34 (RtlpHpStackTraceEnable.c)
 *     RtlpIsLFHZoneAllocation @ 0x18010A4A4 (RtlpIsLFHZoneAllocation.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x18010CD2C (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x18010CDA0 (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLargeReAlloc @ 0x18010D358 (RtlpHpLargeReAlloc.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x18010DA70 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x18010DBE0 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x18010DD64 (RtlpHpSegMgrVaCtxInsert.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180110320 (TpSetDefaultPoolMaxThreads.c)
 *     TppAdjustRunningThreadGoal @ 0x180110414 (TppAdjustRunningThreadGoal.c)
 *     TppDirectUnposted @ 0x1801104D0 (TppDirectUnposted.c)
 *     RtlStackDbContextSerialize @ 0x180115558 (RtlStackDbContextSerialize.c)
 *     RtlStackDbStackAdd @ 0x18011588C (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180115F50 (RtlStackDbStackRemove.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801163BC (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpStackDbSegmentRemoveRef @ 0x180116A70 (RtlpStackDbSegmentRemoveRef.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x18005EDEC (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x18006ADA0 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x180075204 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1800A0880 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3C10 (NtWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 *v2; // r8
  __int64 v3; // r9
  PRTL_SRWLOCK v4; // rdi
  unsigned __int64 Value; // rbx
  __int64 v6; // rdx
  bool v7; // zf
  signed __int64 v8; // rax
  int i; // eax
  unsigned __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  PRTL_SRWLOCK v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  unsigned int v16[3]; // [rsp+44h] [rbp-24h] BYREF
  int v17; // [rsp+70h] [rbp+8h] BYREF

  v4 = SRWLock;
  v17 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL) )
  {
    Value = SRWLock->Value;
    while ( 1 )
    {
      if ( (Value & 1) != 0 )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(SRWLock, v1, v2, v3, v11) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        SRWLock = (PRTL_SRWLOCK)NtCurrentTeb()->ClientId.UniqueThread;
        v14 = SRWLock;
        LOBYTE(SRWLock) = 0;
        v16[0] = 3;
        v13 = 0LL;
        if ( (Value & 2) != 0 )
        {
          v12 = 0LL;
          v15 = -1;
          SRWLock = (PRTL_SRWLOCK)(unsigned __int8)Value;
          v11 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          v1 = (unsigned __int64)&v11 | Value & 8 | 7;
          LOBYTE(SRWLock) = (Value & 4) == 0;
        }
        else
        {
          v6 = 11LL;
          v12 = &v11;
          v2 = &v11;
          v15 = Value >> 4;
          if ( v15 <= 1 )
            v6 = 3LL;
          v1 = (unsigned __int64)&v11 | v6;
          if ( !(unsigned int)(Value >> 4) )
            v15 = -2;
        }
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v1, Value);
        v7 = Value == v8;
        Value = v8;
        if ( !v7 )
          goto LABEL_15;
        if ( (_BYTE)SRWLock )
          RtlpOptimizeSRWLockList(v4);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          for ( i = SRWLockSpinCount; i; --i )
          {
            SRWLock = (PRTL_SRWLOCK)v16[0];
            if ( (v16[0] & 2) == 0 )
              break;
            _mm_pause();
          }
        }
        if ( _interlockedbittestandreset((volatile signed __int32 *)v16, 1u) )
        {
          do
            NtWaitForAlertByThreadId(v4, 0LL);
          while ( (v16[0] & 4) == 0 );
        }
      }
      else
      {
        if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)v4, Value + 1, Value) )
          return;
LABEL_15:
        RtlBackoff(&v17);
        _m_prefetchw(v4);
        Value = v4->Value;
      }
    }
  }
}
