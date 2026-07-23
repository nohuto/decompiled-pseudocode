/*
 * XREFs of RtlFindUnicodeSubstring @ 0x180086750
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x180086640 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     NLS_UPCASE @ 0x18001A234 (NLS_UPCASE.c)
 *     memcmp @ 0x180090C00 (memcmp.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // rbx
  size_t v5; // rsi
  wchar_t *v6; // rdi
  wchar_t *v7; // rbp
  unsigned __int16 *v8; // rsi
  signed __int64 i; // r11
  unsigned __int16 *j; // r10
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned __int16 v13; // ax
  __int16 v14; // r9
  wchar_t *v16; // rbp

  Length = SearchString->Length;
  if ( FullString->Length < SearchString->Length )
    return 0LL;
  Buffer = FullString->Buffer;
  v5 = Length;
  v6 = (wchar_t *)((char *)Buffer + FullString->Length - (unsigned __int64)Length);
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
  v8 = (wchar_t *)((char *)v7 + Length);
  if ( Buffer > v6 )
    return 0LL;
  for ( i = (char *)Buffer - (char *)v7; ; i += 2LL )
  {
    for ( j = v7; j < v8; ++j )
    {
      if ( *(unsigned __int16 *)((char *)j + i) != *j )
      {
        NLS_UPCASE(*j);
        v13 = NLS_UPCASE(*(_WORD *)(v12 + v11));
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
