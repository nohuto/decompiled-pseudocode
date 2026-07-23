/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x1400EF920
 * Callers:
 *     NtCancelTimer @ 0x140007B10 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExpDeleteTimer @ 0x1400E2CF0 (ExpDeleteTimer.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1400EF590 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExfAcquirePushLockExclusive @ 0x1400EF900 (ExfAcquirePushLockExclusive.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140108CE8 (ExfAcquireReleasePushLockExclusive.c)
 *     FlushLookUpTableBucket @ 0x140112EBC (FlushLookUpTableBucket.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1401175E0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExWakeTimersPause @ 0x14015E2BC (ExWakeTimersPause.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14016DA88 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaAllocatorAllocate @ 0x14016DC2C (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14016E0C4 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016E474 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x14016EA70 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14016EE64 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14016F268 (ExpSaPageGroupDescriptorFree.c)
 *     ExGetWakeTimerList @ 0x14033B030 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14033C050 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x14033CC30 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14033D060 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x14033DAD0 (ExpSvmDereferenceDevice.c)
 *     WheaConfigureErrorSource @ 0x1405A2F30 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1405AEF60 (WheaUnconfigureErrorSource.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405B3808 (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1405B39C8 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405B3A98 (WbReEncryptEncryptionSegment.c)
 *     sub_1405B3B68 @ 0x1405B3B68 (sub_1405B3B68.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x1405CA3AC (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetWarbirdThread @ 0x1405CAB98 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1405CAF80 (WbGetWarbirdProcess.c)
 *     ExpWnfDeleteProcessContext @ 0x140652140 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140652374 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteScopeById @ 0x1406528F8 (ExpWnfDeleteScopeById.c)
 *     WbRemoveWarbirdProcess @ 0x140652B2C (WbRemoveWarbirdProcess.c)
 *     ExpWnfDeleteNameInstance @ 0x140652F64 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x14065330C (ExpWnfDeleteStateData.c)
 *     ExpWnfCreateNameInstance @ 0x140653EBC (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140654378 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140654664 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfWriteStateData @ 0x14065491C (ExpWnfWriteStateData.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140654E44 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfResolveScopeInstance @ 0x140655E08 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x140656614 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140656A40 (ExpWnfUpdateSubscription.c)
 *     ExUuidCreate @ 0x140689DE0 (ExUuidCreate.c)
 *     WbAllocateUserMemory @ 0x1406B0B28 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1406B0E0C (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406B1090 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1406B11A0 (WbAddHeapExecutedBlockToLRU.c)
 *     NtWaitForKeyedEvent @ 0x1406B5CD0 (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x1406B5F40 (NtReleaseKeyedEvent.c)
 *     WbFreeMemoryBlockRegion @ 0x1406D4E10 (WbFreeMemoryBlockRegion.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406D5414 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406D5528 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406D563C (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     ExpWnfCreateProcessContext @ 0x1406D5C88 (ExpWnfCreateProcessContext.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406D9954 (ExpWnfDispatchKernelSubscription.c)
 *     NtAllocateUuids @ 0x1406E6EF0 (NtAllocateUuids.c)
 *     TlgRegisterAggregateProviderEx @ 0x14074F5A0 (TlgRegisterAggregateProviderEx.c)
 *     ExRegisterExtension @ 0x14075CE90 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14075D0B4 (ExRegisterHost.c)
 *     NtSetUuidSeed @ 0x140780C20 (NtSetUuidSeed.c)
 *     PdcAcquireRwLockExclusive @ 0x1408D925C (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x140913B90 (ExUnregisterExtension.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140918AB0 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfDeleteScopeInstances @ 0x140918E1C (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140919700 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140919880 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x140919B34 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x14091AA04 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x14091AB7C (WheapPredictiveFailureAnalysis.c)
 *     WheaInitialize @ 0x140A03340 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A164A4 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x1400EFB30 (KeAbPreWait.c)
 *     RtlBackoff @ 0x1400EFB70 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1400EFBF4 (ExpOptimizePushLockList.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusiveEx(unsigned __int64 *a1, _RTL_BALANCED_NODE *a2, ULONG_PTR a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // r13
  signed __int64 result; // rax
  bool v9; // cl
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  int i; // ecx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD Object[8]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+B0h] [rbp+40h] BYREF

  memset(Object, 0, sizeof(Object));
  v21 = 0;
  _m_prefetchw(a1);
  v6 = *a1;
  v7 = (unsigned int)(unsigned __int8)v21 + 3;
  while ( (v6 & 1) != 0 )
  {
    if ( a2 )
      KeAbPreWait(a2);
    v9 = 0;
    Object[7] = a2;
    HIDWORD(Object[6]) = v7;
    Object[5] = 0LL;
    if ( (v6 & 2) != 0 )
    {
      Object[4] = 0LL;
      LODWORD(Object[6]) = -1;
      Object[3] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = (unsigned __int64)Object | v6 & 8 | 7;
      v9 = (v6 & 4) == 0;
    }
    else
    {
      v10 = 11LL;
      Object[4] = Object;
      LODWORD(Object[6]) = v6 >> 4;
      if ( SLODWORD(Object[6]) <= 1 )
        v10 = v7;
      v11 = (unsigned __int64)Object | v10;
      if ( !(unsigned int)(v6 >> 4) )
        LODWORD(Object[6]) = -2;
    }
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v11, v6);
    v12 = v6 == v13;
    v6 = v13;
    if ( !v12 )
      goto LABEL_13;
    if ( v9 )
      ExpOptimizePushLockList(a1);
    Object[2] = &Object[1];
    Object[1] = &Object[1];
    LOWORD(Object[0]) = 1;
    BYTE2(Object[0]) = 6;
    HIDWORD(Object[0]) = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      if ( MEMORY[0xFFFFF78000000297] )
      {
        v16 = __rdtsc();
        v17 = v16 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          __asm { monitorx rax, rcx, rdx }
          if ( (Object[6] & 0x200000000LL) == 0 )
            break;
          v18 = v16;
          v19 = __rdtsc();
          v16 = v19;
          if ( v19 <= v18 || v19 >= v17 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0;
              (Object[6] & 0x200000000LL) != 0 && i != ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6];
              ++i )
        {
          _mm_pause();
        }
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Object[6] + 1, 1u) )
      KeWaitForSingleObject(Object, WrPushLock, 0, 0, 0LL);
LABEL_14:
    if ( a2 )
      a2 = KeAbPreAcquire(a3, a2, 0);
  }
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6 + 1, v6);
  if ( v6 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
LABEL_13:
    RtlBackoff(&v21);
    v6 = *a1;
    _m_prefetchw(a1);
    goto LABEL_14;
  }
  return result;
}
