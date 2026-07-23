/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x140005550
 * Callers:
 *     ExAcquireAutoExpandPushLockShared @ 0x1400050F0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExfAcquirePushLockShared @ 0x140005530 (ExfAcquirePushLockShared.c)
 *     InsertEventEntryInLookUpTable @ 0x140012AF4 (InsertEventEntryInLookUpTable.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x14004E6D0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExpSaAllocatorFree @ 0x1401672E8 (ExpSaAllocatorFree.c)
 *     ExpSaAllocatorAllocate @ 0x140167908 (ExpSaAllocatorAllocate.c)
 *     WheaConfigureErrorSource @ 0x140574910 (WheaConfigureErrorSource.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14058510C (WbGetWarbirdEncryptionSegment.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140607C70 (ExpWnfAcquireSubscriptionByName.c)
 *     WbRemoveWarbirdProcess @ 0x140609988 (WbRemoveWarbirdProcess.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14060F5F4 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14060F8D0 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfLookupNameInstance @ 0x1406108E0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x140610FDC (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x14061134C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406119F8 (ExpWnfNotifyNameSubscribers.c)
 *     WbGetHeapExecutedBlock @ 0x14062592C (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x14062604C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1406265A4 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140691D38 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x140691FFC (WbAllocateSlots.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ACD38 (ExpWnfEnumerateScopeInstances.c)
 *     WbFreeUserMemory @ 0x1406B2E3C (WbFreeUserMemory.c)
 *     ExpWnfNotifySubscription @ 0x1406B8AA8 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406B8C54 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1406C95C4 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExRegisterExtension @ 0x140728660 (ExRegisterExtension.c)
 * Callees:
 *     KeAbPreWait @ 0x140005930 (KeAbPreWait.c)
 *     RtlBackoff @ 0x140005970 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1400059E4 (ExpOptimizePushLockList.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(unsigned __int64 *a1, _RTL_BALANCED_NODE *a2, ULONG_PTR a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  signed __int64 v8; // rcx
  signed __int64 result; // rax
  bool v10; // cl
  _BYTE *v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  int i; // eax
  __int16 Object; // [rsp+30h] [rbp-40h] BYREF
  char v17; // [rsp+32h] [rbp-3Eh]
  _BYTE v18[5]; // [rsp+33h] [rbp-3Dh] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-38h] BYREF
  __int16 *p_Object; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+60h] [rbp-10h]
  signed __int32 v23; // [rsp+64h] [rbp-Ch] BYREF
  _RTL_BALANCED_NODE *v24; // [rsp+68h] [rbp-8h]
  int v25; // [rsp+A0h] [rbp+30h] BYREF

  v25 = 0;
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
    v24 = a2;
    v23 = 2;
    v21 = 0LL;
    if ( v7 )
    {
      p_Object = 0LL;
      v22 = -1;
      v19[2] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = (_BYTE *)((unsigned __int64)&Object | v6 & 8 | 7);
      v10 = (v6 & 4) == 0;
    }
    else
    {
      v22 = -2;
      p_Object = &Object;
      v11 = v18;
    }
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, (signed __int64)v11, v6);
    v12 = v6 == v13;
    v6 = v13;
    if ( !v12 )
      goto LABEL_14;
    if ( v10 )
      ExpOptimizePushLockList(a1);
    Object = 1;
    v19[1] = v19;
    v19[0] = v19;
    v17 = 6;
    *(_DWORD *)&v18[1] = 0;
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
LABEL_15:
    if ( a2 )
      a2 = (_RTL_BALANCED_NODE *)KeAbPreAcquire(a3, a2);
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
    RtlBackoff(&v25);
    v6 = *a1;
    _m_prefetchw(a1);
    goto LABEL_15;
  }
  return result;
}
