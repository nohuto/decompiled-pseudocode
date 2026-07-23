/*
 * XREFs of RtlpGetCustomCultureDataFromFile @ 0x1800F9188
 * Callers:
 *     RtlpGetCustomCultureData @ 0x1800F9110 (RtlpGetCustomCultureData.c)
 * Callees:
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180040868 (RtlpInitUnicodeStringUsingBuffer.c)
 */

__int64 __fastcall RtlpGetCustomCultureDataFromFile(
        unsigned int *a1,
        unsigned __int64 a2,
        char a3,
        char a4,
        _UNICODE_STRING *a5)
{
  __int64 v8; // r10
  char *v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  char *v12; // r8
  char *v13; // r11
  __int64 v14; // r10
  unsigned int v15; // edx
  unsigned int v16; // r8d

  if ( a2 >= 0x19C )
  {
    v8 = *a1;
    if ( (_DWORD)v8 )
    {
      if ( v8 + 68 <= a2 && (int)v8 + 68 >= (unsigned int)v8 )
      {
        v9 = (char *)a1 + v8;
        if ( (((_BYTE)v8 + (_BYTE)a1) & 1) == 0 )
        {
          v10 = *((unsigned int *)v9 + 7);
          if ( (_DWORD)v10 )
          {
            if ( (v10 & 1) == 0
              && (unsigned int)v10 + *((unsigned __int16 *)v9 + 13) <= a2
              && (unsigned int)v10 + *((unsigned __int16 *)v9 + 13) >= (unsigned int)v10 )
            {
              v11 = *((unsigned int *)v9 + 14);
              if ( v11 <= a2 )
              {
                if ( (_DWORD)v11 )
                {
                  v12 = (char *)a1 + v10;
                  if ( a3 || *((_DWORD *)v12 + 39) )
                  {
                    if ( !a5 )
                      return 0LL;
                    v13 = (char *)a1 + v11;
                    if ( ((unsigned __int8)v13 & 1) == 0 )
                    {
                      v14 = *((unsigned int *)v12 + 46);
                      v15 = (unsigned int)(a2 - v11) >> 1;
                      if ( (int)v14 + 2 <= v15 && (int)v14 + 2 >= (unsigned int)v14 )
                      {
                        v16 = *(unsigned __int16 *)&v13[2 * v14];
                        if ( v16 + (unsigned int)v14 + 2 <= v15 && !*(_WORD *)&v13[2 * v16 + 2 + 2 * (unsigned int)v14] )
                          return RtlpInitUnicodeStringUsingBuffer(
                                   a4,
                                   (const WCHAR *)&v13[2 * (unsigned int)(v14 + 1)],
                                   v16,
                                   a5);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 3221225473LL;
}
