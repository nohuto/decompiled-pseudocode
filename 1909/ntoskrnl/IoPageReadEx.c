/*
 * XREFs of IoPageReadEx @ 0x140094BE0
 * Callers:
 *     MiIssueHardFaultIo @ 0x140006B24 (MiIssueHardFaultIo.c)
 *     MiPageRead @ 0x140094BA4 (MiPageRead.c)
 *     IoPageRead @ 0x1401714E0 (IoPageRead.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB4A8 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x1402C6B54 (MiPfIssueCoalescedSupport.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x14003B7C0 (IopQueueThreadIrp.c)
 *     PsGetIoPriorityThread @ 0x14005A5C0 (PsGetIoPriorityThread.c)
 *     MmIsRecursiveIoFault @ 0x140094E30 (MmIsRecursiveIoFault.c)
 *     MmIsFileObjectAPagingFile @ 0x140094E58 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140095080 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDriverFlagsExtension @ 0x1400951B8 (IopSetDriverFlagsExtension.c)
 *     IopSetDiskIoAttributionExtension @ 0x14011A840 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateBackpocketIrp @ 0x140292C10 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140292EF0 (IopAllocateReserveIrp.c)
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
