/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x1406C9140
 * Callers:
 *     wcstombs @ 0x1401A2210 (wcstombs.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406C9110 (RtlxUnicodeStringToOemSize.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x14070FB40 (RtlxUnicodeStringToAnsiSize.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1406541F0 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToUTF8N @ 0x1406DF2B0 (RtlUnicodeToUTF8N.c)
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
