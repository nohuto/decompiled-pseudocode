/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x140005760
 * Callers:
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1400053F0 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExfAcquirePushLockExclusive @ 0x140005740 (ExfAcquirePushLockExclusive.c)
 *     NtCancelTimer @ 0x14001CF40 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140118FC0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExpDeleteTimer @ 0x140127930 (ExpDeleteTimer.c)
 *     FlushLookUpTableBucket @ 0x140127B58 (FlushLookUpTableBucket.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14012F2E0 (ExfAcquireReleasePushLockExclusive.c)
 *     ExWakeTimersPause @ 0x1401427C0 (ExWakeTimersPause.c)
 *     ExpSaAllocatorFree @ 0x1401671C8 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140167294 (ExpSaPageGroupFreeMemory.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14016753C (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaAllocatorAllocate @ 0x1401677E8 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140167B08 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167D80 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExGetWakeTimerList @ 0x14031C530 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14031D260 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x14031D840 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14031D980 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x14031E0F0 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14031F4BC (ExpSaPageGroupDescriptorFree.c)
 *     WheaConfigureErrorSource @ 0x140573910 (WheaConfigureErrorSource.c)
 *     WbAddWarbirdEncryptionSegment @ 0x140583C40 (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x140583E04 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x140583EC8 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x140583F8C (WbGetInitializedEncryptionSegment.c)
 *     ExUuidCreate @ 0x1406062C0 (ExUuidCreate.c)
 *     ExpWnfDeleteProcessContext @ 0x140607AA4 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140607CA4 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteScopeById @ 0x140608860 (ExpWnfDeleteScopeById.c)
 *     WbRemoveWarbirdProcess @ 0x140608988 (WbRemoveWarbirdProcess.c)
 *     ExpWnfCreateNameInstance @ 0x14060E058 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14060E5F4 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14060E8D0 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F9EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x14061034C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140610794 (ExpWnfUpdateSubscription.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140610B7C (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfWriteStateData @ 0x140610CD0 (ExpWnfWriteStateData.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x1406246B0 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetWarbirdThread @ 0x14062502C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140625584 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140690B98 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x140690E5C (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14069158C (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14069169C (WbAddHeapExecutedBlockToLRU.c)
 *     ExpWnfDeleteNameInstance @ 0x1406AB6E8 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x1406ABA28 (ExpWnfDeleteStateData.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406B0AC8 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406B0BDC (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406B0CE0 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbFreeMemoryBlockRegion @ 0x1406B1CA8 (WbFreeMemoryBlockRegion.c)
 *     ExpWnfCreateProcessContext @ 0x1406B3108 (ExpWnfCreateProcessContext.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406B79D4 (ExpWnfDispatchKernelSubscription.c)
 *     NtWaitForKeyedEvent @ 0x1406C37D0 (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x1406C3B10 (NtReleaseKeyedEvent.c)
 *     NtAllocateUuids @ 0x1406C5EE0 (NtAllocateUuids.c)
 *     ExRegisterExtension @ 0x1407273E0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1407275DC (ExRegisterHost.c)
 *     TlgRegisterAggregateProviderEx @ 0x140742FF4 (TlgRegisterAggregateProviderEx.c)
 *     NtSetUuidSeed @ 0x1407586C0 (NtSetUuidSeed.c)
 *     PdcAcquireRwLockExclusive @ 0x14089AEEC (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x1408D6EC0 (ExUnregisterExtension.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1408DB2C0 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfDeleteScopeInstances @ 0x1408DB620 (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x1408DBAF0 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x1408DBC70 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x1408DBEC8 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x1408DCD68 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x1408DCF64 (WheapPredictiveFailureAnalysis.c)
 *     WheaInitialize @ 0x1409AFD68 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x1409D4C50 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbPreWait @ 0x140005930 (KeAbPreWait.c)
 *     RtlBackoff @ 0x140005970 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1400059E4 (ExpOptimizePushLockList.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusiveEx(unsigned __int64 *a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r15
  signed __int64 result; // rax
  bool v9; // cl
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  int i; // eax
  __int16 Object; // [rsp+30h] [rbp-40h] BYREF
  char v17; // [rsp+32h] [rbp-3Eh]
  int v18; // [rsp+34h] [rbp-3Ch]
  _QWORD v19[3]; // [rsp+38h] [rbp-38h] BYREF
  __int16 *p_Object; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+60h] [rbp-10h]
  signed __int32 v23; // [rsp+64h] [rbp-Ch] BYREF
  __int64 v24; // [rsp+68h] [rbp-8h]
  int v25; // [rsp+B0h] [rbp+40h] BYREF

  v25 = 0;
  _m_prefetchw(a1);
  v6 = *a1;
  v7 = (unsigned int)(unsigned __int8)v25 + 3;
  while ( (v6 & 1) != 0 )
  {
    if ( a2 )
      KeAbPreWait(a2);
    v9 = 0;
    v24 = a2;
    v23 = v7;
    v21 = 0LL;
    if ( (v6 & 2) != 0 )
    {
      p_Object = 0LL;
      v22 = -1;
      v19[2] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = (unsigned __int64)&Object | v6 & 8 | 7;
      v9 = (v6 & 4) == 0;
    }
    else
    {
      v10 = 11LL;
      p_Object = &Object;
      v22 = v6 >> 4;
      if ( v22 <= 1 )
        v10 = v7;
      v11 = (unsigned __int64)&Object | v10;
      if ( !(unsigned int)(v6 >> 4) )
        v22 = -2;
    }
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v11, v6);
    v12 = v6 == v13;
    v6 = v13;
    if ( !v12 )
      goto LABEL_13;
    if ( v9 )
      ExpOptimizePushLockList(a1);
    Object = 1;
    v19[1] = v19;
    v19[0] = v19;
    v17 = 6;
    v18 = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      for ( i = ExpSpinCount; i; --i )
      {
        if ( (v23 & 2) == 0 )
          break;
        _mm_pause();
      }
    }
    if ( _interlockedbittestandreset(&v23, 1u) )
      KeWaitForSingleObject(&Object, WrPushLock, 0, 0, 0LL);
LABEL_14:
    if ( a2 )
      a2 = KeAbPreAcquire(a3);
  }
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6 + 1, v6);
  if ( v6 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
LABEL_13:
    RtlBackoff(&v25);
    v6 = *a1;
    _m_prefetchw(a1);
    goto LABEL_14;
  }
  return result;
}
