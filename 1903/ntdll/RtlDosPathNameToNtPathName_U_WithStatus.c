/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x180029290
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025F70 @ 0x180025F70 (sub_180025F70.c)
 */

NTSTATUS __cdecl RtlDosPathNameToNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return sub_180025F70(0, DosFileName, (int)NtFileName, (__int64)FilePart, (__int64)RelativeName);
}
