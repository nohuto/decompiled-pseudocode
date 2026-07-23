/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x1800220B0
 * Callers:
 *     RtlxOemStringToUnicodeSize @ 0x180022080 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18005F3A0 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __cdecl RtlMultiByteToUnicodeSize(
        PULONG BytesInUnicodeString,
        PCSTR MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v3; // r9d
  __int64 v5; // rax

  v3 = 0;
  if ( byte_180162797 )
  {
    if ( BytesInMultiByteString )
      RtlUTF8ToUnicodeN(0LL, 0, BytesInUnicodeString, MultiByteString, BytesInMultiByteString);
    else
      *BytesInUnicodeString = 0;
  }
  else
  {
    if ( NlsMbCodePageTag )
    {
      while ( BytesInMultiByteString )
      {
        v5 = *(unsigned __int8 *)MultiByteString;
        --BytesInMultiByteString;
        ++MultiByteString;
        if ( word_180163EE0[v5] )
        {
          if ( !BytesInMultiByteString )
          {
            v3 += 2;
            break;
          }
          --BytesInMultiByteString;
          ++MultiByteString;
        }
        v3 += 2;
      }
    }
    else
    {
      v3 = 2 * BytesInMultiByteString;
    }
    *BytesInUnicodeString = v3;
  }
  return 0;
}
