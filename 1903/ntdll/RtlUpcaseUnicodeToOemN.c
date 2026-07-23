/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x180062010
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x180061A30 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180061B30 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E8C30 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     sub_18006206C @ 0x18006206C (sub_18006206C.c)
 *     sub_1800621C4 @ 0x1800621C4 (sub_1800621C4.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v5; // edx
  ULONG *v6; // r8
  const WCHAR *v7; // r9
  ULONG v8; // r10d
  CHAR *v9; // r11

  LOBYTE(OemString) = 1;
  if ( (unsigned __int8)sub_1800621C4(OemString, MaxBytesInOemString, BytesInOemString) )
    return sub_1800E3E40(v9, v5, v8);
  if ( NlsMbOemCodePageTag )
    return sub_1800E3D40(v9, v5, v6, v7, v8);
  return sub_18006206C((_DWORD)v9, v5, (_DWORD)v6, (_DWORD)v7, v8, qword_180166548, qword_180166538);
}
