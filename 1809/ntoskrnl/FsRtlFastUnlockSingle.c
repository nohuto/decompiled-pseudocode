/*
 * XREFs of FsRtlFastUnlockSingle @ 0x14008C3E0
 * Callers:
 *     FsRtlProcessFileLock @ 0x14013FAD0 (FsRtlProcessFileLock.c)
 * Callees:
 *     FsRtlFastUnlockSingleShared @ 0x14008C1B8 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14008C4C0 (FsRtlFastUnlockSingleExclusive.c)
 */

NTSTATUS __stdcall FsRtlFastUnlockSingle(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        LARGE_INTEGER *FileOffset,
        PLARGE_INTEGER Length,
        PEPROCESS ProcessId,
        ULONG Key,
        PVOID Context,
        BOOLEAN AlreadySynchronized)
{
  PVOID LockInformation; // r10

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation )
    return -1073741698;
  if ( (unsigned __int64)(Length->QuadPart + FileOffset->QuadPart - 1) < FileOffset->QuadPart && Length->QuadPart )
    return -1073741407;
  if ( (unsigned int)FsRtlFastUnlockSingleExclusive(
                       (_DWORD)LockInformation,
                       (_DWORD)FileObject,
                       (_DWORD)FileOffset,
                       (_DWORD)Length,
                       (__int64)ProcessId,
                       Key,
                       (__int64)Context,
                       0,
                       1) )
    return FsRtlFastUnlockSingleShared(
             (__int64)FileLock->LockInformation,
             (__int64)FileObject,
             (unsigned __int64 *)&FileOffset->QuadPart,
             Length,
             (__int64)ProcessId,
             Key,
             (__int64)Context,
             0,
             1);
  return 0;
}
