/*
 * XREFs of NtSetQuotaInformationFile @ 0x140858630
 * Callers:
 *     <none>
 * Callees:
 *     IopSetEaOrQuotaInformationFile @ 0x140854290 (IopSetEaOrQuotaInformationFile.c)
 */

NTSTATUS __stdcall NtSetQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length)
{
  return IopSetEaOrQuotaInformationFile(FileHandle, (unsigned __int64)IoStatusBlock, Buffer, Length);
}
