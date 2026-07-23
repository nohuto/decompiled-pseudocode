/*
 * XREFs of CcZeroData @ 0x1400E0CA0
 * Callers:
 *     FsRtlCopyWrite @ 0x1408152D0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140815CE0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 *     CcDereferencePartition @ 0x14007C988 (CcDereferencePartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcZeroDataInCache @ 0x1400E0844 (CcZeroDataInCache.c)
 *     CcGetPartitionFromFileObject @ 0x1400E1050 (CcGetPartitionFromFileObject.c)
 *     CcZeroDataOnDisk @ 0x140128400 (CcZeroDataOnDisk.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall CcZeroData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER StartOffset,
        PLARGE_INTEGER EndOffset,
        BOOLEAN Wait)
{
  LONGLONG QuadPart; // rcx
  char v8; // r14
  __int64 v9; // rbx
  unsigned __int8 OldIrql; // di
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  unsigned int SectorSize; // r13d
  unsigned int v13; // edi
  NTSTATUS v14; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v16; // r15d
  unsigned __int64 v18; // [rsp+38h] [rbp-80h] BYREF
  __int64 PartitionFromFileObject; // [rsp+40h] [rbp-78h]
  NTSTATUS v20; // [rsp+48h] [rbp-70h]
  int v21; // [rsp+4Ch] [rbp-6Ch]
  NTSTATUS Status[4]; // [rsp+50h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  BOOLEAN v24; // [rsp+C0h] [rbp+8h]
  LONGLONG v25; // [rsp+C8h] [rbp+10h] BYREF
  PLARGE_INTEGER v26; // [rsp+D0h] [rbp+18h]
  BOOLEAN v27; // [rsp+D8h] [rbp+20h]

  v27 = Wait;
  v26 = EndOffset;
  QuadPart = StartOffset->QuadPart;
  v25 = StartOffset->QuadPart;
  v24 = 0;
  if ( (FileObject->Flags & 0x10) != 0 || (v8 = 0, !FileObject->PrivateCacheMap) )
    v8 = 1;
  v9 = EndOffset->QuadPart - QuadPart;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  PartitionFromFileObject = CcGetPartitionFromFileObject(FileObject);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 904)) <= 1 )
    __fastfail(0xEu);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( !v8
    && v9 <= 0x200000
    && (*(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 7296LL) >= 0x800uLL || v9 <= 0x2000)
    || Wait )
  {
    RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( RelatedDeviceObject->SectorSize )
      v13 = IoGetRelatedDeviceObject(FileObject)->SectorSize - 1;
    else
      v13 = 0;
    if ( v8 )
    {
      if ( (v13 & (unsigned int)v25) != 0 )
      {
        HIDWORD(v25) = ((unsigned __int64)v13 + v25) >> 32;
        LODWORD(v25) = (v13 + v25) & ~v13;
        v16 = v25 - StartOffset->LowPart;
        if ( !CcZeroDataInCache((__int64)FileObject, (signed __int64 *)StartOffset, v16, v27) )
          goto LABEL_42;
        CcFlushCachePriv((__int64)FileObject->SectionObjectPointer, StartOffset, v16, 0LL, 0, (char *)Status);
        if ( Status[0] < 0 )
          RtlRaiseStatus(Status[0]);
      }
LABEL_16:
      if ( v25 < v26->QuadPart )
      {
        v18 = (v13 + v26->QuadPart) & (~v13 | 0xFFFFFFFF00000000uLL);
        CcZeroDataOnDisk(FileObject, &v25, &v18, SectorSize);
      }
      v24 = 1;
      goto LABEL_42;
    }
    if ( *(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 7296LL) < 0x800uLL )
    {
      if ( v9 > 0x2000 && (v13 & (unsigned int)v25) != 0 )
      {
        v21 = (v25 + (unsigned __int64)v13) >> 32;
        v14 = (v25 + v13) & ~v13;
        v20 = v14;
LABEL_24:
        LODWORD(v9) = v14 - v25;
        goto LABEL_13;
      }
      if ( v9 > 0x2000 )
      {
        LODWORD(v9) = 0;
LABEL_13:
        if ( (_DWORD)v9 && !CcZeroDataInCache((__int64)FileObject, &v25, v9, Wait) )
          goto LABEL_42;
        v25 += (unsigned int)v9;
        goto LABEL_16;
      }
    }
    if ( v9 <= 0x200000 )
      goto LABEL_13;
    Status[1] = (v25 + 0x200000 + (unsigned __int64)v13) >> 32;
    v14 = (v25 + 0x200000 + v13) & ~v13;
    Status[0] = v14;
    goto LABEL_24;
  }
LABEL_42:
  CcDereferencePartition(PartitionFromFileObject);
  return v24;
}
