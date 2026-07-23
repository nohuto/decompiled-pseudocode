/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x180062400
 * Callers:
 *     RtlxUnicodeStringToOemSize @ 0x1800621F0 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x180062330 (RtlUnicodeStringToAnsiString.c)
 *     wcstombs @ 0x1800928E0 (wcstombs.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x180054310 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v3; // r9d
  ULONG v4; // r8d
  __int64 v6; // rax

  v3 = 0;
  if ( byte_180162797 )
  {
    if ( BytesInUnicodeString )
      RtlUnicodeToUTF8N(0LL, 0, BytesInMultiByteString, UnicodeString, BytesInUnicodeString);
    else
      *BytesInMultiByteString = 0;
  }
  else
  {
    v4 = BytesInUnicodeString >> 1;
    if ( NlsMbCodePageTag )
    {
      for ( ; v4; --v4 )
      {
        v6 = *UnicodeString++;
        v3 += (HIBYTE(*(_WORD *)(qword_180166950 + 2 * v6)) != 0) + 1;
      }
    }
    else
    {
      v3 = v4;
    }
    *BytesInMultiByteString = v3;
  }
  return 0;
}
