/*
 * XREFs of NtQueryDirectoryFileEx @ 0x1405FB640
 * Callers:
 *     NtQueryDirectoryFile @ 0x1406B6090 (NtQueryDirectoryFile.c)
 * Callees:
 *     BuildQueryDirectoryIrp @ 0x1405FB710 (BuildQueryDirectoryIrp.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 */

NTSTATUS __cdecl NtQueryDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG QueryFlags,
        PUNICODE_STRING FileName)
{
  NTSTATUS result; // eax
  char v11; // [rsp+80h] [rbp-28h]
  char v12; // [rsp+81h] [rbp-27h]
  IRP *Irp; // [rsp+90h] [rbp-18h]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+98h] [rbp-10h]

  result = BuildQueryDirectoryIrp(
             FileHandle,
             Event,
             ApcRoutine,
             ApcContext,
             IoStatusBlock,
             FileInformation,
             Length,
             FileInformationClass,
             QueryFlags,
             FileName);
  if ( !result )
    return IopSynchronousServiceTail(DeviceObject, Irp, v12, v11, 2);
  return result;
}
