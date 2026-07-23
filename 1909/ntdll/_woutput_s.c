/*
 * XREFs of _woutput_s @ 0x18009A5FC
 * Callers:
 *     _swoutput_s @ 0x18009A4CC (_swoutput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008CD78 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _safecrt_mbtowc @ 0x18009940C (_safecrt_mbtowc.c)
 *     write_char_2 @ 0x18009AF08 (write_char_2.c)
 *     write_string_2 @ 0x18009AF58 (write_string_2.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall woutput_s(__int64 a1, _WORD *a2, int *a3)
{
  int v4; // edi
  int v5; // r14d
  unsigned int v6; // r15d
  WCHAR *v7; // rbx
  int v9; // r11d
  _WORD *v10; // r10
  unsigned __int16 v11; // r9
  int v12; // esi
  __int64 v13; // r12
  _WORD *v14; // r8
  int v15; // edx
  unsigned __int64 v16; // r10
  __int64 v17; // rax
  unsigned __int16 *v18; // rcx
  int v19; // ecx
  const char *v20; // rax
  WCHAR v21; // ax
  int v22; // eax
  const wchar_t *v23; // rax
  const wchar_t *j; // r12
  unsigned __int64 v25; // r8
  char *v26; // rbx
  int v27; // ecx
  char v28; // r15
  unsigned int v29; // r9d
  int v30; // ecx
  unsigned __int64 v31; // rdx
  char v32; // al
  __int16 v33; // ax
  __int64 v34; // rdx
  int v35; // r14d
  int v36; // r10d
  __int64 v37; // rdx
  int v38; // r11d
  int v39; // r10d
  UCHAR *v40; // r15
  int v41; // esi
  int v42; // eax
  __int64 v43; // r11
  __int64 v44; // r10
  bool i; // zf
  int v47; // eax
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // eax
  int v51; // ecx
  int v52; // [rsp+30h] [rbp-D0h]
  int v53; // [rsp+34h] [rbp-CCh] BYREF
  int v54; // [rsp+38h] [rbp-C8h]
  int v55; // [rsp+3Ch] [rbp-C4h]
  int v56; // [rsp+40h] [rbp-C0h]
  UCHAR v57[4]; // [rsp+44h] [rbp-BCh] BYREF
  WCHAR v58[2]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v59[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v60; // [rsp+50h] [rbp-B0h]
  __int64 v61; // [rsp+58h] [rbp-A8h]
  _WORD *v62; // [rsp+60h] [rbp-A0h]
  int v63; // [rsp+68h] [rbp-98h]
  int v64; // [rsp+6Ch] [rbp-94h]
  WCHAR v65[512]; // [rsp+70h] [rbp-90h] BYREF

  v61 = a1;
  v62 = a2;
  v63 = 0;
  v4 = 0;
  v60 = 0;
  v5 = 0;
  v55 = 0;
  v6 = 0;
  v54 = 0;
  v7 = 0LL;
  v64 = 0;
  memset(v65, 0, sizeof(v65));
  v9 = 0;
  v56 = 0;
  if ( !a1 )
    goto LABEL_194;
  v10 = v62;
  if ( !v62 )
    goto LABEL_194;
  v11 = *v62;
  v53 = 0;
  v12 = 0;
  LODWORD(v13) = 0;
  if ( !v11 )
    return (unsigned int)v12;
  do
  {
    v14 = v10++;
    v62 = v10;
    if ( v12 < 0 )
      break;
    if ( (unsigned __int16)(v11 - 32) > 0x5Au )
      v15 = 0;
    else
      v15 = _lookuptable_s[v11 - 32] & 0xF;
    v9 = _lookuptable_s[v15 + v9 + 8 * v15] >> 4;
    v52 = v9;
    switch ( v9 )
    {
      case 8:
        goto LABEL_194;
      case 0:
LABEL_193:
        v56 = 1;
        write_char_2(v11, v61, &v53);
        v12 = v53;
        goto LABEL_142;
      case 1:
        v5 = -1;
        v64 = 0;
        v55 = -1;
        v6 = 0;
        v60 = 0;
        v4 = 0;
        v54 = 0;
        v56 = 0;
        break;
      case 2:
        if ( v11 == 32 )
        {
          v4 |= 2u;
        }
        else if ( v11 == 35 )
        {
          v4 |= 0x80u;
        }
        else if ( v11 == 43 )
        {
          v4 |= 1u;
        }
        else
        {
          if ( v11 != 45 )
          {
            if ( v11 == 48 )
              v4 |= 8u;
            goto LABEL_142;
          }
          v4 |= 4u;
        }
        break;
      case 3:
        if ( v11 == 42 )
        {
          v50 = *a3;
          a3 += 2;
          v51 = v4 | 4;
          if ( v50 >= 0 )
            v51 = v4;
          v4 = v51;
          v60 = abs32(v50);
        }
        else
        {
          v60 = v11 + 2 * (5 * v60 - 24);
        }
        goto LABEL_142;
      case 4:
        v5 = 0;
        v55 = 0;
        break;
      case 5:
        if ( v11 == 42 )
        {
          v5 = *a3;
          a3 += 2;
          v55 = v5;
          if ( v5 < 0 )
          {
            v5 = -1;
            v55 = -1;
          }
          goto LABEL_142;
        }
        v5 = v11 + 2 * (5 * v5 - 24);
        v55 = v5;
        break;
      case 6:
        if ( v11 != 73 )
        {
          if ( v11 == 104 )
          {
            v4 |= 0x20u;
            break;
          }
          if ( v11 != 106 )
          {
            if ( v11 == 108 )
            {
              v47 = 4096;
              if ( *v10 != 108 )
                v47 = 16;
              v4 |= v47;
              if ( *v10 != 108 )
                v10 = v14;
              ++v10;
              break;
            }
            if ( v11 != 116 )
            {
              if ( v11 == 119 )
              {
                v4 |= 0x800u;
                break;
              }
              if ( v11 != 122 )
                break;
            }
          }
        }
        v4 |= 0x8000u;
        if ( v11 == 73 )
        {
          if ( *v10 == 54 && v14[2] == 52 )
          {
            v10 = v14 + 3;
            break;
          }
          if ( *v10 == 51 && v14[2] == 50 )
          {
            v10 = v14 + 3;
            v4 &= ~0x8000u;
            break;
          }
        }
        else if ( v11 == 106 )
        {
          break;
        }
        v48 = (unsigned __int16)*v10;
        LOWORD(v48) = v48 - 88;
        if ( (unsigned __int16)v48 > 0x20u )
          goto LABEL_193;
        v49 = 0x120821001LL;
        if ( !_bittest64(&v49, v48) )
          goto LABEL_193;
        break;
      case 7:
        if ( v11 > 0x69u )
        {
          switch ( v11 )
          {
            case 'n':
              goto LABEL_194;
            case 'o':
              v16 = 8LL;
              if ( (v4 & 0x80u) != 0 )
                v4 |= 0x200u;
              goto LABEL_27;
            case 'p':
              v5 = 16;
              v4 |= 0x8000u;
              goto LABEL_72;
          }
          if ( v11 != 115 )
          {
            if ( v11 != 117 )
            {
              if ( v11 != 120 )
                goto LABEL_104;
              v22 = 39;
              goto LABEL_73;
            }
LABEL_26:
            v16 = 10LL;
LABEL_27:
            a3 += 2;
            if ( (v4 & 0x8000) != 0 || (v4 & 0x1000) != 0 )
            {
              v17 = *((_QWORD *)a3 - 1);
            }
            else if ( (v4 & 0x20) != 0 )
            {
              if ( (v4 & 0x40) != 0 )
                v17 = *((__int16 *)a3 - 4);
              else
                v17 = *((unsigned __int16 *)a3 - 4);
            }
            else if ( (v4 & 0x40) != 0 )
            {
              v17 = *(a3 - 2);
            }
            else
            {
              v17 = (unsigned int)*(a3 - 2);
            }
            if ( (v4 & 0x40) != 0 && v17 < 0 )
            {
              v17 = -v17;
              v4 |= 0x100u;
            }
            v25 = (unsigned int)v17;
            if ( (v4 & 0x9000) != 0 )
              v25 = v17;
            if ( v5 >= 0 )
            {
              v4 &= ~8u;
              if ( v5 > 512 )
                v5 = 512;
            }
            else
            {
              v5 = 1;
            }
            v26 = (char *)&v65[255] + 1;
            v27 = v25 != 0 ? v6 : 0;
            v28 = v63;
            v54 = v27;
            v29 = v27;
            while ( 1 )
            {
              v30 = v5--;
              if ( v30 <= 0 && !v25 )
                break;
              v31 = v25 % v16;
              v25 /= v16;
              v32 = v31 + 48;
              if ( (int)v31 + 48 > 57 )
                v32 = v31 + v28 + 48;
              *v26-- = v32;
            }
            v55 = v5;
            LODWORD(v13) = (unsigned int)&v65[72] + 367 - (_DWORD)v26;
            v7 = (WCHAR *)(v26 + 1);
            v6 = v29;
            if ( (v4 & 0x200) != 0 )
            {
              if ( !(_DWORD)v13 || (v54 = v29, *(_BYTE *)v7 != 48) )
              {
                v7 = (WCHAR *)((char *)v7 - 1);
                v54 = v29;
                LODWORD(v13) = v13 + 1;
                v6 = v29;
                *(_BYTE *)v7 = 48;
              }
            }
            goto LABEL_104;
          }
        }
        else
        {
          if ( v11 == 105 )
            goto LABEL_25;
          if ( v11 == 67 )
          {
            if ( (v4 & 0x830) == 0 )
              v4 |= 0x20u;
            goto LABEL_52;
          }
          if ( v11 != 83 )
          {
            if ( v11 != 88 )
            {
              if ( v11 == 90 )
              {
                v18 = *(unsigned __int16 **)a3;
                a3 += 2;
                if ( v18 && (v7 = (WCHAR *)*((_QWORD *)v18 + 1)) != 0LL )
                {
                  if ( v18[1] < *v18 )
                    goto LABEL_194;
                  LODWORD(v13) = *v18;
                  if ( (v4 & 0x800) != 0 )
                  {
                    if ( (v13 & 1) != 0 || ((unsigned __int8)v7 & 1) != 0 )
                      goto LABEL_194;
                    LODWORD(v13) = *v18 >> 1;
                    v56 = 1;
                  }
                  else
                  {
                    v56 = 0;
                  }
                }
                else
                {
                  v7 = (WCHAR *)"(null)";
                  LODWORD(v13) = 6;
                }
                goto LABEL_104;
              }
              if ( v11 != 99 )
              {
                if ( v11 == 100 )
                {
LABEL_25:
                  v4 |= 0x40u;
                  goto LABEL_26;
                }
LABEL_104:
                if ( !v64 )
                {
                  if ( (v4 & 0x40) != 0 )
                  {
                    if ( (v4 & 0x100) != 0 )
                    {
                      v33 = 45;
                      goto LABEL_112;
                    }
                    if ( (v4 & 1) != 0 )
                    {
                      v33 = 43;
                      goto LABEL_112;
                    }
                    if ( (v4 & 2) != 0 )
                    {
                      v33 = 32;
LABEL_112:
                      v6 = 1;
                      v59[0] = v33;
                      v54 = 1;
                    }
                  }
                  v34 = v61;
                  v35 = v60 - v13 - v6;
                  if ( (v4 & 0xC) == 0 && v35 > 0 )
                  {
                    do
                      write_char_2(32LL, v34, &v53);
                    while ( v53 != -1 && v36 > 0 );
                    v6 = v54;
                  }
                  write_string_2(v59, v6, v34, &v53);
                  v37 = v61;
                  v38 = 0;
                  if ( (v4 & 0xC) == 8 && v35 > 0 )
                  {
                    do
                      write_char_2(48LL, v37, &v53);
                    while ( v53 != -1 && v39 > 0 );
                    v6 = v54;
                  }
                  if ( v56 == v38 && (int)v13 > 0 )
                  {
                    v40 = (UCHAR *)v7;
                    v41 = v13;
                    while ( 1 )
                    {
                      --v41;
                      v42 = safecrt_mbtowc(v58, v40, _mb_cur_max);
                      if ( v42 == 2 )
                        --v41;
                      v43 = v61;
                      if ( v42 <= 0 )
                        break;
                      write_char_2(v58[0], v61, &v53);
                      v40 += v44;
                      if ( v41 <= 0 )
                      {
                        v6 = v54;
                        goto LABEL_133;
                      }
                    }
                    v6 = v54;
                    v12 = -1;
                    v53 = -1;
                  }
                  else
                  {
                    write_string_2(v7, (unsigned int)v13, v37, &v53);
                    v43 = v61;
LABEL_133:
                    v12 = v53;
                  }
                  if ( v12 >= 0 )
                  {
                    for ( i = (v4 & 4) == 0; !i && v35 > 0; i = v53 == -1 )
                    {
                      --v35;
                      write_char_2(32LL, v43, &v53);
                      v12 = v53;
                    }
                  }
                  v5 = v55;
                }
                v10 = v62;
                break;
              }
LABEL_52:
              v21 = *(_WORD *)a3;
              a3 += 2;
              v58[0] = v21;
              v56 = 1;
              if ( (v4 & 0x20) != 0 )
              {
                v57[0] = v21;
                v57[1] = 0;
                if ( (int)safecrt_mbtowc(v65, v57, _mb_cur_max) < 0 )
                  v64 = 1;
              }
              else
              {
                v65[0] = v21;
              }
              v7 = v65;
              LODWORD(v13) = 1;
              goto LABEL_104;
            }
LABEL_72:
            v22 = 7;
LABEL_73:
            v63 = v22;
            if ( (v4 & 0x80u) != 0 )
            {
              v59[0] = 48;
              v59[1] = v22 + 81;
              v6 = 2;
            }
            v16 = 16LL;
            goto LABEL_27;
          }
          if ( (v4 & 0x830) == 0 )
            v4 |= 0x20u;
        }
        v7 = *(WCHAR **)a3;
        v19 = v5;
        if ( v5 == -1 )
          v19 = 0x7FFFFFFF;
        a3 += 2;
        if ( (v4 & 0x20) != 0 )
        {
          v20 = (const char *)v7;
          if ( !v7 )
          {
            v7 = (WCHAR *)"(null)";
            v20 = "(null)";
          }
          LODWORD(v13) = 0;
          if ( v19 > 0 )
          {
            do
            {
              if ( !*v20 )
                break;
              ++v20;
              LODWORD(v13) = v13 + 1;
            }
            while ( (int)v13 < v19 );
          }
        }
        else
        {
          v56 = 1;
          v23 = L"(null)";
          if ( v7 )
            v23 = v7;
          v7 = (WCHAR *)v23;
          for ( j = v23; v19; ++j )
          {
            --v19;
            if ( !*j )
              break;
          }
          v13 = j - v23;
        }
        goto LABEL_104;
    }
    v9 = v52;
LABEL_142:
    v11 = *v10;
  }
  while ( *v10 );
  if ( !v9 || v9 == 7 )
    return (unsigned int)v12;
LABEL_194:
  invalid_parameter();
  return 0xFFFFFFFFLL;
}
