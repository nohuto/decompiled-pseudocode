/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x1405ABF50
 * Callers:
 *     RtlxAnsiStringToUnicodeSize @ 0x1405ABF20 (RtlxAnsiStringToUnicodeSize.c)
 *     RtlxOemStringToUnicodeSize @ 0x1406F8450 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x1406BEB10 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeSize(
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v3; // r9d
  __int64 v5; // rax

  v3 = 0;
  if ( BYTE1(NlsMbCodePageTag) )
  {
    if ( BytesInMultiByteString )
      RtlUTF8ToUnicodeN(0LL, 0, BytesInUnicodeString, MultiByteString, BytesInMultiByteString);
    else
      *BytesInUnicodeString = 0;
  }
  else
  {
    if ( (_BYTE)NlsMbCodePageTag )
    {
      while ( BytesInMultiByteString )
      {
        v5 = *(unsigned __int8 *)MultiByteString;
        --BytesInMultiByteString;
        ++MultiByteString;
        if ( NlsLeadByteInfoTable[v5] )
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
