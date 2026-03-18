/*
 * XREFs of CcPrepareMdlWrite @ 0x140136D70
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x14084DC60 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x140036DE0 (IoAllocateMdl.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     CcSetDirtyInMask @ 0x14006F190 (CcSetDirtyInMask.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     CcGetVirtualAddress @ 0x1400B6060 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1400B64C0 (CcMapAndRead.c)
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     IoFreeMdl @ 0x1400FEF60 (IoFreeMdl.c)
 *     CcForceWriteThrough @ 0x1401370E0 (CcForceWriteThrough.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall CcPrepareMdlWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  ULONG v6; // edi
  unsigned int v8; // r14d
  struct _FAST_MUTEX *SharedCacheMap; // rsi
  LONGLONG QuadPart; // rbx
  void *VirtualAddress; // r13
  unsigned int v12; // r14d
  int v13; // edi
  signed __int64 v14; // rbx
  char v15; // bl
  __int64 v16; // rbx
  PMDL v17; // rcx
  struct _KEVENT *v18; // rcx
  struct _MDL *Next; // rax
  __int64 Partition; // rax
  PIO_STATUS_BLOCK v21; // rdx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v24; // [rsp+3Ch] [rbp-BCh]
  PMDL Mdl; // [rsp+40h] [rbp-B8h]
  volatile signed __int32 *v26; // [rsp+50h] [rbp-A8h] BYREF
  LONGLONG v27; // [rsp+58h] [rbp-A0h]
  LONGLONG v28; // [rsp+60h] [rbp-98h]
  struct _FAST_MUTEX *v29; // [rsp+68h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-88h] BYREF
  PMDL i; // [rsp+88h] [rbp-70h]
  void *v32; // [rsp+90h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-60h]
  struct _KTHREAD *v34; // [rsp+A0h] [rbp-58h]
  struct _KTHREAD *v35; // [rsp+A8h] [rbp-50h]
  ULONG v36; // [rsp+100h] [rbp+8h] BYREF
  PLARGE_INTEGER v37; // [rsp+108h] [rbp+10h]
  ULONG v38; // [rsp+110h] [rbp+18h]
  PMDL *v39; // [rsp+118h] [rbp+20h]

  v39 = MdlChain;
  v38 = Length;
  v37 = FileOffset;
  v6 = Length;
  v8 = 0;
  LODWORD(v24) = 0;
  v26 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = (struct _FAST_MUTEX *)FileObject->SectionObjectPointer->SharedCacheMap;
  v29 = SharedCacheMap;
  if ( (FileObject->Flags & 0x10) == 0 && (unsigned __int8)CcForceWriteThrough(FileObject, Length, SharedCacheMap, 0LL) )
    RtlRaiseStatus(-1073741670);
  QuadPart = FileOffset->QuadPart;
  v27 = QuadPart;
  while ( v6 )
  {
    VirtualAddress = (void *)CcGetVirtualAddress((__int64)SharedCacheMap, QuadPart, (__int64 **)&v26, &v36, 0, 0);
    v32 = VirtualAddress;
    v12 = v36;
    if ( v36 > v6 )
      v12 = v6;
    v36 = v12;
    v28 = QuadPart + v12;
    v13 = 2;
    if ( (QuadPart & 0xFFF) == 0 && v12 >= 0x1000 )
      v13 = 3;
    if ( (((_WORD)QuadPart + (_WORD)v12) & 0xFFF) == 0 )
      v13 |= 4u;
    ExAcquireFastMutex(SharedCacheMap + 5);
    v14 = *(_QWORD *)&SharedCacheMap->OldIrql - (QuadPart & 0xFFFFFFFFFFFFF000uLL);
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    if ( v14 <= 0 )
    {
      v13 |= 7u;
    }
    else if ( (unsigned int)v14 <= 0x1000 && !HIDWORD(v14) )
    {
      v13 |= 6u;
    }
    CcMapAndRead(v12, v13, 1, (__int64)VirtualAddress);
    Mdl = IoAllocateMdl(VirtualAddress, v12, 0, 0, 0LL);
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    CurrentThread = KeGetCurrentThread();
    v15 = BYTE5(CurrentThread[1].Queue) + 2;
    v34 = CurrentThread;
    BYTE5(CurrentThread[1].Queue) = 1;
    MiProbeAndLockPages(Mdl, 0, 1);
    v35 = KeGetCurrentThread();
    BYTE5(v35[1].Queue) = v15 - 2;
    ExAcquireFastMutex(SharedCacheMap + 5);
    if ( v28 > *(_QWORD *)&SharedCacheMap->OldIrql )
      *(_QWORD *)&SharedCacheMap->OldIrql = v28;
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    v16 = *((_QWORD *)v26 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v26 + 4) )
    {
      v18 = *(struct _KEVENT **)(v16 + 184);
      if ( v18 )
        KeSetEvent(v18, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v16 + 544));
    }
    v26 = 0LL;
    v17 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v17->Next;
        if ( !v17->Next )
          break;
        v17 = v17->Next;
      }
      v17->Next = Mdl;
    }
    else
    {
      *MdlChain = Mdl;
    }
    QuadPart = v28;
    v27 = v28;
    v8 = v36 + v24;
    v24 = v36 + (unsigned int)v24;
    v6 = v38 - v36;
    v38 -= v36;
  }
  Partition = CcGetPartition(SharedCacheMap);
  v21 = IoStatus;
  IoStatus->Status = 0;
  v21->Information = v8;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  ++*(&SharedCacheMap->Count + 1);
  ++LODWORD(SharedCacheMap[9].Event.Header.WaitListHead.Flink);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
}
