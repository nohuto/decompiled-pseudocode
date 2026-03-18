/*
 * XREFs of CcQueueLazyWriteScanThread @ 0x14018DB90
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14007A204 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     CcDereferencePartition @ 0x14007E4D4 (CcDereferencePartition.c)
 *     CcAllocateWorkQueueEntry @ 0x14007E504 (CcAllocateWorkQueueEntry.c)
 *     CcPostWorkQueue @ 0x14007FA14 (CcPostWorkQueue.c)
 *     CcSetLazyWriteScanQueued @ 0x140131870 (CcSetLazyWriteScanQueued.c)
 *     CcNotifyExternalCaches @ 0x14016F70C (CcNotifyExternalCaches.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcQueueLazyWriteScanThread(_QWORD *StartContext)
{
  char *v1; // r12
  unsigned int v2; // edi
  char v4; // r15
  char v5; // si
  NTSTATUS v6; // eax
  int v7; // eax
  int v8; // eax
  signed __int64 v9; // rax
  unsigned __int64 i; // rcx
  signed __int64 v11; // rtt
  unsigned __int8 v12; // si
  __int64 v13; // r8
  __int64 v14; // r9
  PSLIST_ENTRY v15; // rcx
  __int64 v16; // rdx
  char v17; // al
  int v18; // eax
  int v19; // eax
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-C0h] BYREF
  PSLIST_ENTRY v24; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object[6]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+90h] [rbp-70h] BYREF

  v1 = (char *)(StartContext + 117);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  v4 = 0;
  Object[5] = StartContext + 117;
  Object[0] = StartContext + 42;
  Object[1] = StartContext + 45;
  Object[2] = StartContext + 48;
  Object[3] = StartContext + 51;
  Object[4] = StartContext + 54;
LABEL_2:
  v5 = 0;
  if ( v4 )
    CcDereferencePartition((__int64)StartContext);
  v6 = KeWaitForMultipleObjects(6u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  if ( !v6 )
  {
    v2 = 1;
    v5 = 1;
    goto LABEL_42;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      v2 = 4;
      goto LABEL_8;
    }
    v18 = v8 - 1;
    if ( !v18 )
    {
      v2 = 8;
      goto LABEL_25;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v2 = 16;
      goto LABEL_25;
    }
    if ( v19 == 1 )
      return;
LABEL_42:
    if ( !v2 )
      return;
    goto LABEL_8;
  }
  v2 = 2;
LABEL_25:
  v5 = 1;
LABEL_8:
  _m_prefetchw(StartContext + 113);
  v9 = StartContext[113];
  for ( i = v9 + 1; i > 1; i = v9 + 1 )
  {
    v11 = v9;
    v9 = _InterlockedCompareExchange64(StartContext + 113, i, v9);
    if ( v11 == v9 )
    {
      v4 = 1;
      if ( CcNumberOfExternalCaches
        && (__int64 *)CcExternalCacheList != &CcExternalCacheList
        && StartContext == *((_QWORD **)PspSystemPartition + 1) )
      {
        CcNotifyExternalCaches(v2);
      }
      CcAdjustWriteBehindThreadPoolIfNeeded((__int64)StartContext, v5);
      KeAcquireInStackQueuedSpinLock(StartContext + 16, &LockHandle);
      if ( v2 <= 2 )
        goto LABEL_28;
      if ( v2 == 4 )
      {
        if ( !*((_BYTE *)StartContext + 595) && !*((_BYTE *)StartContext + 594) )
          goto LABEL_16;
LABEL_46:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(OldIrql);
        goto LABEL_2;
      }
      if ( v2 == 8 )
      {
        v17 = *((_BYTE *)StartContext + 594);
      }
      else
      {
LABEL_28:
        if ( !*((_BYTE *)StartContext + 596) && !*((_BYTE *)StartContext + 597) && !*((_BYTE *)StartContext + 598) )
        {
LABEL_16:
          CcSetLazyWriteScanQueued(StartContext, v2, 1);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v12 = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            v22 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v22);
          }
          __writecr8(v12);
          if ( (int)CcAllocateWorkQueueEntry((__int64)StartContext, &v24) >= 0 )
          {
            v15 = v24;
            v16 = 28LL;
            *((_BYTE *)&v24[7].Next + 8) = 3;
            if ( v2 != 8 )
              v16 = 32LL;
            LODWORD(v15[1].Next) = v2;
            CcPostWorkQueue((__int64)v15, (__int64)&StartContext[v16], v13, v14);
            goto LABEL_2;
          }
          ++CcDbgNumberOfFailedWorkQueueEntryAllocations;
          KeAcquireInStackQueuedSpinLock(StartContext + 16, &LockHandle);
          *((_BYTE *)StartContext + 592) = 0;
          CcSetLazyWriteScanQueued(StartContext, v2, 0);
          goto LABEL_46;
        }
        v17 = 1;
      }
      if ( !v17 )
        goto LABEL_16;
      goto LABEL_46;
    }
  }
  if ( i != 1 )
    __fastfail(0xEu);
  KeWaitForSingleObject(v1, Executive, 0, 0, 0LL);
}
