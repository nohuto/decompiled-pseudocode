/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x140005760
 * Callers:
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1400053F0 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExfAcquirePushLockExclusive @ 0x140005740 (ExfAcquirePushLockExclusive.c)
 *     NtCancelTimer @ 0x14001CF40 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140119050 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExpDeleteTimer @ 0x140127A20 (ExpDeleteTimer.c)
 *     FlushLookUpTableBucket @ 0x140127C48 (FlushLookUpTableBucket.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14012F3D0 (ExfAcquireReleasePushLockExclusive.c)
 *     ExWakeTimersPause @ 0x1401428E0 (ExWakeTimersPause.c)
 *     ExpSaAllocatorFree @ 0x1401672E8 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x1401673B4 (ExpSaPageGroupFreeMemory.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14016765C (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaAllocatorAllocate @ 0x140167908 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140167C28 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167EA0 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExGetWakeTimerList @ 0x14031C820 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14031D550 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x14031DB30 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14031DC70 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x14031E3E0 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14031F7AC (ExpSaPageGroupDescriptorFree.c)
 *     WheaConfigureErrorSource @ 0x140574910 (WheaConfigureErrorSource.c)
 *     WbAddWarbirdEncryptionSegment @ 0x140584C40 (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x140584E04 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x140584EC8 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x140584F8C (WbGetInitializedEncryptionSegment.c)
 *     ExUuidCreate @ 0x1406072C0 (ExUuidCreate.c)
 *     ExpWnfDeleteProcessContext @ 0x140608AA4 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140608CA4 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteScopeById @ 0x140609860 (ExpWnfDeleteScopeById.c)
 *     WbRemoveWarbirdProcess @ 0x140609988 (WbRemoveWarbirdProcess.c)
 *     ExpWnfCreateNameInstance @ 0x14060F058 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14060F5F4 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14060F8D0 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x14061134C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140611794 (ExpWnfUpdateSubscription.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140611B7C (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfWriteStateData @ 0x140611CD0 (ExpWnfWriteStateData.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x1406256D0 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetWarbirdThread @ 0x14062604C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1406265A4 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140691D38 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x140691FFC (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14069272C (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14069283C (WbAddHeapExecutedBlockToLRU.c)
 *     ExpWnfDeleteNameInstance @ 0x1406AC968 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x1406ACCA8 (ExpWnfDeleteStateData.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406B1D48 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406B1E5C (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406B1F60 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbFreeMemoryBlockRegion @ 0x1406B2F28 (WbFreeMemoryBlockRegion.c)
 *     ExpWnfCreateProcessContext @ 0x1406B4388 (ExpWnfCreateProcessContext.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406B8C54 (ExpWnfDispatchKernelSubscription.c)
 *     NtWaitForKeyedEvent @ 0x1406C4A50 (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x1406C4D90 (NtReleaseKeyedEvent.c)
 *     NtAllocateUuids @ 0x1406C7160 (NtAllocateUuids.c)
 *     ExRegisterExtension @ 0x140728660 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14072885C (ExRegisterHost.c)
 *     TlgRegisterAggregateProviderEx @ 0x1407441C4 (TlgRegisterAggregateProviderEx.c)
 *     NtSetUuidSeed @ 0x140759890 (NtSetUuidSeed.c)
 *     PdcAcquireRwLockExclusive @ 0x14089C12C (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x1408D8160 (ExUnregisterExtension.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1408DC560 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfDeleteScopeInstances @ 0x1408DC8C0 (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x1408DCD90 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x1408DCF10 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x1408DD168 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x1408DE008 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x1408DE204 (WheapPredictiveFailureAnalysis.c)
 *     WheaInitialize @ 0x1409B0D68 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x1409D5C50 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbPreWait @ 0x140005930 (KeAbPreWait.c)
 *     RtlBackoff @ 0x140005970 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1400059E4 (ExpOptimizePushLockList.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusiveEx(unsigned __int64 *a1, _RTL_BALANCED_NODE *a2, ULONG_PTR a3)
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
  _RTL_BALANCED_NODE *v24; // [rsp+68h] [rbp-8h]
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
      a2 = (_RTL_BALANCED_NODE *)KeAbPreAcquire(a3, a2);
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
