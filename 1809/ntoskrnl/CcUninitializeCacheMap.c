/*
 * XREFs of CcUninitializeCacheMap @ 0x14007C520
 * Callers:
 *     CcPurgeCacheSection @ 0x1400E7B20 (CcPurgeCacheSection.c)
 * Callees:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140023880 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     CcDeleteSharedCacheMap @ 0x14007C260 (CcDeleteSharedCacheMap.c)
 *     CcDereferencePartition @ 0x14007C988 (CcDereferencePartition.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     CcFreeWorkQueueEntry @ 0x14007EDE0 (CcFreeWorkQueueEntry.c)
 *     CcScheduleLazyWriteScan @ 0x14007EEB8 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14007EF40 (CcInsertIntoDirtySharedCacheMapList.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     CcPurgeCacheSection @ 0x1400E7B20 (CcPurgeCacheSection.c)
 *     IoDiskIoAttributionDereference @ 0x1401058D4 (IoDiskIoAttributionDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  BOOLEAN v3; // r15
  bool v4; // r12
  __int64 Partition; // rsi
  unsigned __int8 CurrentIrql; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 SchedulerAssist; // r8
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PFILE_OBJECT *PrivateCacheMap; // rdi
  char *SharedCacheMap; // rbx
  unsigned __int8 v14; // r8
  PFILE_OBJECT **v15; // rdx
  PVOID *v16; // rcx
  __int64 v17; // rdx
  PCACHE_UNINITIALIZE_EVENT v18; // r11
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // bl
  unsigned __int8 v22; // bl
  unsigned __int8 v24; // bl
  PFILE_OBJECT v25; // rcx
  __int64 v26; // r8
  _QWORD *p_Type; // rdx
  __int64 v28; // rcx
  int v29; // eax
  struct _KPRCB *v30; // rcx
  struct _KPRCB *v31; // rcx
  unsigned __int8 v32; // bl
  struct _KPRCB *v33; // rcx
  struct _KPRCB *v34; // rcx
  _QWORD v35[2]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int8 v36; // [rsp+40h] [rbp-40h]
  _QWORD v37[2]; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 v38; // [rsp+58h] [rbp-28h]
  _QWORD v39[4]; // [rsp+60h] [rbp-20h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+C0h] [rbp+40h]

  v3 = 0;
  ListEntry = 0LL;
  v4 = 0;
  v35[1] = &CcMasterLock;
  Partition = 0LL;
  v35[0] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v36 = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v29 = *(_DWORD *)(SchedulerAssist + 20);
      *(_DWORD *)(SchedulerAssist + 20) = v29 + 1;
      if ( v29 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v35, &CcMasterLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)v35) )
  {
    KxWaitForLockOwnerShip(v35);
  }
  SectionObjectPointer = FileObject->SectionObjectPointer;
  PrivateCacheMap = (PFILE_OBJECT *)FileObject->PrivateCacheMap;
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    Partition = CcGetPartition(SectionObjectPointer->SharedCacheMap);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(Partition + 904)) <= 1 )
      __fastfail(0xEu);
    v37[0] = 0LL;
    v37[1] = Partition + 128;
    v14 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v14 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v38 = v14;
    KxAcquireQueuedSpinLock(v37);
  }
  if ( !PrivateCacheMap )
  {
    v17 = 0LL;
    goto LABEL_19;
  }
  if ( PrivateCacheMap[1] != FileObject )
    KeBugCheckEx(0x34u, 0x8A4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !Partition )
    KeBugCheckEx(0x34u, 0x8AAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( PrivateCacheMap[14] )
  {
    v39[0] = 0LL;
    v39[1] = Partition + 192;
    KxAcquireQueuedSpinLock(v39);
    v25 = PrivateCacheMap[14];
    if ( v25 )
    {
      v26 = *(_QWORD *)&v25->Type;
      ++CcDbgNumberOfNoopedReadAheads;
      p_Type = &v25->DeviceObject->Type;
      ListEntry = (PSLIST_ENTRY)v25;
      if ( *(PFILE_OBJECT *)(v26 + 8) != v25 || (PFILE_OBJECT)*p_Type != v25 )
LABEL_76:
        __fastfail(3u);
      *p_Type = v26;
      *(_QWORD *)(v26 + 8) = p_Type;
      v25->DeviceObject = 0LL;
      *(_QWORD *)&v25->Type = 0LL;
      if ( (PFILE_OBJECT)v25->Vpb != FileObject )
        KeBugCheckEx(0x34u, 0x8CBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      --*((_DWORD *)SharedCacheMap + 1);
      --*((_DWORD *)SharedCacheMap + 134);
    }
    KxReleaseQueuedSpinLock(v39);
  }
  --*((_DWORD *)SharedCacheMap + 1);
  v15 = (PFILE_OBJECT **)PrivateCacheMap[12];
  v16 = (PVOID *)PrivateCacheMap[13];
  if ( v15[1] != PrivateCacheMap + 12 || *v16 != PrivateCacheMap + 12 )
    goto LABEL_76;
  *v16 = v15;
  v15[1] = (PFILE_OBJECT *)v16;
  v17 = 0LL;
  if ( PrivateCacheMap == (PFILE_OBJECT *)(SharedCacheMap + 376) )
  {
    *(_WORD *)PrivateCacheMap = 0;
    PrivateCacheMap = 0LL;
  }
  FileObject->PrivateCacheMap = 0LL;
LABEL_19:
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
          v4 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
        }
        else
        {
          KeSetEvent(&UninitializeEvent->Event, 0, 0);
        }
      }
      KxReleaseQueuedSpinLock(v37);
      v21 = v38;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v38 >= 2u )
        goto LABEL_34;
LABEL_104:
      v30 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v30);
LABEL_34:
      __writecr8(v21);
      KxReleaseQueuedSpinLock(v35);
      v22 = v36;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v36 < 2u )
      {
        v31 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v31);
      }
      __writecr8(v22);
      goto LABEL_36;
    }
    if ( *((char **)SharedCacheMap + 28) != SharedCacheMap + 224 )
      KeBugCheckEx(0x34u, 0x947uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v18 = UninitializeEvent;
    if ( UninitializeEvent )
    {
      UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
      *((_QWORD *)SharedCacheMap + 34) = UninitializeEvent;
      v4 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
    }
    v19 = *((_DWORD *)SharedCacheMap + 38);
    if ( (v19 & 4) != 0 || UninitializeEvent )
    {
      if ( (v19 & 0x20) != 0 )
        goto LABEL_29;
      if ( !*((_DWORD *)SharedCacheMap + 28)
        && ((v19 & 0x400) == 0 || *((_QWORD *)SharedCacheMap + 5) == 0x7FFFFFFFFFFFFFFFLL) )
      {
        CcDeleteSharedCacheMap(SharedCacheMap, (__int64)v35, (__int64)v37, 0, 0LL);
        v4 = 0;
        v3 = 1;
        goto LABEL_36;
      }
    }
    if ( (v19 & 0x20) == 0 )
      CcInsertIntoDirtySharedCacheMapList(SharedCacheMap);
LABEL_29:
    v20 = *(_BYTE *)(Partition + 902) == 0;
    *(_BYTE *)(Partition + 593) = 1;
    if ( v20 )
    {
      LOBYTE(v17) = v18 && (*((_DWORD *)SharedCacheMap + 38) & 0x20) == 0;
      LOBYTE(SchedulerAssist) = 0;
    }
    else
    {
      *((_DWORD *)SharedCacheMap + 38) |= 0x10000u;
      LOBYTE(v17) = 1;
      SchedulerAssist = 1LL;
    }
    CcScheduleLazyWriteScan(Partition, v17, SchedulerAssist);
    KxReleaseQueuedSpinLock(v37);
    v21 = v38;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v38 >= 2u )
      goto LABEL_34;
    goto LABEL_104;
  }
  if ( TruncateSize && !TruncateSize->QuadPart && FileObject->SectionObjectPointer->DataSectionObject )
  {
    if ( Partition )
      KeBugCheckEx(0x34u, 0x9E9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    KxReleaseQueuedSpinLock(v35);
    v32 = v36;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v36 < 2u )
    {
      v33 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v33);
    }
    __writecr8(v32);
    CcPurgeCacheSection(FileObject->SectionObjectPointer, TruncateSize, 0, 0);
  }
  else
  {
    KxReleaseQueuedSpinLock(v35);
    v24 = v36;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v36 < 2u )
    {
      v34 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v34);
    }
    __writecr8(v24);
  }
  if ( UninitializeEvent )
    KeSetEvent(&UninitializeEvent->Event, 0, 0);
LABEL_36:
  if ( PrivateCacheMap )
    ExFreePoolWithTag(PrivateCacheMap, 0);
  if ( v4 )
    CcAdjustWriteBehindThreadPoolIfNeeded(Partition, 1);
  if ( ListEntry )
  {
    ObfDereferenceObject(FileObject);
    v28 = *((_QWORD *)&ListEntry[1].Next + 1);
    if ( v28 )
      IoDiskIoAttributionDereference(v28);
    CcFreeWorkQueueEntry(ListEntry);
  }
  if ( Partition )
    CcDereferencePartition(Partition);
  return v3;
}
