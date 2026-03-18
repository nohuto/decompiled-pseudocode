/*
 * XREFs of CcNotifyOfMappedWrite @ 0x14007BABC
 * Callers:
 *     MiGatherMappedPages @ 0x14007B5D8 (MiGatherMappedPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140044850 (KeReleaseInStackQueuedSpinLock.c)
 *     CcAcquireByteRangeForWrite @ 0x1400780F0 (CcAcquireByteRangeForWrite.c)
 *     CcDecrementOpenCount @ 0x14007A66C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     CcCanIWriteStream @ 0x14007BEA4 (CcCanIWriteStream.c)
 *     CcAllocateWorkQueueEntry @ 0x14007E504 (CcAllocateWorkQueueEntry.c)
 *     CcPostWorkQueue @ 0x14007FA14 (CcPostWorkQueue.c)
 *     CcScheduleLazyWriteScan @ 0x14012013C (CcScheduleLazyWriteScan.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, signed __int64 a2, unsigned int a3)
{
  __int64 Partition; // r13
  __int64 v6; // rdi
  unsigned __int8 OldIrql; // r14
  unsigned __int8 v8; // r14
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // r14d
  unsigned __int8 v12; // bl
  int v14; // eax
  unsigned __int8 v15; // r14
  int v16; // eax
  KSPIN_LOCK *v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rdx
  unsigned __int8 v20; // r12
  signed __int64 v21; // rax
  unsigned __int8 v22; // r12
  unsigned int v23; // r12d
  unsigned int v24; // ecx
  bool v25; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v27; // rcx
  struct _KPRCB *v28; // rcx
  struct _KPRCB *v29; // rcx
  struct _KPRCB *v30; // rcx
  struct _KPRCB *v31; // rcx
  unsigned int v32; // [rsp+38h] [rbp-31h]
  __int64 v33; // [rsp+40h] [rbp-29h] BYREF
  ULONG_PTR i; // [rsp+48h] [rbp-21h] BYREF
  __int64 v35; // [rsp+50h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE v36; // [rsp+58h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v38; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v39; // [rsp+E0h] [rbp+77h]
  ULONG_PTR v40; // [rsp+E8h] [rbp+7Fh] BYREF

  v39 = a3;
  v33 = 0LL;
  v40 = 0LL;
  v35 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  Partition = 0LL;
  memset(&v36, 0, sizeof(v36));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 && (*(_DWORD *)(v6 + 152) & 0x100) == 0 )
  {
    Partition = CcGetPartition((_QWORD *)v6);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v36);
    ++*(_DWORD *)(v6 + 4);
    ++*(_DWORD *)(v6 + 536);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v36);
    OldIrql = v36.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v36.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v8 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v27 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v27);
    }
    __writecr8(v8);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v36);
    CcDecrementOpenCount(v6);
    if ( (*(_DWORD *)(v6 + 152) & 0x20) != 0 || *(_DWORD *)(v6 + 516) )
      goto LABEL_26;
    if ( *(_DWORD *)(v6 + 112) )
    {
      v9 = *(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (*(_DWORD *)(v9 + 0x50) & 0x8000) == 0 && (unsigned __int8)CcCanIWriteStream(Partition, v9, 0x1000000, 0, 8) )
      {
        v11 = 0;
        if ( *(_BYTE *)(Partition + 900) )
        {
          LOBYTE(v10) = 1;
          CcScheduleLazyWriteScan(Partition, v10, 0LL);
        }
        goto LABEL_12;
      }
      v21 = *(_QWORD *)(v6 + 40);
      if ( a2 > v21 && *(_QWORD *)(v6 + 48) > v21 )
      {
        v14 = *(_DWORD *)(v6 + 112);
        *(_DWORD *)(v6 + 192) = v14;
        *(_DWORD *)(Partition + 456) += v14;
        *(_DWORD *)(Partition + 616) += *(_DWORD *)(v6 + 192);
        *(_DWORD *)(v6 + 152) |= 0x20u;
        ++*(_DWORD *)(v6 + 112);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v36);
        v15 = v36.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v36.OldIrql < 2u )
        {
          v28 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v28);
        }
        __writecr8(v15);
        v16 = CcAllocateWorkQueueEntry(Partition, &v33);
        v17 = (KSPIN_LOCK *)(Partition + 128);
        if ( v16 >= 0 )
        {
          v18 = v33;
          *(_BYTE *)(v33 + 120) = 2;
          *(_QWORD *)(v18 + 16) = v6;
          KeAcquireInStackQueuedSpinLock(v17, &v36);
          --*(_DWORD *)(v6 + 112);
          if ( (*(_DWORD *)(v6 + 152) & 0x10000) != 0 )
          {
            v19 = Partition + 224;
            *(_QWORD *)(v6 + 496) = v18 | 1;
          }
          else
          {
            *(_QWORD *)(v6 + 496) = v18;
            v19 = Partition + 256;
          }
          CcPostWorkQueue(v18, v19);
LABEL_26:
          v11 = 0;
          goto LABEL_12;
        }
        KeAcquireInStackQueuedSpinLock(v17, &v36);
        *(_DWORD *)(v6 + 152) &= ~0x20u;
        --*(_DWORD *)(v6 + 112);
      }
    }
    v11 = 2;
    goto LABEL_12;
  }
  v11 = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v20 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v29 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v29);
  }
  __writecr8(v20);
LABEL_12:
  if ( !v39 && v11 == 2 )
    v11 = 1;
  if ( v11 > 1 )
  {
    *(_DWORD *)(v6 + 152) |= 0x400400u;
    ++*(_DWORD *)(v6 + 4);
    ++*(_DWORD *)(v6 + 536);
    ++*(_DWORD *)(v6 + 516);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v36);
    v22 = v36.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v36.OldIrql < 2u )
    {
      v30 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v30);
    }
    __writecr8(v22);
    v23 = v39;
    v24 = v39;
    v25 = v39 == 0;
    for ( i = a2; ; i = v40 )
    {
      v38 = v24;
      if ( v25 || !*(_QWORD *)(v6 + 8) && (*(_DWORD *)(v6 + 152) & 4) == 0 )
        break;
      LOBYTE(v32) = 0;
      if ( !CcAcquireByteRangeForWrite(v6, (__int64 *)&i, v24, 0LL, &v40, &v38, &v35, v32) )
        break;
      v40 += v38;
      v25 = v23 + (_DWORD)a2 - (_DWORD)v40 == 0;
      v24 = v23 + a2 - v40;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v36);
    if ( !*(_DWORD *)(v6 + 4) )
      KeBugCheckEx(0x34u, 0x126FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v6 + 152) &= ~0x400000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v36);
    v12 = v36.OldIrql;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v36.OldIrql >= 2u )
      goto LABEL_18;
LABEL_72:
    v31 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v31);
LABEL_18:
    __writecr8(v12);
    return v11;
  }
  if ( Partition )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v36);
    v12 = v36.OldIrql;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v36.OldIrql >= 2u )
      goto LABEL_18;
    goto LABEL_72;
  }
  return v11;
}
