/*
 * XREFs of NtDeviceIoControlFile @ 0x140691970
 * Callers:
 *     PopFlushVolumeWorker @ 0x14056D9E0 (PopFlushVolumeWorker.c)
 * Callees:
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 */

NTSTATUS __stdcall NtDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  char v13; // [rsp+50h] [rbp-18h]

  v13 = 1;
  return IopXxxControlFile(
           FileHandle,
           Event,
           (LARGE_INTEGER)ApcRoutine,
           (__int64)ApcContext,
           IoStatusBlock,
           IoControlCode,
           (char *)InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           v13);
}
