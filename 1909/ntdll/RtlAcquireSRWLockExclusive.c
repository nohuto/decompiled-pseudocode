/*
 * XREFs of RtlAcquireSRWLockExclusive @ 0x180039340
 * Callers:
 *     RtlExtendMemoryZone @ 0x1800025F0 (RtlExtendMemoryZone.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180004440 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpInsertGuidEntry @ 0x180005FFC (EtwpInsertGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x1800062DC (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180006330 (EtwpDereferenceUmGuidEntry.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x18000645C (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x1800066EC (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180006950 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x180006ECC (RtlpDecRefWnfNameSubscription.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x1800078BC (RtlpDecrementWnfSerializationGroup.c)
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x18000835C (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x18000844C (EtwpFindRegistration.c)
 *     RtlpCreateSerializationGroup @ 0x1800097B0 (RtlpCreateSerializationGroup.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x180009EE8 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x18000A060 (RtlpCreateWnfNameSubscription.c)
 *     EtwpSetProviderTraits @ 0x18000A434 (EtwpSetProviderTraits.c)
 *     EtwNotificationRegister @ 0x18000A800 (EtwNotificationRegister.c)
 *     EtwpFindGuidEntry @ 0x18000AB50 (EtwpFindGuidEntry.c)
 *     EtwpInsertRegistration @ 0x18000AC1C (EtwpInsertRegistration.c)
 *     RtlpHpHeapLock @ 0x1800170E8 (RtlpHpHeapLock.c)
 *     LdrpFindLoadedDllByHandle @ 0x18001869C (LdrpFindLoadedDllByHandle.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpProcessMappedModule @ 0x180020654 (LdrpProcessMappedModule.c)
 *     RtlInsertInvertedFunctionTable @ 0x180020D8C (RtlInsertInvertedFunctionTable.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002228C (LdrpIncrementModuleLoadCount.c)
 *     LdrpBuildForwarderLink @ 0x1800222E4 (LdrpBuildForwarderLink.c)
 *     LdrpFindLoadedDllByName @ 0x180022698 (LdrpFindLoadedDllByName.c)
 *     LdrpMapAndSnapDependency @ 0x180022F1C (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     LdrpLoadKnownDll @ 0x180029560 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x180029EFC (LdrpMapDllWithSectionHandle.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18002CB3C (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpFindLoadedDllByMapping @ 0x18002DC10 (LdrpFindLoadedDllByMapping.c)
 *     LdrpFindExistingModule @ 0x18002E6A0 (LdrpFindExistingModule.c)
 *     LdrpComputeLazyDllPath @ 0x18002E8CC (LdrpComputeLazyDllPath.c)
 *     RtlpTpWaitCheckReset @ 0x18002E988 (RtlpTpWaitCheckReset.c)
 *     LdrpPinModule @ 0x18002EB1C (LdrpPinModule.c)
 *     LdrpUnloadNode @ 0x18002ECFC (LdrpUnloadNode.c)
 *     TpWaitForWait @ 0x18002F0B0 (TpWaitForWait.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18002F2D4 (TppPoolpDereferenceGlobalPool.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F3D8 (LdrpDecrementModuleLoadCountEx.c)
 *     TppPoolpReferenceGlobalPool @ 0x18002FBA8 (TppPoolpReferenceGlobalPool.c)
 *     RtlDeregisterWaitEx @ 0x18002FE20 (RtlDeregisterWaitEx.c)
 *     TpWaitOutstandingCallbackCount @ 0x18002FF6C (TpWaitOutstandingCallbackCount.c)
 *     TppPoolAddWorker @ 0x18002FFB0 (TppPoolAddWorker.c)
 *     TpReleaseWait @ 0x1800302D0 (TpReleaseWait.c)
 *     TppWaitCompletion @ 0x180030390 (TppWaitCompletion.c)
 *     RtlRegisterWait @ 0x180030960 (RtlRegisterWait.c)
 *     RtlDeleteTimer @ 0x180030BE0 (RtlDeleteTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x180030D30 (TpTimerOutstandingCallbackCount.c)
 *     RtlCreateTimer @ 0x180030E70 (RtlCreateTimer.c)
 *     TpSetWaitEx @ 0x1800312D0 (TpSetWaitEx.c)
 *     TppGetCurrentThreadNumaNode @ 0x180031620 (TppGetCurrentThreadNumaNode.c)
 *     TpReleaseTimer @ 0x180031810 (TpReleaseTimer.c)
 *     TpPostTask @ 0x1800318A8 (TpPostTask.c)
 *     TpWaitForTimer @ 0x180031D10 (TpWaitForTimer.c)
 *     AlpcGetMessageFromCompletionList @ 0x180031DF0 (AlpcGetMessageFromCompletionList.c)
 *     RtlpGetCachedPath @ 0x1800321F8 (RtlpGetCachedPath.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     TpSetTimerEx @ 0x1800323F0 (TpSetTimerEx.c)
 *     TppCancelTimer @ 0x18003257C (TppCancelTimer.c)
 *     TppSetTimer @ 0x1800326A0 (TppSetTimer.c)
 *     RtlDeleteCriticalSection @ 0x180032B30 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180033A40 (RtlpAddDebugInfoToCriticalSection.c)
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x1800351D0 (TppCallbackEpilog.c)
 *     TppPrepareDirectParams @ 0x1800356E0 (TppPrepareDirectParams.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     TppTimerQueueExpiration @ 0x180035FA0 (TppTimerQueueExpiration.c)
 *     TppSingleTimerExpiration @ 0x180036320 (TppSingleTimerExpiration.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800367E0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeShrink @ 0x180036AE0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180036F20 (RtlpHpSegPageRangeAllocate.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003741C (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037DCC (TppCleanupGroupMemberInitialize.c)
 *     TppWorkPost @ 0x180038510 (TppWorkPost.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180038840 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFree @ 0x180038C70 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x180039740 (RtlpHpVsChunkSplit.c)
 *     RtlpHpLfhSlotAllocate @ 0x18003E150 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1800413B0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     LdrProtectMrdataHeap @ 0x1800484A8 (LdrProtectMrdataHeap.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x18004ACC8 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x18004CE64 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpVaMgrAlloc @ 0x18004DEFC (RtlpHpVaMgrAlloc.c)
 *     RtlpCSparseBitmapLock @ 0x18004E87C (RtlpCSparseBitmapLock.c)
 *     RtlpHpSegMgrReserve @ 0x18004E96C (RtlpHpSegMgrReserve.c)
 *     RtlpHpTagContextAllocateTag @ 0x18004ECF8 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpSegContextCompact @ 0x18004F270 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18004F448 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpVaMgrCtxFree @ 0x18004F770 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpHeapExtendContext @ 0x1800505C0 (RtlpHpHeapExtendContext.c)
 *     RtlpHpLargeFree @ 0x1800507E4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x180050968 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180050E38 (RtlpHpLfhBucketAddSubsegment.c)
 *     EtwNotificationUnregister @ 0x180053850 (EtwNotificationUnregister.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180053994 (EtwpRemoveRegistrationFromTable.c)
 *     RtlFlsSetValue @ 0x180054950 (RtlFlsSetValue.c)
 *     LdrpFindLoadedDllByAddress @ 0x180054E30 (LdrpFindLoadedDllByAddress.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18005551C (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpHandleTlsData @ 0x180055984 (LdrpHandleTlsData.c)
 *     LdrpQueueDeferredTlsData @ 0x180056704 (LdrpQueueDeferredTlsData.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180059490 (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlpLockAtomTable @ 0x18005B888 (RtlpLockAtomTable.c)
 *     TpTrimPools @ 0x180060860 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180060B80 (RtlSleepConditionVariableSRW.c)
 *     TpStartAsyncIoOperation @ 0x180062A70 (TpStartAsyncIoOperation.c)
 *     TppCleanupGroupAddMember @ 0x180062E50 (TppCleanupGroupAddMember.c)
 *     TpAllocPoolInternal @ 0x180062FD4 (TpAllocPoolInternal.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1800639C0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlInstallFunctionTableCallback @ 0x180065170 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x180065490 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180065670 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180065BC0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180065EC0 (RtlAddGrowableFunctionTable.c)
 *     TpReleaseCleanupGroupMembers @ 0x180066B30 (TpReleaseCleanupGroupMembers.c)
 *     TppBarrierAdjust @ 0x180066E0C (TppBarrierAdjust.c)
 *     ?RtlpFlsAlloc@@YAJPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_THREAD_CONTEXT@@P6AXPEAX@ZPEAK@Z @ 0x180068E24 (-RtlpFlsAlloc@@YAJPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_THREAD_CONTEXT@@P6AXPEAX@ZPEAK@Z.c)
 *     ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18006B674 (-RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z.c)
 *     LdrpCondenseGraphRecurse @ 0x18006C8D8 (LdrpCondenseGraphRecurse.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x18006E0CC (RtlpLowFragHeapAllocateFromZone.c)
 *     LdrpCleanupThreadTlsData @ 0x18006E4A0 (LdrpCleanupThreadTlsData.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006F7B0 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1800704AC (RtlRemoveInvertedFunctionTable.c)
 *     LdrpLoadContextReplaceModule @ 0x180070A98 (LdrpLoadContextReplaceModule.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x180073D40 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x180073DA0 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x180073E30 (RtlpUnregisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180073E70 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlLockMemoryBlockLookaside @ 0x180073ED0 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x180073F40 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryZone @ 0x180073FEC (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x18007407C (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockModuleSection @ 0x180074110 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x1800741C0 (RtlLockModuleSection.c)
 *     TppCleanupGroupRemoveMember @ 0x180074688 (TppCleanupGroupRemoveMember.c)
 *     ?RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x180074A90 (-RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     RtlpCallVectoredHandlers @ 0x180078F20 (RtlpCallVectoredHandlers.c)
 *     TppPoolUpdateTrimmedWorker @ 0x18007939C (TppPoolUpdateTrimmedWorker.c)
 *     TppPoolRemoveWorker @ 0x1800798CC (TppPoolRemoveWorker.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007A200 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     TppDirectExecuteCallback @ 0x18007A5E0 (TppDirectExecuteCallback.c)
 *     LdrEnsureMrdataHeapExists @ 0x18007C748 (LdrEnsureMrdataHeapExists.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007D7D0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrGetDllDirectory @ 0x18007DC90 (LdrGetDllDirectory.c)
 *     RtlpGetNormalization @ 0x18007E30C (RtlpGetNormalization.c)
 *     LdrpReleaseTlsEntry @ 0x18007E45C (LdrpReleaseTlsEntry.c)
 *     TppJobpRundownJob @ 0x18007E5B8 (TppJobpRundownJob.c)
 *     RtlUpdateTimer @ 0x18007EBE0 (RtlUpdateTimer.c)
 *     TpSetDefaultPoolStackInformation @ 0x18007ED20 (TpSetDefaultPoolStackInformation.c)
 *     LdrpInsertModuleToIndex @ 0x18007F3F0 (LdrpInsertModuleToIndex.c)
 *     LdrSetDllDirectory @ 0x18007F5E0 (LdrSetDllDirectory.c)
 *     RtlSetProtectedPolicy @ 0x18007F730 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x18007FF70 (RtlpAddVectoredHandler.c)
 *     EtwpTrackProviderBinary @ 0x180080930 (EtwpTrackProviderBinary.c)
 *     RtlpRemoveVectoredHandler @ 0x180081560 (RtlpRemoveVectoredHandler.c)
 *     TpReleasePool @ 0x180081AA0 (TpReleasePool.c)
 *     TppPoolpFree @ 0x180081CD0 (TppPoolpFree.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180082A80 (RtlpInitializeStaticCriticalSection.c)
 *     RtlDeleteTimerQueueEx @ 0x180082C10 (RtlDeleteTimerQueueEx.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180083FF0 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x180084050 (RtlDestroyMemoryZone.c)
 *     TpDisablePoolCallbackChecks @ 0x180084A80 (TpDisablePoolCallbackChecks.c)
 *     TppTimerpStopCallbackGeneration @ 0x180084BC0 (TppTimerpStopCallbackGeneration.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x18008525C (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1800852E4 (RtlpHpVsSubsegmentCommitPages.c)
 *     TppStopWaitCallbackGeneration @ 0x180085460 (TppStopWaitCallbackGeneration.c)
 *     EtwpDisableTraceProviders @ 0x1800875B4 (EtwpDisableTraceProviders.c)
 *     RtlpTpIoDllLoaded @ 0x180089228 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoDllUnloaded @ 0x1800892D8 (RtlpTpIoDllUnloaded.c)
 *     RtlSetIoCompletionCallback @ 0x180089400 (RtlSetIoCompletionCallback.c)
 *     RtlpTpIoLookup @ 0x180089550 (RtlpTpIoLookup.c)
 *     LdrFlushAlternateResourceModules @ 0x18008B0A0 (LdrFlushAlternateResourceModules.c)
 *     RtlpWnfRetryTimerCallback @ 0x18008C460 (RtlpWnfRetryTimerCallback.c)
 *     LdrAddDllDirectory @ 0x18008C8A0 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x18008CAA0 (LdrRemoveDllDirectory.c)
 *     RtlPrepareForProcessCloning @ 0x18009C0C0 (RtlPrepareForProcessCloning.c)
 *     RtlpHpVsContextGrowInPlace @ 0x18009C730 (RtlpHpVsContextGrowInPlace.c)
 *     LdrQueryModuleServiceTags @ 0x1800CE870 (LdrQueryModuleServiceTags.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CF550 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrForkMrdata @ 0x1800D5E0C (LdrForkMrdata.c)
 *     RtlCloneUserProcess @ 0x1800D6830 (RtlCloneUserProcess.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DDBC0 (LdrUpdatePackageSearchPath.c)
 *     RtlSetSearchPathMode @ 0x1800DDCC0 (RtlSetSearchPathMode.c)
 *     RtlpSignalSystemDirsModification @ 0x1800DE328 (RtlpSignalSystemDirsModification.c)
 *     ?RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z @ 0x1800DE490 (-RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z.c)
 *     RtlGrowFunctionTable @ 0x1800DFD60 (RtlGrowFunctionTable.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800E8A20 (RtlResetMemoryBlockLookaside.c)
 *     RtlResetMemoryZone @ 0x1800E8A80 (RtlResetMemoryZone.c)
 *     RtlDeleteBarrier @ 0x1800EA6B0 (RtlDeleteBarrier.c)
 *     RtlLockHeapManagerForCloning @ 0x1800EF164 (RtlLockHeapManagerForCloning.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800F40D0 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800F4200 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800F42B0 (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800F7C78 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x1800F86B4 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x1800F878C (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800F8878 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpHeapTrkTrackStack @ 0x1800F89B8 (RtlpHeapTrkTrackStack.c)
 *     RtlpStdLockAcquire @ 0x1800FB44C (RtlpStdLockAcquire.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180101D60 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180102108 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceDisable @ 0x1801022DC (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceEnable @ 0x180102330 (RtlpHpStackTraceEnable.c)
 *     RtlpIsLFHZoneAllocation @ 0x180107948 (RtlpIsLFHZoneAllocation.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x18010AB10 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x18010AB84 (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLargeReAlloc @ 0x18010AE60 (RtlpHpLargeReAlloc.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x18010B5A4 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x18010B714 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x18010B890 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpVsChunkDecommit @ 0x18010BE5C (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsContextFreeInternal @ 0x18010C14C (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsContextFreeList @ 0x18010C2F4 (RtlpHpVsContextFreeList.c)
 *     TpSetDefaultPoolCpuSets @ 0x18010EA18 (TpSetDefaultPoolCpuSets.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18010EA70 (TpSetDefaultPoolMaxThreads.c)
 *     TpSetPoolThreadCpuSets @ 0x18010EBA0 (TpSetPoolThreadCpuSets.c)
 *     TppDirectUnposted @ 0x18010ED00 (TppDirectUnposted.c)
 *     TppQueueRemoveHead @ 0x18010FAC0 (TppQueueRemoveHead.c)
 *     RtlStackDbContextSerialize @ 0x180114950 (RtlStackDbContextSerialize.c)
 *     RtlStackDbStackAdd @ 0x180114C98 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180115284 (RtlStackDbStackRemove.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801156D4 (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpStackDbSegmentRemoveRef @ 0x180115CE0 (RtlpStackDbSegmentRemoveRef.c)
 * Callees:
 *     RtlBackoff @ 0x1800365A0 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180036790 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180078328 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x18009D410 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A07C0 (NtWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  unsigned __int64 Value; // rdi
  bool v3; // cl
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  bool v6; // zf
  signed __int64 v7; // rax
  int i; // edx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  void *UniqueThread; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+40h] [rbp-28h]
  signed __int32 v19[3]; // [rsp+44h] [rbp-24h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF

  v20 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL) )
  {
    Value = SRWLock->Value;
    while ( 1 )
    {
      if ( (Value & 1) != 0 )
      {
        if ( RtlpWaitCouldDeadlock() )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v3 = 0;
        v19[0] = 3;
        v16 = 0LL;
        if ( (Value & 2) != 0 )
        {
          v15 = 0LL;
          v18 = -1;
          v14 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          v5 = (unsigned __int64)&v14 | Value & 8 | 7;
          v3 = (Value & 4) == 0;
        }
        else
        {
          v4 = 11LL;
          v15 = &v14;
          v18 = Value >> 4;
          if ( v18 <= 1 )
            v4 = 3LL;
          v5 = (unsigned __int64)&v14 | v4;
          if ( !(unsigned int)(Value >> 4) )
            v18 = -2;
        }
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v5, Value);
        v6 = Value == v7;
        Value = v7;
        if ( !v6 )
          goto LABEL_13;
        if ( v3 )
          RtlpOptimizeSRWLockList(SRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            v10 = __rdtsc();
            v11 = v10 + (unsigned int)SRWLockSpinCycleCount;
            while ( 1 )
            {
              __asm { monitorx rax, rcx, rdx }
              if ( (v19[0] & 2) == 0 )
                break;
              v12 = v10;
              v13 = __rdtsc();
              v10 = v13;
              if ( v13 <= v12 || v13 >= v11 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            for ( i = 0; (v19[0] & 2) != 0 && i != SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6]; ++i )
              _mm_pause();
          }
        }
        if ( _interlockedbittestandreset(v19, 1u) )
        {
          do
            NtWaitForAlertByThreadId(SRWLock, 0LL);
          while ( (v19[0] & 4) == 0 );
        }
      }
      else
      {
        if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, Value + 1, Value) )
          return;
LABEL_13:
        RtlBackoff(&v20);
        _m_prefetchw(SRWLock);
        Value = SRWLock->Value;
      }
    }
  }
}
