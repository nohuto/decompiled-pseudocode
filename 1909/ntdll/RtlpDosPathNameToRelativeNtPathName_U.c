/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName_U @ 0x180025F70
 * Callers:
 *     EtwpCreateFile @ 0x180005268 (EtwpCreateFile.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x180029290 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800292F0 (RtlDosPathNameToNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180029320 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrpMapResourceFile @ 0x180059A64 (LdrpMapResourceFile.c)
 *     RtlDosLongPathNameToNtPathName_U_WithStatus @ 0x1800CCE10 (RtlDosLongPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x1800CCE40 (RtlDosLongPathNameToRelativeNtPathName_U_WithStatus.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0198 (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800276A8 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 */

NTSTATUS __fastcall RtlpDosPathNameToRelativeNtPathName_U(int a1, const WCHAR *a2, int a3, __int64 a4, __int64 a5)
{
  NTSTATUS result; // eax
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return RtlpDosPathNameToRelativeNtPathName(a1, (unsigned int)&DestinationString, 0, a3, 0LL, a4, a5);
  return result;
}
