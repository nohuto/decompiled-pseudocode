/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18000C170
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18000D640 (RtlpDosPathNameToRelativeNtPathName.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName_U_WithStatus(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx((__int64)v8, a1);
  if ( (int)result >= 0 )
    return RtlpDosPathNameToRelativeNtPathName(2, (unsigned int)v8, 0, a2, 0LL, a3, a4);
  return result;
}
