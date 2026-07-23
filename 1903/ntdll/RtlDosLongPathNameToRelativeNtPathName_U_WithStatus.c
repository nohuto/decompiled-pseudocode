/*
 * XREFs of RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x1800CCD80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025F70 @ 0x180025F70 (sub_180025F70.c)
 */

NTSTATUS __cdecl RtlDosLongPathNameToRelativeNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return sub_180025F70(6, DosFileName, (int)NtFileName, (__int64)FilePart, (__int64)RelativeName);
}
