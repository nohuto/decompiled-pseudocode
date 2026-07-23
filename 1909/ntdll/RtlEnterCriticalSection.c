/*
 * XREFs of RtlEnterCriticalSection @ 0x18001B380
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x18000550C (EtwpAllocateFreeBuffers.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800151CC (RtlpSetProcUserMachineLangList.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x1800184BC (RtlpAllocateUserBlockFromHeap.c)
 *     RtlLockHeap @ 0x180019CB0 (RtlLockHeap.c)
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18001A7F0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrpObtainLockedEnclave @ 0x18001B2F8 (LdrpObtainLockedEnclave.c)
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     LdrpDynamicShimModule @ 0x18002C6E4 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18002C944 (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x18002CAA8 (LdrpSendDllNotifications.c)
 *     LdrpCheckForRetryLoading @ 0x18002D594 (LdrpCheckForRetryLoading.c)
 *     LdrpAcquireLoaderLock @ 0x18002D7BC (LdrpAcquireLoaderLock.c)
 *     LdrpWorkCallback @ 0x18002E1E0 (LdrpWorkCallback.c)
 *     LdrpProcessWork @ 0x18002E26C (LdrpProcessWork.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 *     LdrpUnloadNode @ 0x18002ECFC (LdrpUnloadNode.c)
 *     RtlpAllocateHeap @ 0x18003C350 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180043280 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180043550 (RtlpReAllocateHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x180048408 (RtlpMoveHeapBetweenLists.c)
 *     RtlpFreeUserBlock @ 0x18004AD04 (RtlpFreeUserBlock.c)
 *     RtlpActivateLowFragmentationHeap @ 0x18004B574 (RtlpActivateLowFragmentationHeap.c)
 *     EtwpSwitchBuffer @ 0x1800540C4 (EtwpSwitchBuffer.c)
 *     LdrpGetLoadAsEntry @ 0x180054D14 (LdrpGetLoadAsEntry.c)
 *     RtlCreateProcessParametersInternal @ 0x18005C45C (RtlCreateProcessParametersInternal.c)
 *     RtlCreateEnvironmentEx @ 0x18005CC20 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18005CE70 (RtlSetEnvironmentVar.c)
 *     RtlSleepConditionVariableCS @ 0x180060E30 (RtlSleepConditionVariableCS.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18006798C (RtlpQueryExtendedHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x180067B5C (RtlpEnumProcessHeaps.c)
 *     LdrpLoadShimEngine @ 0x180069284 (LdrpLoadShimEngine.c)
 *     RtlExitUserProcess @ 0x18006B150 (RtlExitUserProcess.c)
 *     RtlpComputePath @ 0x18006BDE4 (RtlpComputePath.c)
 *     EtwpFlushActiveBuffers @ 0x18006D2DC (EtwpFlushActiveBuffers.c)
 *     RtlGetUserInfoHeap @ 0x18006E580 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x18006E8F0 (RtlSetUserValueHeap.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x1800701E0 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlValidateHeap @ 0x1800705A0 (RtlValidateHeap.c)
 *     LdrpQueueWork @ 0x180070BF4 (LdrpQueueWork.c)
 *     LdrAddLoadAsDataTable @ 0x180072620 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800739E0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpDropLastInProgressCount @ 0x1800743BC (LdrpDropLastInProgressCount.c)
 *     RtlSetCurrentDirectory_U @ 0x1800769C0 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x180076D08 (RtlpReferenceCurrentDirectory.c)
 *     RtlSetHeapInformation @ 0x1800796C0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180079784 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlAcquirePebLock @ 0x180079BD0 (RtlAcquirePebLock.c)
 *     RtlCreateTagHeap @ 0x18007CBA0 (RtlCreateTagHeap.c)
 *     RtlpSetProcMergedLangList @ 0x180080578 (RtlpSetProcMergedLangList.c)
 *     RtlSetEnvironmentStrings @ 0x1800812C0 (RtlSetEnvironmentStrings.c)
 *     LdrpCorInitialize @ 0x180081710 (LdrpCorInitialize.c)
 *     AVrfDllLoadNotification @ 0x180083AA0 (AVrfDllLoadNotification.c)
 *     LdrRegisterDllNotification @ 0x180083B30 (LdrRegisterDllNotification.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180085070 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x180089150 (RtlGetProcessPreferredUILanguages.c)
 *     RtlCompactHeap @ 0x180089B20 (RtlCompactHeap.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008ADA0 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008B30C (RtlUpdateProcessRegistryInfo.c)
 *     RtlSetCurrentEnvironment @ 0x18008BC70 (RtlSetCurrentEnvironment.c)
 *     RtlPrepareForProcessCloning @ 0x18009C0C0 (RtlPrepareForProcessCloning.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800CDA94 (LdrpCreateSoftwareEnclave.c)
 *     LdrpDeleteEnclave @ 0x1800CDB84 (LdrpDeleteEnclave.c)
 *     LdrUnregisterDllNotification @ 0x1800CED70 (LdrUnregisterDllNotification.c)
 *     RtlCloneUserProcess @ 0x1800D6830 (RtlCloneUserProcess.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7550 (RtlQueryProcessHeapInformation.c)
 *     AVrfDllUnloadNotification @ 0x1800D8B74 (AVrfDllUnloadNotification.c)
 *     AVrfInternalHeapFreeNotification @ 0x1800D96A0 (AVrfInternalHeapFreeNotification.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DE588 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800DE930 (RtlpEnsureLiveDeadListsInitialized.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800DE9C8 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800DEAFC (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC3D0 (RtlpCleanupRegistryKeys.c)
 *     RtlLockHeapManagerForCloning @ 0x1800EF164 (RtlLockHeapManagerForCloning.c)
 *     RtlQueryTagHeap @ 0x1800EF390 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800EF564 (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF630 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F2A30 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1800F3270 (RtlpSetupExtendedBlock.c)
 *     RtlTraceDatabaseAdd @ 0x1800FBFD0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1800FC210 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1800FC2E0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x1800FC360 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x1800FC3B0 (RtlTraceDatabaseValidate.c)
 *     RtlDebugAllocateHeap @ 0x1801046F0 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180104AA4 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180104EEC (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1801050F0 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1801053E8 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x18010558C (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801056D8 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180105C34 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180105E00 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180105F94 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x1801061A4 (RtlDebugZeroHeap.c)
 *     EtwpBufferingModeFlush @ 0x18010D164 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlpEnterCriticalSectionContended @ 0x18001B3D0 (RtlpEnterCriticalSectionContended.c)
 */

NTSTATUS __cdecl RtlEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  void *UniqueThread; // rax
  NTSTATUS result; // eax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset(&CriticalSection->LockCount, 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    CriticalSection->OwningThread = UniqueThread;
    result = 0;
    CriticalSection->RecursionCount = 1;
  }
  else if ( CriticalSection->OwningThread == UniqueThread )
  {
    ++CriticalSection->RecursionCount;
    return 0;
  }
  else
  {
    return RtlpEnterCriticalSectionContended();
  }
  return result;
}
