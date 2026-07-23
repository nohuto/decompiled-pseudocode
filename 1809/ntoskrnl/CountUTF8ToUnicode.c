/*
 * XREFs of CountUTF8ToUnicode @ 0x1402F6288
 * Callers:
 *     RtlUTF8ToUnicodeN @ 0x1406BEB10 (RtlUTF8ToUnicodeN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUTF8ToUnicode(char *a1, int a2, _DWORD *a3)
{
  int v3; // r9d
  char *v4; // rbx
  unsigned int v5; // r11d
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  unsigned int v9; // eax
  unsigned int v10; // r9d
  unsigned __int64 v11; // r10
  unsigned int v12; // r8d
  char v13; // r9
  __int64 v14; // rax
  int v15; // eax
  __int64 result; // rax

  v3 = 0;
  v4 = &a1[a2];
  v5 = 0;
  while ( a1 < v4 )
  {
    v7 = *a1++;
    if ( v3 )
    {
      if ( (v7 & 0xC0) != 0x80 )
      {
        --a1;
        a2 += v3 >> 30;
LABEL_7:
        v5 = 263;
        ++a2;
        goto LABEL_8;
      }
      v3 = (v3 << 6) | v7 & 0x3F;
      if ( (v3 & 0x20000000) != 0 )
      {
LABEL_17:
        if ( (unsigned __int64)(v4 - a1) <= 0xD )
        {
          while ( a1 < v4 )
          {
            v8 = *a1++;
            if ( v8 > 0x7F )
              goto LABEL_20;
          }
          v3 = 0;
          break;
        }
        v11 = (unsigned __int64)(v4 - 7);
        while ( (unsigned __int64)a1 < v11 )
        {
          v12 = *a1++;
          if ( v12 <= 0x7F )
          {
            if ( ((unsigned __int8)a1 & 1) == 0 || (v12 = *a1, ++a1, v12 <= 0x7F) )
            {
              if ( ((unsigned __int8)a1 & 2) == 0 )
                goto LABEL_37;
              LOWORD(v12) = *(_WORD *)a1;
              if ( (*(_WORD *)a1 & 0x8080) == 0 )
              {
                a1 += 2;
LABEL_37:
                while ( (unsigned __int64)a1 < v11 )
                {
                  v12 = *(_DWORD *)a1;
                  if ( ((*(_DWORD *)a1 | *((_DWORD *)a1 + 1)) & 0x80808080) != 0 )
                    goto LABEL_42;
                  a1 += 8;
                  if ( (unsigned __int64)a1 >= v11 )
                    break;
                  v12 = *(_DWORD *)a1;
                  if ( ((*(_DWORD *)a1 | *((_DWORD *)a1 + 1)) & 0x80808080) != 0 )
                    goto LABEL_42;
                  a1 += 8;
                }
                break;
              }
LABEL_42:
              ++a1;
              if ( (unsigned __int8)v12 <= 0x7Fu )
                continue;
            }
          }
          v13 = *a1++;
          if ( (v12 & 0x40) == 0 || (v13 & 0xC0) != 0x80 )
          {
LABEL_60:
            a1 -= 2;
            break;
          }
          if ( (v12 & 0x20) != 0 )
          {
            if ( (v12 & 0x10) != 0 )
            {
              if ( ((v13 & 0x3F | ((v12 & 0xF) << 6)) >> 4) - 1 > 0xF || (*a1 & 0xC0) != 0x80 || (a1[1] & 0xC0) != 0x80 )
                goto LABEL_60;
              v14 = 2LL;
            }
            else
            {
              v15 = v13 & 0x20 | ((v12 & 0xF) << 6) & 0x3E0;
              if ( !v15 || v15 == 864 || (*a1 & 0xC0) != 0x80 )
                goto LABEL_60;
              v14 = 1LL;
            }
            --a2;
            a1 += v14;
          }
          else if ( (v12 & 0x1E) == 0 )
          {
            goto LABEL_60;
          }
          --a2;
        }
LABEL_8:
        v3 = 0;
      }
      else if ( (v3 & 0x10000000) != 0 )
      {
        if ( (v3 & 0x800000) == 0 && (v3 & 0x1F0u) - 16 > 0xF0 )
          goto LABEL_7;
      }
      else if ( (v3 & 0x3E0) == 0 || (v3 & 0x3E0) == 0x360 )
      {
        goto LABEL_7;
      }
    }
    else
    {
      v8 = v7;
LABEL_20:
      if ( v8 <= 0x7F )
        goto LABEL_17;
      --a2;
      if ( (v8 & 0x40) == 0 )
        goto LABEL_7;
      if ( (v8 & 0x20) != 0 )
      {
        v9 = v8 & 0xF;
        if ( (v8 & 0x10) != 0 )
        {
          if ( v9 <= 4 )
          {
            v3 = v9 | 0x504D0C00;
            goto LABEL_26;
          }
          goto LABEL_7;
        }
        v3 = v9 | 0x48228000;
LABEL_26:
        --a2;
      }
      else
      {
        v10 = v8 & 0x1F;
        if ( v10 <= 1 )
          goto LABEL_7;
        v3 = v10 | 0x800000;
      }
    }
  }
  if ( v3 )
  {
    a2 += (v3 >> 30) + 1;
    v5 = 263;
  }
  result = v5;
  *a3 = 2 * a2;
  return result;
}
