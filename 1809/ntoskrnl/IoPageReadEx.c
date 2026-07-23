/*
 * XREFs of IoPageReadEx @ 0x1400DE7C0
 * Callers:
 *     MiIssueHardFaultIo @ 0x14001B5C8 (MiIssueHardFaultIo.c)
 *     MiPageRead @ 0x1400DE78C (MiPageRead.c)
 *     IoPageRead @ 0x140160720 (IoPageRead.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4558 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x1402AF194 (MiPfIssueCoalescedSupport.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x1400BC2C0 (IopQueueThreadIrp.c)
 *     MmIsRecursiveIoFault @ 0x1400DE9E0 (MmIsRecursiveIoFault.c)
 *     MmIsFileObjectAPagingFile @ 0x1400DEA08 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400DEC40 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x1400DF5F0 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateBackpocketIrp @ 0x14027E610 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x14027E8F0 (IopAllocateReserveIrp.c)
 */

NTSTATUS __fastcall IoPageReadEx(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        struct _IO_STATUS_BLOCK *a5,
        char a6,
        __int64 a7)
{
  unsigned __int8 v10; // r15
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  __int64 v12; // rdx
  int v13; // esi
  IRP *Irp; // rbx
  int IoPriorityThread; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 ReserveIrp; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v10 = ((a6 & 2) == 0) | 2;
  if ( (a6 & 8) == 0 )
    v10 = (a6 & 2) == 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v12) = RelatedDeviceObject->StackSize;
  v13 = (a6 & 4) != 0 ? 1027 : 67;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v12, 0LL, retaddr);
  if ( Irp )
    goto LABEL_4;
  if ( (unsigned int)MmIsFileObjectAPagingFile(a1) )
  {
    _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
    LOBYTE(v21) = RelatedDeviceObject->StackSize;
    ReserveIrp = IopAllocateReserveIrp(v22, v21, 0LL);
  }
  else
  {
    _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
    if ( (a2->MdlFlags & 0x40) == 0 || (v13 & 0x40) == 0 )
      return -1073741670;
    LOBYTE(v21) = RelatedDeviceObject->StackSize;
    LOBYTE(v23) = 1;
    ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v21, v23);
  }
  Irp = (IRP *)ReserveIrp;
  if ( !ReserveIrp )
    return -1073741670;
LABEL_4:
  if ( (unsigned int)MmIsFileObjectAPagingFile(a1) || (a2->MdlFlags & 0x40) != 0 && (v13 & 0x40) != 0 )
    Irp->AllocationFlags |= 0x20u;
  Irp->Flags = v13;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  if ( IoPriorityThread < 2 )
  {
    if ( (v10 & 1) == 0 || (a6 & 1) == 1 || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    {
      ++IoPagingReadLowPriorityCount;
    }
    else
    {
      ++IoPagingReadLowPriorityBumpedCount;
      IoPriorityThread = 2;
    }
  }
  if ( v10 >= 2u && IoPriorityThread == 2 )
    IoPriorityThread = 3;
  Irp->MdlAddress = a2;
  Irp->RequestorMode = 0;
  Irp->Flags = v13 | ((IoPriorityThread << 17) + 0x20000);
  Irp->UserIosb = a5;
  Irp->UserEvent = a4;
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_BYTE *)(v16 - 72) = 3;
  *(_QWORD *)(v16 - 24) = a1;
  *(_DWORD *)(v16 - 64) = a2->ByteCount;
  *(_QWORD *)(v16 - 48) = *a3;
  if ( a7 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a7 + 24), Irp->Tail.Overlay.Thread, 0LL);
  else
    IoSetDiskIoAttributionFromThread(Irp, Irp->Tail.Overlay.Thread);
  a5->Information = (ULONG_PTR)Irp;
  IopQueueThreadIrp((__int64)Irp, v17, v18);
  if ( MmIsRecursiveIoFault() )
  {
    CurrentThread = KeGetCurrentThread();
    HIDWORD(CurrentThread[1].Timer.Header.WaitListHead.Blink) += (a2->ByteCount + 4095) >> 12;
  }
  return IofCallDriver(RelatedDeviceObject, Irp);
}
