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

__int64 __fastcall RtlUpcaseUnicodeToOemN(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  int v6; // r10d
  int v7; // r11d

  LOBYTE(a1) = 1;
  if ( (unsigned __int8)sub_1800621C4(a1, a2, a3) )
    return sub_1800E3E40(v7, v3, v4, v5, v6);
  if ( NlsMbOemCodePageTag )
    return sub_1800E3D40(v7, v3, v4, v5, v6);
  return sub_18006206C(v7, v3, v4, v5, v6, qword_180166548, qword_180166538);
}
