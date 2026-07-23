/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x14009C760
 * Callers:
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x14003E7D0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     InsertEventEntryInLookUpTable @ 0x14008A8AC (InsertEventEntryInLookUpTable.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14009B6D0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExfAcquirePushLockShared @ 0x14009C740 (ExfAcquirePushLockShared.c)
 *     ExpSaAllocatorAllocate @ 0x14016D53C (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x14016E380 (ExpSaAllocatorFree.c)
 *     WheaConfigureErrorSource @ 0x1405A2F50 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1405AEF80 (WheaUnconfigureErrorSource.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405B390C (WbGetWarbirdEncryptionSegment.c)
 *     WbGetHeapExecutedBlock @ 0x1405CA3C8 (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x1405CA698 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1405CAA80 (WbGetWarbirdProcess.c)
 *     ExpWnfNotifySubscription @ 0x14063EFD4 (ExpWnfNotifySubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14063F334 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140640828 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140640B14 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140641174 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfLookupNameInstance @ 0x1406421B8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406422B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x1406428CC (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140642AC4 (ExpWnfSubscribeNameInstance.c)
 *     WbRemoveWarbirdProcess @ 0x140671CFC (WbRemoveWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x1406AEBF8 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1406AEEDC (WbAllocateSlots.c)
 *     sub_1406D5628 @ 0x1406D5628 (sub_1406D5628.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406E4624 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1406E8DE4 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406EBF60 (ExpWnfEnumerateScopeInstances.c)
 *     ExRegisterExtension @ 0x140758600 (ExRegisterExtension.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x14009CBA0 (KeAbPreWait.c)
 *     RtlBackoff @ 0x14009CBE0 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x14009CC64 (ExpOptimizePushLockList.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(unsigned __int64 *a1, _RTL_BALANCED_NODE *a2, ULONG_PTR a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  signed __int64 v8; // rcx
  signed __int64 result; // rax
  bool v10; // cl
  char *v11; // rdx
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
  while ( 1 )
  {
    v7 = (v6 >> 1) & 1;
    if ( (v6 & 1) == 0 || !v7 && (v6 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      break;
    if ( a2 )
      KeAbPreWait(a2);
    v10 = 0;
    Object[7] = a2;
    HIDWORD(Object[6]) = 2;
    Object[5] = 0LL;
    if ( v7 )
    {
      Object[4] = 0LL;
      LODWORD(Object[6]) = -1;
      Object[3] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = (char *)((unsigned __int64)Object | v6 & 8 | 7);
      v10 = (v6 & 4) == 0;
    }
    else
    {
      LODWORD(Object[6]) = -2;
      Object[4] = Object;
      v11 = (char *)Object + 3;
    }
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, (signed __int64)v11, v6);
    v12 = v6 == v13;
    v6 = v13;
    if ( !v12 )
      goto LABEL_14;
    if ( v10 )
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
LABEL_15:
    if ( a2 )
      a2 = KeAbPreAcquire(a3, a2, 0);
  }
  v8 = (v6 | 1) + 16;
  if ( v7 )
    v8 = v6 | 1;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v8, v6);
  if ( v6 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
LABEL_14:
    RtlBackoff(&v21);
    v6 = *a1;
    _m_prefetchw(a1);
    goto LABEL_15;
  }
  return result;
}
