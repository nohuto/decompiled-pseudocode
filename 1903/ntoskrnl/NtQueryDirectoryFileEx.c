/*
 * XREFs of NtQueryDirectoryFileEx @ 0x1406790B0
 * Callers:
 *     NtQueryDirectoryFile @ 0x140679020 (NtQueryDirectoryFile.c)
 * Callees:
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x140679180 (BuildQueryDirectoryIrp.c)
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
  __int64 v13; // [rsp+88h] [rbp-20h]
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
    return IopSynchronousServiceTail(DeviceObject, Irp, v13, 1, v12, v11, 2u);
  return result;
}
