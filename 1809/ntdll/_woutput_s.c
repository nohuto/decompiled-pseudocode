/*
 * XREFs of _woutput_s @ 0x18009D674
 * Callers:
 *     _swoutput_s @ 0x18009D554 (_swoutput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _safecrt_mbtowc @ 0x18009C4E8 (_safecrt_mbtowc.c)
 *     write_char_2 @ 0x18009DF5C (write_char_2.c)
 *     write_string_2 @ 0x18009DFAC (write_string_2.c)
 */

__int64 __fastcall woutput_s(__int64 a1, const char *a2, int *a3)
{
  int v3; // r11d
  const char *v5; // r10
  int v6; // edi
  int v7; // esi
  unsigned int v8; // r15d
  unsigned __int16 v9; // r9
  int v10; // r14d
  __int64 v11; // r12
  WCHAR *v12; // rbx
  const char *v13; // r8
  int v14; // edx
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  unsigned __int16 *v17; // rax
  int v18; // ecx
  const char *v19; // rax
  WCHAR v20; // ax
  int v21; // eax
  const wchar_t *v22; // rax
  const wchar_t *j; // r12
  unsigned __int64 v24; // r8
  char *v25; // rbx
  int v26; // ecx
  char v27; // r15
  unsigned int v28; // r9d
  int v29; // ecx
  char *v30; // rdx
  unsigned __int64 v31; // rdx
  char v32; // al
  __int16 v33; // ax
  __int64 v34; // rdx
  int v35; // esi
  int v36; // r10d
  __int64 v37; // rdx
  int v38; // r11d
  int v39; // r10d
  UCHAR *v40; // r15
  int v41; // r14d
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
  int v62; // [rsp+60h] [rbp-A0h]
  int v63; // [rsp+64h] [rbp-9Ch]
  const char *v64; // [rsp+68h] [rbp-98h]
  WCHAR v65[72]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v66; // [rsp+100h] [rbp+0h] BYREF
  char v67; // [rsp+26Fh] [rbp+16Fh] BYREF

  v3 = 0;
  v61 = a1;
  v62 = 0;
  v60 = 0;
  v5 = a2;
  v55 = 0;
  v6 = 0;
  v54 = 0;
  v7 = 0;
  v63 = 0;
  v8 = 0;
  v56 = 0;
  if ( !a1 || !a2 )
    goto LABEL_195;
  v9 = *(_WORD *)a2;
  v53 = 0;
  v10 = 0;
  LODWORD(v11) = 0;
  if ( !v9 )
    return (unsigned int)v10;
  v12 = (WCHAR *)v64;
  do
  {
    v13 = v5;
    v5 += 2;
    v64 = v5;
    if ( v10 < 0 )
      break;
    if ( (unsigned __int16)(v9 - 32) > 0x5Au )
      v14 = 0;
    else
      v14 = _lookuptable_s[v9 - 32] & 0xF;
    v3 = _lookuptable_s[v14 + v3 + 8 * v14] >> 4;
    v52 = v3;
    switch ( v3 )
    {
      case 8:
        goto LABEL_195;
      case 0:
LABEL_194:
        v56 = 1;
        write_char_2(v9, v61, &v53);
        v10 = v53;
        goto LABEL_143;
      case 1:
        v7 = -1;
        v63 = 0;
        v55 = -1;
        v8 = 0;
        v60 = 0;
        v6 = 0;
        v54 = 0;
        v56 = 0;
        break;
      case 2:
        if ( v9 == 32 )
        {
          v6 |= 2u;
        }
        else if ( v9 == 35 )
        {
          v6 |= 0x80u;
        }
        else if ( v9 == 43 )
        {
          v6 |= 1u;
        }
        else
        {
          if ( v9 != 45 )
          {
            if ( v9 == 48 )
              v6 |= 8u;
            goto LABEL_143;
          }
          v6 |= 4u;
        }
        break;
      case 3:
        if ( v9 == 42 )
        {
          v50 = *a3;
          a3 += 2;
          v51 = v6 | 4;
          if ( v50 >= 0 )
            v51 = v6;
          v6 = v51;
          v60 = abs32(v50);
        }
        else
        {
          v60 = v9 + 2 * (5 * v60 - 24);
        }
        goto LABEL_143;
      case 4:
        v7 = 0;
        v55 = 0;
        break;
      case 5:
        if ( v9 == 42 )
        {
          v7 = *a3;
          a3 += 2;
          v55 = v7;
          if ( v7 < 0 )
          {
            v7 = -1;
            v55 = -1;
          }
          goto LABEL_143;
        }
        v7 = v9 + 2 * (5 * v7 - 24);
        v55 = v7;
        break;
      case 6:
        if ( v9 != 73 )
        {
          if ( v9 == 104 )
          {
            v6 |= 0x20u;
            break;
          }
          if ( v9 != 106 )
          {
            if ( v9 == 108 )
            {
              v47 = 4096;
              if ( *(_WORD *)v5 != 108 )
                v47 = 16;
              v6 |= v47;
              if ( *(_WORD *)v5 != 108 )
                v5 = v13;
              v5 += 2;
              break;
            }
            if ( v9 != 116 )
            {
              if ( v9 == 119 )
              {
                v6 |= 0x800u;
                break;
              }
              if ( v9 != 122 )
                break;
            }
          }
        }
        v6 |= 0x8000u;
        if ( v9 == 73 )
        {
          if ( *(_WORD *)v5 == 54 && *((_WORD *)v13 + 2) == 52 )
          {
            v5 = v13 + 6;
            break;
          }
          if ( *(_WORD *)v5 == 51 && *((_WORD *)v13 + 2) == 50 )
          {
            v5 = v13 + 6;
            v6 &= ~0x8000u;
            break;
          }
        }
        else if ( v9 == 106 )
        {
          break;
        }
        v48 = *(unsigned __int16 *)v5;
        LOWORD(v48) = v48 - 88;
        if ( (unsigned __int16)v48 > 0x20u )
          goto LABEL_194;
        v49 = 0x120821001LL;
        if ( !_bittest64(&v49, v48) )
          goto LABEL_194;
        break;
      case 7:
        if ( v9 > 0x69u )
        {
          switch ( v9 )
          {
            case 'n':
              goto LABEL_195;
            case 'o':
              v15 = 8LL;
              if ( (v6 & 0x80u) != 0 )
                v6 |= 0x200u;
              goto LABEL_28;
            case 'p':
              v7 = 16;
              v6 |= 0x8000u;
              goto LABEL_73;
          }
          if ( v9 != 115 )
          {
            if ( v9 != 117 )
            {
              if ( v9 != 120 )
                goto LABEL_105;
              v21 = 39;
              goto LABEL_74;
            }
LABEL_27:
            v15 = 10LL;
LABEL_28:
            a3 += 2;
            if ( (v6 & 0x8000) != 0 || (v6 & 0x1000) != 0 )
            {
              v16 = *((_QWORD *)a3 - 1);
            }
            else if ( (v6 & 0x20) != 0 )
            {
              if ( (v6 & 0x40) != 0 )
                v16 = *((__int16 *)a3 - 4);
              else
                v16 = *((unsigned __int16 *)a3 - 4);
            }
            else if ( (v6 & 0x40) != 0 )
            {
              v16 = *(a3 - 2);
            }
            else
            {
              v16 = (unsigned int)*(a3 - 2);
            }
            if ( (v6 & 0x40) != 0 && v16 < 0 )
            {
              v16 = -v16;
              v6 |= 0x100u;
            }
            v24 = (unsigned int)v16;
            if ( (v6 & 0x9000) != 0 )
              v24 = v16;
            if ( v7 >= 0 )
            {
              v6 &= ~8u;
              if ( v7 > 512 )
                v7 = 512;
            }
            else
            {
              v7 = 1;
            }
            v25 = &v67;
            v26 = v24 != 0 ? v8 : 0;
            v27 = v62;
            v54 = v26;
            v28 = v26;
            while ( 1 )
            {
              v29 = v7;
              v30 = v25;
              --v7;
              if ( v29 <= 0 && !v24 )
                break;
              v31 = v24 % v15;
              v24 /= v15;
              v32 = v31 + 48;
              if ( (int)v31 + 48 > 57 )
                v32 = v31 + v27 + 48;
              *v25-- = v32;
            }
            v55 = v7;
            LODWORD(v11) = (unsigned int)&v66 + 367 - (_DWORD)v25;
            v12 = (WCHAR *)(v25 + 1);
            v8 = v28;
            if ( (v6 & 0x200) != 0 )
            {
              if ( !(_DWORD)v11 || (v54 = v28, *(_BYTE *)v12 != 48) )
              {
                v12 = (WCHAR *)v30;
                *v30 = 48;
                LODWORD(v11) = v11 + 1;
                v54 = v28;
                v8 = v28;
              }
            }
            goto LABEL_105;
          }
        }
        else
        {
          if ( v9 == 105 )
            goto LABEL_26;
          if ( v9 == 67 )
          {
            if ( (v6 & 0x830) == 0 )
              v6 |= 0x20u;
            goto LABEL_53;
          }
          if ( v9 != 83 )
          {
            if ( v9 != 88 )
            {
              if ( v9 == 90 )
              {
                v17 = *(unsigned __int16 **)a3;
                a3 += 2;
                if ( v17 && (v12 = (WCHAR *)*((_QWORD *)v17 + 1)) != 0LL )
                {
                  if ( v17[1] < *v17 )
                    goto LABEL_195;
                  LODWORD(v11) = *v17;
                  if ( (v6 & 0x800) != 0 )
                  {
                    if ( (v11 & 1) != 0 || ((unsigned __int8)v12 & 1) != 0 )
                      goto LABEL_195;
                    LODWORD(v11) = *v17 >> 1;
                    v56 = 1;
                  }
                  else
                  {
                    v56 = 0;
                  }
                }
                else
                {
                  v12 = (WCHAR *)"(null)";
                  LODWORD(v11) = 6;
                }
                goto LABEL_105;
              }
              if ( v9 != 99 )
              {
                if ( v9 == 100 )
                {
LABEL_26:
                  v6 |= 0x40u;
                  goto LABEL_27;
                }
LABEL_105:
                if ( !v63 )
                {
                  if ( (v6 & 0x40) != 0 )
                  {
                    if ( (v6 & 0x100) != 0 )
                    {
                      v33 = 45;
                      goto LABEL_113;
                    }
                    if ( (v6 & 1) != 0 )
                    {
                      v33 = 43;
                      goto LABEL_113;
                    }
                    if ( (v6 & 2) != 0 )
                    {
                      v33 = 32;
LABEL_113:
                      v8 = 1;
                      v59[0] = v33;
                      v54 = 1;
                    }
                  }
                  v34 = v61;
                  v35 = v60 - v11 - v8;
                  if ( (v6 & 0xC) == 0 && v35 > 0 )
                  {
                    do
                      write_char_2(32LL, v34, &v53);
                    while ( v53 != -1 && v36 > 0 );
                    v8 = v54;
                  }
                  write_string_2(v59, v8, v34, &v53);
                  v37 = v61;
                  v38 = 0;
                  if ( (v6 & 0xC) == 8 && v35 > 0 )
                  {
                    do
                      write_char_2(48LL, v37, &v53);
                    while ( v53 != -1 && v39 > 0 );
                    v8 = v54;
                  }
                  if ( v56 == v38 && (int)v11 > 0 )
                  {
                    v40 = (UCHAR *)v12;
                    v41 = v11;
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
                        v8 = v54;
                        goto LABEL_134;
                      }
                    }
                    v8 = v54;
                    v10 = -1;
                    v53 = -1;
                  }
                  else
                  {
                    write_string_2(v12, (unsigned int)v11, v37, &v53);
                    v43 = v61;
LABEL_134:
                    v10 = v53;
                  }
                  if ( v10 >= 0 )
                  {
                    for ( i = (v6 & 4) == 0; !i && v35 > 0; i = v53 == -1 )
                    {
                      --v35;
                      write_char_2(32LL, v43, &v53);
                      v10 = v53;
                    }
                  }
                  v7 = v55;
                }
                v5 = v64;
                break;
              }
LABEL_53:
              v20 = *(_WORD *)a3;
              a3 += 2;
              v58[0] = v20;
              v56 = 1;
              if ( (v6 & 0x20) != 0 )
              {
                v57[0] = v20;
                v57[1] = 0;
                if ( (int)safecrt_mbtowc(v65, v57, _mb_cur_max) < 0 )
                  v63 = 1;
              }
              else
              {
                v65[0] = v20;
              }
              v12 = v65;
              LODWORD(v11) = 1;
              goto LABEL_105;
            }
LABEL_73:
            v21 = 7;
LABEL_74:
            v62 = v21;
            if ( (v6 & 0x80u) != 0 )
            {
              v59[0] = 48;
              v59[1] = v21 + 81;
              v8 = 2;
            }
            v15 = 16LL;
            goto LABEL_28;
          }
          if ( (v6 & 0x830) == 0 )
            v6 |= 0x20u;
        }
        v12 = *(WCHAR **)a3;
        v18 = v7;
        if ( v7 == -1 )
          v18 = 0x7FFFFFFF;
        a3 += 2;
        if ( (v6 & 0x20) != 0 )
        {
          v19 = (const char *)v12;
          if ( !v12 )
          {
            v12 = (WCHAR *)"(null)";
            v19 = "(null)";
          }
          LODWORD(v11) = 0;
          if ( v18 > 0 )
          {
            do
            {
              if ( !*v19 )
                break;
              ++v19;
              LODWORD(v11) = v11 + 1;
            }
            while ( (int)v11 < v18 );
          }
        }
        else
        {
          v56 = 1;
          v22 = L"(null)";
          if ( v12 )
            v22 = v12;
          v12 = (WCHAR *)v22;
          for ( j = v22; v18; ++j )
          {
            --v18;
            if ( !*j )
              break;
          }
          v11 = j - v22;
        }
        goto LABEL_105;
    }
    v3 = v52;
LABEL_143:
    v9 = *(_WORD *)v5;
  }
  while ( *(_WORD *)v5 );
  if ( !v3 || v3 == 7 )
    return (unsigned int)v10;
LABEL_195:
  invalid_parameter();
  return 0xFFFFFFFFLL;
}
