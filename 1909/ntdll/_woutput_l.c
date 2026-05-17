/*
 * XREFs of _woutput_l @ 0x180093D60
 * Callers:
 *     _snwprintf @ 0x18008DDB0 (_snwprintf.c)
 *     swprintf @ 0x18008E3F0 (swprintf.c)
 *     _vswprintf_l @ 0x18008E5F4 (_vswprintf_l.c)
 *     _vsnwprintf_l @ 0x18008E78C (_vsnwprintf_l.c)
 * Callees:
 *     _invalid_parameter @ 0x18008CD78 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     write_char_0 @ 0x180094680 (write_char_0.c)
 *     write_multi_char_0 @ 0x1800946D0 (write_multi_char_0.c)
 *     write_string_0 @ 0x180094728 (write_string_0.c)
 *     _get_printf_count_output @ 0x180096C0C (_get_printf_count_output.c)
 *     mbtowc @ 0x180096D50 (mbtowc.c)
 */

__int64 __fastcall woutput_l(__int64 a1, _WORD *a2, __int64 a3, wchar_t *a4)
{
  wchar_t *v4; // rsi
  _WORD *v5; // r12
  __int64 v6; // r10
  int v7; // edi
  int v8; // r11d
  int v9; // r15d
  unsigned __int16 v10; // r9
  int v11; // r14d
  __int64 v12; // r13
  wchar_t *v13; // rbx
  _WORD *v14; // r8
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
  unsigned __int16 *v25; // rcx
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
  char v36; // r11
  char *v37; // rbx
  int v38; // r9d
  int v39; // ecx
  unsigned __int64 v40; // rdx
  char v41; // al
  _WORD *v42; // rsi
  unsigned int v43; // r14d
  unsigned int v44; // r12d
  __int64 v45; // rsi
  const char *v46; // r15
  int v47; // esi
  int v48; // eax
  __int64 v49; // r14
  int v50; // eax
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  int v54; // eax
  int v55; // ecx
  int v56; // [rsp+30h] [rbp-D0h]
  int v57; // [rsp+34h] [rbp-CCh] BYREF
  int v58; // [rsp+38h] [rbp-C8h]
  int v59; // [rsp+3Ch] [rbp-C4h]
  int v60; // [rsp+40h] [rbp-C0h]
  int v61; // [rsp+44h] [rbp-BCh]
  __int64 v62; // [rsp+48h] [rbp-B8h]
  char SrcCh[4]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t v64; // [rsp+54h] [rbp-ACh] BYREF
  _WORD v65[4]; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t *v66; // [rsp+60h] [rbp-A0h]
  int v67; // [rsp+68h] [rbp-98h]
  int v68; // [rsp+6Ch] [rbp-94h]
  _WORD *v69; // [rsp+70h] [rbp-90h]
  char *v70; // [rsp+78h] [rbp-88h]
  wchar_t DstCh[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v72; // [rsp+100h] [rbp+0h] BYREF
  char v73; // [rsp+27Fh] [rbp+17Fh] BYREF

  v66 = a4;
  v62 = a1;
  v4 = a4;
  v67 = 0;
  v5 = a2;
  v59 = 0;
  v6 = a1;
  v60 = 0;
  v7 = 0;
  v58 = 0;
  v8 = 0;
  v56 = 0;
  v9 = 0;
  v61 = 0;
  if ( a1 && a2 )
  {
    v10 = *a2;
    v11 = 0;
    v57 = 0;
    LODWORD(v12) = 0;
    v68 = 0;
    if ( v10 )
    {
      v13 = (wchar_t *)v70;
      do
      {
        v14 = v5++;
        v69 = v5;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = _lookuptable[v10 - 32] & 0xF;
        v16 = _lookuptable[8 * v15 + v68] >> 4;
        v68 = v16;
        if ( !v16 )
          goto LABEL_166;
        v17 = v16 - 1;
        if ( !v17 )
        {
          v9 = -1;
          v56 = 0;
          v60 = -1;
          v8 = 0;
          v59 = 0;
          v7 = 0;
          v58 = 0;
          v61 = 0;
          goto LABEL_168;
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
          goto LABEL_168;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          if ( v10 == 42 )
          {
            v54 = *(_DWORD *)v4;
            v66 = v4 + 4;
            v55 = v7 | 4;
            if ( v54 >= 0 )
              v55 = v7;
            v8 = abs32(v54);
            v7 = v55;
          }
          else
          {
            v8 = v10 + 2 * (5 * v8 - 24);
          }
          v59 = v8;
          goto LABEL_168;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          v9 = 0;
          v60 = 0;
          goto LABEL_168;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          if ( v10 == 42 )
          {
            v9 = *(_DWORD *)v4;
            v66 = v4 + 4;
            v60 = v9;
            if ( v9 < 0 )
            {
              v9 = -1;
              v60 = -1;
            }
          }
          else
          {
            v9 = v10 + 2 * (5 * v9 - 24);
            v60 = v9;
          }
          goto LABEL_168;
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
                  v66 = v4 + 4;
                  v42 = *(_WORD **)v4;
                  if ( !get_printf_count_output() )
                    goto LABEL_192;
                  if ( (v7 & 0x20) != 0 )
                    *v42 = v11;
                  else
                    *(_DWORD *)v42 = v11;
                  v23 = 1;
                  v56 = 1;
                  goto LABEL_26;
                case 'o':
                  v27 = 8LL;
                  if ( (v7 & 0x80u) != 0 )
                    v7 |= 0x200u;
                  goto LABEL_50;
                case 'p':
                  v9 = 16;
                  v7 |= 0x8000u;
                  goto LABEL_77;
              }
              if ( v10 != 115 )
              {
                if ( v10 == 117 )
                  goto LABEL_49;
                if ( v10 != 120 )
                  goto LABEL_25;
                v30 = 39;
                goto LABEL_78;
              }
            }
            else
            {
              if ( v10 == 105 )
                goto LABEL_48;
              if ( v10 == 67 )
              {
                if ( (v7 & 0x830) == 0 )
                  v7 |= 0x20u;
                goto LABEL_43;
              }
              if ( v10 != 83 )
              {
                if ( v10 != 88 )
                {
                  if ( v10 == 90 )
                  {
                    v25 = *(unsigned __int16 **)v4;
                    v66 = v4 + 4;
                    if ( v25 && (v13 = (wchar_t *)*((_QWORD *)v25 + 1)) != 0LL )
                    {
                      if ( v25[1] < *v25 )
                        goto LABEL_192;
                      LODWORD(v12) = *v25;
                      if ( (v7 & 0x800) != 0 )
                      {
                        if ( (v12 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                          goto LABEL_192;
                        LODWORD(v12) = *v25 >> 1;
                        v61 = 1;
                      }
                      else
                      {
                        v61 = 0;
                      }
                    }
                    else
                    {
                      v13 = (wchar_t *)"(null)";
                      LODWORD(v12) = 6;
                    }
                    goto LABEL_25;
                  }
                  if ( v10 != 99 )
                  {
                    if ( v10 != 100 )
                      goto LABEL_25;
LABEL_48:
                    v7 |= 0x40u;
LABEL_49:
                    v27 = 10LL;
LABEL_50:
                    v28 = v4 + 4;
                    v66 = v28;
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
                    if ( v9 >= 0 )
                    {
                      v7 &= ~8u;
                      if ( v9 > 512 )
                        v9 = 512;
                    }
                    else
                    {
                      v9 = 1;
                    }
                    v36 = v67;
                    v37 = &v73;
                    v58 &= -(v35 != 0);
                    v38 = v58;
                    while ( 1 )
                    {
                      v39 = v9--;
                      if ( v39 <= 0 && !v35 )
                        break;
                      v40 = v35 % v27;
                      v35 /= v27;
                      v41 = v40 + 48;
                      if ( (int)v40 + 48 > 57 )
                        v41 = v40 + v36 + 48;
                      *v37-- = v41;
                    }
                    v60 = v9;
                    LODWORD(v12) = (unsigned int)&v72 + 383 - (_DWORD)v37;
                    v13 = (wchar_t *)(v37 + 1);
                    if ( (v7 & 0x200) != 0 )
                    {
                      if ( !(_DWORD)v12 || (v66 = v28, v58 = v38, *(_BYTE *)v13 != 48) )
                      {
                        v13 = (wchar_t *)((char *)v13 - 1);
                        v66 = v28;
                        LODWORD(v12) = v12 + 1;
                        v58 = v38;
                        *(_BYTE *)v13 = 48;
                      }
                    }
LABEL_25:
                    v23 = v56;
LABEL_26:
                    if ( v23 )
                      goto LABEL_167;
                    if ( (v7 & 0x40) != 0 )
                    {
                      if ( (v7 & 0x100) != 0 )
                      {
                        v24 = 45;
                        goto LABEL_116;
                      }
                      if ( (v7 & 1) != 0 )
                      {
                        v24 = 43;
LABEL_116:
                        v65[0] = v24;
LABEL_117:
                        v43 = 1;
                        v58 = 1;
LABEL_121:
                        v44 = v59 - v12 - v43;
                        if ( (v7 & 0xC) == 0 )
                          write_multi_char_0(32LL, v44, v62, &v57);
                        write_string_0(v65, v43, v62, &v57);
                        v45 = v62;
                        if ( (v7 & 0xC) == 8 )
                          write_multi_char_0(48LL, v44, v62, &v57);
                        if ( v61 || (int)v12 <= 0 )
                        {
                          write_string_0(v13, (unsigned int)v12, v45, &v57);
LABEL_135:
                          v11 = v57;
                        }
                        else
                        {
                          v46 = (const char *)v13;
                          v47 = v12;
                          while ( 1 )
                          {
                            --v47;
                            v48 = mbtowc(&v64, v46, _mb_cur_max);
                            v49 = v48;
                            if ( v48 == 2 )
                              --v47;
                            if ( v48 <= 0 )
                              break;
                            write_char_0(v64, v62, &v57);
                            v46 += v49;
                            if ( v47 <= 0 )
                            {
                              v9 = v60;
                              v45 = v62;
                              goto LABEL_135;
                            }
                          }
                          v9 = v60;
                          v11 = -1;
                          v45 = v62;
                          v57 = -1;
                        }
                        if ( v11 >= 0 && (v7 & 4) != 0 )
                        {
                          write_multi_char_0(32LL, v44, v45, &v57);
                          v11 = v57;
                        }
                        v5 = v69;
                        goto LABEL_167;
                      }
                      if ( (v7 & 2) != 0 )
                      {
                        v65[0] = 32;
                        goto LABEL_117;
                      }
                    }
                    v43 = v58;
                    goto LABEL_121;
                  }
LABEL_43:
                  v26 = *v4;
                  v64 = *v4;
                  v61 = 1;
                  v66 = v4 + 4;
                  if ( (v7 & 0x20) != 0 )
                  {
                    SrcCh[0] = v26;
                    SrcCh[1] = 0;
                    if ( mbtowc(DstCh, SrcCh, _mb_cur_max) < 0 )
                      v56 = 1;
                  }
                  else
                  {
                    DstCh[0] = v26;
                  }
                  v13 = DstCh;
                  LODWORD(v12) = 1;
                  goto LABEL_25;
                }
LABEL_77:
                v30 = 7;
LABEL_78:
                v67 = v30;
                if ( (v7 & 0x80u) != 0 )
                {
                  v58 = 2;
                  v65[0] = 48;
                  v65[1] = v30 + 81;
                }
                v27 = 16LL;
                goto LABEL_50;
              }
              if ( (v7 & 0x830) == 0 )
                v7 |= 0x20u;
            }
            v13 = *(wchar_t **)v4;
            v31 = v9;
            if ( v9 == -1 )
              v31 = 0x7FFFFFFF;
            v66 = v4 + 4;
            if ( (v7 & 0x20) != 0 )
            {
              LODWORD(v12) = 0;
              v32 = (const char *)v13;
              if ( !v13 )
              {
                v13 = (wchar_t *)"(null)";
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
              v61 = 1;
              v33 = L"(null)";
              if ( v13 )
                v33 = v13;
              v13 = (wchar_t *)v33;
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
              goto LABEL_168;
            }
            if ( v10 != 106 )
            {
              if ( v10 == 108 )
              {
                v50 = 4096;
                if ( *v5 != 108 )
                  v50 = 16;
                v7 |= v50;
                if ( *v5 != 108 )
                  v5 = v14;
                ++v5;
                goto LABEL_168;
              }
              if ( v10 != 116 )
              {
                if ( v10 == 119 )
                {
                  v7 |= 0x800u;
                  goto LABEL_168;
                }
                if ( v10 != 122 )
                  goto LABEL_168;
              }
            }
          }
          v7 |= 0x8000u;
          if ( v10 == 73 )
          {
            if ( *v5 == 54 && v14[2] == 52 )
            {
              v5 = v14 + 3;
            }
            else
            {
              if ( *v5 != 51 || v14[2] != 50 )
              {
LABEL_163:
                v51 = (unsigned __int16)*v5;
                LOWORD(v51) = v51 - 88;
                if ( (unsigned __int16)v51 <= 0x20u )
                {
                  v52 = 0x120821001LL;
                  if ( _bittest64(&v52, v51) )
                    goto LABEL_168;
                }
                v68 = 0;
LABEL_166:
                v61 = 1;
                write_char_0(v10, v6, &v57);
                v11 = v57;
LABEL_167:
                v8 = v59;
                v6 = v62;
                goto LABEL_168;
              }
              v5 = v14 + 3;
              v7 &= ~0x8000u;
            }
          }
          else if ( v10 != 106 )
          {
            goto LABEL_163;
          }
        }
LABEL_168:
        v10 = *v5;
        v4 = v66;
      }
      while ( *v5 );
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_192:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
