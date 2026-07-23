/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x180061FB0
 * Callers:
 *     toupper @ 0x1800921C0 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E8B20 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     sub_18006206C @ 0x18006206C (sub_18006206C.c)
 *     sub_1800621C4 @ 0x1800621C4 (sub_1800621C4.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v5; // edx
  char v6; // cl
  ULONG *v7; // r8
  const WCHAR *v8; // r9
  ULONG v9; // r10d
  CHAR *v10; // r11

  if ( (unsigned __int8)sub_1800621C4(0LL, MaxBytesInMultiByteString, BytesInMultiByteString) )
    return sub_1800E3E40(v10, v5, v9);
  if ( NlsMbCodePageTag == v6 )
    return sub_18006206C((_DWORD)v10, v5, (_DWORD)v7, (_DWORD)v8, v9, qword_180166528, qword_180166530);
  return sub_1800E3D40(v10, v5, v7, v8, v9);
}
