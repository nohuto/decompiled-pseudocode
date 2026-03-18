/*
 * XREFs of _woutput_l @ 0x1C0074588
 * Callers:
 *     _vsnwprintf_l @ 0x1C0073DC8 (_vsnwprintf_l.c)
 * Callees:
 *     ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers @ 0x1C006E8B0 (ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     write_char @ 0x1C0074EBC (write_char.c)
 *     write_multi_char @ 0x1C0074F10 (write_multi_char.c)
 *     write_string @ 0x1C0074F68 (write_string.c)
 *     _get_printf_count_output @ 0x1C0075970 (_get_printf_count_output.c)
 *     mbtowc @ 0x1C00759DC (mbtowc.c)
 */

__int64 __fastcall woutput_l(__int64 a1, _WORD *a2, __int64 a3, wchar_t *a4)
{
  wchar_t *v4; // rsi
  _WORD *v5; // r10
  __int64 v6; // r11
  int v7; // edi
  int v8; // r12d
  unsigned __int16 v10; // r9
  int v11; // r15d
  __int64 v12; // r13
  const char *v13; // rbx
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
  char *v25; // rax
  wchar_t v26; // ax
  unsigned int v27; // r10d
  int v28; // edx
  wchar_t *v29; // rsi
  __int64 v30; // rax
  __int16 v31; // ax
  int v32; // ecx
  const char *v33; // rax
  const wchar_t *v34; // rax
  const wchar_t *i; // r13
  unsigned __int64 v36; // r8
  char v37; // r11
  char *v38; // rbx
  int v39; // eax
  char *v40; // rcx
  unsigned __int64 v41; // rdx
  char v42; // al
  char *v43; // rsi
  unsigned int v44; // r15d
  unsigned int v45; // r12d
  __int64 v46; // rsi
  const char *v47; // r15
  int v48; // esi
  int v49; // eax
  __int64 v50; // r14
  int v51; // eax
  unsigned __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // ecx
  int v55; // eax
  int v56; // ecx
  int v57; // [rsp+30h] [rbp-D0h]
  int v58; // [rsp+34h] [rbp-CCh]
  int v59; // [rsp+38h] [rbp-C8h] BYREF
  int v60; // [rsp+3Ch] [rbp-C4h]
  int v61; // [rsp+40h] [rbp-C0h]
  __int64 v62; // [rsp+48h] [rbp-B8h]
  char SrcCh[4]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t v64; // [rsp+54h] [rbp-ACh] BYREF
  _WORD v65[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v66; // [rsp+5Ch] [rbp-A4h]
  wchar_t *v67; // [rsp+60h] [rbp-A0h]
  int v68; // [rsp+68h] [rbp-98h]
  int v69; // [rsp+6Ch] [rbp-94h]
  _WORD *v70; // [rsp+70h] [rbp-90h]
  char *v71; // [rsp+78h] [rbp-88h]
  wchar_t DstCh[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v73; // [rsp+100h] [rbp+0h] BYREF
  char v74; // [rsp+27Fh] [rbp+17Fh] BYREF

  v67 = a4;
  v62 = a1;
  v4 = a4;
  v68 = 0;
  v5 = a2;
  v66 = 0;
  v6 = a1;
  v60 = 0;
  v7 = 0;
  v58 = 0;
  v8 = 0;
  v57 = 0;
  v61 = 0;
  if ( a1 && a2 )
  {
    v10 = *a2;
    v11 = 0;
    v59 = 0;
    LODWORD(v12) = 0;
    v69 = 0;
    if ( v10 )
    {
      v13 = v71;
      while ( 1 )
      {
        v14 = v5++;
        v70 = v5;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x58u )
          v15 = 0;
        else
          v15 = _lookuptable[v10 - 32] & 0xF;
        v16 = _lookuptable[8 * v15 + v69] >> 4;
        v69 = v16;
        if ( !v16 )
          goto LABEL_161;
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                v21 = v20 - 1;
                if ( v21 )
                {
                  v22 = v21 - 1;
                  if ( v22 )
                  {
                    if ( v22 != 1 )
                      goto LABEL_163;
                    if ( v10 > 0x69u )
                    {
                      switch ( v10 )
                      {
                        case 'n':
                          v67 = v4 + 4;
                          v43 = *(char **)v4;
                          if ( !get_printf_count_output() )
                            goto LABEL_187;
                          if ( (v7 & 0x20) != 0 )
                            *(_WORD *)v43 = v11;
                          else
                            *(_DWORD *)v43 = v11;
                          v23 = 1;
                          v57 = 1;
                          goto LABEL_27;
                        case 'o':
                          v27 = 8;
                          if ( (v7 & 0x80u) == 0 )
                            goto LABEL_51;
                          v28 = v58;
                          v7 |= 0x200u;
LABEL_52:
                          v29 = v4 + 4;
                          v67 = v29;
                          if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
                          {
                            v30 = *((_QWORD *)v29 - 1);
                          }
                          else if ( (v7 & 0x20) != 0 )
                          {
                            if ( (v7 & 0x40) != 0 )
                              v30 = (__int16)*(v29 - 4);
                            else
                              v30 = *(v29 - 4);
                          }
                          else if ( (v7 & 0x40) != 0 )
                          {
                            v30 = *((int *)v29 - 2);
                          }
                          else
                          {
                            v30 = *((unsigned int *)v29 - 2);
                          }
                          if ( (v7 & 0x40) != 0 && v30 < 0 )
                          {
                            v30 = -v30;
                            v7 |= 0x100u;
                          }
                          v36 = (unsigned int)v30;
                          if ( (v7 & 0x9000) != 0 )
                            v36 = v30;
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
                          v37 = v68;
                          v38 = &v74;
                          v58 = v36 != 0 ? v28 : 0;
                          while ( 1 )
                          {
                            v39 = v8;
                            v40 = v38;
                            --v8;
                            if ( v39 <= 0 && !v36 )
                              break;
                            v41 = v36 % v27;
                            v36 /= v27;
                            v42 = v41 + 48;
                            if ( (int)v41 + 48 > 57 )
                              v42 += v37;
                            *v38-- = v42;
                          }
                          v60 = v8;
                          LODWORD(v12) = (unsigned int)&v73 + 383 - (_DWORD)v38;
                          v13 = v38 + 1;
                          if ( (v7 & 0x200) != 0 )
                          {
                            if ( !(_DWORD)v12 || (v67 = v29, *v13 != 48) )
                            {
                              v13 = v40;
                              *v40 = 48;
                              LODWORD(v12) = v12 + 1;
                              v67 = v29;
                            }
                          }
                          goto LABEL_26;
                        case 'p':
                          v8 = 16;
                          v7 |= 0x8000u;
                          goto LABEL_79;
                      }
                      if ( v10 != 115 )
                      {
                        if ( v10 == 117 )
                          goto LABEL_50;
                        if ( v10 != 120 )
                          goto LABEL_26;
                        v68 = 39;
                        v31 = 120;
                        goto LABEL_80;
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
                          switch ( v10 )
                          {
                            case 'Z':
                              v25 = *(char **)v4;
                              v67 = v4 + 4;
                              if ( v25 && (v13 = (const char *)*((_QWORD *)v25 + 1)) != 0LL )
                              {
                                if ( *((_WORD *)v25 + 1) < *(_WORD *)v25 )
                                  goto LABEL_187;
                                LODWORD(v12) = *(unsigned __int16 *)v25;
                                if ( (v7 & 0x800) != 0 )
                                {
                                  if ( (v12 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                                  {
LABEL_187:
                                    ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers();
                                    return 0xFFFFFFFFLL;
                                  }
                                  LODWORD(v12) = *(unsigned __int16 *)v25 >> 1;
                                  v61 = 1;
                                }
                                else
                                {
                                  v61 = 0;
                                }
                              }
                              else
                              {
                                v13 = "(null)";
                                LODWORD(v12) = 6;
                              }
                              break;
                            case 'c':
LABEL_44:
                              v26 = *v4;
                              v64 = *v4;
                              v61 = 1;
                              v67 = v4 + 4;
                              if ( (v7 & 0x20) != 0 )
                              {
                                SrcCh[0] = v26;
                                SrcCh[1] = 0;
                                if ( mbtowc(DstCh, SrcCh, _mb_cur_max) < 0 )
                                  v57 = 1;
                              }
                              else
                              {
                                DstCh[0] = v26;
                              }
                              v13 = (const char *)DstCh;
                              LODWORD(v12) = 1;
                              break;
                            case 'd':
LABEL_49:
                              v7 |= 0x40u;
LABEL_50:
                              v27 = 10;
LABEL_51:
                              v28 = v58;
                              goto LABEL_52;
                            default:
                              break;
                          }
LABEL_26:
                          v23 = v57;
LABEL_27:
                          if ( v23 )
                            goto LABEL_162;
                          if ( (v7 & 0x40) != 0 )
                          {
                            if ( (v7 & 0x100) != 0 )
                            {
                              v24 = 45;
                              goto LABEL_117;
                            }
                            if ( (v7 & 1) != 0 )
                            {
                              v24 = 43;
LABEL_117:
                              v65[0] = v24;
LABEL_118:
                              v44 = 1;
                              v58 = 1;
LABEL_122:
                              v45 = v66 - v12 - v44;
                              if ( (v7 & 0xC) == 0 )
                                write_multi_char(32LL, v45, v62, &v59);
                              write_string(v65, v44, v62, &v59);
                              v46 = v62;
                              if ( (v7 & 0xC) == 8 )
                                write_multi_char(48LL, v45, v62, &v59);
                              if ( v61 || (int)v12 <= 0 )
                              {
                                write_string(v13, (unsigned int)v12, v46, &v59);
LABEL_136:
                                v11 = v59;
                              }
                              else
                              {
                                v47 = v13;
                                v48 = v12;
                                while ( 1 )
                                {
                                  --v48;
                                  v49 = mbtowc(&v64, v47, _mb_cur_max);
                                  v50 = v49;
                                  if ( v49 == 2 )
                                    --v48;
                                  if ( v49 <= 0 )
                                    break;
                                  write_char(v64, v62, &v59);
                                  v47 += v50;
                                  if ( v48 <= 0 )
                                  {
                                    v46 = v62;
                                    goto LABEL_136;
                                  }
                                }
                                v46 = v62;
                                v11 = -1;
                                v59 = -1;
                              }
                              if ( v11 >= 0 && (v7 & 4) != 0 )
                              {
                                write_multi_char(32LL, v45, v46, &v59);
                                v11 = v59;
                              }
                              v8 = v60;
                              goto LABEL_162;
                            }
                            if ( (v7 & 2) != 0 )
                            {
                              v65[0] = 32;
                              goto LABEL_118;
                            }
                          }
                          v44 = v58;
                          goto LABEL_122;
                        }
LABEL_79:
                        v68 = 7;
                        v31 = 88;
LABEL_80:
                        v27 = 16;
                        if ( (v7 & 0x80u) == 0 )
                          goto LABEL_51;
                        v65[1] = v31;
                        v65[0] = 48;
                        v28 = 2;
                        goto LABEL_52;
                      }
                      if ( (v7 & 0x830) == 0 )
                        v7 |= 0x20u;
                    }
                    v13 = *(const char **)v4;
                    v32 = v8;
                    if ( v8 == -1 )
                      v32 = 0x7FFFFFFF;
                    v67 = v4 + 4;
                    if ( (v7 & 0x20) != 0 )
                    {
                      LODWORD(v12) = 0;
                      v33 = v13;
                      if ( !v13 )
                      {
                        v13 = "(null)";
                        v33 = "(null)";
                      }
                      if ( v32 > 0 )
                      {
                        do
                        {
                          if ( !*v33 )
                            break;
                          ++v33;
                          LODWORD(v12) = v12 + 1;
                        }
                        while ( (int)v12 < v32 );
                      }
                    }
                    else
                    {
                      v61 = 1;
                      v34 = L"(null)";
                      if ( v13 )
                        v34 = (const wchar_t *)v13;
                      v13 = (const char *)v34;
                      for ( i = v34; v32; ++i )
                      {
                        --v32;
                        if ( !*i )
                          break;
                      }
                      v12 = i - v34;
                    }
                    goto LABEL_26;
                  }
                  switch ( v10 )
                  {
                    case 'I':
                      v52 = (unsigned __int16)*v5;
                      v7 |= 0x8000u;
                      if ( (_WORD)v52 == 54 )
                      {
                        if ( v14[2] == 52 )
                        {
                          v5 = v14 + 3;
                          break;
                        }
LABEL_160:
                        v69 = 0;
LABEL_161:
                        v61 = 1;
                        write_char(v10, v6, &v59);
                        v11 = v59;
LABEL_162:
                        v6 = v62;
                        v5 = v70;
                        break;
                      }
                      if ( (_WORD)v52 == 51 )
                      {
                        if ( v14[2] == 50 )
                        {
                          v5 = v14 + 3;
                          v7 &= ~0x8000u;
                          break;
                        }
                        goto LABEL_160;
                      }
                      LOWORD(v52) = v52 - 88;
                      if ( (unsigned __int16)v52 > 0x20u )
                        goto LABEL_160;
                      v53 = 0x120821001LL;
                      if ( !_bittest64(&v53, v52) )
                        goto LABEL_160;
                      break;
                    case 'h':
                      v7 |= 0x20u;
                      break;
                    case 'l':
                      v51 = 4096;
                      if ( *v5 != 108 )
                        v51 = 16;
                      v7 |= v51;
                      if ( *v5 != 108 )
                        v5 = v14;
                      ++v5;
                      break;
                    case 'w':
                      v7 |= 0x800u;
                      break;
                  }
                }
                else if ( v10 == 42 )
                {
                  v8 = *(_DWORD *)v4;
                  v67 = v4 + 4;
                  v60 = v8;
                  if ( v8 < 0 )
                  {
                    v8 = -1;
                    v60 = -1;
                  }
                }
                else
                {
                  v8 = v10 + 2 * (5 * v8 - 24);
                  v60 = v8;
                }
              }
              else
              {
                v8 = 0;
                v60 = 0;
              }
            }
            else
            {
              if ( v10 == 42 )
              {
                v54 = *(_DWORD *)v4;
                v67 = v4 + 4;
                v55 = v7 | 4;
                if ( v54 >= 0 )
                  v55 = v7;
                v7 = v55;
                v56 = abs32(v54);
              }
              else
              {
                v56 = v10 + 2 * (5 * v66 - 24);
              }
              v66 = v56;
            }
          }
          else
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
          }
        }
        else
        {
          v60 = -1;
          v57 = 0;
          v7 = 0;
          v66 = 0;
          v8 = -1;
          v58 = 0;
          v61 = 0;
        }
LABEL_163:
        v10 = *v5;
        if ( !*v5 )
          return (unsigned int)v11;
        v4 = v67;
      }
    }
    return (unsigned int)v11;
  }
  else
  {
    ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers();
    return 0xFFFFFFFFLL;
  }
}
