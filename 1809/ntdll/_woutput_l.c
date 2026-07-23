/*
 * XREFs of _woutput_l @ 0x180096E30
 * Callers:
 *     _snwprintf @ 0x180090E30 (_snwprintf.c)
 *     swprintf @ 0x180091470 (swprintf.c)
 *     _vswprintf_l @ 0x180091674 (_vswprintf_l.c)
 *     _vsnwprintf_l @ 0x18009180C (_vsnwprintf_l.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     write_char_0 @ 0x180097748 (write_char_0.c)
 *     write_multi_char_0 @ 0x180097798 (write_multi_char_0.c)
 *     write_string_0 @ 0x1800977F0 (write_string_0.c)
 *     _get_printf_count_output @ 0x180099CD4 (_get_printf_count_output.c)
 *     mbtowc @ 0x180099E18 (mbtowc.c)
 */

__int64 __fastcall woutput_l(__int64 a1, char *a2, __int64 a3, wchar_t *a4)
{
  wchar_t *v4; // rsi
  char *v5; // r10
  __int64 v6; // r11
  int v7; // edi
  int v8; // r15d
  unsigned int v9; // r12d
  unsigned __int16 v10; // r9
  int v11; // r14d
  __int64 v12; // r13
  const wchar_t *v13; // rbx
  char *v14; // r8
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  __int16 v24; // ax
  unsigned __int16 *v25; // rax
  wchar_t v26; // ax
  unsigned __int64 v27; // r10
  wchar_t *v28; // rsi
  __int64 v29; // rax
  int v30; // eax
  int v31; // ecx
  const char *v32; // rax
  const wchar_t *v33; // rax
  const wchar_t *i; // r13
  unsigned __int64 v35; // r8
  char *v36; // rbx
  int v37; // ecx
  char v38; // r12
  unsigned int v39; // r9d
  int v40; // ecx
  char *v41; // rdx
  unsigned __int64 v42; // rdx
  char v43; // al
  _WORD *v44; // rsi
  __int64 v45; // r14
  unsigned int v46; // r15d
  __int64 v47; // rsi
  const char *v48; // r12
  int v49; // esi
  int v50; // eax
  __int64 v51; // r14
  int v52; // eax
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  int v56; // eax
  int v57; // ecx
  int v58; // ecx
  int v59; // [rsp+30h] [rbp-D0h]
  int v60; // [rsp+34h] [rbp-CCh] BYREF
  int v61; // [rsp+38h] [rbp-C8h]
  int v62; // [rsp+3Ch] [rbp-C4h]
  int v63; // [rsp+40h] [rbp-C0h]
  __int64 v64; // [rsp+48h] [rbp-B8h]
  char SrcCh[4]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t v66; // [rsp+54h] [rbp-ACh] BYREF
  _WORD v67[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v68; // [rsp+5Ch] [rbp-A4h]
  wchar_t *v69; // [rsp+60h] [rbp-A0h]
  int v70; // [rsp+68h] [rbp-98h]
  int v71; // [rsp+6Ch] [rbp-94h]
  char *v72; // [rsp+70h] [rbp-90h]
  wchar_t DstCh[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v74; // [rsp+100h] [rbp+0h] BYREF
  char v75; // [rsp+27Fh] [rbp+17Fh] BYREF

  v69 = a4;
  v64 = a1;
  v4 = a4;
  v70 = 0;
  v5 = a2;
  v68 = 0;
  v6 = a1;
  v62 = 0;
  v7 = 0;
  v61 = 0;
  v8 = 0;
  v59 = 0;
  v9 = 0;
  v63 = 0;
  if ( a1 && a2 )
  {
    v10 = *(_WORD *)a2;
    v11 = 0;
    v60 = 0;
    LODWORD(v12) = 0;
    v71 = 0;
    if ( v10 )
    {
      v13 = (const wchar_t *)v72;
      do
      {
        v14 = v5;
        v5 += 2;
        v72 = v5;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = _lookuptable[v10 - 32] & 0xF;
        v16 = _lookuptable[8 * v15 + v71] >> 4;
        v71 = v16;
        if ( !v16 )
          goto LABEL_165;
        v17 = v16 - 1;
        if ( !v17 )
        {
          v8 = -1;
          v59 = 0;
          v62 = -1;
          v9 = 0;
          v68 = 0;
          v7 = 0;
          v61 = 0;
          v63 = 0;
          goto LABEL_167;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          switch ( v10 )
          {
            case ' ':
              v7 |= 2u;
              break;
            case '#':
              v7 |= 0x80u;
              break;
            case '+':
              v7 |= 1u;
              break;
            case '-':
              v7 |= 4u;
              break;
            case '0':
              v7 |= 8u;
              break;
          }
          goto LABEL_167;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          if ( v10 == 42 )
          {
            v56 = *(_DWORD *)v4;
            v69 = v4 + 4;
            v57 = v7 | 4;
            if ( v56 >= 0 )
              v57 = v7;
            v7 = v57;
            v58 = abs32(v56);
          }
          else
          {
            v58 = v10 + 2 * (5 * v68 - 24);
          }
          v68 = v58;
          goto LABEL_167;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          v8 = 0;
          v62 = 0;
          goto LABEL_167;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          if ( v10 == 42 )
          {
            v8 = *(_DWORD *)v4;
            v69 = v4 + 4;
            v62 = v8;
            if ( v8 < 0 )
            {
              v8 = -1;
              v62 = -1;
            }
          }
          else
          {
            v8 = v10 + 2 * (5 * v8 - 24);
            v62 = v8;
          }
          goto LABEL_167;
        }
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( v22 == 1 )
          {
            if ( v10 > 0x69u )
            {
              switch ( v10 )
              {
                case 'n':
                  v69 = v4 + 4;
                  v44 = *(_WORD **)v4;
                  if ( !get_printf_count_output() )
                    goto LABEL_191;
                  if ( (v7 & 0x20) != 0 )
                    *v44 = v11;
                  else
                    *(_DWORD *)v44 = v11;
                  v23 = 1;
                  v59 = 1;
                  goto LABEL_26;
                case 'o':
                  v27 = 8LL;
                  if ( (v7 & 0x80u) != 0 )
                    v7 |= 0x200u;
                  goto LABEL_51;
                case 'p':
                  v8 = 16;
                  v7 |= 0x8000u;
                  goto LABEL_78;
              }
              if ( v10 != 115 )
              {
                if ( v10 == 117 )
                  goto LABEL_50;
                if ( v10 != 120 )
                  goto LABEL_25;
                v30 = 39;
                goto LABEL_79;
              }
            }
            else
            {
              if ( v10 == 105 )
                goto LABEL_49;
              if ( v10 == 67 )
              {
                if ( (v7 & 0x830) == 0 )
                  v7 |= 0x20u;
                goto LABEL_44;
              }
              if ( v10 != 83 )
              {
                if ( v10 != 88 )
                {
                  if ( v10 == 90 )
                  {
                    v25 = *(unsigned __int16 **)v4;
                    v69 = v4 + 4;
                    if ( v25 && (v13 = (const wchar_t *)*((_QWORD *)v25 + 1)) != 0LL )
                    {
                      if ( v25[1] < *v25 )
                        goto LABEL_191;
                      LODWORD(v12) = *v25;
                      if ( (v7 & 0x800) != 0 )
                      {
                        if ( (v12 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                          goto LABEL_191;
                        LODWORD(v12) = *v25 >> 1;
                        v63 = 1;
                      }
                      else
                      {
                        v63 = 0;
                      }
                    }
                    else
                    {
                      v13 = (const wchar_t *)"(null)";
                      LODWORD(v12) = 6;
                    }
                    goto LABEL_25;
                  }
                  if ( v10 != 99 )
                  {
                    if ( v10 != 100 )
                      goto LABEL_25;
LABEL_49:
                    v7 |= 0x40u;
LABEL_50:
                    v27 = 10LL;
LABEL_51:
                    v28 = v4 + 4;
                    v69 = v28;
                    if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
                    {
                      v29 = *((_QWORD *)v28 - 1);
                    }
                    else if ( (v7 & 0x20) != 0 )
                    {
                      if ( (v7 & 0x40) != 0 )
                        v29 = (__int16)*(v28 - 4);
                      else
                        v29 = *(v28 - 4);
                    }
                    else if ( (v7 & 0x40) != 0 )
                    {
                      v29 = *((int *)v28 - 2);
                    }
                    else
                    {
                      v29 = *((unsigned int *)v28 - 2);
                    }
                    if ( (v7 & 0x40) != 0 && v29 < 0 )
                    {
                      v29 = -v29;
                      v7 |= 0x100u;
                    }
                    v35 = (unsigned int)v29;
                    if ( (v7 & 0x9000) != 0 )
                      v35 = v29;
                    if ( v8 >= 0 )
                    {
                      v7 &= ~8u;
                      if ( v8 > 512 )
                        v8 = 512;
                    }
                    else
                    {
                      v8 = 1;
                    }
                    v36 = &v75;
                    v37 = v35 != 0 ? v9 : 0;
                    v38 = v70;
                    v61 = v37;
                    v39 = v37;
                    while ( 1 )
                    {
                      v40 = v8;
                      v41 = v36;
                      --v8;
                      if ( v40 <= 0 && !v35 )
                        break;
                      v42 = v35 % v27;
                      v35 /= v27;
                      v43 = v42 + 48;
                      if ( (int)v42 + 48 > 57 )
                        v43 = v42 + v38 + 48;
                      *v36-- = v43;
                    }
                    v62 = v8;
                    LODWORD(v12) = (unsigned int)&v74 + 383 - (_DWORD)v36;
                    v13 = (const wchar_t *)(v36 + 1);
                    v9 = v39;
                    if ( (v7 & 0x200) != 0 )
                    {
                      if ( !(_DWORD)v12 || (v69 = v28, v61 = v39, *(_BYTE *)v13 != 48) )
                      {
                        v13 = (const wchar_t *)v41;
                        *v41 = 48;
                        LODWORD(v12) = v12 + 1;
                        v69 = v28;
                        v9 = v39;
                        v61 = v39;
                      }
                    }
LABEL_25:
                    v23 = v59;
LABEL_26:
                    if ( v23 )
                      goto LABEL_166;
                    if ( (v7 & 0x40) != 0 )
                    {
                      if ( (v7 & 0x100) != 0 )
                      {
                        v24 = 45;
                        goto LABEL_30;
                      }
                      if ( (v7 & 1) != 0 )
                      {
                        v24 = 43;
LABEL_30:
                        v67[0] = v24;
LABEL_119:
                        v9 = 1;
                        v61 = 1;
                      }
                      else if ( (v7 & 2) != 0 )
                      {
                        v67[0] = 32;
                        goto LABEL_119;
                      }
                    }
                    v45 = v64;
                    v46 = v68 - v12 - v9;
                    if ( (v7 & 0xC) == 0 )
                      write_multi_char_0(32LL, v46, v64, &v60);
                    write_string_0(v67, v9, v45, &v60);
                    v47 = v64;
                    if ( (v7 & 0xC) == 8 )
                      write_multi_char_0(48LL, v46, v64, &v60);
                    if ( v63 || (int)v12 <= 0 )
                    {
                      write_string_0(v13, (unsigned int)v12, v47, &v60);
LABEL_134:
                      v11 = v60;
                    }
                    else
                    {
                      v48 = (const char *)v13;
                      v49 = v12;
                      while ( 1 )
                      {
                        --v49;
                        v50 = mbtowc(&v66, v48, _mb_cur_max);
                        v51 = v50;
                        if ( v50 == 2 )
                          --v49;
                        if ( v50 <= 0 )
                          break;
                        write_char_0(v66, v64, &v60);
                        v48 += v51;
                        if ( v49 <= 0 )
                        {
                          v9 = v61;
                          v47 = v64;
                          goto LABEL_134;
                        }
                      }
                      v9 = v61;
                      v11 = -1;
                      v47 = v64;
                      v60 = -1;
                    }
                    if ( v11 >= 0 && (v7 & 4) != 0 )
                    {
                      write_multi_char_0(32LL, v46, v47, &v60);
                      v11 = v60;
                    }
                    v8 = v62;
                    goto LABEL_166;
                  }
LABEL_44:
                  v26 = *v4;
                  v66 = *v4;
                  v63 = 1;
                  v69 = v4 + 4;
                  if ( (v7 & 0x20) != 0 )
                  {
                    SrcCh[0] = v26;
                    SrcCh[1] = 0;
                    if ( mbtowc(DstCh, SrcCh, _mb_cur_max) < 0 )
                      v59 = 1;
                  }
                  else
                  {
                    DstCh[0] = v26;
                  }
                  v13 = DstCh;
                  LODWORD(v12) = 1;
                  goto LABEL_25;
                }
LABEL_78:
                v30 = 7;
LABEL_79:
                v70 = v30;
                if ( (v7 & 0x80u) != 0 )
                {
                  v67[0] = 48;
                  v67[1] = v30 + 81;
                  v9 = 2;
                }
                v27 = 16LL;
                goto LABEL_51;
              }
              if ( (v7 & 0x830) == 0 )
                v7 |= 0x20u;
            }
            v13 = *(const wchar_t **)v4;
            v31 = v8;
            if ( v8 == -1 )
              v31 = 0x7FFFFFFF;
            v69 = v4 + 4;
            if ( (v7 & 0x20) != 0 )
            {
              LODWORD(v12) = 0;
              v32 = (const char *)v13;
              if ( !v13 )
              {
                v13 = (const wchar_t *)"(null)";
                v32 = "(null)";
              }
              if ( v31 > 0 )
              {
                do
                {
                  if ( !*v32 )
                    break;
                  ++v32;
                  LODWORD(v12) = v12 + 1;
                }
                while ( (int)v12 < v31 );
              }
            }
            else
            {
              v63 = 1;
              v33 = L"(null)";
              if ( v13 )
                v33 = v13;
              v13 = v33;
              for ( i = v33; v31; ++i )
              {
                --v31;
                if ( !*i )
                  break;
              }
              v12 = i - v33;
            }
            goto LABEL_25;
          }
        }
        else
        {
          if ( v10 != 73 )
          {
            if ( v10 == 104 )
            {
              v7 |= 0x20u;
              goto LABEL_167;
            }
            if ( v10 != 106 )
            {
              if ( v10 == 108 )
              {
                v52 = 4096;
                if ( *(_WORD *)v5 != 108 )
                  v52 = 16;
                v7 |= v52;
                if ( *(_WORD *)v5 != 108 )
                  v5 = v14;
                v5 += 2;
                goto LABEL_167;
              }
              if ( v10 != 116 )
              {
                if ( v10 == 119 )
                {
                  v7 |= 0x800u;
                  goto LABEL_167;
                }
                if ( v10 != 122 )
                  goto LABEL_167;
              }
            }
          }
          v7 |= 0x8000u;
          if ( v10 == 73 )
          {
            if ( *(_WORD *)v5 == 54 && *((_WORD *)v14 + 2) == 52 )
            {
              v5 = v14 + 6;
            }
            else
            {
              if ( *(_WORD *)v5 != 51 || *((_WORD *)v14 + 2) != 50 )
              {
LABEL_162:
                v53 = *(unsigned __int16 *)v5;
                LOWORD(v53) = v53 - 88;
                if ( (unsigned __int16)v53 <= 0x20u )
                {
                  v54 = 0x120821001LL;
                  if ( _bittest64(&v54, v53) )
                    goto LABEL_167;
                }
                v71 = 0;
LABEL_165:
                v63 = 1;
                write_char_0(v10, v6, &v60);
                v11 = v60;
LABEL_166:
                v6 = v64;
                v5 = v72;
                goto LABEL_167;
              }
              v5 = v14 + 6;
              v7 &= ~0x8000u;
            }
          }
          else if ( v10 != 106 )
          {
            goto LABEL_162;
          }
        }
LABEL_167:
        v10 = *(_WORD *)v5;
        v4 = v69;
      }
      while ( *(_WORD *)v5 );
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_191:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
