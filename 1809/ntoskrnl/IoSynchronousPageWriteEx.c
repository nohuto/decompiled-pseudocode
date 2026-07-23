/*
 * XREFs of IoSynchronousPageWriteEx @ 0x1400DEAA0
 * Callers:
 *     IoSynchronousPageWrite @ 0x1400DE760 (IoSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14011C9C8 (MiIssueSynchronousFlush.c)
 *     MiZeroPageWrite @ 0x140128508 (MiZeroPageWrite.c)
 *     MiSynchronousPageWrite @ 0x140188544 (MiSynchronousPageWrite.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x1400BC2C0 (IopQueueThreadIrp.c)
 *     MmIsFileObjectAPagingFile @ 0x1400DEA08 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400DEC40 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x1400DF5F0 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateBackpocketIrp @ 0x14027E610 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x14027E8F0 (IopAllocateReserveIrp.c)
 */

NTSTATUS __fastcall IoSynchronousPageWriteEx(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        char a5,
        __int64 a6,
        struct _IO_STATUS_BLOCK *a7)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  IRP *Irp; // rbx
  __int64 v14; // r8
  int IoPriorityThread; // r10d
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rcx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x5E34u);
    __addgsdword(0x5E38u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  Irp = (IRP *)IopAllocateIrpExReturn(
                 (__int64)RelatedDeviceObject,
                 (unsigned __int8)RelatedDeviceObject->StackSize,
                 0LL,
                 retaddr);
  if ( Irp )
    goto LABEL_5;
  if ( (unsigned int)MmIsFileObjectAPagingFile((unsigned __int64)a1) )
  {
    _InterlockedIncrement(&IoSynchronousPageWriteIrpAllocationFailure);
    Irp = (IRP *)IopAllocateReserveIrp(v20, (unsigned __int8)RelatedDeviceObject->StackSize, 1LL);
    if ( !Irp )
      return -1073741670;
  }
  else
  {
    _InterlockedIncrement(&IoSynchronousPageWriteNonPagefileIrpAllocationFailure);
    Irp = (IRP *)IopAllocateBackpocketIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
    if ( !Irp )
      return -1073741670;
  }
LABEL_5:
  Irp->AllocationFlags |= 0x20u;
  Irp->MdlAddress = a2;
  Irp->Flags = 67;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  if ( IoPriorityThread < 2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0
      || CurrentThread->PreviousMode == 1
      || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0
      || KeGetCurrentThread()[1].TrapFrame == (_KTRAP_FRAME *)2 )
    {
      ++IoPagingWriteLowPriorityCount;
    }
    else
    {
      ++IoPagingWriteLowPriorityBumpedCount;
      IoPriorityThread = 2;
    }
  }
  Irp->UserIosb = a7;
  Irp->RequestorMode = 0;
  Irp->UserEvent = a4;
  Irp->Flags = ((IoPriorityThread << 17) + 0x20000) | 0x43;
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_BYTE *)(v14 - 72) = 4;
  *(_DWORD *)(v14 - 64) = a2->ByteCount;
  *(_QWORD *)(v14 - 48) = *a3;
  *(_BYTE *)(v14 - 70) |= a5;
  *(_QWORD *)(v14 - 24) = a1;
  if ( a6 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a6 + 24), Irp->Tail.Overlay.Thread, 0LL);
  else
    IoSetDiskIoAttributionFromThread(Irp, Irp->Tail.Overlay.Thread);
  IopQueueThreadIrp((__int64)Irp, v16, v17);
  return IofCallDriver(RelatedDeviceObject, Irp);
}
