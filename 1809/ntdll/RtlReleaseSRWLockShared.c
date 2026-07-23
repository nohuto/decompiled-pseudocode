/*
 * XREFs of RtlReleaseSRWLockShared @ 0x180009E40
 * Callers:
 *     RtlpHpLfhSubsegmentWalk @ 0x180002358 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x18000301C (RtlpLookupDynamicFunctionEntry.c)
 *     LdrpGetFromMUIMemCache @ 0x180009C84 (LdrpGetFromMUIMemCache.c)
 *     RtlpHpTagReAllocateHeap @ 0x18000A49C (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800110C0 (RtlpHpLfhSlotAllocate.c)
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18001CA30 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhContextCompact @ 0x1800208FC (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18002098C (RtlpHpLfhOwnerCompact.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180020EE0 (EtwpCheckForPrivatePreEnable.c)
 *     LdrpCallTlsInitializers @ 0x180025DE4 (LdrpCallTlsInitializers.c)
 *     TppPoolpReferenceGlobalPool @ 0x18002E600 (TppPoolpReferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800313A4 (TpPoolReferenceExistingGlobalPool.c)
 *     LdrpAllocateTls @ 0x18003673C (LdrpAllocateTls.c)
 *     EtwDeliverDataBlock @ 0x1800506D0 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x180050A70 (EtwpGetNextRegistration.c)
 *     RtlpComputeDllPathWithOptions @ 0x180055730 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeDllPath @ 0x180056450 (RtlpComputeDllPath.c)
 *     TpTrimPools @ 0x1800586A0 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x1800589C0 (RtlSleepConditionVariableSRW.c)
 *     RtlpCreateWnfNameSubscription @ 0x18005C110 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18005C388 (RtlpCreateSerializationGroup.c)
 *     RtlpCSparseBitmapUnlock @ 0x18005D4B4 (RtlpCSparseBitmapUnlock.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18005E058 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180062088 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1800631B0 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1800669A4 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x180066A0C (RtlpHpLargeAllocSize.c)
 *     TppBarrierAdjust @ 0x180073CC8 (TppBarrierAdjust.c)
 *     SbAtomicCaptureContextGuid @ 0x180075F58 (SbAtomicCaptureContextGuid.c)
 *     RtlProcessFlsData @ 0x180076280 (RtlProcessFlsData.c)
 *     LdrpFreeTls @ 0x1800769CC (LdrpFreeTls.c)
 *     _LdrpInitialize @ 0x18007875C (_LdrpInitialize.c)
 *     RtlpHpTagQueryTags @ 0x18007B480 (RtlpHpTagQueryTags.c)
 *     RtlCheckHeldCriticalSections @ 0x1800819A0 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x180084440 (RtlQueryProtectedPolicy.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D77A0 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlQueryProcessLockInformation @ 0x1800D99E0 (RtlQueryProcessLockInformation.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800DFC28 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800E00E0 (RtlpWnfRetryTimerCallback.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E2828 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E9600 (RtlQueryCriticalSectionOwner.c)
 *     RtlPosixBarrier @ 0x1800ED504 (RtlPosixBarrier.c)
 *     RtlpHpStackTraceAddStack @ 0x18010449C (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180104F80 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180105188 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x180105204 (RtlpHpStackTraceSerialize.c)
 *     EtwEnumerateProcessRegGuids @ 0x18010EA70 (EtwEnumerateProcessRegGuids.c)
 *     RtlStackDbStackAdd @ 0x18011588C (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801163BC (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlpWakeSRWLock @ 0x180075260 (RtlpWakeSRWLock.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 */

void __cdecl RtlReleaseSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  signed __int64 v1; // rax
  signed __int64 v2; // r9
  signed __int64 v3; // rtt
  __int64 v4; // r8
  __int64 v5; // rdx
  signed __int64 v6; // r9
  signed __int64 v7; // rdx
  signed __int64 v8; // rtt
  _QWORD *v9; // rdx
  __int64 i; // r9

  v1 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 17LL);
  if ( v1 == 17 )
    return;
  if ( (v1 & 1) == 0 )
    RtlRaiseStatus(-1073741212);
  if ( (v1 & 2) != 0 )
  {
LABEL_9:
    if ( (v1 & 8) != 0 )
    {
      v9 = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0uLL);
      for ( i = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v9[1] )
        v9 = (_QWORD *)*v9;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
        return;
      v4 = -9LL;
    }
    else
    {
      v4 = -1LL;
    }
    do
    {
      v5 = v4 + 4;
      v6 = v1 & 6;
      if ( v6 != 2 )
        v5 = v4;
      v7 = v1 + v5;
      v8 = v1;
      v1 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v7, v1);
    }
    while ( v8 != v1 );
    if ( v6 == 2 )
      RtlpWakeSRWLock(SRWLock, v7, 0LL);
    return;
  }
  while ( 1 )
  {
    v2 = 0LL;
    if ( (v1 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v2 = v1 - 16;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v2, v1);
    if ( v3 == v1 )
      break;
    if ( (v1 & 2) != 0 )
      goto LABEL_9;
  }
}
