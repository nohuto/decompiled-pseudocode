/*
 * XREFs of CmpDeleteKeyObject @ 0x140640520
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     CmpWaitForLateUnloadWorker @ 0x140111A18 (CmpWaitForLateUnloadWorker.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     CmpRecordRegistryLockAcquire @ 0x1401B3134 (CmpRecordRegistryLockAcquire.c)
 *     CmpRecordRegistryLockRelease @ 0x1401B3164 (CmpRecordRegistryLockRelease.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1405B2550 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpArmDelayDerefKCBWorker @ 0x14068B2E8 (CmpArmDelayDerefKCBWorker.c)
 *     CmpFlushNotify @ 0x140693968 (CmpFlushNotify.c)
 *     CmpTransDereferenceTransaction @ 0x140695254 (CmpTransDereferenceTransaction.c)
 *     CmpFreePostBlock @ 0x1406961EC (CmpFreePostBlock.c)
 *     CmpFireCleanupNotifications @ 0x1407EC6C4 (CmpFireCleanupNotifications.c)
 *     CmpFreeCallbackObjectContexts @ 0x1407EC744 (CmpFreeCallbackObjectContexts.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x1408009D8 (CmpKeyEnumStackFreeResumeContext.c)
 */

PVOID __fastcall CmpDeleteKeyObject(__int64 a1)
{
  char v2; // r12
  int v3; // eax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rax
  struct _KTHREAD *v7; // rax
  ULONG_PTR v8; // rsi
  char v9; // r9
  unsigned int i; // r8d
  signed __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rbx
  struct _PRIVILEGE_SET *v16; // rcx
  unsigned __int32 v17; // eax
  unsigned __int32 v18; // edx
  char v19; // r15
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // rcx
  PVOID **v25; // rbx
  PVOID *v26; // r9
  struct _WORK_QUEUE_ITEM *v27; // rcx
  struct _KEVENT *v28; // rcx
  struct _KTHREAD *v29; // rcx
  _QWORD v30[2]; // [rsp+40h] [rbp-69h] BYREF
  _SLIST_ENTRY v31; // [rsp+50h] [rbp-59h] BYREF
  _QWORD *v32; // [rsp+60h] [rbp-49h]
  __int64 v33; // [rsp+68h] [rbp-41h]
  _QWORD v34[7]; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v35[4]; // [rsp+A8h] [rbp-1h] BYREF
  PVOID v36[3]; // [rsp+C8h] [rbp+1Fh] BYREF

  memset(v35, 0, sizeof(v35));
  v2 = 0;
  CmpInitializeThreadInfo(v36);
  v31.Next = &v31;
  v3 = *(_DWORD *)(a1 + 48);
  *((_QWORD *)&v31.Next + 1) = &v31;
  if ( (v3 & 4) != 0 )
    return CmCleanupThreadInfo(v36);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !CmpIsRegistryLockAcquired() )
    {
      v35[0] = a1;
      CmpCallCallBacksEx(0xEu, (__int64)v35, 0LL, 1, 0x19u, a1, &v31);
      if ( *(_DWORD *)a1 == 1803104306 && *(_QWORD *)(a1 + 72) != a1 + 72 )
      {
        CmpFireCleanupNotifications(a1);
        CmpFreeCallbackObjectContexts(a1);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 56) )
    CmpTransDereferenceTransaction(*(_QWORD *)(a1 + 56));
  v30[1] = v30;
  v6 = v30;
  v30[0] = v30;
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    CmpRecordRegistryLockAcquire();
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
    v6 = (_QWORD *)v30[0];
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)a1 == 1803104306 )
  {
    if ( v8 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        CmpLockKcbExclusive(v8);
        CmpFlushNotify(a1, 0LL, v30);
        CmpUnlockKcb(v8);
      }
      v9 = 0;
LABEL_17:
      for ( i = 0; i < 4; ++i )
      {
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8LL * i + 128), 0LL, a1);
        if ( a1 == v11 )
          goto LABEL_28;
        if ( (unsigned __int64)(v11 - 1) <= 1 )
        {
          CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
          v9 = 1;
          goto LABEL_17;
        }
      }
      if ( !v9 )
      {
        v12 = *(_QWORD *)(a1 + 8);
        ExAcquirePushLockExclusiveEx(v12 + 40, 0LL);
        v9 = 1;
        *(_QWORD *)(v12 + 48) = KeGetCurrentThread();
      }
      v13 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(v13 + 8) != a1 + 32 )
        goto LABEL_67;
      v14 = *(_QWORD **)(a1 + 40);
      if ( *v14 != a1 + 32 )
        goto LABEL_67;
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
LABEL_28:
      if ( v9 )
        CmpUnlockKcb(*(_QWORD *)(a1 + 8));
      v15 = *(_QWORD *)(v8 + 24);
      if ( *(_BYTE *)(v15 + 2936) == 1 )
      {
        v2 = 1;
        *(_DWORD *)(v15 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 4292), 1u) & 0x7F) + 4296) = 16;
      }
      v16 = *(struct _PRIVILEGE_SET **)(a1 + 88);
      if ( v16 )
        CmpKeyEnumStackFreeResumeContext(v16);
      if ( ((*(_DWORD *)(v8 + 176) & 0x40000) == 0 || *(_DWORD *)v8 != 1) && (*(_DWORD *)(v8 + 4) & 0x20) == 0 )
      {
        v17 = *(_DWORD *)v8;
        if ( *(_DWORD *)v8 > 1u )
        {
          do
          {
            v18 = v17;
            v17 = _InterlockedCompareExchange((volatile signed __int32 *)v8, v17 - 1, v17);
            if ( v17 == v18 )
              goto LABEL_50;
          }
          while ( v17 > 1 );
        }
        v19 = 0;
        ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
        v20 = (_QWORD *)(v8 + 216);
        if ( (_QWORD *)*v20 != v20 )
          KeBugCheckEx(0x51u, 0x34uLL, v8, 1uLL, 0LL);
        *(_BYTE *)(v8 + 56) |= 1u;
        v21 = (_QWORD *)qword_140438F98;
        if ( *(__int64 **)qword_140438F98 == &CmpDelayDerefKCBListHead )
        {
          v22 = CmpDelayDerefKCBWorkItemActive == 0;
          *v20 = &CmpDelayDerefKCBListHead;
          *(_QWORD *)(v8 + 224) = v21;
          *v21 = v20;
          qword_140438F98 = v8 + 216;
          if ( v22 )
          {
            CmpDelayDerefKCBWorkItemActive = 1;
            v19 = 1;
          }
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
          if ( v19 )
            CmpArmDelayDerefKCBWorker();
          goto LABEL_50;
        }
LABEL_67:
        __fastfail(3u);
      }
LABEL_49:
      CmpDereferenceKeyControlBlock(v8);
LABEL_50:
      if ( v2 == 1 )
      {
        *(_DWORD *)(v15 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 4292), 1u) & 0x7F) + 4296) = 18;
        CmpDoQueueLateUnloadWorker(v15);
      }
      v6 = (_QWORD *)v30[0];
    }
  }
  else if ( v8 )
  {
    v15 = *(_QWORD *)(v8 + 24);
    if ( *(_BYTE *)(v15 + 2936) == 1 )
    {
      v2 = 1;
      *(_DWORD *)(v15 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 4292), 1u) & 0x7F) + 4296) = 17;
    }
    goto LABEL_49;
  }
  if ( CmpPuntBoot )
    goto LABEL_56;
  CmpRecordRegistryLockRelease();
  ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
  KeLeaveCriticalRegion();
  LOBYTE(v23) = 1;
  PsBoostThreadIo((__int64)KeGetCurrentThread(), v23);
  while ( 1 )
  {
    v6 = (_QWORD *)v30[0];
LABEL_56:
    if ( v6 == v30 )
      break;
    if ( (_QWORD *)v6[1] != v30 )
      goto LABEL_67;
    v24 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 )
      goto LABEL_67;
    v30[0] = *v6;
    v25 = (PVOID **)(v6 - 2);
    *(_QWORD *)(v24 + 8) = v30;
    v26 = (PVOID *)v6[6];
    if ( (unsigned __int16)*((_DWORD *)v6 + 10) != 3 )
    {
      v28 = (struct _KEVENT *)*v26;
LABEL_65:
      KeSetEvent(v28, 0, 0);
      ObfDereferenceObject(*v25[8]);
      goto LABEL_66;
    }
    v27 = (struct _WORK_QUEUE_ITEM *)v26[1];
    if ( v27 )
    {
      ExQueueWorkItem(v27, *((WORK_QUEUE_TYPE *)v26 + 4));
      v26 = v25[8];
    }
    v28 = (struct _KEVENT *)*v26;
    if ( *v26 )
      goto LABEL_65;
LABEL_66:
    CmpFreePostBlock(v25);
  }
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && v31.Next != &v31 )
  {
    v34[0] = 0LL;
    v34[2] = v35;
    v34[1] = 0LL;
    v32 = v34;
    memset(&v34[3], 0, 32);
    v33 = 0LL;
    CmpCallCallBacksEx(0x19u, (__int64)v34, 0LL, 0, 0x19u, 0LL, &v31);
  }
  if ( v2 && *(char *)(a1 - 21) < 0 )
    CmpWaitForLateUnloadWorker();
  v29 = KeGetCurrentThread();
  v22 = v29->KernelApcDisable++ == -1;
  if ( v22
    && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
    && !v29->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v29);
  }
  return CmCleanupThreadInfo(v36);
}
