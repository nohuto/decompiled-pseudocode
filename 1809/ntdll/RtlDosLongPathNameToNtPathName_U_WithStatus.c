/*
 * XREFs of RtlDosLongPathNameToNtPathName_U_WithStatus @ 0x1800CE5A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800349B4 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

NTSTATUS __cdecl RtlDosLongPathNameToNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return RtlpDosPathNameToRelativeNtPathName_U(
           4,
           DosFileName,
           &NtFileName->Length,
           (unsigned __int64 *)FilePart,
           RelativeName);
}
