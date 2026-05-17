/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x180061FB0
 * Callers:
 *     toupper @ 0x1800921C0 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E8B20 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     sub_18006206C @ 0x18006206C (sub_18006206C.c)
 *     sub_1800621C4 @ 0x1800621C4 (sub_1800621C4.c)
 */

__int64 __fastcall RtlUpcaseUnicodeToMultiByteN(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  char v4; // cl
  int v5; // r8d
  int v6; // r9d
  int v7; // r10d
  int v8; // r11d

  if ( (unsigned __int8)sub_1800621C4(0LL, a2, a3) )
    return sub_1800E3E40(v8, v3, v5, v6, v7);
  if ( NlsMbCodePageTag == v4 )
    return sub_18006206C(v8, v3, v5, v6, v7, qword_180166528, qword_180166530);
  return sub_1800E3D40(v8, v3, v5, v6, v7);
}
