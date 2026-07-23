/*
 * XREFs of CcPrepareMdlWrite @ 0x1400E1AC0
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x140815CE0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     CcCanIWriteStream @ 0x1400213FC (CcCanIWriteStream.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     CcGetVirtualAddress @ 0x1400AFB80 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1400B0040 (CcMapAndRead.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall CcPrepareMdlWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  ULONG v5; // edi
  PLARGE_INTEGER v6; // r15
  unsigned int v8; // esi
  struct _FAST_MUTEX *SharedCacheMap; // r14
  ULONG Flags; // ecx
  KSPIN_LOCK *Partition; // rax
  __int64 QuadPart; // rbx
  unsigned int v13; // r15d
  __int64 v14; // rdi
  int v15; // esi
  __int64 v16; // rbx
  char v17; // bl
  struct _MDL *v18; // rcx
  struct _KEVENT *v19; // rcx
  struct _MDL *Next; // rax
  __int64 v21; // rax
  PIO_STATUS_BLOCK v22; // rdx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v25; // [rsp+3Ch] [rbp-9Ch]
  PMDL Mdl; // [rsp+40h] [rbp-98h]
  volatile signed __int32 *v27; // [rsp+48h] [rbp-90h] BYREF
  LONGLONG v28; // [rsp+50h] [rbp-88h]
  unsigned __int64 v29; // [rsp+58h] [rbp-80h]
  struct _FAST_MUTEX *v30; // [rsp+60h] [rbp-78h]
  PVOID VirtualAddress; // [rsp+68h] [rbp-70h]
  PMDL i; // [rsp+70h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-60h] BYREF
  __int64 v34; // [rsp+90h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-40h]
  ULONG v36; // [rsp+E0h] [rbp+8h] BYREF
  PLARGE_INTEGER v37; // [rsp+E8h] [rbp+10h]
  ULONG v38; // [rsp+F0h] [rbp+18h]
  PMDL *v39; // [rsp+F8h] [rbp+20h]

  v39 = MdlChain;
  v38 = Length;
  v37 = FileOffset;
  v5 = Length;
  v6 = FileOffset;
  v8 = 0;
  LODWORD(v25) = 0;
  v27 = 0LL;
  SharedCacheMap = (struct _FAST_MUTEX *)FileObject->SectionObjectPointer->SharedCacheMap;
  v30 = SharedCacheMap;
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) == 0 )
  {
    if ( SharedCacheMap )
    {
      Partition = (KSPIN_LOCK *)CcGetPartition(SharedCacheMap, (__int64)FileOffset, *(__int64 *)&Length);
      Flags = FileObject->Flags;
    }
    else
    {
      Partition = (KSPIN_LOCK *)*((_QWORD *)PspSystemPartition + 1);
    }
    if ( (Flags & 0x1000000) != 0 && !CcCanIWriteStream(Partition, (__int64)FileObject, v5, 0, 0) )
      RtlRaiseStatus(-1073741670);
  }
  QuadPart = v6->QuadPart;
  v28 = v6->QuadPart;
  while ( v5 )
  {
    VirtualAddress = (PVOID)CcGetVirtualAddress((__int64)SharedCacheMap, QuadPart, &v27, &v36, 0, 0);
    v13 = v36;
    if ( v36 > v5 )
      v13 = v5;
    v36 = v13;
    v14 = QuadPart + v13;
    v34 = v14;
    v15 = 2;
    if ( (QuadPart & 0xFFF) == 0 && v13 >= 0x1000 )
      v15 = 3;
    if ( (((_WORD)QuadPart + (_WORD)v13) & 0xFFF) == 0 )
      v15 |= 4u;
    v29 = QuadPart & 0xFFFFFFFFFFFFF000uLL;
    ExAcquireFastMutex(SharedCacheMap + 5);
    v29 = *(_QWORD *)&SharedCacheMap->OldIrql - v29;
    v16 = v29;
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    if ( v16 <= 0 )
    {
      v15 |= 7u;
    }
    else if ( (unsigned __int64)v16 <= 0x1000 )
    {
      v15 |= 6u;
    }
    CcMapAndRead(v13, v15, 1, (__int64)VirtualAddress);
    Mdl = IoAllocateMdl(VirtualAddress, v13, 0, 0, 0LL);
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    CurrentThread = KeGetCurrentThread();
    v17 = BYTE5(CurrentThread[1].Queue) + 2;
    BYTE5(CurrentThread[1].Queue) = 1;
    MiProbeAndLockPages((__int64)Mdl, 0, 1);
    BYTE5(KeGetCurrentThread()[1].Queue) = v17 - 2;
    ExAcquireFastMutex(SharedCacheMap + 5);
    if ( v14 > *(_QWORD *)&SharedCacheMap->OldIrql )
      *(_QWORD *)&SharedCacheMap->OldIrql = v14;
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    FileOffset = (PLARGE_INTEGER)*((_QWORD *)v27 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v27 + 4) )
    {
      v19 = (struct _KEVENT *)FileOffset[23].QuadPart;
      if ( v19 )
        KeSetEvent(v19, 0, 0);
    }
    v27 = 0LL;
    v18 = *v39;
    if ( *v39 )
    {
      for ( i = *v39; ; i = Next )
      {
        Next = v18->Next;
        if ( !v18->Next )
          break;
        v18 = v18->Next;
      }
      v18->Next = Mdl;
    }
    else
    {
      *v39 = Mdl;
    }
    QuadPart = v14;
    v28 = v14;
    v8 = v36 + v25;
    v25 = v36 + (unsigned int)v25;
    v5 = v38 - v36;
    v38 -= v36;
  }
  v21 = CcGetPartition(SharedCacheMap, (__int64)FileOffset, *(__int64 *)&Length);
  v22 = IoStatus;
  IoStatus->Status = 0;
  v22->Information = v8;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v21 + 128), &LockHandle);
  ++*(&SharedCacheMap->Count + 1);
  ++LODWORD(SharedCacheMap[9].Event.Header.WaitListHead.Flink);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
}
