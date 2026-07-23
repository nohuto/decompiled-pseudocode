/*
 * XREFs of _output_l @ 0x140198FB4
 * Callers:
 *     _vsnprintf_l @ 0x140194E7C (_vsnprintf_l.c)
 *     _snprintf @ 0x140195340 (_snprintf.c)
 *     sprintf @ 0x140196C10 (sprintf.c)
 *     _vsprintf_l @ 0x140197704 (_vsprintf_l.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wctomb_s @ 0x140197F30 (wctomb_s.c)
 *     write_char_0 @ 0x140199804 (write_char_0.c)
 *     write_multi_char_0 @ 0x14019985C (write_multi_char_0.c)
 *     write_string_0 @ 0x1401998B4 (write_string_0.c)
 *     _get_printf_count_output @ 0x140199F4C (_get_printf_count_output.c)
 */

__int64 __fastcall output_l(__int64 a1, _BYTE *a2, __int64 a3, int *a4)
{
  _BYTE *v5; // r14
  __int64 v6; // r10
  int v7; // edi
  int v8; // r11d
  int v9; // r12d
  int v10; // esi
  int v11; // r15d
  char v12; // r9
  wchar_t *v13; // rbx
  _BYTE *v14; // r8
  int v15; // ecx
  char *v16; // rax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rcx
  wchar_t *v25; // rax
  const wchar_t *v26; // rax
  unsigned __int64 v27; // r10
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  char *v32; // rbx
  int v33; // ecx
  char v34; // si
  int v35; // r9d
  char *v36; // rdx
  unsigned __int64 v37; // rdx
  char v38; // al
  int v39; // eax
  wchar_t *v40; // rsi
  unsigned int v41; // r15d
  unsigned int v42; // r14d
  __int64 v43; // rcx
  __int64 v44; // r15
  int v45; // esi
  wchar_t *v46; // r15
  wchar_t v47; // r9
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // eax
  int v53; // ecx
  int v55; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v57[4]; // [rsp+38h] [rbp-C8h] BYREF
  int SizeConverted; // [rsp+3Ch] [rbp-C4h] BYREF
  int v59; // [rsp+40h] [rbp-C0h]
  int v60; // [rsp+44h] [rbp-BCh]
  __int64 v61; // [rsp+48h] [rbp-B8h]
  int v62; // [rsp+50h] [rbp-B0h]
  int v63; // [rsp+54h] [rbp-ACh]
  int v64; // [rsp+58h] [rbp-A8h]
  int v65; // [rsp+5Ch] [rbp-A4h] BYREF
  _BYTE *v66; // [rsp+60h] [rbp-A0h]
  char *v67; // [rsp+68h] [rbp-98h]
  char MbCh[144]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v69; // [rsp+100h] [rbp+0h] BYREF
  char v70; // [rsp+26Fh] [rbp+16Fh] BYREF
  char v71[8]; // [rsp+270h] [rbp+170h] BYREF

  v61 = a1;
  v5 = a2;
  v63 = 0;
  v6 = a1;
  v59 = 0;
  v7 = 0;
  v55 = 0;
  v8 = 0;
  v62 = 0;
  v9 = 0;
  v60 = 0;
  v10 = 0;
  if ( a1 && a2 )
  {
    v11 = 0;
    v56 = 0;
    SizeConverted = 0;
    v64 = 0;
    v12 = *a2;
    if ( *a2 )
    {
      v13 = (wchar_t *)v67;
      do
      {
        v14 = v5++;
        v66 = v5;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int8)(v12 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = _lookuptable[v12 - 32] & 0xF;
        v16 = _lookuptable;
        v17 = _lookuptable[8 * v15 + v64] >> 4;
        v64 = v17;
        if ( !v17 )
        {
          v51 = 0LL;
          goto LABEL_188;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          v62 = 0;
          v8 = 0;
          v59 = 0;
          v10 = 0;
          v55 = 0;
          v7 = 0;
          v9 = -1;
          v60 = 0;
          goto LABEL_190;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          switch ( v12 )
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
          goto LABEL_190;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          if ( v12 == 42 )
          {
            v52 = *a4;
            a4 += 2;
            v53 = v7 | 4;
            if ( v52 >= 0 )
              v53 = v7;
            v8 = abs32(v52);
            v7 = v53;
          }
          else
          {
            v8 = v12 + 2 * (5 * v8 - 24);
          }
          v59 = v8;
          goto LABEL_190;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          v9 = 0;
          goto LABEL_190;
        }
        v22 = v21 - 1;
        if ( !v22 )
        {
          if ( v12 == 42 )
          {
            v9 = *a4;
            a4 += 2;
            if ( v9 < 0 )
              v9 = -1;
          }
          else
          {
            v9 = v12 + 2 * (5 * v9 - 24);
          }
          goto LABEL_190;
        }
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = (unsigned int)(v23 - 1);
          if ( !(_DWORD)v24 )
          {
            if ( v12 > 105 )
            {
              switch ( v12 )
              {
                case 'n':
                  v40 = *(wchar_t **)a4;
                  a4 += 2;
                  if ( !get_printf_count_output() )
                    goto LABEL_192;
                  if ( (v7 & 0x20) != 0 )
                    *v40 = v11;
                  else
                    *(_DWORD *)v40 = v11;
                  v10 = v55;
                  v62 = 1;
                  goto LABEL_25;
                case 'o':
                  v27 = 8LL;
                  if ( (v7 & 0x80u) != 0 )
                    v7 |= 0x200u;
                  goto LABEL_56;
                case 'p':
                  v9 = 16;
                  v7 |= 0x8000u;
                  goto LABEL_79;
              }
              if ( v12 != 115 )
              {
                if ( v12 == 117 )
                  goto LABEL_55;
                if ( v12 != 120 )
                  goto LABEL_25;
                v29 = 39;
                goto LABEL_80;
              }
            }
            else
            {
              if ( v12 == 105 )
                goto LABEL_54;
              if ( v12 == 67 )
              {
                if ( (v7 & 0x830) == 0 )
                  v7 |= 0x800u;
                goto LABEL_49;
              }
              if ( v12 != 83 )
              {
                if ( v12 != 88 )
                {
                  if ( v12 == 90 )
                  {
                    v25 = *(wchar_t **)a4;
                    a4 += 2;
                    if ( v25 && (v13 = (wchar_t *)*((_QWORD *)v25 + 1)) != 0LL )
                    {
                      LOWORD(v24) = *v25;
                      if ( v25[1] < *v25 )
                        goto LABEL_192;
                      v24 = (unsigned __int16)v24;
                      if ( (v7 & 0x800) != 0 )
                      {
                        if ( (v24 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                          goto LABEL_192;
                        v60 = 1;
                        v24 = (unsigned __int16)v24 >> 1;
                      }
                      else
                      {
                        v60 = 0;
                      }
                    }
                    else
                    {
                      v13 = (wchar_t *)"(null)";
                      v24 = 6LL;
                    }
                    SizeConverted = v24;
                    goto LABEL_25;
                  }
                  if ( v12 != 99 )
                  {
                    if ( v12 != 100 )
                      goto LABEL_25;
LABEL_54:
                    v7 |= 0x40u;
LABEL_55:
                    v27 = 10LL;
LABEL_56:
                    a4 += 2;
                    if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
                    {
                      v28 = *((_QWORD *)a4 - 1);
                    }
                    else if ( (v7 & 0x20) != 0 )
                    {
                      if ( (v7 & 0x40) != 0 )
                        v28 = *((__int16 *)a4 - 4);
                      else
                        v28 = *((unsigned __int16 *)a4 - 4);
                    }
                    else if ( (v7 & 0x40) != 0 )
                    {
                      v28 = *(a4 - 2);
                    }
                    else
                    {
                      v28 = (unsigned int)*(a4 - 2);
                    }
                    if ( (v7 & 0x40) != 0 && v28 < 0 )
                    {
                      v28 = -v28;
                      v7 |= 0x100u;
                    }
                    v31 = (unsigned int)v28;
                    if ( (v7 & 0x9000) != 0 )
                      v31 = v28;
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
                    v32 = &v70;
                    v33 = v31 != 0 ? v10 : 0;
                    v34 = v63;
                    v55 = v33;
                    v35 = v33;
                    while ( 1 )
                    {
                      v24 = (unsigned int)v9;
                      v36 = v32;
                      --v9;
                      if ( (int)v24 <= 0 && !v31 )
                        break;
                      v37 = v31 % v27;
                      v31 /= v27;
                      v38 = v37 + 48;
                      if ( (int)v37 + 48 > 57 )
                        v38 = v37 + v34 + 48;
                      *v32-- = v38;
                    }
                    v13 = (wchar_t *)(v32 + 1);
                    v39 = (unsigned int)&v69 + 367 - (_DWORD)v36;
                    SizeConverted = v39;
                    v10 = v35;
                    if ( (v7 & 0x200) != 0 )
                    {
                      if ( !v39 || (v55 = v35, *(_BYTE *)v13 != 48) )
                      {
                        *v36 = 48;
                        SizeConverted = v39 + 1;
                        v13 = (wchar_t *)v36;
                        v55 = v35;
                        v10 = v35;
                      }
                    }
LABEL_25:
                    if ( v62 )
                      goto LABEL_189;
                    if ( (v7 & 0x40) == 0 )
                      goto LABEL_121;
                    if ( (v7 & 0x100) != 0 )
                    {
                      v57[0] = 45;
                      goto LABEL_118;
                    }
                    if ( (v7 & 1) != 0 )
                    {
                      v57[0] = 43;
                      goto LABEL_118;
                    }
                    if ( (v7 & 2) != 0 )
                    {
                      v57[0] = 32;
LABEL_118:
                      v41 = 1;
                      v55 = 1;
                    }
                    else
                    {
LABEL_121:
                      v41 = v55;
                    }
                    v42 = v59 - SizeConverted - v41;
                    if ( (v7 & 0xC) == 0 )
                    {
                      LOBYTE(v24) = 32;
                      write_multi_char_0(v24, v42, v61, &v56);
                    }
                    write_string_0(v57, v41, v61, &v56);
                    v44 = v61;
                    if ( (v7 & 0xC) == 8 )
                    {
                      LOBYTE(v43) = 48;
                      write_multi_char_0(v43, v42, v61, &v56);
                    }
                    v45 = SizeConverted;
                    if ( v60 && SizeConverted > 0 )
                    {
                      v46 = v13;
                      while ( 1 )
                      {
                        v47 = *v46++;
                        --v45;
                        if ( wctomb_s(&v65, v71, 6uLL, v47) || !v65 )
                          break;
                        write_string_0(v71, (unsigned int)v65, v61, &v56);
                        if ( !v45 )
                          goto LABEL_135;
                      }
                      v11 = -1;
                      v56 = -1;
                    }
                    else
                    {
                      write_string_0(v13, (unsigned int)SizeConverted, v44, &v56);
LABEL_135:
                      v11 = v56;
                    }
                    if ( v11 >= 0 && (v7 & 4) != 0 )
                    {
                      LOBYTE(v48) = 32;
                      write_multi_char_0(v48, v42, v61, &v56);
                      v11 = v56;
                    }
                    v5 = v66;
                    v10 = v55;
                    goto LABEL_189;
                  }
LABEL_49:
                  a4 += 2;
                  if ( (v7 & 0x810) != 0 )
                  {
                    if ( wctomb_s(&SizeConverted, MbCh, 0x200uLL, *((_WORD *)a4 - 4)) )
                      v62 = 1;
                  }
                  else
                  {
                    MbCh[0] = *((_BYTE *)a4 - 8);
                    SizeConverted = 1;
                  }
                  v13 = (wchar_t *)MbCh;
                  goto LABEL_25;
                }
LABEL_79:
                v29 = 7;
LABEL_80:
                v63 = v29;
                if ( (v7 & 0x80u) != 0 )
                {
                  v57[0] = 48;
                  v57[1] = v29 + 81;
                  v10 = 2;
                }
                v27 = 16LL;
                goto LABEL_56;
              }
              if ( (v7 & 0x830) == 0 )
                v7 |= 0x800u;
            }
            v13 = *(wchar_t **)a4;
            v24 = (unsigned int)v9;
            if ( v9 == -1 )
              v24 = 0x7FFFFFFFLL;
            a4 += 2;
            if ( (v7 & 0x810) != 0 )
            {
              v26 = v13;
              if ( !v13 )
              {
                v13 = L"(null)";
                v26 = L"(null)";
              }
              v60 = 1;
              while ( (_DWORD)v24 )
              {
                v24 = (unsigned int)(v24 - 1);
                if ( !*v26 )
                  break;
                ++v26;
              }
              v30 = v26 - v13;
            }
            else
            {
              v30 = (__int64)"(null)";
              if ( v13 )
                v30 = (__int64)v13;
              v13 = (wchar_t *)v30;
              while ( (_DWORD)v24 )
              {
                v24 = (unsigned int)(v24 - 1);
                if ( !*(_BYTE *)v30 )
                  break;
                ++v30;
              }
              LODWORD(v30) = v30 - (_DWORD)v13;
            }
            SizeConverted = v30;
            goto LABEL_25;
          }
        }
        else
        {
          switch ( v12 )
          {
            case 'I':
              goto LABEL_147;
            case 'h':
              v7 |= 0x20u;
              break;
            case 'j':
              goto LABEL_147;
            case 'l':
              v49 = 4096;
              if ( *v5 != 108 )
                v49 = 16;
              v7 |= v49;
              if ( *v5 != 108 )
                v5 = v14;
              ++v5;
              break;
            case 't':
              goto LABEL_147;
            case 'w':
              v7 |= 0x800u;
              break;
            case 'z':
LABEL_147:
              v7 |= 0x8000u;
              if ( v12 == 73 )
              {
                if ( *v5 == 54 && v14[2] == 52 )
                {
                  v5 = v14 + 3;
                }
                else
                {
                  if ( *v5 != 51 || v14[2] != 50 )
                  {
LABEL_162:
                    LOBYTE(v16) = *v5 - 88;
                    if ( (unsigned __int8)v16 <= 0x20u )
                    {
                      v50 = 0x120821001LL;
                      if ( _bittest64(&v50, (unsigned __int64)v16) )
                        break;
                    }
                    v51 = 0LL;
                    v64 = 0;
LABEL_188:
                    v60 = 0;
                    LOBYTE(v51) = v12;
                    write_char_0(v51, v6, &v56);
                    v11 = v56;
LABEL_189:
                    v8 = v59;
                    v6 = v61;
                    break;
                  }
                  v5 = v14 + 3;
                  v7 &= ~0x8000u;
                }
              }
              else if ( v12 != 106 )
              {
                goto LABEL_162;
              }
              break;
          }
        }
LABEL_190:
        v12 = *v5;
      }
      while ( *v5 );
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_192:
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
