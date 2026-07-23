/*
 * XREFs of NtOpenFile @ 0x14060C9C0
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x1406699D8 (PfSnGetPrefetchInstructions.c)
 *     RtlpSysVolTakeOwnership @ 0x1408976E0 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     IopCreateFile @ 0x14060CAC0 (IopCreateFile.c)
 */

NTSTATUS __stdcall NtOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  SIZE_T v7; // [rsp+50h] [rbp-38h]

  LODWORD(v7) = 0;
  return IopCreateFile(
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           0LL,
           0,
           ShareAccess,
           1,
           OpenOptions,
           0LL,
           v7,
           0,
           0LL,
           0,
           32,
           0LL);
}
