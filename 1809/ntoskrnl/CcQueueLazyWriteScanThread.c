/*
 * XREFs of CcQueueLazyWriteScanThread @ 0x140183980
 * Callers:
 *     <none>
 * Callees:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140023880 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     CcDereferencePartition @ 0x14007C988 (CcDereferencePartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcPostWorkQueue @ 0x1400D6078 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x1400D63AC (CcAllocateWorkQueueEntry.c)
 *     CcSetLazyWriteScanQueued @ 0x1400D74F0 (CcSetLazyWriteScanQueued.c)
 *     CcNotifyExternalCaches @ 0x140166F3C (CcNotifyExternalCaches.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcQueueLazyWriteScanThread(_QWORD *StartContext)
{
  unsigned int v1; // edi
  char *v2; // r12
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
  unsigned __int8 OldIrql; // si
  int v19; // eax
  int v20; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-C0h] BYREF
  PSLIST_ENTRY v24; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object[6]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+90h] [rbp-70h] BYREF

  v1 = 0;
  Object[0] = StartContext + 42;
  v2 = (char *)(StartContext + 117);
  Object[5] = StartContext + 117;
  Object[1] = StartContext + 45;
  v4 = 0;
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
    v1 = 1;
    v5 = 1;
    goto LABEL_42;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      v1 = 4;
      goto LABEL_8;
    }
    v19 = v8 - 1;
    if ( !v19 )
    {
      v1 = 8;
      goto LABEL_25;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v1 = 16;
      goto LABEL_25;
    }
    if ( v20 == 1 )
      return;
LABEL_42:
    if ( !v1 )
      return;
    goto LABEL_8;
  }
  v1 = 2;
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
        CcNotifyExternalCaches(v1);
      }
      CcAdjustWriteBehindThreadPoolIfNeeded((__int64)StartContext, v5);
      KeAcquireInStackQueuedSpinLock(StartContext + 16, &LockHandle);
      if ( v1 <= 2 )
        goto LABEL_28;
      if ( v1 == 4 )
      {
        if ( !*((_BYTE *)StartContext + 595) && !*((_BYTE *)StartContext + 594) )
          goto LABEL_16;
LABEL_33:
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
      if ( v1 == 8 )
      {
        v17 = *((_BYTE *)StartContext + 594);
      }
      else
      {
LABEL_28:
        if ( !*((_BYTE *)StartContext + 596) && !*((_BYTE *)StartContext + 597) && !*((_BYTE *)StartContext + 598) )
        {
LABEL_16:
          CcSetLazyWriteScanQueued(StartContext, v1, 1);
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
            if ( v1 != 8 )
              v16 = 32LL;
            LODWORD(v15[1].Next) = v1;
            CcPostWorkQueue((__int64)v15, (__int64)&StartContext[v16], v13, v14);
            goto LABEL_2;
          }
          ++CcDbgNumberOfFailedWorkQueueEntryAllocations;
          KeAcquireInStackQueuedSpinLock(StartContext + 16, &LockHandle);
          *((_BYTE *)StartContext + 592) = 0;
          CcSetLazyWriteScanQueued(StartContext, v1, 0);
          goto LABEL_33;
        }
        v17 = 1;
      }
      if ( !v17 )
        goto LABEL_16;
      goto LABEL_33;
    }
  }
  if ( i != 1 )
    __fastfail(0xEu);
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
}
