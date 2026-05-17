/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName_U @ 0x1800349B4
 * Callers:
 *     LdrpMapResourceFile @ 0x18002A918 (LdrpMapResourceFile.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180034930 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x180034960 (RtlDosPathNameToNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x180034990 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     EtwpCreateFile @ 0x180051BEC (EtwpCreateFile.c)
 *     RtlDosLongPathNameToNtPathName_U_WithStatus @ 0x1800CE5A0 (RtlDosLongPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x1800CE5D0 (RtlDosLongPathNameToRelativeNtPathName_U_WithStatus.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E25E8 (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18000D640 (RtlpDosPathNameToRelativeNtPathName.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName_U(
        int a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int64 *a4,
        _DWORD *a5)
{
  __int64 result; // rax
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx((__int64)&v9, a2);
  if ( (int)result >= 0 )
    return RtlpDosPathNameToRelativeNtPathName(a1, &v9, 0LL, a3, 0LL, a4, a5);
  return result;
}
