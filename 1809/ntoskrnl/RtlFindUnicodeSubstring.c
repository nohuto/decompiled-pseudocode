/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1405B9440
 * Callers:
 *     CmpTraceSecurityChanging @ 0x1405B9380 (CmpTraceSecurityChanging.c)
 * Callees:
 *     memcmp @ 0x140196340 (memcmp.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  unsigned __int16 Length; // r9
  wchar_t *Buffer; // rbx
  size_t v5; // rsi
  wchar_t *v6; // rdi
  wchar_t *v7; // rbp
  wchar_t *v8; // rsi
  signed __int64 i; // r11
  wchar_t *v10; // r9
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r8
  wchar_t *v14; // rbp

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
      v14 = SearchString->Buffer;
      while ( memcmp(Buffer, v14, v5) )
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
    v10 = SearchString->Buffer;
    if ( v7 < v8 )
    {
      do
      {
        v11 = *(wchar_t *)((char *)v10 + i);
        v12 = *v10;
        if ( (_DWORD)v11 != (_DWORD)v12 )
        {
          if ( (unsigned int)v11 >= 0x61 )
          {
            if ( (unsigned int)v11 > 0x7A )
              LODWORD(v11) = (unsigned __int16)(v11
                                              + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v11 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int8)v11 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v11 >> 8)]]]);
            else
              LODWORD(v11) = v11 - 32;
          }
          if ( (unsigned int)v12 >= 0x61 )
          {
            if ( (unsigned int)v12 > 0x7A )
              LODWORD(v12) = (unsigned __int16)(v12
                                              + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v12 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int8)v12 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v12 >> 8)]]]);
            else
              LODWORD(v12) = v12 - 32;
          }
          if ( (_DWORD)v11 != (_DWORD)v12 )
            break;
        }
        ++v10;
      }
      while ( v10 < v8 );
    }
    if ( v10 == v8 )
      break;
    if ( ++Buffer > v6 )
      return 0LL;
  }
  return Buffer;
}
