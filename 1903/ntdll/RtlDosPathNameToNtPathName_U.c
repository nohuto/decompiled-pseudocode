/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x1800292F0
 * Callers:
 *     sub_1800E323C @ 0x1800E323C (sub_1800E323C.c)
 * Callees:
 *     sub_180025F70 @ 0x180025F70 (sub_180025F70.c)
 */

BOOLEAN __cdecl RtlDosPathNameToNtPathName_U(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return sub_180025F70(0, DosFileName, (int)NtFileName, (__int64)FilePart, (__int64)RelativeName) >= 0;
}
