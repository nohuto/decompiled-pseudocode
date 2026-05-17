/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x180068120
 * Callers:
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025AA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlMultiByteToUnicodeSize @ 0x180026750 (RtlMultiByteToUnicodeSize.c)
 *     RtlMultiByteToUnicodeN @ 0x180058120 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x18006A3C0 (RtlOemToUnicodeN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x18006C080 (RtlAnsiCharToUnicodeChar.c)
 *     RtlCustomCPToUnicodeN @ 0x1800E6340 (RtlCustomCPToUnicodeN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUTF8ToUnicodeN(_WORD *a1, unsigned int a2, _DWORD *a3, char *a4, unsigned int a5)
{
  unsigned int v5; // r14d
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  _WORD *v10; // r10
  char *v11; // r11
  unsigned __int64 v12; // rbp
  unsigned int v13; // ecx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  _WORD *v17; // r8
  unsigned int v18; // ecx
  unsigned int v19; // edx
  char v20; // dl
  int v21; // edx
  unsigned int v22; // ecx
  __int16 v23; // dx
  char v24; // bl
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // edx
  char v29; // cl
  int v30; // edx

  v5 = 0;
  v7 = (unsigned __int64)a2 >> 1;
  v8 = 0;
  v10 = a1;
  v11 = &a4[a5];
  v12 = (unsigned __int64)&a1[v7];
  if ( !a4 )
    return 3221225714LL;
  if ( a1 )
  {
LABEL_3:
    while ( 2 )
    {
      while ( 2 )
      {
        if ( a4 >= v11 )
        {
          if ( v8 )
          {
            v5 = 263;
            if ( (unsigned __int64)v10 < v12 )
              *v10++ = -3;
            else
              v5 = -1073741789;
          }
          goto LABEL_13;
        }
        v13 = *a4++;
        if ( !v8 )
        {
          LOWORD(v8) = v13;
          if ( v13 <= 0x7F )
          {
LABEL_6:
            if ( (unsigned __int64)v10 >= v12 )
              goto LABEL_79;
            *v10++ = v8;
            v14 = v11 - a4;
            v15 = (__int64)(v12 - (_QWORD)v10) >> 1;
            if ( (unsigned __int64)(v11 - a4) <= 0xD )
            {
              if ( v15 < v14 )
              {
                v8 = 0;
                continue;
              }
              while ( a4 < v11 )
              {
                v8 = *a4++;
                if ( v8 > 0x7F )
                  goto LABEL_52;
                *v10++ = v8;
              }
LABEL_13:
              if ( a3 )
                *a3 = 2 * (v10 - a1);
              return v5;
            }
            if ( v14 < v15 )
              v15 = v11 - a4;
            v17 = &v10[v15 - 7];
            if ( v10 >= v17 )
              goto LABEL_35;
            while ( 1 )
            {
              v18 = *a4++;
              if ( v18 > 0x7F )
                goto LABEL_28;
              *v10++ = v18;
              if ( ((unsigned __int8)a4 & 1) != 0 )
              {
                v18 = *a4++;
                if ( v18 > 0x7F )
                  goto LABEL_28;
                *v10++ = v18;
              }
              if ( ((unsigned __int8)a4 & 2) == 0 )
                goto LABEL_25;
              v18 = *(unsigned __int16 *)a4;
              if ( (v18 & 0x8080) == 0 )
              {
                a4 += 2;
                *v10 = v18 & 0x7F;
                v10[1] = (v18 >> 8) & 0x7F;
                v10 += 2;
LABEL_25:
                while ( v10 < v17 )
                {
                  v19 = *((_DWORD *)a4 + 1);
                  v18 = *(_DWORD *)a4;
                  if ( ((*(_DWORD *)a4 | v19) & 0x80808080) != 0 )
                    goto LABEL_38;
                  a4 += 8;
                  *v10 = v18 & 0x7F;
                  v10[1] = (v18 >> 8) & 0x7F;
                  v10[2] = BYTE2(v18) & 0x7F;
                  v10[3] = HIBYTE(v18) & 0x7F;
                  v10[4] = v19 & 0x7F;
                  v10[5] = (v19 >> 8) & 0x7F;
                  v10[6] = BYTE2(v19) & 0x7F;
                  v10[7] = HIBYTE(v19) & 0x7F;
                  v10 += 8;
                }
LABEL_35:
                v8 = 0;
                goto LABEL_3;
              }
LABEL_38:
              ++a4;
              if ( (unsigned __int8)v18 <= 0x7Fu )
              {
                *v10 = (unsigned __int8)v18;
                goto LABEL_34;
              }
LABEL_28:
              v20 = *a4++;
              if ( (v18 & 0x40) == 0 || (v20 & 0xC0) != 0x80 )
              {
LABEL_64:
                a4 -= 2;
                goto LABEL_35;
              }
              v21 = v20 & 0x3F;
              if ( (v18 & 0x20) != 0 )
              {
                v24 = *a4;
                v25 = ((v18 & 0xF) << 6) | v21;
                if ( (v18 & 0x10) != 0 )
                {
                  if ( (v25 >> 4) - 1 > 0xF )
                    goto LABEL_64;
                  if ( (v24 & 0xC0) != 0x80 )
                    goto LABEL_64;
                  v29 = a4[1];
                  v30 = v24 & 0x3F | (v25 << 6);
                  if ( (v29 & 0xC0) != 0x80 )
                    goto LABEL_64;
                  *v10++ = (((v29 & 0x3F | (unsigned int)(v30 << 6)) >> 10) & 0x7FF) - 10304;
                  v26 = 2LL;
                  v23 = (v29 & 0x3F | ((_WORD)v30 << 6) & 0x3FF) - 9216;
                }
                else
                {
                  if ( (v25 & 0x3E0) == 0 || (v25 & 0x3E0) == 0x360 || (v24 & 0xC0) != 0x80 )
                    goto LABEL_64;
                  v23 = v24 & 0x3F | ((_WORD)v25 << 6);
                  v26 = 1LL;
                }
                a4 += v26;
                --v17;
              }
              else
              {
                v22 = v18 & 0x1F;
                if ( v22 <= 1 )
                  goto LABEL_64;
                v23 = ((_WORD)v22 << 6) | v21;
              }
              *v10 = v23;
              --v17;
LABEL_34:
              if ( ++v10 >= v17 )
                goto LABEL_35;
            }
          }
LABEL_52:
          if ( (v8 & 0x40) != 0 )
          {
            if ( (v8 & 0x20) != 0 )
            {
              v27 = v8 & 0xF;
              if ( (v8 & 0x10) == 0 )
              {
                v8 = v27 | 0x48228000;
                continue;
              }
              if ( v27 <= 4 )
              {
                v8 = v27 | 0x504D0C00;
                continue;
              }
            }
            else
            {
              v28 = v8 & 0x1F;
              if ( v28 > 1 )
              {
                v8 = v28 | 0x800000;
                continue;
              }
            }
          }
LABEL_66:
          v5 = 263;
          LOWORD(v8) = -3;
          goto LABEL_6;
        }
        break;
      }
      if ( (v13 & 0xC0) != 0x80 )
      {
        --a4;
        goto LABEL_66;
      }
      v8 = (v8 << 6) | v13 & 0x3F;
      if ( (v8 & 0x20000000) == 0 )
      {
        if ( (v8 & 0x10000000) != 0 )
        {
          if ( (v8 & 0x800000) != 0 || (v8 & 0x1F0) - 16 <= 0xF0 )
            continue;
        }
        else if ( (v8 & 0x3E0) != 0 )
        {
          if ( (v8 & 0x3E0) != 0x360 )
            continue;
          v5 = 263;
          LOWORD(v8) = -3;
          goto LABEL_6;
        }
        goto LABEL_66;
      }
      break;
    }
    if ( (v8 & 0x101F0000) <= 0x10000000 )
      goto LABEL_6;
    if ( (unsigned __int64)v10 < v12 )
    {
      *v10++ = ((v8 >> 10) & 0x7FF) - 10304;
      LOWORD(v8) = (v8 & 0x3FF) - 9216;
      goto LABEL_6;
    }
LABEL_79:
    if ( a3 )
      *a3 = 2 * (v10 - a1);
    return 3221225507LL;
  }
  else if ( a3 )
  {
    return CountUTF8ToUnicode(a4, a5);
  }
  else
  {
    return 3221225485LL;
  }
}
