/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1800860B0
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x180085FA0 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     sub_18001A234 @ 0x18001A234 (sub_18001A234.c)
 *     memcmp @ 0x180090560 (memcmp.c)
 */

char *__fastcall RtlFindUnicodeSubstring(unsigned __int16 *a1, __int16 *a2, char a3)
{
  unsigned __int16 v3; // ax
  char *v4; // rbx
  size_t v5; // rsi
  char *v6; // rdi
  unsigned __int16 *v7; // rbp
  unsigned __int16 *v8; // rsi
  char *i; // r11
  unsigned __int16 *j; // r10
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned __int16 v13; // ax
  __int16 v14; // r9
  const void *v16; // rbp

  v3 = *a2;
  if ( *a1 < (unsigned __int16)*a2 )
    return 0LL;
  v4 = (char *)*((_QWORD *)a1 + 1);
  v5 = v3;
  v6 = &v4[*a1 - (unsigned __int64)v3];
  if ( !a3 )
  {
    if ( v4 <= v6 )
    {
      v16 = (const void *)*((_QWORD *)a2 + 1);
      while ( memcmp(v4, v16, v5) )
      {
        v4 += 2;
        if ( v4 > v6 )
          return 0LL;
      }
      return v4;
    }
    return 0LL;
  }
  v7 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v8 = (unsigned __int16 *)((char *)v7 + v3);
  if ( v4 > v6 )
    return 0LL;
  for ( i = (char *)(v4 - (char *)v7); ; i += 2 )
  {
    for ( j = v7; j < v8; ++j )
    {
      if ( *(unsigned __int16 *)((char *)j + (_QWORD)i) != *j )
      {
        sub_18001A234(*j);
        v13 = sub_18001A234(*(_WORD *)(v12 + v11));
        if ( v13 != v14 )
          break;
      }
    }
    if ( j == v8 )
      break;
    v4 += 2;
    if ( v4 > v6 )
      return 0LL;
  }
  return v4;
}
