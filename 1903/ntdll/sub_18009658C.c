/*
 * XREFs of sub_18009658C @ 0x18009658C
 * Callers:
 *     sub_180096644 @ 0x180096644 (sub_180096644.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x180062440 (RtlUnicodeToMultiByteN.c)
 *     _errno @ 0x180084320 (_errno.c)
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 */

__int64 __fastcall sub_18009658C(ULONG *a1, CHAR *a2, unsigned __int64 a3, WCHAR a4)
{
  ULONG BytesInMultiByteString; // [rsp+48h] [rbp+10h] BYREF
  WCHAR UnicodeString; // [rsp+58h] [rbp+20h] BYREF

  UnicodeString = a4;
  if ( a2 || !a3 )
  {
    if ( a1 )
      *a1 = -1;
    if ( a3 > 0x7FFFFFFF )
    {
      sub_18008C6D8();
      return 22LL;
    }
    if ( a2 )
    {
      if ( RtlUnicodeToMultiByteN(a2, a3, &BytesInMultiByteString, &UnicodeString, 2u) < 0 )
      {
        *errno() = 42;
        return (unsigned int)*errno();
      }
      if ( a1 )
        *a1 = BytesInMultiByteString;
    }
    else if ( a1 )
    {
      *a1 = dword_18015FF34;
    }
  }
  else if ( a1 )
  {
    *a1 = 0;
  }
  return 0LL;
}
