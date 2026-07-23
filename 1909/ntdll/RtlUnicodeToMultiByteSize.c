/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x1800624A0
 * Callers:
 *     RtlxUnicodeStringToOemSize @ 0x180062290 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x1800623D0 (RtlUnicodeStringToAnsiString.c)
 *     wcstombs @ 0x180092F80 (wcstombs.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x1800543B0 (RtlUnicodeToUTF8N.c)
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
  if ( NlsActiveCodePageIsUTF8 )
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
        v3 += (HIBYTE(*(_WORD *)(NlsUnicodeToMbAnsiData + 2 * v6)) != 0) + 1;
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
