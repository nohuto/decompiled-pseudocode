/*
 * XREFs of RtlpValidRelativeAttribute @ 0x1800EB5F0
 * Callers:
 *     RtlpValidAttributeAce @ 0x1800EB480 (RtlpValidAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x18004B140 (RtlStringCbLengthW.c)
 */

char __fastcall RtlpValidRelativeAttribute(unsigned int *a1, unsigned int a2)
{
  unsigned int v4; // eax
  int v5; // r11d
  unsigned int v6; // edx
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int16 v9; // ax
  unsigned int v10; // ebp
  unsigned int *m; // r8
  __int64 v12; // rcx
  unsigned int *k; // rcx
  int v14; // r9d
  unsigned int *j; // r8
  __int64 v16; // rcx
  unsigned int v17; // r10d
  int v18; // esi
  __int64 v19; // rcx
  unsigned int *i; // rbx
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a2 >= 0x14 && !*((_WORD *)a1 + 3) && (a1[2] & 0xFFC0) == 0 )
    {
      if ( a1[3] )
      {
        if ( a2 >= *a1 )
        {
          v4 = a2 - *a1;
          if ( v4 >= 4 && (int)RtlStringCbLengthW((unsigned int *)((char *)a1 + *a1), v4, &v22) >= 0 )
          {
            v6 = a1[3];
            v7 = 4LL * v6;
            if ( v7 <= 0xFFFFFFFF )
            {
              v8 = (unsigned int)(v5 + 16);
              if ( a2 >= (unsigned int)v8 && a2 - 16 >= (unsigned int)v7 )
              {
                v9 = *((_WORD *)a1 + 2);
                if ( v9 )
                {
                  v10 = v5 + 2;
                  if ( v9 <= (unsigned __int16)(v5 + 2) )
                  {
                    if ( v6 )
                    {
                      for ( i = (unsigned int *)((char *)a1 + v8); a2 >= *i && a2 - *i >= 8; ++i )
                      {
                        if ( ++v5 >= v6 )
                          return 1;
                      }
                      return 0;
                    }
                    return 1;
                  }
                  switch ( v9 )
                  {
                    case 3u:
                      v18 = v5;
                      if ( v6 )
                      {
                        while ( 1 )
                        {
                          v19 = a1[v18 + 4];
                          if ( a2 < (unsigned int)v19
                            || a2 - (unsigned int)v19 < v10
                            || (int)RtlStringCbLengthW((unsigned int *)((char *)a1 + v19), a2 - (unsigned int)v19, &v22) < 0 )
                          {
                            break;
                          }
                          if ( ++v18 >= a1[3] )
                            return 1;
                        }
                        return 0;
                      }
                      return 1;
                    case 5u:
                      v14 = v5;
                      if ( v6 )
                      {
                        for ( j = a1 + 4; ; ++j )
                        {
                          v16 = *j;
                          if ( a2 < (unsigned int)v16 )
                            break;
                          if ( a2 - (unsigned int)v16 < 4 )
                            break;
                          v17 = *(unsigned int *)((char *)a1 + v16);
                          if ( !v17 || (int)v16 + 4 < (unsigned int)v16 || a2 - ((_DWORD)v16 + 4) < v17 )
                            break;
                          if ( ++v14 >= v6 )
                            return 1;
                        }
                        return 0;
                      }
                      return 1;
                    case 6u:
                      if ( v6 )
                      {
                        for ( k = a1 + 4; a2 >= *k && a2 - *k >= 8 && *(_QWORD *)((char *)a1 + *k) <= 1uLL; ++k )
                        {
                          if ( ++v5 >= v6 )
                            return 1;
                        }
                        return 0;
                      }
                      return 1;
                  }
                  if ( v9 == (_WORD)v5 + 16 )
                  {
                    if ( v6 )
                    {
                      for ( m = a1 + 4; ; ++m )
                      {
                        v12 = *m;
                        if ( a2 < (unsigned int)v12
                          || a2 - (unsigned int)v12 < 4
                          || (int)v12 + 4 < (unsigned int)v12
                          || a2 - ((_DWORD)v12 + 4) < *(unsigned int *)((char *)a1 + v12) )
                        {
                          break;
                        }
                        if ( ++v5 >= v6 )
                          return 1;
                      }
                      return 0;
                    }
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
