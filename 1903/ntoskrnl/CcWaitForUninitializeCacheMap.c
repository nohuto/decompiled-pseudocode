/*
 * XREFs of CcWaitForUninitializeCacheMap @ 0x14012276C
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405D6AD0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14007A340 (CcGetPartition.c)
 *     CcWriteBehind @ 0x14007D79C (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x14007E068 (CcFreeWorkQueueEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcWaitForUninitializeCacheMap(__int64 a1)
{
  char v2; // r15
  unsigned __int64 v3; // rsi
  __int64 Partition; // r13
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // ecx
  int v9; // eax
  unsigned __int8 OldIrql; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // di
  struct _KPRCB *v19; // rcx
  unsigned __int8 v20; // di
  struct _KPRCB *v21; // rcx
  struct _KLOCK_QUEUE_HANDLE v22; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-A0h] BYREF
  __int16 Object; // [rsp+50h] [rbp-98h] BYREF
  char v25; // [rsp+52h] [rbp-96h]
  char v26; // [rsp+53h] [rbp-95h]
  int v27; // [rsp+54h] [rbp-94h]
  _QWORD v28[2]; // [rsp+58h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+68h] [rbp-80h] BYREF
  __int64 v30; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-58h] BYREF
  char v33; // [rsp+F0h] [rbp+8h]
  LARGE_INTEGER Timeout; // [rsp+F8h] [rbp+10h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp+18h]

  v23 = 0LL;
  v26 = 0;
  v33 = 0;
  Timeout.QuadPart = 0LL;
  v2 = 0;
  v3 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v22, 0, sizeof(v22));
  memset(&v29, 0, sizeof(v29));
  Partition = 0LL;
  v5 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
  {
    Object = 0;
    v25 = 6;
    v27 = 0;
    v28[1] = v28;
    v28[0] = v28;
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 )
    {
      Partition = CcGetPartition(*(_QWORD **)(v6 + 8));
      v22.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
      v22.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&v22, (volatile __int64 *)(Partition + 128));
      v5 = 1;
      if ( *(_QWORD *)(v7 + 224) == v7 + 224 )
      {
        v8 = *(_DWORD *)(v7 + 152);
        if ( (v8 & 0x100) == 0 )
        {
          v33 = 1;
          *(_DWORD *)(v7 + 152) = v8 | 0x10000;
          v23 = *(_QWORD *)(v7 + 272);
          *(_QWORD *)(v7 + 272) = (char *)&v23 + 1;
          v9 = *(_DWORD *)(v7 + 152);
          if ( (v9 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v7 + 496) )
            {
              v29.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 192);
              v29.LockQueue.Next = 0LL;
              KxAcquireQueuedSpinLock((__int64)&v29, (volatile __int64 *)(Partition + 192));
              v11 = *(_QWORD *)(v7 + 496);
              if ( v11 )
              {
                v3 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
                v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
                v13 = *(_QWORD **)((v11 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
                if ( *(_QWORD *)(v12 + 8) != v3 || *v13 != v3 )
                  __fastfail(3u);
                *v13 = v12;
                *(_QWORD *)(v12 + 8) = v13;
                *(_QWORD *)(v3 + 8) = 0LL;
                *(_QWORD *)v3 = 0LL;
                *(_QWORD *)(v7 + 496) = 0LL;
                v2 = 1;
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v29);
            }
          }
          else
          {
            *(_DWORD *)(v7 + 152) = v9 | 0x20;
            v2 = 1;
          }
        }
      }
    }
    if ( v5 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v22);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    if ( v2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v31 = v3;
      CcWriteBehind(v7, (__int64)&v30);
      KeLeaveCriticalRegion();
    }
    if ( v3 )
      CcFreeWorkQueueEntry((PSLIST_ENTRY)v3);
    if ( v33 )
    {
      Timeout.QuadPart = -6000000000LL;
      if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v22);
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v15 )
        {
          v16 = (_QWORD *)(v15 + 272);
          v17 = *(_QWORD *)(v15 + 272);
          if ( v17 )
          {
            while ( (__int64 *)v17 != (__int64 *)((char *)&v23 + 1) )
            {
              v16 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFEuLL);
              v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( !v17 )
                goto LABEL_35;
            }
            *v16 = v23;
          }
LABEL_35:
          *(_DWORD *)(v15 + 152) &= ~0x10000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v22);
          v18 = v22.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22.OldIrql < 2u )
          {
            v19 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v19);
          }
          __writecr8(v18);
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v22);
          v20 = v22.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22.OldIrql < 2u )
          {
            v21 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v21);
          }
          __writecr8(v20);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
}
