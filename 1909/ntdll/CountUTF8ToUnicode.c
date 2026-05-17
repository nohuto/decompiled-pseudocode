/*
 * XREFs of CountUTF8ToUnicode @ 0x18005F80C
 * Callers:
 *     RtlUTF8ToUnicodeN @ 0x18005F440 (RtlUTF8ToUnicodeN.c)
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
  __int64 result; // rax
  unsigned __int64 v10; // r10
  char v11; // r9
  unsigned int v12; // r8d
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // r9d
  char v17; // r8

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
LABEL_32:
        v5 = 263;
        ++a2;
        goto LABEL_33;
      }
      v3 = (v3 << 6) | v7 & 0x3F;
      if ( (v3 & 0x20000000) != 0 )
      {
LABEL_6:
        if ( (unsigned __int64)(v4 - a1) <= 0xD )
        {
          while ( a1 < v4 )
          {
            v8 = *a1++;
            if ( v8 > 0x7F )
              goto LABEL_5;
          }
          v3 = 0;
          break;
        }
        v10 = (unsigned __int64)(v4 - 7);
        while ( (unsigned __int64)a1 < v10 )
        {
          v12 = *a1++;
          if ( v12 <= 0x7F )
          {
            if ( ((unsigned __int8)a1 & 1) == 0 || (v12 = *a1, ++a1, v12 <= 0x7F) )
            {
              if ( ((unsigned __int8)a1 & 2) == 0 )
                goto LABEL_26;
              LOWORD(v12) = *(_WORD *)a1;
              if ( (*(_WORD *)a1 & 0x8080) == 0 )
              {
                a1 += 2;
LABEL_26:
                while ( (unsigned __int64)a1 < v10 )
                {
                  v12 = *(_DWORD *)a1;
                  if ( ((*(_DWORD *)a1 | *((_DWORD *)a1 + 1)) & 0x80808080) != 0 )
                    goto LABEL_34;
                  a1 += 8;
                  if ( (unsigned __int64)a1 >= v10 )
                    break;
                  v12 = *(_DWORD *)a1;
                  if ( ((*(_DWORD *)a1 | *((_DWORD *)a1 + 1)) & 0x80808080) != 0 )
                    goto LABEL_34;
                  a1 += 8;
                }
                break;
              }
LABEL_34:
              ++a1;
              if ( (unsigned __int8)v12 <= 0x7Fu )
                continue;
            }
          }
          v11 = *a1++;
          if ( (v12 & 0x40) == 0 || (v11 & 0xC0) != 0x80 )
          {
LABEL_55:
            a1 -= 2;
            break;
          }
          if ( (v12 & 0x20) != 0 )
          {
            if ( (v12 & 0x10) != 0 )
            {
              if ( ((v11 & 0x3F | ((v12 & 0xF) << 6)) >> 4) - 1 > 0xF )
                goto LABEL_55;
              v17 = *a1 & 0xC0;
              if ( v17 != (char)0x80 || (a1[1] & 0xC0) != v17 )
                goto LABEL_55;
              v14 = 2LL;
            }
            else
            {
              v13 = v11 & 0x20 | ((v12 & 0xF) << 6) & 0x3E0;
              if ( !v13 || v13 == 864 || (*a1 & 0xC0) != 0x80 )
                goto LABEL_55;
              v14 = 1LL;
            }
            --a2;
            a1 += v14;
          }
          else if ( (v12 & 0x1E) == 0 )
          {
            goto LABEL_55;
          }
          --a2;
        }
LABEL_33:
        v3 = 0;
      }
      else if ( (v3 & 0x10000000) != 0 )
      {
        if ( (v3 & 0x800000) == 0 && (v3 & 0x1F0u) - 16 > 0xF0 )
          goto LABEL_32;
      }
      else if ( (v3 & 0x3E0) == 0 || (v3 & 0x3E0) == 0x360 )
      {
        goto LABEL_32;
      }
    }
    else
    {
      v8 = v7;
LABEL_5:
      if ( v8 <= 0x7F )
        goto LABEL_6;
      --a2;
      if ( (v8 & 0x40) == 0 )
        goto LABEL_32;
      if ( (v8 & 0x20) != 0 )
      {
        v15 = v8 & 0xF;
        if ( (v8 & 0x10) != 0 )
        {
          if ( v15 > 4 )
            goto LABEL_32;
          v3 = v15 | 0x504D0C00;
        }
        else
        {
          v3 = v15 | 0x48228000;
        }
        --a2;
      }
      else
      {
        v16 = v8 & 0x1F;
        if ( v16 <= 1 )
          goto LABEL_32;
        v3 = v16 | 0x800000;
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
