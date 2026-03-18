/*
 * XREFs of IoGetRequestorProcess @ 0x14010DF60
 * Callers:
 *     FsRtlCheckLockForWriteAccess @ 0x14010DC20 (FsRtlCheckLockForWriteAccess.c)
 *     FsRtlCheckLockForReadAccess @ 0x14010DDE0 (FsRtlCheckLockForReadAccess.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14012EC44 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14012EF80 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlProcessFileLock @ 0x14013F9B0 (FsRtlProcessFileLock.c)
 *     IoGetRequestorProcessId @ 0x140193D00 (IoGetRequestorProcessId.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoGetRequestorProcess(PIRP Irp)
{
  PETHREAD Thread; // rdx
  CCHAR ApcEnvironment; // al

  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) != 0 )
    return (PEPROCESS)(Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL);
  if ( !Thread )
    return 0LL;
  ApcEnvironment = Irp->ApcEnvironment;
  if ( !ApcEnvironment )
    return Thread->Process;
  if ( ApcEnvironment == 1 )
    return Thread->ApcState.Process;
  else
    return 0LL;
}
