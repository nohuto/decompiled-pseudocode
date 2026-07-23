/*
 * XREFs of IoSetInformation @ 0x140702520
 * Callers:
 *     MiAttemptPageFileReduction @ 0x1402B74BC (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileExtension @ 0x140854210 (MiAttemptPageFileExtension.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x1400BC2C0 (IopQueueThreadIrp.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     IopOpenLinkOrRenameTarget @ 0x14068CBE8 (IopOpenLinkOrRenameTarget.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x14081A7EC (IopCancelAlertedRequest.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14081E180 (IopSetFileMemoryPartitionInformation.c)
 */

NTSTATUS __stdcall IoSetInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation)
{
  char v4; // r15
  char v5; // r13
  struct _KTHREAD *CurrentThread; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 Irp; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  IRP *v16; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  NTSTATUS FinalStatus; // esi
  NTSTATUS v23; // edi
  ULONG Flags; // edx
  unsigned int v25; // eax
  ULONG v26; // edx
  ULONG v27; // edx
  CCHAR v28; // dl
  BOOLEAN v29; // al
  char v30; // [rsp+30h] [rbp-40h]
  char v31[7]; // [rsp+31h] [rbp-3Fh] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-38h]
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v34[2]; // [rsp+48h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+28h]
  char v37; // [rsp+A0h] [rbp+30h]

  v4 = 0;
  Handle = 0LL;
  v5 = 0;
  v37 = 0;
  v34[0] = 0LL;
  v34[1] = 0LL;
  ObfReferenceObject(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v23 = IopAcquireFileObjectLock((char *)FileObject, 0, (FileObject->Flags & 4) != 0, v31);
      if ( v31[0] )
      {
        ObfDereferenceObject(FileObject);
        return v23;
      }
    }
    else
    {
      ObfReferenceObject(FileObject);
    }
    KeResetEvent(&FileObject->Event);
    v4 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
  }
  v30 = v4;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  switch ( FileInformationClass )
  {
    case FileRenameInformationBypassAccessCheck:
      FileInformationClass = FileRenameInformation;
LABEL_41:
      v5 = 1;
      break;
    case FileRenameInformationExBypassAccessCheck:
      FileInformationClass = FileRenameInformationEx;
      goto LABEL_41;
    case FileLinkInformationBypassAccessCheck:
      FileInformationClass = FileLinkInformation;
      goto LABEL_41;
    case FileLinkInformationExBypassAccessCheck:
      FileInformationClass = FileLinkInformationEx;
      goto LABEL_41;
    case FileCaseSensitiveInformationForceAccessCheck:
      FileInformationClass = FileCaseSensitiveInformation;
      v37 = 1;
      break;
  }
  LOBYTE(v11) = RelatedDeviceObject->StackSize;
  LOBYTE(v12) = v4 ^ 1;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v11, v12, retaddr);
  v16 = (IRP *)Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup(FileObject, 0LL);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = FileObject;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(Irp + 64) = 0;
  if ( v4 )
  {
    *(_BYTE *)(Irp + 71) |= 2u;
    p_Event = 0LL;
  }
  else
  {
    *(_DWORD *)(Irp + 16) = 4;
    p_Event = &Event;
  }
  v16->UserEvent = p_Event;
  CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
  v16->UserIosb = (PIO_STATUS_BLOCK)v34;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = FileObject;
  v16->Flags |= 0x10u;
  v16->AssociatedIrp.MasterIrp = (struct _IRP *)FileInformation;
  CurrentStackLocation[-1].Parameters.Read.Length = Length;
  CurrentStackLocation[-1].Parameters.Create.Options = FileInformationClass;
  if ( v5 )
  {
    CurrentStackLocation[-1].Flags |= 1u;
  }
  else if ( v37 )
  {
    CurrentStackLocation[-1].Flags |= 1u;
  }
  IopQueueThreadIrp((__int64)v16, v14, v15);
  if ( FileInformationClass == FileModeInformation )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 8) == 0 )
    {
      if ( (*(_DWORD *)FileInformation & 2) != 0 )
        Flags |= 0x10u;
      else
        Flags &= ~0x10u;
      FileObject->Flags = Flags;
    }
    v25 = Flags & 0xFFFFFFDF;
    v26 = Flags | 0x20;
    if ( (*(_DWORD *)FileInformation & 4) == 0 )
      v26 = v25;
    FileObject->Flags = v26;
    if ( (*(_DWORD *)FileInformation & 2) != 0 )
    {
      if ( (*(_DWORD *)FileInformation & 0x10) != 0 )
        v27 = v26 | 4;
      else
        v27 = v26 & 0xFFFFFFFB;
      FileObject->Flags = v27;
    }
    --v16->CurrentLocation;
    FinalStatus = 0;
    --v16->Tail.Overlay.CurrentStackLocation;
    v28 = 0;
    v16->IoStatus.Status = 0;
    v16->IoStatus.Information = 0LL;
    goto LABEL_70;
  }
  v19 = (unsigned int)(FileInformationClass - 10);
  if ( (unsigned int)v19 <= 0x3E )
  {
    v20 = 0x4080000000000003LL;
    if ( _bittest64(&v20, v19) )
    {
      if ( FileInformationClass != FileMoveClusterInformation )
      {
        if ( FileInformationClass == FileRenameInformationEx || FileInformationClass == FileLinkInformationEx )
          v29 = *(_BYTE *)FileInformation & 1;
        else
          v29 = *(_BYTE *)FileInformation;
        CurrentStackLocation[-1].Parameters.SetFile.ReplaceIfExists = v29;
        goto LABEL_65;
      }
LABEL_64:
      CurrentStackLocation[-1].Parameters.Create.EaLength = *(_DWORD *)FileInformation;
LABEL_65:
      if ( *((_WORD *)FileInformation + 10) != 92 && !*((_QWORD *)FileInformation + 1) )
        goto LABEL_22;
      FinalStatus = IopOpenLinkOrRenameTarget(&Handle, (__int64)v16, (__int64)FileInformation, FileObject);
      if ( FinalStatus >= 0 )
        goto LABEL_22;
      v28 = 2;
      goto LABEL_69;
    }
  }
  if ( FileInformationClass == FileMoveClusterInformation )
    goto LABEL_64;
  if ( FileInformationClass == FileMemoryPartitionInformation )
  {
    FinalStatus = IopSetFileMemoryPartitionInformation(FileObject, FileInformation, Length);
    v16->IoStatus.Status = FinalStatus;
    v28 = 0;
    v16->IoStatus.Information = 0LL;
LABEL_69:
    --v16->CurrentLocation;
    --v16->Tail.Overlay.CurrentStackLocation;
LABEL_70:
    IofCompleteRequest(v16, v28);
    goto LABEL_23;
  }
LABEL_22:
  FinalStatus = IofCallDriver(DeviceObject, v16);
LABEL_23:
  if ( v30 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        IopCancelAlertedRequest(&FileObject->Event, v16);
      FinalStatus = FileObject->FinalStatus;
    }
    _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 0);
    if ( FileObject->Waiters )
      KeSetEvent(&FileObject->Lock, 0, 0);
    ObfDereferenceObject(FileObject);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else if ( FinalStatus == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    FinalStatus = v34[0];
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return FinalStatus;
}
