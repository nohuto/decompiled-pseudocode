/*
 * XREFs of RtlDosLongPathNameToNtPathName_U_WithStatus @ 0x1800CCD50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025F70 @ 0x180025F70 (sub_180025F70.c)
 */

NTSTATUS __cdecl RtlDosLongPathNameToNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return sub_180025F70(4, DosFileName, (int)NtFileName, (__int64)FilePart, (__int64)RelativeName);
}
