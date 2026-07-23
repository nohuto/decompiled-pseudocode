/*
 * XREFs of CcNotifyOfMappedWrite @ 0x14007D950
 * Callers:
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     CcAcquireByteRangeForWrite @ 0x14001F590 (CcAcquireByteRangeForWrite.c)
 *     CcCanIWriteStream @ 0x1400213FC (CcCanIWriteStream.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x14007EEB8 (CcScheduleLazyWriteScan.c)
 *     CcDecrementOpenCount @ 0x1400ACEE0 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcPostWorkQueue @ 0x1400D6078 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x1400D63AC (CcAllocateWorkQueueEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 Partition; // r14
  __int64 v7; // rdi
  KSPIN_LOCK *v8; // r15
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v11; // si
  struct _KPRCB *v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  unsigned __int8 v17; // si
  struct _KPRCB *v18; // rcx
  __int64 v19; // rsi
  unsigned __int8 v20; // r15
  struct _KPRCB *v21; // rcx
  unsigned __int8 v22; // bl
  struct _KPRCB *v23; // rcx
  unsigned __int8 v25; // r15
  struct _KPRCB *v26; // rcx
  unsigned int v27; // ecx
  struct _KPRCB *v28; // rcx
  int v29; // [rsp+38h] [rbp-48h]
  __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  __int64 v31; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-18h] BYREF
  __int64 v34; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int i; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v36; // [rsp+D8h] [rbp+58h] BYREF

  v34 = 0LL;
  v31 = 0LL;
  Partition = 0LL;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 && (*(_DWORD *)(v7 + 152) & 0x100) == 0 )
  {
    Partition = CcGetPartition(v7);
    v8 = (KSPIN_LOCK *)(Partition + 128);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v32);
    ++*(_DWORD *)(v7 + 4);
    ++*(_DWORD *)(v7 + 536);
    KxReleaseQueuedSpinLock(&v32);
    OldIrql = v32.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    KxReleaseQueuedSpinLock(&LockHandle);
    v11 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v12 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v12);
    }
    __writecr8(v11);
    KeAcquireInStackQueuedSpinLock(v8, &v32);
    CcDecrementOpenCount(v7);
    if ( (*(_DWORD *)(v7 + 152) & 0x20) == 0 && !*(_DWORD *)(v7 + 516) )
    {
      if ( !*(_DWORD *)(v7 + 112) )
      {
LABEL_16:
        v13 = 2;
        goto LABEL_40;
      }
      if ( (*(_DWORD *)((*(_QWORD *)(v7 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) == 0
        && CcCanIWriteStream((KSPIN_LOCK *)Partition, *(_QWORD *)(v7 + 96) & 0xFFFFFFFFFFFFFFF0uLL, 0x1000000u, 0, 8) )
      {
        v13 = 0;
        if ( *(_BYTE *)(Partition + 900) )
        {
          LOBYTE(v14) = 1;
          CcScheduleLazyWriteScan(Partition, v14, 0LL);
        }
        goto LABEL_40;
      }
      v15 = *(_QWORD *)(v7 + 40);
      if ( a2 <= v15 || *(_QWORD *)(v7 + 48) <= v15 )
        goto LABEL_16;
      v16 = *(_DWORD *)(v7 + 112);
      *(_DWORD *)(v7 + 192) = v16;
      *(_DWORD *)(Partition + 456) += v16;
      *(_DWORD *)(Partition + 616) += *(_DWORD *)(v7 + 192);
      *(_DWORD *)(v7 + 152) |= 0x20u;
      ++*(_DWORD *)(v7 + 112);
      KxReleaseQueuedSpinLock(&v32);
      v17 = v32.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32.OldIrql < 2u )
      {
        v18 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v18);
      }
      __writecr8(v17);
      if ( (int)CcAllocateWorkQueueEntry(Partition, &v34) < 0 )
      {
        KeAcquireInStackQueuedSpinLock(v8, &v32);
        *(_DWORD *)(v7 + 152) &= ~0x20u;
        v13 = 2;
        --*(_DWORD *)(v7 + 112);
        goto LABEL_40;
      }
      v19 = v34;
      *(_BYTE *)(v34 + 120) = 2;
      *(_QWORD *)(v19 + 16) = v7;
      KeAcquireInStackQueuedSpinLock(v8, &v32);
      --*(_DWORD *)(v7 + 112);
      if ( (*(_DWORD *)(v7 + 152) & 0x10000) != 0 )
      {
        *(_QWORD *)(v7 + 496) = v19 | 1;
        CcPostWorkQueue(v19, Partition + 224);
        v13 = 0;
        goto LABEL_40;
      }
      *(_QWORD *)(v7 + 496) = v19;
      CcPostWorkQueue(v19, Partition + 256);
    }
    v13 = 0;
    goto LABEL_40;
  }
  v13 = 1;
  KxReleaseQueuedSpinLock(&LockHandle);
  v20 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v21 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v21);
  }
  __writecr8(v20);
LABEL_40:
  if ( a3 || v13 != 2 )
  {
    if ( v13 > 1 )
    {
      *(_DWORD *)(v7 + 152) |= 0x400400u;
      ++*(_DWORD *)(v7 + 4);
      ++*(_DWORD *)(v7 + 536);
      ++*(_DWORD *)(v7 + 516);
      KxReleaseQueuedSpinLock(&v32);
      v25 = v32.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32.OldIrql < 2u )
      {
        v26 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v26);
      }
      __writecr8(v25);
      v30 = a2;
      v27 = a3;
      for ( i = a3; v27; i = v27 )
      {
        if ( !*(_QWORD *)(v7 + 8) && (*(_DWORD *)(v7 + 152) & 4) == 0 )
          break;
        LOBYTE(v29) = 0;
        if ( !CcAcquireByteRangeForWrite(v7, &v30, v27, 0LL, &v36, &i, &v31, v29) )
          break;
        v36 += i;
        v27 = a3 + a2 - v36;
        v30 = v36;
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v32);
      if ( !*(_DWORD *)(v7 + 4) )
        KeBugCheckEx(0x34u, 0x126FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      *(_DWORD *)(v7 + 152) &= ~0x400000u;
      KxReleaseQueuedSpinLock(&v32);
      v22 = v32.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32.OldIrql < 2u )
      {
        v28 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v28);
      }
      goto LABEL_49;
    }
  }
  else
  {
    v13 = 1;
  }
  if ( Partition )
  {
    KxReleaseQueuedSpinLock(&v32);
    v22 = v32.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32.OldIrql < 2u )
    {
      v23 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v23);
    }
LABEL_49:
    __writecr8(v22);
  }
  return v13;
}
