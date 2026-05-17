/*
 * XREFs of RtlEnterCriticalSection @ 0x180014370
 * Callers:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18000A3AC (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18000C610 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     LdrpObtainLockedEnclave @ 0x1800142E8 (LdrpObtainLockedEnclave.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x1800145A4 (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpFreeUserBlock @ 0x18001B65C (RtlpFreeUserBlock.c)
 *     LdrShutdownThread @ 0x1800232A0 (LdrShutdownThread.c)
 *     LdrpSendPostSnapNotifications @ 0x1800277F8 (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x18002795C (LdrpSendDllNotifications.c)
 *     LdrpDrainWorkQueue @ 0x180028298 (LdrpDrainWorkQueue.c)
 *     LdrpCheckForRetryLoading @ 0x18002ADB8 (LdrpCheckForRetryLoading.c)
 *     LdrpDynamicShimModule @ 0x18002AF68 (LdrpDynamicShimModule.c)
 *     LdrpAcquireLoaderLock @ 0x18002B034 (LdrpAcquireLoaderLock.c)
 *     LdrpGetLoadAsEntry @ 0x180034B94 (LdrpGetLoadAsEntry.c)
 *     RtlpSetProcUserMachineLangList @ 0x18003C1E4 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18003CC60 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003F300 (RtlpCreateProcessRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18004CD34 (RtlUpdateProcessRegistryInfo.c)
 *     EtwpSwitchBuffer @ 0x18004E718 (EtwpSwitchBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x180051368 (EtwpAllocateFreeBuffers.c)
 *     LdrpCorInitialize @ 0x180054948 (LdrpCorInitialize.c)
 *     RtlCreateProcessParametersInternal @ 0x180054DCC (RtlCreateProcessParametersInternal.c)
 *     RtlCreateEnvironmentEx @ 0x180055450 (RtlCreateEnvironmentEx.c)
 *     LdrpUnloadNode @ 0x180055870 (LdrpUnloadNode.c)
 *     RtlpComputePath @ 0x180056598 (RtlpComputePath.c)
 *     RtlQueryEnvironmentVariable @ 0x180056D90 (RtlQueryEnvironmentVariable.c)
 *     RtlSetEnvironmentVar @ 0x180057690 (RtlSetEnvironmentVar.c)
 *     RtlSleepConditionVariableCS @ 0x180058C40 (RtlSleepConditionVariableCS.c)
 *     RtlCreateTagHeap @ 0x180059E70 (RtlCreateTagHeap.c)
 *     EtwpFlushActiveBuffers @ 0x18005A0C0 (EtwpFlushActiveBuffers.c)
 *     RtlGetUserInfoHeap @ 0x18005AC60 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x18005AFE0 (RtlSetUserValueHeap.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x18005CB1C (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlProtectHeap @ 0x1800606A0 (RtlProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x180060868 (RtlpMoveHeapBetweenLists.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180062E38 (RtlpActivateLowFragmentationHeap.c)
 *     RtlExitUserProcess @ 0x18006CF90 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x18006D290 (RtlValidateHeap.c)
 *     RtlLockHeap @ 0x18006D5A0 (RtlLockHeap.c)
 *     LdrpLoadShimEngine @ 0x1800703EC (LdrpLoadShimEngine.c)
 *     LdrpWorkCallback @ 0x180070C60 (LdrpWorkCallback.c)
 *     LdrpProcessWork @ 0x180070CEC (LdrpProcessWork.c)
 *     LdrpQueueWork @ 0x1800718CC (LdrpQueueWork.c)
 *     LdrAddLoadAsDataTable @ 0x1800783D0 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180078F30 (LdrRemoveLoadAsDataTable.c)
 *     LdrpDropLastInProgressCount @ 0x180079EDC (LdrpDropLastInProgressCount.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18007B16C (RtlpQueryExtendedHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x18007B33C (RtlpEnumProcessHeaps.c)
 *     RtlSetCurrentDirectory_U @ 0x18007B760 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007BAA8 (RtlpReferenceCurrentDirectory.c)
 *     RtlSetHeapInformation @ 0x18007E690 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007E754 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlAcquirePebLock @ 0x18007E840 (RtlAcquirePebLock.c)
 *     RtlpSetProcMergedLangList @ 0x180084AFC (RtlpSetProcMergedLangList.c)
 *     RtlSetEnvironmentStrings @ 0x180085E50 (RtlSetEnvironmentStrings.c)
 *     AVrfDllLoadNotification @ 0x180087A7C (AVrfDllLoadNotification.c)
 *     LdrRegisterDllNotification @ 0x180087BC0 (LdrRegisterDllNotification.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180088CD0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008BBD0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlCompactHeap @ 0x18008C090 (RtlCompactHeap.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008E184 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSetCurrentEnvironment @ 0x18008F010 (RtlSetCurrentEnvironment.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800CF1E0 (LdrpCreateSoftwareEnclave.c)
 *     LdrpDeleteEnclave @ 0x1800CF2BC (LdrpDeleteEnclave.c)
 *     LdrUnregisterDllNotification @ 0x1800D04A0 (LdrUnregisterDllNotification.c)
 *     RtlCloneUserProcess @ 0x1800D8540 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D8AC0 (RtlPrepareForProcessCloning.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D9600 (RtlQueryProcessHeapInformation.c)
 *     AVrfDllUnloadNotification @ 0x1800DAC24 (AVrfDllUnloadNotification.c)
 *     AVrfInternalHeapFreeNotification @ 0x1800DB790 (AVrfInternalHeapFreeNotification.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800E0A60 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800E0CB0 (RtlpEnsureLiveDeadListsInitialized.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800E0D48 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800E0E74 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF6F0 (RtlpCleanupRegistryKeys.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F21A0 (RtlLockHeapManagerForCloning.c)
 *     RtlQueryTagHeap @ 0x1800F23D0 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800F25A8 (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800F2680 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F5670 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1800F5EB4 (RtlpSetupExtendedBlock.c)
 *     RtlTraceDatabaseAdd @ 0x1800FEA70 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1800FECB0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1800FED80 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x1800FEE00 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x1800FEE50 (RtlTraceDatabaseValidate.c)
 *     RtlDebugAllocateHeap @ 0x1801071A0 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180107568 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1801079B0 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180107BB4 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180107EB8 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x18010805C (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801081A8 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108744 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180108910 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180108AA4 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x180108CB4 (RtlDebugZeroHeap.c)
 *     EtwpBufferingModeFlush @ 0x18010F094 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlpEnterCriticalSectionContended @ 0x1800143C0 (RtlpEnterCriticalSectionContended.c)
 */

__int64 __fastcall RtlEnterCriticalSection(__int64 a1)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  void *UniqueThread; // rax
  __int64 result; // rax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 8), 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = UniqueThread;
    result = 0LL;
    *(_DWORD *)(a1 + 12) = 1;
  }
  else if ( *(void **)(a1 + 16) == UniqueThread )
  {
    ++*(_DWORD *)(a1 + 12);
    return 0LL;
  }
  else
  {
    return RtlpEnterCriticalSectionContended();
  }
  return result;
}
