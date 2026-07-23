/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1800EBB40
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x1800EBCB0 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     memcmp @ 0x180093CC0 (memcmp.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  unsigned __int16 Length; // ax
  WCHAR *Buffer; // rbx
  size_t v5; // rsi
  WCHAR *v6; // rdi
  wchar_t *v7; // r11
  unsigned __int16 *v8; // rsi
  signed __int64 i; // r10
  wchar_t *j; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdx
  wchar_t *v14; // rbp

  Length = SearchString->Length;
  if ( FullString->Length >= SearchString->Length )
  {
    Buffer = FullString->Buffer;
    v5 = Length;
    v6 = (WCHAR *)((char *)Buffer + FullString->Length - (unsigned __int64)Length);
    if ( CaseInSensitive )
    {
      v7 = SearchString->Buffer;
      v8 = (wchar_t *)((char *)v7 + Length);
      if ( Buffer <= v6 )
      {
        for ( i = (char *)Buffer - (char *)v7; ; i += 2LL )
        {
          for ( j = v7; j < v8; ++j )
          {
            v11 = *(wchar_t *)((char *)j + i);
            v12 = *j;
            if ( (_DWORD)v11 != (_DWORD)v12 )
            {
              if ( (unsigned int)v11 >= 0x61 )
              {
                if ( (unsigned int)v11 > 0x7A )
                  LODWORD(v11) = (unsigned __int16)(v11
                                                  + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                             + 2
                                                             * ((v11 & 0xF)
                                                              + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                    + 2LL
                                                                                    * (((unsigned __int8)v11 >> 4)
                                                                                     + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v11 >> 8)))))));
                else
                  LODWORD(v11) = v11 - 32;
              }
              if ( (unsigned int)v12 >= 0x61 )
              {
                if ( (unsigned int)v12 > 0x7A )
                  LODWORD(v12) = (unsigned __int16)(v12
                                                  + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                             + 2
                                                             * ((v12 & 0xF)
                                                              + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                    + 2LL
                                                                                    * (((unsigned __int8)v12 >> 4)
                                                                                     + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v12 >> 8)))))));
                else
                  LODWORD(v12) = v12 - 32;
              }
              if ( (_DWORD)v11 != (_DWORD)v12 )
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
    }
    else if ( Buffer <= v6 )
    {
      v14 = SearchString->Buffer;
      while ( memcmp(Buffer, v14, v5) )
      {
        if ( ++Buffer > v6 )
          return 0LL;
      }
      return Buffer;
    }
  }
  return 0LL;
}
