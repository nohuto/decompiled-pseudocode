/*
 * XREFs of NtCreatePagingFile @ 0x14074BFA0
 * Callers:
 *     <none>
 * Callees:
 *     MiCreatePagingFile @ 0x14074BFD8 (MiCreatePagingFile.c)
 */

NTSTATUS __stdcall NtCreatePagingFile(
        PUNICODE_STRING FileName,
        PLARGE_INTEGER InitialSize,
        PLARGE_INTEGER MaxiumSize,
        ULONG Reserved)
{
  ULONG v4; // r10d

  v4 = Reserved;
  LOBYTE(Reserved) = KeGetCurrentThread()->PreviousMode;
  return MiCreatePagingFile(FileName, InitialSize, MaxiumSize, Reserved, v4, &MiSystemPartition);
}
