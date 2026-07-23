/*
 * XREFs of CcWaitForUninitializeCacheMap @ 0x14001B334
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405DF390 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcFreeWorkQueueEntry @ 0x14007EDE0 (CcFreeWorkQueueEntry.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcWriteBehind @ 0x1400D621C (CcWriteBehind.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcWaitForUninitializeCacheMap(__int64 a1)
{
  char v2; // r15
  unsigned __int64 v3; // rsi
  __int64 Partition; // r13
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int8 OldIrql; // r14
  int v10; // ecx
  int v11; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int8 v21; // bl
  struct _KPRCB *v22; // rcx
  __int64 v23; // rdx
  unsigned __int8 v24; // bl
  struct _KPRCB *v25; // rcx
  __int64 v26; // [rsp+30h] [rbp-A8h] BYREF
  __int16 Object; // [rsp+38h] [rbp-A0h] BYREF
  char v28; // [rsp+3Ah] [rbp-9Eh]
  int v29; // [rsp+3Ch] [rbp-9Ch]
  _QWORD v30[2]; // [rsp+40h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v31; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v32[3]; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v33[8]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+88h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-48h] BYREF
  char v36; // [rsp+E0h] [rbp+8h]
  LARGE_INTEGER Timeout; // [rsp+E8h] [rbp+10h] BYREF

  v36 = 0;
  v2 = 0;
  v3 = 0LL;
  Partition = 0LL;
  v5 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
  {
    Object = 0;
    v28 = 6;
    v29 = 0;
    v30[1] = v30;
    v30[0] = v30;
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 )
    {
      Partition = CcGetPartition(*(_QWORD *)(v6 + 8));
      v31.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
      v31.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(&v31);
      v5 = 1;
      if ( *(_QWORD *)(v7 + 224) == v7 + 224 )
      {
        v10 = *(_DWORD *)(v7 + 152);
        if ( (v10 & 0x100) == 0 )
        {
          v36 = 1;
          *(_DWORD *)(v7 + 152) = v10 | 0x10000;
          v26 = *(_QWORD *)(v7 + 272);
          *(_QWORD *)(v7 + 272) = (char *)&v26 + 1;
          v11 = *(_DWORD *)(v7 + 152);
          if ( (v11 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v7 + 496) )
            {
              v32[1] = Partition + 192;
              v32[0] = 0LL;
              KxAcquireQueuedSpinLock(v32);
              v13 = *(_QWORD *)(v7 + 496);
              if ( v13 )
              {
                v3 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
                v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
                v15 = *(_QWORD **)((v13 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
                if ( *(_QWORD *)(v14 + 8) != v3 || *v15 != v3 )
                  __fastfail(3u);
                *v15 = v14;
                *(_QWORD *)(v14 + 8) = v15;
                *(_QWORD *)(v3 + 8) = 0LL;
                *(_QWORD *)v3 = 0LL;
                *(_QWORD *)(v7 + 496) = 0LL;
                v2 = 1;
              }
              KxReleaseQueuedSpinLock(v32);
            }
          }
          else
          {
            *(_DWORD *)(v7 + 152) = v11 | 0x20;
            v2 = 1;
          }
        }
      }
    }
    if ( v5 )
      KxReleaseQueuedSpinLock(&v31);
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v8);
    }
    __writecr8(OldIrql);
    if ( v2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v34 = v3;
      CcWriteBehind(v7, v33);
      KeLeaveCriticalRegion();
    }
    if ( v3 )
      CcFreeWorkQueueEntry((PSLIST_ENTRY)v3);
    if ( v36 )
    {
      Timeout.QuadPart = -6000000000LL;
      if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v31);
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v17 )
        {
          v18 = (_QWORD *)(v17 + 272);
          v19 = *(_QWORD *)(v17 + 272);
          if ( v19 )
          {
            while ( (__int64 *)v19 != (__int64 *)((char *)&v26 + 1) )
            {
              v18 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFEuLL);
              v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( !v19 )
                goto LABEL_35;
            }
            *v18 = v26;
          }
LABEL_35:
          *(_DWORD *)(v17 + 152) &= ~0x10000u;
          KxReleaseQueuedSpinLock(&v31);
          v21 = v31.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v31.OldIrql < 2u )
          {
            v22 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v22, v20);
          }
          __writecr8(v21);
        }
        else
        {
          KxReleaseQueuedSpinLock(&v31);
          v24 = v31.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v31.OldIrql < 2u )
          {
            v25 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v25, v23);
          }
          __writecr8(v24);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
}
