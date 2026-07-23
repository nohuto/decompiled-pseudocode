/*
 * XREFs of RtlReleaseSRWLockShared @ 0x18001AAF0
 * Callers:
 *     RtlpHpLfhSubsegmentWalk @ 0x1800019C8 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x1800066EC (RtlpWnfProcessCurrentDescriptor.c)
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x18000835C (EtwpGetNextRegistration.c)
 *     RtlpCreateSerializationGroup @ 0x1800097B0 (RtlpCreateSerializationGroup.c)
 *     RtlpCreateWnfNameSubscription @ 0x18000A060 (RtlpCreateWnfNameSubscription.c)
 *     EtwpCheckForPrivatePreEnable @ 0x18000AA3C (EtwpCheckForPrivatePreEnable.c)
 *     LdrpGetFromMUIMemCache @ 0x18001ABAC (LdrpGetFromMUIMemCache.c)
 *     LdrpCallTlsInitializers @ 0x18002507C (LdrpCallTlsInitializers.c)
 *     TppPoolpReferenceGlobalPool @ 0x18002FBA8 (TppPoolpReferenceGlobalPool.c)
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 *     RtlpHpLfhSlotAllocate @ 0x18003E150 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1800413B0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpTagContextUpdate @ 0x180046F54 (RtlpHpTagContextUpdate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180049FA8 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x18004DE8C (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x18004E77C (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpLfhContextCompact @ 0x18004F3B8 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18004F448 (RtlpHpLfhOwnerCompact.c)
 *     LdrpAllocateTls @ 0x180055E24 (LdrpAllocateTls.c)
 *     TpTrimPools @ 0x180060860 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180060B80 (RtlSleepConditionVariableSRW.c)
 *     TpAllocPoolInternal @ 0x180062FD4 (TpAllocPoolInternal.c)
 *     TppBarrierAdjust @ 0x180066E0C (TppBarrierAdjust.c)
 *     RtlpHpTagQueryTags @ 0x180067C90 (RtlpHpTagQueryTags.c)
 *     ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18006B674 (-RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z.c)
 *     RtlpComputeDllPathWithOptions @ 0x18006BBD0 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeDllPath @ 0x18006BD10 (RtlpComputeDllPath.c)
 *     SbAtomicCaptureContextGuid @ 0x18006CF40 (SbAtomicCaptureContextGuid.c)
 *     LdrpFreeTls @ 0x18006E3E4 (LdrpFreeTls.c)
 *     _LdrpInitialize @ 0x1800720BC (_LdrpInitialize.c)
 *     ?RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x180074A90 (-RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x180079FE4 (RtlpLookupDynamicFunctionEntry.c)
 *     RtlCheckHeldCriticalSections @ 0x18007DC10 (RtlCheckHeldCriticalSections.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18007EE6C (TpPoolReferenceExistingGlobalPool.c)
 *     RtlQueryProtectedPolicy @ 0x180080180 (RtlQueryProtectedPolicy.c)
 *     RtlpHpLargeAllocSize @ 0x1800843E0 (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1800849D8 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18008C310 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x18008C460 (RtlpWnfRetryTimerCallback.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D5728 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlQueryProcessLockInformation @ 0x1800D7930 (RtlQueryProcessLockInformation.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E03D0 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E6980 (RtlQueryCriticalSectionOwner.c)
 *     RtlPosixBarrier @ 0x1800EA704 (RtlPosixBarrier.c)
 *     RtlpHpStackTraceAddStack @ 0x180101C3C (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180102670 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180102864 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x1801028E0 (RtlpHpStackTraceSerialize.c)
 *     EtwEnumerateProcessRegGuids @ 0x18010CB40 (EtwEnumerateProcessRegGuids.c)
 *     RtlStackDbStackAdd @ 0x180114C98 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801156D4 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

void __cdecl RtlReleaseSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  signed __int64 v2; // rax
  signed __int64 v3; // r8
  signed __int64 v4; // rtt
  __int64 v5; // r8
  __int64 v6; // rdx
  signed __int64 v7; // rcx
  signed __int64 v8; // rdx
  signed __int64 v9; // rtt
  _QWORD *i; // rcx
  __int64 v11; // rdx

  v2 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 17LL);
  if ( v2 != 17 )
  {
    if ( (v2 & 1) == 0 )
      RtlRaiseStatus(-1073741212);
    while ( (v2 & 2) == 0 )
    {
      v3 = 0LL;
      if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
        v3 = v2 - 16;
      v4 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v3, v2);
      if ( v4 == v2 )
        return;
    }
    if ( (v2 & 8) != 0 )
    {
      for ( i = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL); ; i = (_QWORD *)*i )
      {
        v11 = i[1];
        if ( v11 )
          break;
      }
      if ( _InterlockedDecrement((volatile signed __int32 *)(v11 + 32)) > 0 )
        return;
      v5 = -9LL;
    }
    else
    {
      v5 = -1LL;
    }
    do
    {
      v6 = v5 + 4;
      v7 = v2 & 6;
      if ( v7 != 2 )
        v6 = v5;
      v8 = v2 + v6;
      v9 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v8, v2);
    }
    while ( v9 != v2 );
    if ( v7 == 2 )
      RtlpWakeSRWLock(SRWLock, v8, 0LL);
  }
}
