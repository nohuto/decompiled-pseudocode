/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1800860B0
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x180085FA0 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     sub_18001A234 @ 0x18001A234 (sub_18001A234.c)
 *     memcmp @ 0x180090560 (memcmp.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  USHORT Length; // ax
  PWCH Buffer; // rbx
  size_t v5; // rsi
  WCHAR *v6; // rdi
  PWCH v7; // rbp
  unsigned __int16 *v8; // rsi
  signed __int64 i; // r11
  unsigned __int16 *j; // r10
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned __int16 v13; // ax
  __int16 v14; // r9
  PWCH v16; // rbp

  Length = SearchString->Length;
  if ( FullString->Length < SearchString->Length )
    return 0LL;
  Buffer = FullString->Buffer;
  v5 = Length;
  v6 = (PWCH)((char *)Buffer + FullString->Length - (unsigned __int64)Length);
  if ( !CaseInSensitive )
  {
    if ( Buffer <= v6 )
    {
      v16 = SearchString->Buffer;
      while ( memcmp(Buffer, v16, v5) )
      {
        if ( ++Buffer > v6 )
          return 0LL;
      }
      return Buffer;
    }
    return 0LL;
  }
  v7 = SearchString->Buffer;
  v8 = (PWCH)((char *)v7 + Length);
  if ( Buffer > v6 )
    return 0LL;
  for ( i = (char *)Buffer - (char *)v7; ; i += 2LL )
  {
    for ( j = v7; j < v8; ++j )
    {
      if ( *(unsigned __int16 *)((char *)j + i) != *j )
      {
        sub_18001A234(*j);
        v13 = sub_18001A234(*(_WORD *)(v12 + v11));
        if ( v13 != v14 )
          break;
      }
    }
    if ( j == v8 )
      break;
    if ( ++Buffer > v6 )
      return 0LL;
  }
  return Buffer;
}
