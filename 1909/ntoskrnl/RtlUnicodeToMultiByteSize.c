/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x1406C7990
 * Callers:
 *     wcstombs @ 0x1401A2930 (wcstombs.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406C7960 (RtlxUnicodeStringToOemSize.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x140711920 (RtlxUnicodeStringToAnsiSize.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1406672F0 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToUTF8N @ 0x1406E05C0 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // edi
  ULONG v7; // ebx
  __int64 v9; // rcx

  v6 = 0;
  if ( RtlpIsUtf8Process(0) )
  {
    if ( BytesInUnicodeString )
      RtlUnicodeToUTF8N(0LL, 0, BytesInMultiByteString, UnicodeString, BytesInUnicodeString);
    else
      *BytesInMultiByteString = 0;
  }
  else
  {
    v7 = BytesInUnicodeString >> 1;
    if ( (_BYTE)NlsMbCodePageTag )
    {
      for ( ; v7; --v7 )
      {
        v9 = *UnicodeString++;
        v6 += (HIBYTE(*(_WORD *)(NlsUnicodeToMbAnsiData + 2 * v9)) != 0) + 1;
      }
    }
    else
    {
      v6 = v7;
    }
    *BytesInMultiByteString = v6;
  }
  return 0;
}
