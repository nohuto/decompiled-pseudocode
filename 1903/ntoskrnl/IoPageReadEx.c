/*
 * XREFs of IoPageReadEx @ 0x1400A7640
 * Callers:
 *     MiIssueHardFaultIo @ 0x140006A94 (MiIssueHardFaultIo.c)
 *     MiPageRead @ 0x1400A760C (MiPageRead.c)
 *     IoPageRead @ 0x140170DF0 (IoPageRead.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB748 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x1402C6DF4 (MiPfIssueCoalescedSupport.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140037180 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x14003BA80 (IopQueueThreadIrp.c)
 *     PsGetIoPriorityThread @ 0x14005A520 (PsGetIoPriorityThread.c)
 *     MmIsRecursiveIoFault @ 0x1400A7890 (MmIsRecursiveIoFault.c)
 *     MmIsFileObjectAPagingFile @ 0x1400A78B8 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400A7AE0 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDriverFlagsExtension @ 0x1400A7C18 (IopSetDriverFlagsExtension.c)
 *     IopSetDiskIoAttributionExtension @ 0x1400A94C4 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateBackpocketIrp @ 0x140292EB0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140293190 (IopAllocateReserveIrp.c)
 */

NTSTATUS __fastcall IoPageReadEx(
        PFILE_OBJECT FileObject,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        struct _IO_STATUS_BLOCK *a5,
        char a6,
        __int64 a7)
{
  unsigned __int64 v9; // r14
  char v10; // bp
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  int v12; // esi
  __int64 v13; // r12
  IRP *Irp; // rbx
  int IoPriorityThread; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // [rsp+20h] [rbp-48h]

  v22 = a6 & 1;
  v9 = (unsigned __int64)(a6 & 1) << 32;
  v10 = (v22 != 0 ? 4 : 0) | 1;
  if ( (a6 & 2) != 0 )
    v10 = v22 != 0 ? 4 : 0;
  if ( (a6 & 8) != 0 )
    v10 |= 2u;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v12 = 1027;
  v13 = (__int64)RelatedDeviceObject;
  if ( (a6 & 4) == 0 )
    v12 = 67;
  if ( (v10 & 4) != 0 )
    v13 = -1LL;
  Irp = (IRP *)IopAllocateIrpExReturn();
  if ( Irp )
    goto LABEL_10;
  if ( (unsigned int)MmIsFileObjectAPagingFile(FileObject) )
  {
    _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
    Irp = (IRP *)IopAllocateReserveIrp(v20, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
    if ( !Irp )
      return -1073741670;
  }
  else
  {
    _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
    if ( (a2->MdlFlags & 0x40) == 0 || (v12 & 0x40) == 0 )
      return -1073741670;
    LOBYTE(v21) = 1;
    Irp = (IRP *)IopAllocateBackpocketIrp(v13, (unsigned __int8)RelatedDeviceObject->StackSize, v21);
    if ( !Irp )
      return -1073741670;
  }
LABEL_10:
  if ( (unsigned int)MmIsFileObjectAPagingFile(FileObject) || (a2->MdlFlags & 0x40) != 0 && (v12 & 0x40) != 0 )
    Irp->AllocationFlags |= 0x20u;
  Irp->Flags = v12;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  if ( IoPriorityThread < 2 )
  {
    if ( (v10 & 1) == 0 || (_BYTE)v22 == 1 || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    {
      ++IoPagingReadLowPriorityCount;
    }
    else
    {
      ++IoPagingReadLowPriorityBumpedCount;
      IoPriorityThread = 2;
    }
  }
  if ( (v10 & 2) != 0 && IoPriorityThread == 2 )
    IoPriorityThread = 3;
  Irp->MdlAddress = a2;
  Irp->RequestorMode = 0;
  Irp->Flags = v12 | ((IoPriorityThread << 17) + 0x20000);
  Irp->UserEvent = a4;
  Irp->UserIosb = a5;
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = FileObject;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_BYTE *)(v16 - 72) = 3;
  *(_QWORD *)(v16 - 24) = FileObject;
  *(_DWORD *)(v16 - 64) = a2->ByteCount;
  *(_QWORD *)(v16 - 48) = *a3;
  if ( a7 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a7 + 24), Irp->Tail.Overlay.Thread, 0LL);
  else
    IoSetDiskIoAttributionFromThread(Irp, Irp->Tail.Overlay.Thread);
  if ( v9 )
    IopSetDriverFlagsExtension(Irp, v9);
  a5->Information = (ULONG_PTR)Irp;
  IopQueueThreadIrp((__int64)Irp, v17);
  if ( MmIsRecursiveIoFault() )
  {
    CurrentThread = KeGetCurrentThread();
    HIDWORD(CurrentThread[1].Timer.Header.WaitListHead.Blink) += (a2->ByteCount + 4095) >> 12;
  }
  return IofCallDriver(RelatedDeviceObject, Irp);
}
