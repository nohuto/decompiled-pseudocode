/*
 * XREFs of RtlpValidRelativeAttribute @ 0x1406C46F0
 * Callers:
 *     RtlpValidAttributeAce @ 0x1406C467C (RtlpValidAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14011CB38 (RtlStringCbLengthW.c)
 */

char __fastcall RtlpValidRelativeAttribute(unsigned int *a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // r11d
  unsigned int v6; // edx
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int16 v9; // ax
  unsigned int v10; // ebp
  unsigned int *i; // rbx
  unsigned int *m; // r8
  __int64 v14; // rcx
  unsigned int *k; // r8
  __int64 v16; // rcx
  int v17; // r9d
  unsigned int *j; // r8
  __int64 v19; // rcx
  unsigned int v20; // r10d
  int v21; // esi
  __int64 v22; // rcx
  size_t pcbLength; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a2 >= 0x14 && !*((_WORD *)a1 + 3) && (a1[2] & 0xFFC0) == 0 )
    {
      if ( a1[3] )
      {
        v4 = *a1;
        if ( a2 >= (unsigned int)v4
          && a2 - (unsigned int)v4 >= 4
          && RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v4), a2 - (unsigned int)v4, &pcbLength) >= 0 )
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
                    v21 = v5;
                    if ( v6 )
                    {
                      while ( 1 )
                      {
                        v22 = a1[v21 + 4];
                        if ( a2 < (unsigned int)v22
                          || a2 - (unsigned int)v22 < v10
                          || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v22), a2 - (unsigned int)v22, &pcbLength) < 0 )
                        {
                          break;
                        }
                        if ( ++v21 >= a1[3] )
                          return 1;
                      }
                      return 0;
                    }
                    return 1;
                  case 5u:
                    v17 = v5;
                    if ( v6 )
                    {
                      for ( j = a1 + 4; ; ++j )
                      {
                        v19 = *j;
                        if ( a2 < (unsigned int)v19 )
                          break;
                        if ( a2 - (unsigned int)v19 < 4 )
                          break;
                        v20 = *(unsigned int *)((char *)a1 + v19);
                        if ( !v20 || (int)v19 + 4 < (unsigned int)v19 || a2 - ((_DWORD)v19 + 4) < v20 )
                          break;
                        if ( ++v17 >= v6 )
                          return 1;
                      }
                      return 0;
                    }
                    return 1;
                  case 6u:
                    if ( v6 )
                    {
                      for ( k = a1 + 4; ; ++k )
                      {
                        v16 = *k;
                        if ( a2 < (unsigned int)v16
                          || a2 - (unsigned int)v16 < 8
                          || *(_QWORD *)((char *)a1 + v16) > 1uLL )
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
                if ( v9 == (_WORD)v5 + 16 )
                {
                  if ( v6 )
                  {
                    for ( m = a1 + 4; ; ++m )
                    {
                      v14 = *m;
                      if ( a2 < (unsigned int)v14
                        || a2 - (unsigned int)v14 < 4
                        || (int)v14 + 4 < (unsigned int)v14
                        || a2 - ((_DWORD)v14 + 4) < *(unsigned int *)((char *)a1 + v14) )
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
  return 0;
}
