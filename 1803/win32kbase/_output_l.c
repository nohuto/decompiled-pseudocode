/*
 * XREFs of _output_l @ 0x1C0074FF4
 * Callers:
 *     _vsnprintf_l @ 0x1C0073F64 (_vsnprintf_l.c)
 * Callees:
 *     ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers @ 0x1C006E8B0 (ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     write_char_0 @ 0x1C0075840 (write_char_0.c)
 *     write_multi_char_0 @ 0x1C0075890 (write_multi_char_0.c)
 *     write_string_0 @ 0x1C00758E8 (write_string_0.c)
 *     _get_printf_count_output @ 0x1C0075970 (_get_printf_count_output.c)
 *     wctomb_s @ 0x1C0075B6C (wctomb_s.c)
 */

__int64 __fastcall output_l(__int64 a1, _BYTE *a2, __int64 a3, int *a4)
{
  _BYTE *v5; // r14
  __int64 v6; // r10
  int v7; // edi
  int v8; // r11d
  int v9; // esi
  char v11; // r9
  int v12; // r15d
  wchar_t *v13; // rbx
  _BYTE *v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  char *v17; // rax
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rcx
  wchar_t *v26; // rax
  const wchar_t *v27; // rax
  unsigned int v28; // r10d
  int v29; // edx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  char v34; // r12
  char *v35; // rbx
  int v36; // eax
  char *v37; // rdx
  unsigned __int64 v38; // rdx
  char v39; // al
  int v40; // eax
  wchar_t *v41; // rsi
  unsigned int v42; // r14d
  __int64 v43; // rcx
  __int64 v44; // r15
  int v45; // esi
  wchar_t *v46; // r15
  wchar_t v47; // r9
  __int64 v48; // rcx
  int v49; // eax
  char v50; // al
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // ecx
  int v54; // eax
  unsigned int v55; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v57[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v58; // [rsp+3Ch] [rbp-C4h]
  int SizeConverted; // [rsp+40h] [rbp-C0h] BYREF
  int v60; // [rsp+44h] [rbp-BCh]
  int v61; // [rsp+48h] [rbp-B8h]
  __int64 v62; // [rsp+50h] [rbp-B0h]
  int v63; // [rsp+58h] [rbp-A8h]
  int v64; // [rsp+5Ch] [rbp-A4h]
  int v65; // [rsp+60h] [rbp-A0h]
  int v66; // [rsp+64h] [rbp-9Ch] BYREF
  _BYTE *v67; // [rsp+68h] [rbp-98h]
  char *v68; // [rsp+70h] [rbp-90h]
  char MbCh[128]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v70; // [rsp+100h] [rbp+0h] BYREF
  char v71; // [rsp+27Fh] [rbp+17Fh] BYREF
  char v72[8]; // [rsp+280h] [rbp+180h] BYREF

  v62 = a1;
  v64 = 0;
  v60 = 0;
  v5 = a2;
  v58 = 0;
  v6 = a1;
  v55 = 0;
  v7 = 0;
  v63 = 0;
  v8 = 0;
  v61 = 0;
  v9 = 0;
  if ( a1 && a2 )
  {
    v11 = *a2;
    v12 = 0;
    v56 = 0;
    SizeConverted = 0;
    v65 = 0;
    if ( v11 )
    {
      v13 = (wchar_t *)v68;
      do
      {
        v14 = v5++;
        v67 = v5;
        if ( v12 < 0 )
          return (unsigned int)v12;
        if ( (unsigned __int8)(v11 - 32) > 0x58u )
          v15 = 0;
        else
          v15 = _lookuptable[v11 - 32] & 0xF;
        v16 = v65 + 8 * v15;
        v17 = _lookuptable;
        v18 = _lookuptable[v16] >> 4;
        v65 = v18;
        if ( !v18 )
        {
          v52 = 0LL;
          goto LABEL_183;
        }
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( !v20 )
          {
            switch ( v11 )
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
            goto LABEL_185;
          }
          v21 = v20 - 1;
          if ( !v21 )
          {
            if ( v11 == 42 )
            {
              v53 = *a4;
              a4 += 2;
              v54 = v7 | 4;
              if ( v53 >= 0 )
                v54 = v7;
              v7 = v54;
              v8 = abs32(v53);
            }
            else
            {
              v8 = v11 + 2 * (5 * v8 - 24);
            }
            v60 = v8;
            goto LABEL_185;
          }
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( !v23 )
            {
              if ( v11 == 42 )
              {
                v9 = *a4;
                a4 += 2;
                v58 = v9;
                if ( v9 < 0 )
                {
                  v9 = -1;
                  v58 = -1;
                }
              }
              else
              {
                v9 = v11 + 2 * (5 * v9 - 24);
                v58 = v9;
              }
              goto LABEL_185;
            }
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = (unsigned int)(v24 - 1);
              if ( !(_DWORD)v25 )
              {
                if ( v11 > 105 )
                {
                  switch ( v11 )
                  {
                    case 'n':
                      v41 = *(wchar_t **)a4;
                      a4 += 2;
                      if ( !get_printf_count_output() )
                        goto LABEL_187;
                      if ( (v7 & 0x20) != 0 )
                        *v41 = v12;
                      else
                        *(_DWORD *)v41 = v12;
                      v9 = v58;
                      v63 = 1;
                      goto LABEL_26;
                    case 'o':
                      v28 = 8;
                      if ( (v7 & 0x80u) != 0 )
                        v7 |= 0x200u;
                      goto LABEL_57;
                    case 'p':
                      v9 = 16;
                      v7 |= 0x8000u;
                      goto LABEL_81;
                  }
                  if ( v11 != 115 )
                  {
                    if ( v11 == 117 )
                      goto LABEL_56;
                    if ( v11 != 120 )
                      goto LABEL_26;
                    v31 = 39;
                    goto LABEL_82;
                  }
                }
                else
                {
                  if ( v11 == 105 )
                    goto LABEL_55;
                  if ( v11 == 67 )
                  {
                    if ( (v7 & 0x830) == 0 )
                      v7 |= 0x800u;
                    goto LABEL_50;
                  }
                  if ( v11 != 83 )
                  {
                    if ( v11 != 88 )
                    {
                      if ( v11 == 90 )
                      {
                        v26 = *(wchar_t **)a4;
                        a4 += 2;
                        if ( v26 && (v13 = (wchar_t *)*((_QWORD *)v26 + 1)) != 0LL )
                        {
                          LOWORD(v25) = *v26;
                          if ( v26[1] < *v26 )
                            goto LABEL_187;
                          v25 = (unsigned __int16)v25;
                          if ( (v7 & 0x800) != 0 )
                          {
                            if ( (v25 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                            {
LABEL_187:
                              ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers();
                              return 0xFFFFFFFFLL;
                            }
                            v61 = 1;
                            v25 = (unsigned __int16)v25 >> 1;
                          }
                          else
                          {
                            v61 = 0;
                          }
                        }
                        else
                        {
                          v13 = (wchar_t *)"(null)";
                          v25 = 6LL;
                        }
                        SizeConverted = v25;
                        goto LABEL_26;
                      }
                      if ( v11 != 99 )
                      {
                        if ( v11 != 100 )
                          goto LABEL_26;
LABEL_55:
                        v7 |= 0x40u;
LABEL_56:
                        v28 = 10;
LABEL_57:
                        v29 = v55;
LABEL_58:
                        a4 += 2;
                        if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
                        {
                          v30 = *((_QWORD *)a4 - 1);
                        }
                        else if ( (v7 & 0x20) != 0 )
                        {
                          if ( (v7 & 0x40) != 0 )
                            v30 = *((__int16 *)a4 - 4);
                          else
                            v30 = *((unsigned __int16 *)a4 - 4);
                        }
                        else if ( (v7 & 0x40) != 0 )
                        {
                          v30 = *(a4 - 2);
                        }
                        else
                        {
                          v30 = (unsigned int)*(a4 - 2);
                        }
                        if ( (v7 & 0x40) != 0 && v30 < 0 )
                        {
                          v30 = -v30;
                          v7 |= 0x100u;
                        }
                        v33 = (unsigned int)v30;
                        if ( (v7 & 0x9000) != 0 )
                          v33 = v30;
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
                        v34 = v64;
                        v35 = &v71;
                        v25 = v29 & (unsigned int)-(v33 != 0);
                        v55 = v33 != 0 ? v29 : 0;
                        while ( 1 )
                        {
                          v36 = v9;
                          v37 = v35;
                          --v9;
                          if ( v36 <= 0 && !v33 )
                            break;
                          v25 = v28;
                          v38 = v33 % v28;
                          v33 /= v28;
                          v39 = v38 + 48;
                          if ( (int)v38 + 48 > 57 )
                            v39 += v34;
                          *v35-- = v39;
                        }
                        v58 = v9;
                        v40 = (unsigned int)&v70 + 383 - (_DWORD)v35;
                        v13 = (wchar_t *)(v35 + 1);
                        SizeConverted = v40;
                        if ( (v7 & 0x200) != 0 && (!v40 || *(_BYTE *)v13 != 48) )
                        {
                          *v37 = 48;
                          SizeConverted = v40 + 1;
                          v13 = (wchar_t *)v37;
                        }
LABEL_26:
                        if ( v63 )
                          goto LABEL_184;
                        if ( (v7 & 0x40) != 0 )
                        {
                          if ( (v7 & 0x100) != 0 )
                          {
                            v57[0] = 45;
                            goto LABEL_121;
                          }
                          if ( (v7 & 1) != 0 )
                          {
                            v57[0] = 43;
                            goto LABEL_121;
                          }
                          if ( (v7 & 2) != 0 )
                          {
                            v57[0] = 32;
LABEL_121:
                            v55 = 1;
                          }
                        }
                        v42 = v60 - SizeConverted - v55;
                        if ( (v7 & 0xC) == 0 )
                        {
                          LOBYTE(v25) = 32;
                          write_multi_char_0(v25, v42, v62, &v56);
                        }
                        write_string_0(v57, v55, v62, &v56);
                        v44 = v62;
                        if ( (v7 & 0xC) == 8 )
                        {
                          LOBYTE(v43) = 48;
                          write_multi_char_0(v43, v42, v62, &v56);
                        }
                        v45 = SizeConverted;
                        if ( v61 && SizeConverted > 0 )
                        {
                          v46 = v13;
                          while ( 1 )
                          {
                            v47 = *v46++;
                            --v45;
                            if ( wctomb_s(&v66, v72, 6uLL, v47) || !v66 )
                              break;
                            write_string_0(v72, (unsigned int)v66, v62, &v56);
                            if ( !v45 )
                              goto LABEL_135;
                          }
                          v12 = -1;
                          v56 = -1;
                        }
                        else
                        {
                          write_string_0(v13, (unsigned int)SizeConverted, v44, &v56);
LABEL_135:
                          v12 = v56;
                        }
                        if ( v12 >= 0 && (v7 & 4) != 0 )
                        {
                          LOBYTE(v48) = 32;
                          write_multi_char_0(v48, v42, v62, &v56);
                          v12 = v56;
                        }
                        v9 = v58;
                        v5 = v67;
                        goto LABEL_184;
                      }
LABEL_50:
                      a4 += 2;
                      if ( (v7 & 0x810) != 0 )
                      {
                        if ( wctomb_s(&SizeConverted, MbCh, 0x200uLL, *((_WORD *)a4 - 4)) )
                          v63 = 1;
                      }
                      else
                      {
                        MbCh[0] = *((_BYTE *)a4 - 8);
                        SizeConverted = 1;
                      }
                      v13 = (wchar_t *)MbCh;
                      goto LABEL_26;
                    }
LABEL_81:
                    v31 = 7;
LABEL_82:
                    v64 = v31;
                    v28 = 16;
                    if ( (v7 & 0x80u) == 0 )
                      goto LABEL_57;
                    v57[0] = 48;
                    v57[1] = v31 + 81;
                    v29 = 2;
                    goto LABEL_58;
                  }
                  if ( (v7 & 0x830) == 0 )
                    v7 |= 0x800u;
                }
                v13 = *(wchar_t **)a4;
                v25 = (unsigned int)v9;
                if ( v9 == -1 )
                  v25 = 0x7FFFFFFFLL;
                a4 += 2;
                if ( (v7 & 0x810) != 0 )
                {
                  v27 = v13;
                  if ( !v13 )
                  {
                    v13 = L"(null)";
                    v27 = L"(null)";
                  }
                  v61 = 1;
                  while ( (_DWORD)v25 )
                  {
                    v25 = (unsigned int)(v25 - 1);
                    if ( !*v27 )
                      break;
                    ++v27;
                  }
                  v32 = v27 - v13;
                }
                else
                {
                  v32 = (__int64)"(null)";
                  if ( v13 )
                    v32 = (__int64)v13;
                  v13 = (wchar_t *)v32;
                  while ( (_DWORD)v25 )
                  {
                    v25 = (unsigned int)(v25 - 1);
                    if ( !*(_BYTE *)v32 )
                      break;
                    ++v32;
                  }
                  LODWORD(v32) = v32 - (_DWORD)v13;
                }
                SizeConverted = v32;
                goto LABEL_26;
              }
            }
            else
            {
              if ( v11 != 73 )
              {
                switch ( v11 )
                {
                  case 'h':
                    v7 |= 0x20u;
                    break;
                  case 'l':
                    v49 = 4096;
                    if ( *v5 != 108 )
                      v49 = 16;
                    v7 |= v49;
                    if ( *v5 != 108 )
                      v5 = v14;
                    ++v5;
                    break;
                  case 'w':
                    v7 |= 0x800u;
                    break;
                }
                goto LABEL_185;
              }
              v50 = *v5;
              v7 |= 0x8000u;
              if ( *v5 == 54 )
              {
                if ( v14[2] != 52 )
                  goto LABEL_159;
                v5 = v14 + 3;
              }
              else
              {
                if ( v50 != 51 )
                {
                  LOBYTE(v17) = v50 - 88;
                  if ( (unsigned __int8)v17 <= 0x20u )
                  {
                    v51 = 0x120821001LL;
                    if ( _bittest64(&v51, (unsigned __int64)v17) )
                      goto LABEL_185;
                  }
LABEL_159:
                  v52 = 0LL;
                  v65 = 0;
LABEL_183:
                  v61 = 0;
                  LOBYTE(v52) = v11;
                  write_char_0(v52, v6, &v56);
                  v12 = v56;
LABEL_184:
                  v8 = v60;
                  v6 = v62;
                  goto LABEL_185;
                }
                if ( v14[2] != 50 )
                  goto LABEL_159;
                v5 = v14 + 3;
                v7 &= ~0x8000u;
              }
            }
          }
          else
          {
            v9 = 0;
            v58 = 0;
          }
        }
        else
        {
          v58 = -1;
          v63 = 0;
          v8 = 0;
          v60 = 0;
          v7 = 0;
          v55 = 0;
          v9 = -1;
          v61 = 0;
        }
LABEL_185:
        v11 = *v5;
      }
      while ( *v5 );
    }
    return (unsigned int)v12;
  }
  else
  {
    ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers();
    return 0xFFFFFFFFLL;
  }
}
