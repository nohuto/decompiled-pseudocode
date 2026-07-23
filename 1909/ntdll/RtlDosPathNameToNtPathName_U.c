/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x1800292F0
 * Callers:
 *     LdrpResValidateFilePath @ 0x1800E332C (LdrpResValidateFilePath.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180025F70 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

BOOLEAN __cdecl RtlDosPathNameToNtPathName_U(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return RtlpDosPathNameToRelativeNtPathName_U(
           0,
           DosFileName,
           (int)NtFileName,
           (__int64)FilePart,
           (__int64)RelativeName) >= 0;
}
