/*
 * XREFs of RtlHashUnicodeString @ 0x1800273F0
 * Callers:
 *     RtlpFindUnicodeStringInSection @ 0x18002715C (RtlpFindUnicodeStringInSection.c)
 *     LdrpHashUnicodeString @ 0x18002952C (LdrpHashUnicodeString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlHashUnicodeString(unsigned __int16 *a1, char a2, unsigned int a3, int *a4)
{
  int v4; // r10d
  unsigned __int16 *v6; // r11
  int v7; // r9d
  unsigned __int16 v8; // ax
  int v10; // ecx

  v4 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v6 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  *a4 = 0;
  v7 = *a1 >> 1;
  if ( a3 > 1 )
    return 3221225485LL;
  if ( v7 )
  {
    if ( a2 )
    {
      do
      {
        v8 = *v6++;
        --v7;
        if ( v8 >= 0x61u )
        {
          if ( v8 > 0x7Au )
          {
            if ( Nls844UnicodeUpcaseTable )
            {
              if ( v8 >= 0xC0u )
                v8 += *(_WORD *)(Nls844UnicodeUpcaseTable
                               + 2LL
                               * ((v8 & 0xF)
                                + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                    + 2LL
                                                                    * (((v8 >> 4) & 0xF)
                                                                     + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v8 >> 8))))));
            }
          }
          else
          {
            v8 -= 32;
          }
        }
        v4 = v8 + 65599 * v4;
      }
      while ( v7 );
    }
    else
    {
      do
      {
        v10 = *v6++;
        v4 = v10 + 65599 * v4;
        --v7;
      }
      while ( v7 );
    }
  }
  *a4 = v4;
  return 0LL;
}
