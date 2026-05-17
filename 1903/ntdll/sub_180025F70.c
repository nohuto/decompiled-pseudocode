/*
 * XREFs of sub_180025F70 @ 0x180025F70
 * Callers:
 *     sub_180005268 @ 0x180005268 (sub_180005268.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x180029290 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800292F0 (RtlDosPathNameToNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180029320 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     sub_1800599C4 @ 0x1800599C4 (sub_1800599C4.c)
 *     RtlDosLongPathNameToNtPathName_U_WithStatus @ 0x1800CCD50 (RtlDosLongPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x1800CCD80 (RtlDosLongPathNameToRelativeNtPathName_U_WithStatus.c)
 *     sub_1800E00A8 @ 0x1800E00A8 (sub_1800E00A8.c)
 * Callees:
 *     sub_1800276A8 @ 0x1800276A8 (sub_1800276A8.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall sub_180025F70(int a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(v9, a2);
  if ( (int)result >= 0 )
    return sub_1800276A8(a1, (unsigned int)v9, 0, a3, 0LL, a4, a5);
  return result;
}
