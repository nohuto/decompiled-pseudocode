/*
 * XREFs of FsRtlCheckLockForWriteAccess @ 0x14010DCC0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlFastCheckLockForWrite @ 0x14010DD60 (FsRtlFastCheckLockForWrite.c)
 *     IoGetRequestorProcess @ 0x14010E000 (IoGetRequestorProcess.c)
 */

BOOLEAN __stdcall FsRtlCheckLockForWriteAccess(PFILE_LOCK FileLock, PIRP Irp)
{
  _QWORD *LockInformation; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  LARGE_INTEGER ByteOffset; // rcx
  ULONG Options; // edi
  PFILE_OBJECT FileObject; // rbx
  PEPROCESS ProcessId; // rax
  LARGE_INTEGER Length; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER StartingByte; // [rsp+50h] [rbp+18h] BYREF

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation || !LockInformation[5] && !LockInformation[4] )
    return 1;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
  Length.QuadPart = CurrentStackLocation->Parameters.Read.Length;
  StartingByte = ByteOffset;
  if ( ByteOffset.QuadPart + Length.QuadPart <= *LockInformation )
    return 1;
  Options = CurrentStackLocation->Parameters.Create.Options;
  FileObject = CurrentStackLocation->FileObject;
  ProcessId = IoGetRequestorProcess(Irp);
  return FsRtlFastCheckLockForWrite(FileLock, &StartingByte, &Length, Options, FileObject, ProcessId);
}
