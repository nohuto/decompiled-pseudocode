/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x18005F3A0
 * Callers:
 *     RtlMultiByteToUnicodeSize @ 0x1800220B0 (RtlMultiByteToUnicodeSize.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024B70 (RtlAnsiStringToUnicodeString.c)
 *     RtlMultiByteToUnicodeN @ 0x18005D810 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x180061F00 (RtlOemToUnicodeN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x180063760 (RtlAnsiCharToUnicodeChar.c)
 *     RtlCustomCPToUnicodeN @ 0x1800E35C0 (RtlCustomCPToUnicodeN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUTF8ToUnicodeN(_WORD *a1, unsigned int a2, _DWORD *a3, char *a4, unsigned int a5)
{
  unsigned int v5; // ebp
  _WORD *v8; // rax
  char *v9; // rbx
  unsigned __int64 v10; // r14
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  _WORD *v16; // r10
  unsigned int v17; // edx
  unsigned int v18; // r8d
  char v19; // r8
  int v20; // r8d
  unsigned int v21; // edx
  __int16 v22; // r8
  char v23; // r11
  unsigned int v24; // r8d
  __int64 v25; // rcx
  unsigned int v26; // ecx
  unsigned int v27; // edx
  char v28; // dl
  int v29; // r8d

  v5 = 0;
  v8 = a1;
  v9 = &a4[a5];
  v10 = (unsigned __int64)&a1[(unsigned __int64)a2 >> 1];
  v11 = 0;
  if ( !a4 )
    return 3221225714LL;
  if ( a1 )
  {
LABEL_3:
    while ( 2 )
    {
      while ( 2 )
      {
        if ( a4 >= v9 )
        {
          if ( v11 )
          {
            v5 = 263;
            if ( (unsigned __int64)v8 < v10 )
              *v8++ = -3;
            else
              v5 = -1073741789;
          }
          goto LABEL_13;
        }
        v12 = *a4++;
        if ( !v11 )
        {
          LOWORD(v11) = v12;
          if ( v12 <= 0x7F )
          {
LABEL_6:
            if ( (unsigned __int64)v8 >= v10 )
              goto LABEL_80;
            *v8++ = v11;
            v13 = v9 - a4;
            v14 = (__int64)(v10 - (_QWORD)v8) >> 1;
            if ( (unsigned __int64)(v9 - a4) <= 0xD )
            {
              if ( v14 < v13 )
              {
                v11 = 0;
                continue;
              }
              while ( a4 < v9 )
              {
                v11 = *a4++;
                if ( v11 > 0x7F )
                  goto LABEL_55;
                *v8++ = v11;
              }
LABEL_13:
              if ( a3 )
                *a3 = 2 * (v8 - a1);
              return v5;
            }
            if ( v13 < v14 )
              v14 = v9 - a4;
            v16 = &v8[v14 - 7];
            if ( v8 >= v16 )
              goto LABEL_30;
            while ( 1 )
            {
              v17 = *a4++;
              if ( v17 > 0x7F )
                break;
              *v8++ = v17;
              if ( ((unsigned __int8)a4 & 1) != 0 )
              {
                v17 = *a4++;
                if ( v17 > 0x7F )
                  break;
                *v8++ = v17;
              }
              if ( ((unsigned __int8)a4 & 2) == 0 )
                goto LABEL_25;
              v17 = *(unsigned __int16 *)a4;
              if ( (v17 & 0x8080) == 0 )
              {
                a4 += 2;
                *v8 = v17 & 0x7F;
                v8[1] = (v17 >> 8) & 0x7F;
                v8 += 2;
LABEL_25:
                while ( v8 < v16 )
                {
                  v18 = *((_DWORD *)a4 + 1);
                  v17 = *(_DWORD *)a4;
                  if ( ((*(_DWORD *)a4 | v18) & 0x80808080) != 0 )
                    goto LABEL_43;
                  a4 += 8;
                  *v8 = v17 & 0x7F;
                  v8[1] = (v17 >> 8) & 0x7F;
                  v8[2] = BYTE2(v17) & 0x7F;
                  v8[3] = HIBYTE(v17) & 0x7F;
                  v8[4] = v18 & 0x7F;
                  v8[5] = (v18 >> 8) & 0x7F;
                  v8[6] = BYTE2(v18) & 0x7F;
                  v8[7] = HIBYTE(v18) & 0x7F;
                  v8 += 8;
                }
LABEL_30:
                v11 = 0;
                goto LABEL_3;
              }
LABEL_43:
              ++a4;
              if ( (unsigned __int8)v17 > 0x7Fu )
                break;
              *v8 = (unsigned __int8)v17;
LABEL_39:
              if ( ++v8 >= v16 )
              {
                v11 = 0;
                goto LABEL_3;
              }
            }
            v19 = *a4++;
            if ( (v17 & 0x40) == 0 || (v19 & 0xC0) != 0x80 )
            {
LABEL_29:
              a4 -= 2;
              goto LABEL_30;
            }
            v20 = v19 & 0x3F;
            if ( (v17 & 0x20) != 0 )
            {
              v23 = *a4;
              v24 = ((v17 & 0xF) << 6) | v20;
              if ( (v17 & 0x10) != 0 )
              {
                if ( (v24 >> 4) - 1 > 0xF )
                  goto LABEL_29;
                if ( (v23 & 0xC0) != 0x80 )
                  goto LABEL_29;
                v28 = a4[1];
                v29 = v23 & 0x3F | (v24 << 6);
                if ( (v28 & 0xC0) != 0x80 )
                  goto LABEL_29;
                *v8++ = (((v28 & 0x3F | (unsigned int)(v29 << 6)) >> 10) & 0x7FF) - 10304;
                v25 = 2LL;
                v22 = (v28 & 0x3F | ((_WORD)v29 << 6) & 0x3FF) - 9216;
              }
              else
              {
                if ( (v24 & 0x3E0) == 0 || (v24 & 0x3E0) == 0x360 || (v23 & 0xC0) != 0x80 )
                  goto LABEL_29;
                v22 = v23 & 0x3F | ((_WORD)v24 << 6);
                v25 = 1LL;
              }
              a4 += v25;
              --v16;
            }
            else
            {
              v21 = v17 & 0x1F;
              if ( v21 <= 1 )
                goto LABEL_29;
              v22 = ((_WORD)v21 << 6) | v20;
            }
            *v8 = v22;
            --v16;
            goto LABEL_39;
          }
LABEL_55:
          if ( (v11 & 0x40) != 0 )
          {
            if ( (v11 & 0x20) != 0 )
            {
              v26 = v11 & 0xF;
              if ( (v11 & 0x10) == 0 )
              {
                v11 = v26 | 0x48228000;
                continue;
              }
              if ( v26 <= 4 )
              {
                v11 = v26 | 0x504D0C00;
                continue;
              }
            }
            else
            {
              v27 = v11 & 0x1F;
              if ( v27 > 1 )
              {
                v11 = v27 | 0x800000;
                continue;
              }
            }
          }
LABEL_67:
          v5 = 263;
          LOWORD(v11) = -3;
          goto LABEL_6;
        }
        break;
      }
      if ( (v12 & 0xC0) != 0x80 )
      {
        --a4;
        goto LABEL_67;
      }
      v11 = (v11 << 6) | v12 & 0x3F;
      if ( (v11 & 0x20000000) == 0 )
      {
        if ( (v11 & 0x10000000) != 0 )
        {
          if ( (v11 & 0x800000) != 0 || (v11 & 0x1F0) - 16 <= 0xF0 )
            continue;
        }
        else if ( (v11 & 0x3E0) != 0 )
        {
          if ( (v11 & 0x3E0) != 0x360 )
            continue;
          v5 = 263;
          LOWORD(v11) = -3;
          goto LABEL_6;
        }
        goto LABEL_67;
      }
      break;
    }
    if ( (v11 & 0x101F0000) <= 0x10000000 )
      goto LABEL_6;
    if ( (unsigned __int64)v8 < v10 )
    {
      *v8++ = ((v11 >> 10) & 0x7FF) - 10304;
      LOWORD(v11) = (v11 & 0x3FF) - 9216;
      goto LABEL_6;
    }
LABEL_80:
    if ( a3 )
      *a3 = 2 * (v8 - a1);
    return 3221225507LL;
  }
  else if ( a3 )
  {
    return sub_18005F76C(a4, a5);
  }
  else
  {
    return 3221225485LL;
  }
}
