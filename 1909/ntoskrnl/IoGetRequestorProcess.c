/*
 * XREFs of IoGetRequestorProcess @ 0x1401088D0
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x140106834 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140107CD4 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlCheckLockForWriteAccess @ 0x140108520 (FsRtlCheckLockForWriteAccess.c)
 *     FsRtlCheckLockForReadAccess @ 0x140108720 (FsRtlCheckLockForReadAccess.c)
 *     IoGetRequestorProcessId @ 0x14019E390 (IoGetRequestorProcessId.c)
 *     FsRtlProcessFileLock @ 0x140282DA0 (FsRtlProcessFileLock.c)
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
