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
 *     RtlpLockAtomTable @ 0x180073658 (RtlpLockAtomTable.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800739E0 (TpReleaseCleanupGroupMembers.c)
 *     TppBarrierAdjust @ 0x180073CB8 (TppBarrierAdjust.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x180075C94 (RtlpLowFragHeapAllocateFromZone.c)
 *     EtwpSetProviderTraits @ 0x1800760E4 (EtwpSetProviderTraits.c)
 *     RtlProcessFlsData @ 0x180076270 (RtlProcessFlsData.c)
 *     LdrpCleanupThreadTlsData @ 0x180076A78 (LdrpCleanupThreadTlsData.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180076BDC (RtlRemoveInvertedFunctionTable.c)
 *     LdrpFindLoadedDllByMapping @ 0x180076F60 (LdrpFindLoadedDllByMapping.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x180079860 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x1800798C0 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x180079950 (RtlpUnregisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180079990 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlLockMemoryBlockLookaside @ 0x1800799F0 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x180079A60 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryZone @ 0x180079B0C (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180079B9C (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockModuleSection @ 0x180079C30 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180079CE0 (RtlLockModuleSection.c)
 *     TppPoolAddWorker @ 0x18007D030 (TppPoolAddWorker.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007E914 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     TppPoolRemoveWorker @ 0x18007F0A0 (TppPoolRemoveWorker.c)
 *     TppDirectExecuteCallback @ 0x18007F430 (TppDirectExecuteCallback.c)
 *     TppPoolUpdateTrimmedWorker @ 0x18007F628 (TppPoolUpdateTrimmedWorker.c)
 *     LdrpReleaseTlsEntry @ 0x1800818BC (LdrpReleaseTlsEntry.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180082080 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrGetDllDirectory @ 0x180082750 (LdrGetDllDirectory.c)
 *     TpReleasePool @ 0x180082870 (TpReleasePool.c)
 *     TppPoolpFree @ 0x180082A8C (TppPoolpFree.c)
 *     LdrSetDllDirectory @ 0x1800835A0 (LdrSetDllDirectory.c)
 *     LdrpInsertModuleToIndex @ 0x1800836E0 (LdrpInsertModuleToIndex.c)
 *     RtlSetProtectedPolicy @ 0x180083730 (RtlSetProtectedPolicy.c)
 *     RtlpGetNormalization @ 0x180083E44 (RtlpGetNormalization.c)
 *     RtlpAddVectoredHandler @ 0x180084200 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180085520 (RtlpRemoveVectoredHandler.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180086770 (RtlpInitializeStaticCriticalSection.c)
 *     RtlDeleteTimerQueueEx @ 0x180087090 (RtlDeleteTimerQueueEx.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180087FA0 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x180088000 (RtlDestroyMemoryZone.c)
 *     TpDisablePoolCallbackChecks @ 0x1800882E0 (TpDisablePoolCallbackChecks.c)
 *     TppTimerpStopCallbackGeneration @ 0x180088330 (TppTimerpStopCallbackGeneration.c)
 *     TppStopWaitCallbackGeneration @ 0x180089110 (TppStopWaitCallbackGeneration.c)
 *     TppQueueRemoveHead @ 0x18008AE4C (TppQueueRemoveHead.c)
 *     RtlpTpIoDllLoaded @ 0x18008BAA8 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoDllUnloaded @ 0x18008BB58 (RtlpTpIoDllUnloaded.c)
 *     RtlSetIoCompletionCallback @ 0x18008BC90 (RtlSetIoCompletionCallback.c)
 *     RtlpTpIoLookup @ 0x18008BDE0 (RtlpTpIoLookup.c)
 *     EtwpTrackProviderBinary @ 0x18008D2F4 (EtwpTrackProviderBinary.c)
 *     LdrFlushAlternateResourceModules @ 0x18008E080 (LdrFlushAlternateResourceModules.c)
 *     LdrAddDllDirectory @ 0x18008F910 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x18008FB10 (LdrRemoveDllDirectory.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x18009F724 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x18009F7FC (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFreeInternal @ 0x18009FBDC (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsContextFreeList @ 0x18009FD74 (RtlpHpVsContextFreeList.c)
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
 *     RtlStackDbContextSerialize @ 0x1801155BC (RtlStackDbContextSerialize.c)
 *     RtlStackDbStackAdd @ 0x1801158F0 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180115FB4 (RtlStackDbStackRemove.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x180116420 (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpStackDbSegmentRemoveRef @ 0x180116AD4 (RtlpStackDbSegmentRemoveRef.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x18005EDEC (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x18006ADA0 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x1800751F4 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1800A0860 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3BF0 (NtWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall RtlAcquireSRWLockExclusive(
        unsigned __int64 UniqueThread,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  signed __int64 result; // rax
  volatile signed __int64 *v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  bool v8; // zf
  signed __int64 v9; // rax
  int i; // eax
  unsigned __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+40h] [rbp-28h]
  unsigned int v17[3]; // [rsp+44h] [rbp-24h] BYREF
  int v18; // [rsp+70h] [rbp+8h] BYREF

  result = 0LL;
  v5 = (volatile signed __int64 *)UniqueThread;
  v18 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)UniqueThread, 0LL) )
  {
    v6 = *(_QWORD *)UniqueThread;
    while ( 1 )
    {
      if ( (v6 & 1) != 0 )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, a2, a3, a4, v12) )
          ZwTerminateProcess(-1LL, 3221225547LL);
        UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
        v15 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v17[0] = 3;
        v14 = 0LL;
        if ( (v6 & 2) != 0 )
        {
          v13 = 0LL;
          v16 = -1;
          UniqueThread = (unsigned __int8)v6;
          v12 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
          a2 = (unsigned __int64)&v12 | v6 & 8 | 7;
          LOBYTE(UniqueThread) = (v6 & 4) == 0;
        }
        else
        {
          v7 = 11LL;
          v13 = &v12;
          a3 = &v12;
          v16 = v6 >> 4;
          if ( v16 <= 1 )
            v7 = 3LL;
          a2 = (unsigned __int64)&v12 | v7;
          if ( !(unsigned int)(v6 >> 4) )
            v16 = -2;
        }
        v9 = _InterlockedCompareExchange64(v5, a2, v6);
        v8 = v6 == v9;
        v6 = v9;
        if ( !v8 )
          goto LABEL_15;
        if ( (_BYTE)UniqueThread )
          RtlpOptimizeSRWLockList(v5);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          for ( i = SRWLockSpinCount; i; --i )
          {
            UniqueThread = v17[0];
            if ( (v17[0] & 2) == 0 )
              break;
            _mm_pause();
          }
        }
        if ( _interlockedbittestandreset((volatile signed __int32 *)v17, 1u) )
        {
          do
            NtWaitForAlertByThreadId(v5, 0LL);
          while ( (v17[0] & 4) == 0 );
        }
      }
      else
      {
        result = _InterlockedCompareExchange64(v5, v6 + 1, v6);
        if ( v6 == result )
          return result;
LABEL_15:
        RtlBackoff(&v18);
        _m_prefetchw((const void *)v5);
        v6 = *v5;
      }
    }
  }
  return result;
}
