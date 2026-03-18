/*
 * XREFs of CcUninitializeCacheMap @ 0x14000E560
 * Callers:
 *     CcPurgeCacheSection @ 0x1400BF3E0 (CcPurgeCacheSection.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14007A204 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     CcFreeWorkQueueEntry @ 0x14007E468 (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x14007E4D4 (CcDereferencePartition.c)
 *     CcDeleteSharedCacheMap @ 0x14007FC90 (CcDeleteSharedCacheMap.c)
 *     CcPurgeCacheSection @ 0x1400BF3E0 (CcPurgeCacheSection.c)
 *     IoDiskIoAttributionDereference @ 0x1400EC348 (IoDiskIoAttributionDereference.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14011CD88 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x14012013C (CcScheduleLazyWriteScan.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  BOOLEAN v4; // r14
  bool v5; // r15
  PFILE_OBJECT v6; // r13
  __int64 Partition; // rsi
  unsigned __int8 CurrentIrql; // r8
  __int64 v9; // r8
  PFILE_OBJECT *PrivateCacheMap; // rdi
  char *SharedCacheMap; // rbx
  unsigned __int8 v12; // r8
  PFILE_OBJECT **v13; // rdx
  PVOID *v14; // rcx
  __int64 v15; // rdx
  PCACHE_UNINITIALIZE_EVENT v16; // r11
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rdx
  unsigned __int8 OldIrql; // bl
  __int64 v21; // rdx
  unsigned __int8 v22; // bl
  unsigned __int8 v24; // bl
  PFILE_OBJECT v25; // rax
  __int64 v26; // rdx
  _QWORD *p_Type; // rcx
  PVOID FsContext; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v30; // rcx
  __int64 v31; // rdx
  unsigned __int8 v32; // cl
  struct _KPRCB *v33; // rcx
  struct _KPRCB *v34; // rcx
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+30h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v37; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int8 v38; // [rsp+C0h] [rbp+40h]

  v35.LockQueue.Lock = &CcMasterLock;
  v4 = 0;
  v35.LockQueue.Next = 0LL;
  v5 = 0;
  v6 = 0LL;
  Partition = 0LL;
  *(_QWORD *)&v35.OldIrql = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v37, 0, sizeof(v37));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v35.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock((__int64)&v35, (volatile __int64 *)&CcMasterLock);
  PrivateCacheMap = (PFILE_OBJECT *)FileObject->PrivateCacheMap;
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    Partition = CcGetPartition(FileObject->SectionObjectPointer->SharedCacheMap);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(Partition + 904)) <= 1 )
      __fastfail(0xEu);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
    v12 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    LockHandle.OldIrql = v12;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(Partition + 128));
  }
  if ( !PrivateCacheMap )
  {
    v15 = 0LL;
    goto LABEL_15;
  }
  if ( PrivateCacheMap[1] != FileObject )
    KeBugCheckEx(0x34u, 0x8ACuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !Partition )
    KeBugCheckEx(0x34u, 0x8B2uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( PrivateCacheMap[14] )
  {
    v37.LockQueue.Next = 0LL;
    v37.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 192);
    KxAcquireQueuedSpinLock((__int64)&v37, (volatile __int64 *)(Partition + 192));
    v25 = PrivateCacheMap[14];
    if ( v25 )
    {
      v26 = *(_QWORD *)&v25->Type;
      v6 = PrivateCacheMap[14];
      ++CcDbgNumberOfNoopedReadAheads;
      p_Type = &v25->DeviceObject->Type;
      if ( *(PFILE_OBJECT *)(v26 + 8) != v25 || (PFILE_OBJECT)*p_Type != v25 )
LABEL_72:
        __fastfail(3u);
      *p_Type = v26;
      *(_QWORD *)(v26 + 8) = p_Type;
      v25->DeviceObject = 0LL;
      *(_QWORD *)&v25->Type = 0LL;
      if ( (PFILE_OBJECT)v25->Vpb != FileObject )
        KeBugCheckEx(0x34u, 0x8D3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      --*((_DWORD *)SharedCacheMap + 1);
      --*((_DWORD *)SharedCacheMap + 134);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v37);
  }
  --*((_DWORD *)SharedCacheMap + 1);
  v13 = (PFILE_OBJECT **)PrivateCacheMap[12];
  v14 = (PVOID *)PrivateCacheMap[13];
  if ( v13[1] != PrivateCacheMap + 12 || *v14 != PrivateCacheMap + 12 )
    goto LABEL_72;
  *v14 = v13;
  v13[1] = (PFILE_OBJECT *)v14;
  v15 = 0LL;
  if ( PrivateCacheMap == (PFILE_OBJECT *)(SharedCacheMap + 376) )
  {
    *(_WORD *)PrivateCacheMap = 0;
    PrivateCacheMap = 0LL;
  }
  FileObject->PrivateCacheMap = 0LL;
LABEL_15:
  if ( SharedCacheMap )
  {
    if ( TruncateSize )
    {
      if ( TruncateSize->QuadPart || !*((_QWORD *)SharedCacheMap + 1) )
      {
        if ( *((char **)SharedCacheMap + 28) == SharedCacheMap + 224 )
          *((LARGE_INTEGER *)SharedCacheMap + 1) = *TruncateSize;
      }
      else
      {
        *((_DWORD *)SharedCacheMap + 38) |= 0x10u;
      }
    }
    if ( *((_DWORD *)SharedCacheMap + 1) )
    {
      if ( UninitializeEvent )
      {
        if ( *((char **)SharedCacheMap + 28) == SharedCacheMap + 224 )
        {
          UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
          *((_QWORD *)SharedCacheMap + 34) = UninitializeEvent;
          v5 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
        }
        else
        {
          KeSetEvent(&UninitializeEvent->Event, 0, 0);
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || LockHandle.OldIrql >= 2u )
        goto LABEL_30;
LABEL_96:
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v19);
LABEL_30:
      __writecr8(OldIrql);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v35);
      v22 = v35.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v35.OldIrql < 2u )
      {
        v30 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v30, v21);
      }
      __writecr8(v22);
      goto LABEL_32;
    }
    if ( *((char **)SharedCacheMap + 28) != SharedCacheMap + 224 )
      KeBugCheckEx(0x34u, 0x94FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v16 = UninitializeEvent;
    if ( UninitializeEvent )
    {
      UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
      *((_QWORD *)SharedCacheMap + 34) = UninitializeEvent;
      v5 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
    }
    v17 = *((_DWORD *)SharedCacheMap + 38);
    if ( (v17 & 4) != 0 || UninitializeEvent )
    {
      if ( (v17 & 0x20) != 0 )
        goto LABEL_25;
      if ( !*((_DWORD *)SharedCacheMap + 28)
        && ((v17 & 0x400) == 0 || *((_QWORD *)SharedCacheMap + 5) == 0x7FFFFFFFFFFFFFFFLL) )
      {
        CcDeleteSharedCacheMap(SharedCacheMap, &v35, &LockHandle, 0LL);
        v5 = 0;
        v4 = 1;
        goto LABEL_32;
      }
    }
    if ( (v17 & 0x20) == 0 )
      CcInsertIntoDirtySharedCacheMapList(SharedCacheMap, 0LL);
LABEL_25:
    v18 = *(_BYTE *)(Partition + 902) == 0;
    *(_BYTE *)(Partition + 593) = 1;
    if ( v18 )
    {
      LOBYTE(v15) = v16 && (*((_DWORD *)SharedCacheMap + 38) & 0x20) == 0;
      LOBYTE(v9) = 0;
    }
    else
    {
      *((_DWORD *)SharedCacheMap + 38) |= 0x10000u;
      LOBYTE(v15) = 1;
      v9 = 1LL;
    }
    CcScheduleLazyWriteScan(Partition, v15, v9);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || LockHandle.OldIrql >= 2u )
      goto LABEL_30;
    goto LABEL_96;
  }
  if ( TruncateSize && !TruncateSize->QuadPart && FileObject->SectionObjectPointer->DataSectionObject )
  {
    if ( Partition )
      KeBugCheckEx(0x34u, 0x9F1uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v35);
    v32 = v35.OldIrql;
    v38 = v35.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v35.OldIrql < 2u )
    {
      v33 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v33, v31);
      v32 = v38;
    }
    __writecr8(v32);
    CcPurgeCacheSection(FileObject->SectionObjectPointer, TruncateSize, 0, 0);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v35);
    v24 = v35.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v35.OldIrql < 2u )
    {
      v34 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v34, v21);
    }
    __writecr8(v24);
  }
  if ( UninitializeEvent )
    KeSetEvent(&UninitializeEvent->Event, 0, 0);
LABEL_32:
  if ( PrivateCacheMap )
    ExFreePoolWithTag(PrivateCacheMap, 0);
  if ( v5 )
  {
    LOBYTE(v21) = 1;
    CcAdjustWriteBehindThreadPoolIfNeeded(Partition, v21);
  }
  if ( v6 )
  {
    ObfDereferenceObject(FileObject);
    FsContext = v6->FsContext;
    if ( FsContext )
      IoDiskIoAttributionDereference(FsContext);
    CcFreeWorkQueueEntry((PSLIST_ENTRY)v6);
  }
  if ( Partition )
    CcDereferencePartition(Partition);
  return v4;
}
