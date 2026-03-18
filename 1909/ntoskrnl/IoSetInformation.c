/*
 * XREFs of IoSetInformation @ 0x1406EDE60
 * Callers:
 *     MiAttemptPageFileReduction @ 0x1402CD468 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileExtension @ 0x14088C478 (MiAttemptPageFileExtension.c)
 *     PopDeleteHiberFile @ 0x1408A7724 (PopDeleteHiberFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IopReleaseFileObjectLock @ 0x14003B5C0 (IopReleaseFileObjectLock.c)
 *     IopQueueThreadIrp @ 0x14003B7C0 (IopQueueThreadIrp.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406DF314 (IopOpenLinkOrRenameTarget.c)
 *     IopAllocateIrpCleanup @ 0x140852D34 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x140852F5C (IopCancelAlertedRequest.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140856728 (IopSetFileMemoryPartitionInformation.c)
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
  char v10; // bl
  _KLOCK_ENTRY *v11; // rax
  __int64 Irp; // rax
  __int64 v13; // rdx
  IRP *v14; // rbx
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  ULONG v17; // eax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  NTSTATUS FinalStatus; // esi
  NTSTATUS v22; // ebx
  ULONG Flags; // edx
  unsigned int v24; // eax
  ULONG v25; // edx
  ULONG v26; // edx
  CCHAR v27; // dl
  BOOLEAN v28; // al
  char v29; // [rsp+30h] [rbp-40h]
  char v30; // [rsp+31h] [rbp-3Fh]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+38h] [rbp-38h]
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v33[2]; // [rsp+48h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  __int64 v35; // [rsp+A0h] [rbp+30h] BYREF
  ULONG v36; // [rsp+B0h] [rbp+40h]

  v36 = Length;
  v4 = 0;
  memset(&Event, 0, sizeof(Event));
  v5 = 0;
  v33[0] = 0LL;
  v33[1] = 0LL;
  Handle = 0LL;
  v29 = 0;
  ObfReferenceObject(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (FileObject->Flags & 4) != 0;
    --CurrentThread->KernelApcDisable;
    v11 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
    LOBYTE(v35) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      v22 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, 0, v10, v11, &v35);
      if ( (_BYTE)v35 )
      {
        ObfDereferenceObject(FileObject);
        return v22;
      }
    }
    else
    {
      if ( v11 )
        v11->AcquiredByte |= 1u;
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
  DeviceObject = IoGetRelatedDeviceObject(FileObject);
  switch ( FileInformationClass )
  {
    case FileRenameInformationBypassAccessCheck:
      FileInformationClass = FileRenameInformation;
LABEL_38:
      v5 = 1;
      break;
    case FileRenameInformationExBypassAccessCheck:
      FileInformationClass = FileRenameInformationEx;
      goto LABEL_38;
    case FileLinkInformationBypassAccessCheck:
      FileInformationClass = FileLinkInformation;
      goto LABEL_38;
    case FileLinkInformationExBypassAccessCheck:
      FileInformationClass = FileLinkInformationEx;
      goto LABEL_38;
    case FileCaseSensitiveInformationForceAccessCheck:
      FileInformationClass = FileCaseSensitiveInformation;
      v29 = 1;
      break;
  }
  Irp = IopAllocateIrpExReturn();
  v14 = (IRP *)Irp;
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
  v14->UserEvent = p_Event;
  CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
  v14->UserIosb = (PIO_STATUS_BLOCK)v33;
  v17 = v36;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = FileObject;
  v14->Flags |= 0x10u;
  v14->AssociatedIrp.MasterIrp = (struct _IRP *)FileInformation;
  CurrentStackLocation[-1].Parameters.Read.Length = v17;
  CurrentStackLocation[-1].Parameters.Create.Options = FileInformationClass;
  if ( v5 )
  {
    CurrentStackLocation[-1].Flags |= 1u;
  }
  else if ( v29 )
  {
    CurrentStackLocation[-1].Flags |= 1u;
  }
  IopQueueThreadIrp((__int64)v14, v13);
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
    v24 = Flags & 0xFFFFFFDF;
    v25 = Flags | 0x20;
    if ( (*(_DWORD *)FileInformation & 4) == 0 )
      v25 = v24;
    FileObject->Flags = v25;
    if ( (*(_DWORD *)FileInformation & 2) != 0 )
    {
      if ( (*(_DWORD *)FileInformation & 0x10) != 0 )
        v26 = v25 | 4;
      else
        v26 = v25 & 0xFFFFFFFB;
      FileObject->Flags = v26;
    }
    --v14->CurrentLocation;
    FinalStatus = 0;
    --v14->Tail.Overlay.CurrentStackLocation;
    v27 = 0;
    v14->IoStatus.Status = 0;
    v14->IoStatus.Information = 0LL;
    goto LABEL_68;
  }
  v18 = (unsigned int)(FileInformationClass - 10);
  if ( (unsigned int)v18 <= 0x3E )
  {
    v19 = 0x4080000000000003LL;
    if ( _bittest64(&v19, v18) )
    {
      if ( FileInformationClass != FileMoveClusterInformation )
      {
        if ( FileInformationClass == FileRenameInformationEx || FileInformationClass == FileLinkInformationEx )
          v28 = *(_BYTE *)FileInformation & 1;
        else
          v28 = *(_BYTE *)FileInformation;
        CurrentStackLocation[-1].Parameters.SetFile.ReplaceIfExists = v28;
        goto LABEL_63;
      }
LABEL_62:
      CurrentStackLocation[-1].Parameters.Create.EaLength = *(_DWORD *)FileInformation;
LABEL_63:
      if ( *((_WORD *)FileInformation + 10) != 92 && !*((_QWORD *)FileInformation + 1) )
        goto LABEL_24;
      FinalStatus = IopOpenLinkOrRenameTarget(&Handle, (__int64)v14, (__int64)FileInformation, FileObject);
      if ( FinalStatus >= 0 )
        goto LABEL_24;
      v27 = 2;
      goto LABEL_67;
    }
  }
  if ( FileInformationClass == FileMoveClusterInformation )
    goto LABEL_62;
  if ( FileInformationClass == FileMemoryPartitionInformation )
  {
    FinalStatus = IopSetFileMemoryPartitionInformation(FileObject, FileInformation, v36);
    v14->IoStatus.Status = FinalStatus;
    v27 = 0;
    v14->IoStatus.Information = 0LL;
LABEL_67:
    --v14->CurrentLocation;
    --v14->Tail.Overlay.CurrentStackLocation;
LABEL_68:
    IofCompleteRequest(v14, v27);
    goto LABEL_25;
  }
LABEL_24:
  FinalStatus = IofCallDriver(DeviceObject, v14);
LABEL_25:
  if ( v30 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        IopCancelAlertedRequest(&FileObject->Event, v14);
      FinalStatus = FileObject->FinalStatus;
    }
    IopReleaseFileObjectLock((volatile __int32 *)&FileObject->Type);
  }
  else if ( FinalStatus == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    FinalStatus = v33[0];
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return FinalStatus;
}
