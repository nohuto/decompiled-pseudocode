/*
 * XREFs of CmpDeleteKeyObject @ 0x140603C70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     CmpInitializeDelayDerefContext @ 0x140044154 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     CmpWaitForLateUnloadWorker @ 0x1400F8894 (CmpWaitForLateUnloadWorker.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     CmPostCallbackNotification @ 0x14060072C (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1406007F8 (CmpCallCallBacks.c)
 *     CmpSignalDeferredPosts @ 0x140603EF0 (CmpSignalDeferredPosts.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     DelistKeyBodyFromKCB @ 0x140604420 (DelistKeyBodyFromKCB.c)
 *     CmpTransDereferenceTransaction @ 0x140636BA0 (CmpTransDereferenceTransaction.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14063866C (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockKcbExclusive @ 0x140661A18 (CmpLockKcbExclusive.c)
 *     CmpFlushNotify @ 0x1406B9FEC (CmpFlushNotify.c)
 *     CmpFireCleanupNotifications @ 0x1408256EC (CmpFireCleanupNotifications.c)
 *     CmpFreeCallbackObjectContexts @ 0x14082576C (CmpFreeCallbackObjectContexts.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x1408381C8 (CmpKeyEnumStackFreeResumeContext.c)
 */

void __fastcall CmpDeleteKeyObject(__int64 a1)
{
  char v2; // bp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r8
  ULONG_PTR v5; // rdi
  __int64 v6; // rsi
  struct _PRIVILEGE_SET *v7; // rcx
  _QWORD v8[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD *v10[2]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v11[5]; // [rsp+60h] [rbp-28h] BYREF

  v2 = 0;
  memset(v11, 0, 0x20uLL);
  v10[0] = 0LL;
  v10[1] = 0LL;
  v9[1] = v9;
  v9[0] = v9;
  CmpInitializeDelayDerefContext(v10);
  if ( (*(_DWORD *)(a1 + 48) & 4) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount )
    {
      if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        v11[0] = a1;
        CmpCallCallBacks(0xEu, (__int64)v11, v4, 0x19u, a1, (__int64)v9);
        if ( *(_DWORD *)a1 == 1803104306 && *(_QWORD *)(a1 + 72) != a1 + 72 )
        {
          CmpFireCleanupNotifications(a1);
          CmpFreeCallbackObjectContexts(a1);
        }
      }
    }
    if ( *(_QWORD *)(a1 + 56) )
      CmpTransDereferenceTransaction(*(_QWORD *)(a1 + 56));
    v8[1] = v8;
    v8[0] = v8;
    CmpLockRegistry();
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 )
    {
      if ( *(_DWORD *)a1 == 1803104306 )
      {
        if ( *(_QWORD *)(a1 + 16) )
        {
          CmpLockKcbExclusive(v5);
          CmpFlushNotify(a1, 0LL, v8);
          CmpUnlockKcb(v5);
        }
        DelistKeyBodyFromKCB(a1, 0LL);
        v6 = *(_QWORD *)(v5 + 32);
        if ( *(_BYTE *)(v6 + 2936) == 1 )
        {
          v2 = 1;
          *(_DWORD *)(v6 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4276), 1u) & 0x7F) + 4280) = 16;
        }
        v7 = *(struct _PRIVILEGE_SET **)(a1 + 88);
        if ( v7 )
        {
          CmpKeyEnumStackFreeResumeContext(v7);
          CmpDrainDelayDerefContext(v10);
        }
      }
      else
      {
        v6 = *(_QWORD *)(v5 + 32);
        if ( *(_BYTE *)(v6 + 2936) == 1 )
        {
          v2 = 1;
          *(_DWORD *)(v6 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4276), 1u) & 0x7F) + 4280) = 17;
        }
      }
      CmpDereferenceKeyControlBlock(v5);
      if ( v2 == 1 )
      {
        *(_DWORD *)(v6 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4276), 1u) & 0x7F) + 4280) = 18;
        CmpDoQueueLateUnloadWorker(v6);
      }
    }
    CmpUnlockRegistry();
    CmpSignalDeferredPosts(v8);
    CmPostCallbackNotification(0x19u, 0LL, 0, (__int64)v11, v9);
    if ( v2 )
    {
      if ( *(char *)(a1 - 21) < 0 )
        CmpWaitForLateUnloadWorker();
    }
    KeLeaveCriticalRegion();
  }
}
