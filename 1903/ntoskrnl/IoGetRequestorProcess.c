/*
 * XREFs of IoGetRequestorProcess @ 0x1401098D0
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x140102F94 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140104434 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlCheckLockForWriteAccess @ 0x140109520 (FsRtlCheckLockForWriteAccess.c)
 *     FsRtlCheckLockForReadAccess @ 0x140109720 (FsRtlCheckLockForReadAccess.c)
 *     IoGetRequestorProcessId @ 0x14019DC70 (IoGetRequestorProcessId.c)
 *     FsRtlProcessFileLock @ 0x140283040 (FsRtlProcessFileLock.c)
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
