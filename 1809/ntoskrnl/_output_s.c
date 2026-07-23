/*
 * XREFs of _output_s @ 0x14019C1B8
 * Callers:
 *     _soutput_s @ 0x14019CAD8 (_soutput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     write_char_0 @ 0x140199804 (write_char_0.c)
 *     write_multi_char_0 @ 0x14019985C (write_multi_char_0.c)
 *     _safecrt_wctomb_s @ 0x14019CA00 (_safecrt_wctomb_s.c)
 *     write_string_1 @ 0x14019CBB4 (write_string_1.c)
 */

__int64 __fastcall output_s(FILE *a1, char *a2, int *a3)
{
  char *v4; // r15
  FILE *v5; // r11
  int v6; // edi
  int v7; // esi
  unsigned int v8; // r12d
  __int64 v9; // r14
  int v10; // r10d
  char v11; // r9
  const wchar_t *v12; // rbx
  char *v13; // r8
  int v14; // edx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r10
  __int64 v17; // rax
  unsigned __int16 *v18; // rax
  unsigned __int16 v19; // cx
  int v20; // ecx
  const wchar_t *v21; // r14
  int v22; // eax
  int v23; // eax
  const char *v24; // rax
  unsigned __int64 v25; // r8
  char *v26; // rbx
  int v27; // ecx
  char v28; // r12
  unsigned int v29; // r9d
  int v30; // ecx
  char *v31; // rdx
  unsigned __int64 v32; // rdx
  char v33; // al
  int v34; // eax
  bool v35; // zf
  int v36; // r15d
  FILE *v37; // rsi
  unsigned __int16 *v38; // r12
  int v39; // esi
  __int64 v40; // r9
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  int v45; // ecx
  _BYTE v46[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v47; // [rsp+34h] [rbp-CCh] BYREF
  int v48; // [rsp+38h] [rbp-C8h]
  int v49; // [rsp+3Ch] [rbp-C4h]
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+44h] [rbp-BCh]
  int v52; // [rsp+48h] [rbp-B8h]
  FILE *v53; // [rsp+50h] [rbp-B0h]
  int v54; // [rsp+58h] [rbp-A8h]
  int v55; // [rsp+5Ch] [rbp-A4h]
  int v56; // [rsp+60h] [rbp-A0h]
  const char *v57; // [rsp+68h] [rbp-98h]
  unsigned int v58[4]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v59[128]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+100h] [rbp+0h] BYREF
  char v61; // [rsp+27Fh] [rbp+17Fh] BYREF
  char v62[8]; // [rsp+280h] [rbp+180h] BYREF

  v53 = a1;
  v55 = 0;
  v54 = 0;
  v4 = a2;
  v49 = 0;
  v5 = a1;
  v48 = 0;
  v6 = 0;
  v56 = 0;
  v7 = 0;
  v51 = 0;
  v8 = 0;
  if ( !a1 || !a2 )
    goto LABEL_186;
  v47 = 0;
  LODWORD(v9) = 0;
  v50 = 0;
  v10 = 0;
  v11 = *a2;
  if ( !*a2 )
    return (unsigned int)v47;
  v12 = (const wchar_t *)v57;
  do
  {
    v13 = v4++;
    v57 = v4;
    if ( v47 < 0 )
      break;
    if ( (unsigned __int8)(v11 - 32) > 0x5Au )
      v14 = 0;
    else
      v14 = _lookuptable_s[v11 - 32] & 0xF;
    v15 = (unsigned int)(v14 + v10 + 8 * v14);
    v10 = _lookuptable_s[v15] >> 4;
    v52 = v10;
    switch ( v10 )
    {
      case 8:
        goto LABEL_186;
      case 0:
        goto LABEL_185;
      case 1:
        v7 = -1;
        v56 = 0;
        v49 = -1;
        v8 = 0;
        v54 = 0;
        v6 = 0;
        v48 = 0;
        v51 = 0;
        break;
      case 2:
        switch ( v11 )
        {
          case ' ':
            v6 |= 2u;
            break;
          case '#':
            v6 |= 0x80u;
            break;
          case '+':
            v6 |= 1u;
            break;
          case '-':
            v6 |= 4u;
            break;
          case '0':
            v6 |= 8u;
            break;
        }
        break;
      case 3:
        if ( v11 == 42 )
        {
          v44 = *a3;
          a3 += 2;
          v45 = v6 | 4;
          if ( v44 >= 0 )
            v45 = v6;
          v6 = v45;
          v54 = abs32(v44);
        }
        else
        {
          v54 = v11 + 2 * (5 * v54 - 24);
        }
        break;
      case 4:
        v7 = 0;
        v49 = 0;
        break;
      case 5:
        if ( v11 != 42 )
        {
          v7 = v11 + 2 * (5 * v7 - 24);
          goto LABEL_167;
        }
        v7 = *a3;
        a3 += 2;
        v49 = v7;
        if ( v7 < 0 )
        {
          v7 = -1;
LABEL_167:
          v49 = v7;
        }
        break;
      case 6:
        switch ( v11 )
        {
          case 'I':
            goto LABEL_145;
          case 'h':
            v6 |= 0x20u;
            goto LABEL_134;
          case 'j':
            goto LABEL_145;
          case 'l':
            v42 = 4096;
            if ( *v4 != 108 )
              v42 = 16;
            v6 |= v42;
            if ( *v4 != 108 )
              v4 = v13;
            ++v4;
            goto LABEL_134;
          case 't':
            goto LABEL_145;
          case 'w':
            v6 |= 0x800u;
            goto LABEL_134;
          case 'z':
LABEL_145:
            v6 |= 0x8000u;
            if ( v11 == 73 )
            {
              if ( *v4 == 54 && v13[2] == 52 )
              {
                v4 = v13 + 3;
                goto LABEL_134;
              }
              if ( *v4 == 51 && v13[2] == 50 )
              {
                v4 = v13 + 3;
                v6 &= ~0x8000u;
                goto LABEL_134;
              }
            }
            else if ( v11 == 106 )
            {
              goto LABEL_134;
            }
            LOBYTE(v15) = *v4 - 88;
            if ( (unsigned __int8)v15 <= 0x20u )
            {
              v43 = 0x120821001LL;
              if ( _bittest64(&v43, v15) )
                goto LABEL_134;
            }
            v52 = 0;
LABEL_185:
            v51 = 0;
            write_char_0(v11, v5, &v47);
LABEL_133:
            v10 = v52;
            v5 = v53;
            break;
        }
        break;
      case 7:
        if ( v11 > 105 )
        {
          switch ( v11 )
          {
            case 'n':
              goto LABEL_186;
            case 'o':
              v16 = 8LL;
              if ( (v6 & 0x80u) != 0 )
                v6 |= 0x200u;
              goto LABEL_28;
            case 'p':
              v7 = 16;
              v6 |= 0x8000u;
              goto LABEL_75;
          }
          if ( v11 != 115 )
          {
            if ( v11 != 117 )
            {
              if ( v11 != 120 )
                goto LABEL_107;
              v23 = 39;
              goto LABEL_76;
            }
LABEL_27:
            v16 = 10LL;
LABEL_28:
            a3 += 2;
            if ( (v6 & 0x8000) != 0 || (v6 & 0x1000) != 0 )
            {
              v17 = *((_QWORD *)a3 - 1);
            }
            else if ( (v6 & 0x20) != 0 )
            {
              if ( (v6 & 0x40) != 0 )
                v17 = *((__int16 *)a3 - 4);
              else
                v17 = *((unsigned __int16 *)a3 - 4);
            }
            else if ( (v6 & 0x40) != 0 )
            {
              v17 = *(a3 - 2);
            }
            else
            {
              v17 = (unsigned int)*(a3 - 2);
            }
            if ( (v6 & 0x40) != 0 && v17 < 0 )
            {
              v17 = -v17;
              v6 |= 0x100u;
            }
            v25 = (unsigned int)v17;
            if ( (v6 & 0x9000) != 0 )
              v25 = v17;
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
            v26 = &v61;
            v27 = v25 != 0 ? v8 : 0;
            v28 = v55;
            v48 = v27;
            v29 = v27;
            while ( 1 )
            {
              v30 = v7;
              v31 = v26;
              --v7;
              if ( v30 <= 0 && !v25 )
                break;
              v32 = v25 % v16;
              v25 /= v16;
              v33 = v32 + 48;
              if ( (int)v32 + 48 > 57 )
                v33 = v32 + v28 + 48;
              *v26-- = v33;
            }
            v49 = v7;
            v34 = (unsigned int)&v60 + 383 - (_DWORD)v26;
            v12 = (const wchar_t *)(v26 + 1);
            v50 = v34;
            LODWORD(v9) = v34;
            v8 = v29;
            if ( (v6 & 0x200) != 0 )
            {
              if ( !v34 || (v35 = *(_BYTE *)v12 == 48, v48 = v29, !v35) )
              {
                LODWORD(v9) = v34 + 1;
                *v31 = 48;
                v50 = v34 + 1;
                v12 = (const wchar_t *)v31;
                v8 = v29;
                v48 = v29;
              }
            }
            goto LABEL_107;
          }
        }
        else
        {
          if ( v11 == 105 )
            goto LABEL_26;
          if ( v11 == 67 )
          {
            if ( (v6 & 0x830) == 0 )
              v6 |= 0x800u;
            goto LABEL_51;
          }
          if ( v11 != 83 )
          {
            if ( v11 != 88 )
            {
              if ( v11 != 90 )
              {
                if ( v11 != 99 )
                {
                  if ( v11 == 100 )
                  {
LABEL_26:
                    v6 |= 0x40u;
                    goto LABEL_27;
                  }
LABEL_107:
                  if ( v56 )
                    goto LABEL_133;
                  if ( (v6 & 0x40) != 0 )
                  {
                    if ( (v6 & 0x100) != 0 )
                    {
                      v46[0] = 45;
                      goto LABEL_115;
                    }
                    if ( (v6 & 1) != 0 )
                    {
                      v46[0] = 43;
                      goto LABEL_115;
                    }
                    if ( (v6 & 2) != 0 )
                    {
                      v46[0] = 32;
LABEL_115:
                      v8 = 1;
                      v48 = 1;
                    }
                  }
                  v36 = v54 - v9 - v8;
                  if ( (v6 & 0xC) == 0 )
                    write_multi_char_0(32, v36, v53, &v47);
                  write_string_1(v46, v8, v53, &v47);
                  v37 = v53;
                  if ( (v6 & 0xC) == 8 )
                    write_multi_char_0(48, v36, v53, &v47);
                  if ( v51 && (int)v9 > 0 )
                  {
                    v38 = (unsigned __int16 *)v12;
                    v39 = v9;
                    while ( 1 )
                    {
                      v40 = *v38++;
                      --v39;
                      if ( (unsigned int)safecrt_wctomb_s(v58, v62, 6LL, v40) || !v58[0] )
                        break;
                      write_string_1(v62, v58[0], v53, &v47);
                      if ( !v39 )
                      {
                        v8 = v48;
                        v37 = v53;
                        goto LABEL_129;
                      }
                    }
                    v47 = -1;
                    v8 = v48;
                    v37 = v53;
                  }
                  else
                  {
                    write_string_1(v12, (unsigned int)v9, v37, &v47);
                  }
LABEL_129:
                  if ( v47 >= 0 && (v6 & 4) != 0 )
                    write_multi_char_0(32, v36, v37, &v47);
                  v4 = (char *)v57;
                  v7 = v49;
                  goto LABEL_133;
                }
LABEL_51:
                a3 += 2;
                if ( (v6 & 0x810) != 0 )
                {
                  v22 = safecrt_wctomb_s(&v50, v59, 512LL, *((unsigned __int16 *)a3 - 4));
                  LODWORD(v9) = v50;
                  if ( v22 )
                    v56 = 1;
                }
                else
                {
                  LODWORD(v9) = 1;
                  v59[0] = *((_BYTE *)a3 - 8);
                  v50 = 1;
                }
                v12 = (const wchar_t *)v59;
                goto LABEL_107;
              }
              v18 = *(unsigned __int16 **)a3;
              a3 += 2;
              if ( v18 && (v12 = (const wchar_t *)*((_QWORD *)v18 + 1)) != 0LL )
              {
                if ( v18[1] < *v18 )
                  goto LABEL_186;
                v19 = *v18;
                LODWORD(v9) = *v18;
                if ( (v6 & 0x800) != 0 )
                {
                  if ( (v9 & 1) != 0 || ((unsigned __int8)v12 & 1) != 0 )
                    goto LABEL_186;
                  v51 = 1;
                  LODWORD(v9) = v19 >> 1;
                }
                else
                {
                  v51 = 0;
                }
              }
              else
              {
                v12 = (const wchar_t *)"(null)";
                LODWORD(v9) = 6;
              }
LABEL_40:
              v50 = v9;
              goto LABEL_107;
            }
LABEL_75:
            v23 = 7;
LABEL_76:
            v55 = v23;
            if ( (v6 & 0x80u) != 0 )
            {
              v46[0] = 48;
              v46[1] = v23 + 81;
              v8 = 2;
            }
            v16 = 16LL;
            goto LABEL_28;
          }
          if ( (v6 & 0x830) == 0 )
            v6 |= 0x800u;
        }
        v12 = *(const wchar_t **)a3;
        v20 = v7;
        if ( v7 == -1 )
          v20 = 0x7FFFFFFF;
        a3 += 2;
        if ( (v6 & 0x810) != 0 )
        {
          v21 = v12;
          if ( !v12 )
          {
            v12 = L"(null)";
            v21 = L"(null)";
          }
          v51 = 1;
          while ( v20 )
          {
            --v20;
            if ( !*v21 )
              break;
            ++v21;
          }
          v9 = v21 - v12;
        }
        else
        {
          v24 = "(null)";
          if ( v12 )
            v24 = (const char *)v12;
          v12 = (const wchar_t *)v24;
          while ( v20 )
          {
            --v20;
            if ( !*v24 )
              break;
            ++v24;
          }
          LODWORD(v9) = (_DWORD)v24 - (_DWORD)v12;
        }
        goto LABEL_40;
    }
LABEL_134:
    v11 = *v4;
  }
  while ( *v4 );
  if ( !v10 || v10 == 7 )
    return (unsigned int)v47;
LABEL_186:
  xHalTimerWatchdogStop();
  return 0xFFFFFFFFLL;
}
