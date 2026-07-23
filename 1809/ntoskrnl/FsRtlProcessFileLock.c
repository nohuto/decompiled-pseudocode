/*
 * XREFs of FsRtlProcessFileLock @ 0x14013FAD0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlFastUnlockSingle @ 0x14008C3E0 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateLock @ 0x14008C8E0 (FsRtlPrivateLock.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     IoGetRequestorProcess @ 0x14010E000 (IoGetRequestorProcess.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14012ED34 (FsRtlPrivateFastUnlockAll.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall FsRtlProcessFileLock(PFILE_LOCK FileLock, PIRP Irp, PVOID Context)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  IRP *v7; // rcx
  struct _KPROCESS *ProcessId; // rax
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine; // rax
  struct _KPROCESS *v13; // rax
  struct _KPROCESS *v14; // rax
  BOOLEAN v15; // di
  BOOLEAN v16; // bl
  struct _KPROCESS *RequestorProcess; // rax
  struct _IO_STATUS_BLOCK Iosb; // [rsp+60h] [rbp-28h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Iosb.Information = 0LL;
  v7 = Irp;
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 1u:
      v15 = CurrentStackLocation->Flags & 1;
      v16 = (CurrentStackLocation->Flags & 2) != 0;
      FileOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
      RequestorProcess = IoGetRequestorProcess(Irp);
      FsRtlPrivateLock(
        FileLock,
        CurrentStackLocation->FileObject,
        &FileOffset,
        CurrentStackLocation->Parameters.LockControl.Length,
        RequestorProcess,
        CurrentStackLocation->Parameters.Create.Options,
        v15,
        v16,
        &Iosb,
        Irp,
        Context,
        0);
      return Iosb.Status;
    case 2u:
      FileOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
      ProcessId = IoGetRequestorProcess(Irp);
      v9 = FsRtlFastUnlockSingle(
             FileLock,
             CurrentStackLocation->FileObject,
             &FileOffset,
             CurrentStackLocation->Parameters.LockControl.Length,
             ProcessId,
             CurrentStackLocation->Parameters.Create.Options,
             Context,
             0);
      break;
    case 3u:
      v14 = IoGetRequestorProcess(Irp);
      v9 = FsRtlPrivateFastUnlockAll(
             (__int64)FileLock,
             (_RTL_SPLAY_LINKS *)CurrentStackLocation->FileObject,
             v14,
             0,
             0,
             (__int64)Context);
      break;
    case 4u:
      v13 = IoGetRequestorProcess(Irp);
      v9 = FsRtlPrivateFastUnlockAll(
             (__int64)FileLock,
             (_RTL_SPLAY_LINKS *)CurrentStackLocation->FileObject,
             v13,
             CurrentStackLocation->Parameters.Create.Options,
             1,
             (__int64)Context);
      break;
    default:
      v10 = -1073741808;
      Irp->IoStatus.Status = -1073741808;
      goto LABEL_6;
  }
  v10 = v9;
  CompleteLockIrpRoutine = FileLock->CompleteLockIrpRoutine;
  Irp->IoStatus.Status = v10;
  if ( CompleteLockIrpRoutine )
    return ((__int64 (__fastcall *)(PVOID, PIRP))CompleteLockIrpRoutine)(Context, Irp);
  v7 = Irp;
LABEL_6:
  IofCompleteRequest(v7, 1);
  return v10;
}
