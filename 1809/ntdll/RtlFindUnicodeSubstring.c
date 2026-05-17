/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1800EBB40
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x1800EBCB0 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     memcmp @ 0x180093CB0 (memcmp.c)
 */

char *__fastcall RtlFindUnicodeSubstring(unsigned __int16 *a1, __int16 *a2, char a3)
{
  unsigned __int16 v3; // ax
  char *v4; // rbx
  size_t v5; // rsi
  char *v6; // rdi
  char *v7; // r11
  unsigned __int16 *v8; // rsi
  char *i; // r10
  unsigned __int16 *v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdx
  const void *v14; // rbp

  v3 = *a2;
  if ( *a1 >= (unsigned __int16)*a2 )
  {
    v4 = (char *)*((_QWORD *)a1 + 1);
    v5 = v3;
    v6 = &v4[*a1 - (unsigned __int64)v3];
    if ( a3 )
    {
      v7 = (char *)*((_QWORD *)a2 + 1);
      v8 = (unsigned __int16 *)&v7[v3];
      if ( v4 <= v6 )
      {
        for ( i = (char *)(v4 - v7); ; i += 2 )
        {
          v10 = (unsigned __int16 *)v7;
          if ( v7 < (char *)v8 )
          {
            do
            {
              v11 = *(unsigned __int16 *)((char *)v10 + (_QWORD)i);
              v12 = *v10;
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
              ++v10;
            }
            while ( v10 < v8 );
          }
          if ( v10 == v8 )
            break;
          v4 += 2;
          if ( v4 > v6 )
            return 0LL;
        }
        return v4;
      }
    }
    else if ( v4 <= v6 )
    {
      v14 = (const void *)*((_QWORD *)a2 + 1);
      while ( memcmp(v4, v14, v5) )
      {
        v4 += 2;
        if ( v4 > v6 )
          return 0LL;
      }
      return v4;
    }
  }
  return 0LL;
}
