/*
 * XREFs of CcZeroData @ 0x1400FC620
 * Callers:
 *     FsRtlCopyWrite @ 0x14084DB30 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14084E560 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     CcFlushCachePriv @ 0x140077160 (CcFlushCachePriv.c)
 *     CcDereferencePartition @ 0x14007E0D4 (CcDereferencePartition.c)
 *     CcGetPartitionFromFileObject @ 0x1400FCA00 (CcGetPartitionFromFileObject.c)
 *     CcZeroDataInCache @ 0x1400FCA34 (CcZeroDataInCache.c)
 *     CcZeroDataOnDisk @ 0x1400FCEF0 (CcZeroDataOnDisk.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall CcZeroData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER StartOffset,
        PLARGE_INTEGER EndOffset,
        BOOLEAN Wait)
{
  LONGLONG QuadPart; // rcx
  bool v8; // r15
  unsigned __int8 OldIrql; // bl
  unsigned int v10; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v12; // r9
  unsigned int SectorSize; // r13d
  unsigned int v14; // edi
  LONGLONG v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v17; // r14d
  _DWORD v19[2]; // [rsp+38h] [rbp-80h] BYREF
  NTSTATUS Status[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v21; // [rsp+48h] [rbp-70h]
  __int64 v22; // [rsp+50h] [rbp-68h]
  __int64 PartitionFromFileObject; // [rsp+58h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  BOOLEAN v25; // [rsp+C0h] [rbp+8h]
  LONGLONG v26; // [rsp+C8h] [rbp+10h] BYREF
  PLARGE_INTEGER v27; // [rsp+D0h] [rbp+18h]
  BOOLEAN v28; // [rsp+D8h] [rbp+20h]

  v28 = Wait;
  v27 = EndOffset;
  QuadPart = StartOffset->QuadPart;
  v26 = StartOffset->QuadPart;
  v25 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = (FileObject->Flags & 0x10) != 0 || !FileObject->PrivateCacheMap;
  v22 = EndOffset->QuadPart - QuadPart;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  PartitionFromFileObject = CcGetPartitionFromFileObject(FileObject);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 904)) <= 1 )
    __fastfail(0xEu);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  v10 = v22;
  if ( !v8
    && v22 <= 0x200000
    && (*(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 8064LL) >= 0x800uLL || v22 <= 0x2000)
    || Wait )
  {
    RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( RelatedDeviceObject->SectorSize )
      v14 = IoGetRelatedDeviceObject(FileObject)->SectorSize - 1;
    else
      v14 = 0;
    if ( v8 )
    {
      if ( (v14 & (unsigned int)v26) != 0 )
      {
        *(_QWORD *)Status = 0LL;
        v21 = 0LL;
        v26 += v14;
        LODWORD(v26) = ~v14 & v26;
        v17 = v26 - StartOffset->LowPart;
        LOBYTE(v12) = v28;
        if ( !(unsigned __int8)CcZeroDataInCache(FileObject, StartOffset, v17, v12) )
          goto LABEL_41;
        CcFlushCachePriv((__int64)FileObject->SectionObjectPointer, StartOffset, v17, 0LL, 0, (unsigned int *)Status);
        if ( Status[0] < 0 )
          RtlRaiseStatus(Status[0]);
      }
LABEL_18:
      if ( v26 < v27->QuadPart )
      {
        v15 = v14 + v27->QuadPart;
        v19[1] = HIDWORD(v15);
        v19[0] = ~v14 & v15;
        CcZeroDataOnDisk(FileObject, &v26, v19, SectorSize);
      }
      v25 = 1;
      goto LABEL_41;
    }
    if ( *(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 8064LL) >= 0x800uLL )
      goto LABEL_13;
    if ( v22 > 0x2000 && ((unsigned int)v26 & v14) != 0 )
    {
      Status[1] = (v26 + (unsigned __int64)v14) >> 32;
      Status[0] = ~v14 & (v26 + v14);
      v10 = Status[0] - v26;
    }
    else
    {
      if ( v22 <= 0x2000 )
      {
LABEL_13:
        if ( v22 > 0x200000 )
        {
          v22 = v26 + 0x200000 + v14;
          LODWORD(v22) = ~v14 & (v26 + 0x200000 + v14);
          v10 = v22 - v26;
        }
        goto LABEL_15;
      }
      v10 = 0;
    }
LABEL_15:
    if ( v10 )
    {
      LOBYTE(v12) = v28;
      if ( !(unsigned __int8)CcZeroDataInCache(FileObject, &v26, v10, v12) )
        goto LABEL_41;
    }
    v26 += v10;
    goto LABEL_18;
  }
LABEL_41:
  CcDereferencePartition(PartitionFromFileObject);
  return v25;
}
