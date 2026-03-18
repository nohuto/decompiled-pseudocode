/*
 * XREFs of _output_s @ 0x1401A68E8
 * Callers:
 *     _soutput_s @ 0x1401A71EC (_soutput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177050 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     write_char_0 @ 0x1401A3EF8 (write_char_0.c)
 *     write_multi_char_0 @ 0x1401A3F50 (write_multi_char_0.c)
 *     _safecrt_wctomb_s @ 0x1401A7114 (_safecrt_wctomb_s.c)
 *     write_string_1 @ 0x1401A72E8 (write_string_1.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall output_s(FILE *a1, char *a2, int *a3)
{
  int v5; // edi
  int v6; // esi
  unsigned int v7; // r15d
  char *v8; // rbx
  char v10; // r9
  __int64 v11; // r12
  int v12; // r10d
  char *v13; // r8
  int v14; // edx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r10
  __int64 v17; // rax
  char *v18; // rcx
  unsigned __int16 v19; // ax
  int v20; // ecx
  const wchar_t *v21; // r12
  int v22; // eax
  int v23; // eax
  const char *v24; // rax
  unsigned __int64 v25; // r8
  _BYTE *v26; // rbx
  int v27; // ecx
  char v28; // r15
  unsigned int v29; // r9d
  int v30; // ecx
  unsigned __int64 v31; // rdx
  char v32; // al
  int v33; // eax
  bool v34; // zf
  int v35; // r14d
  FILE *v36; // rsi
  unsigned __int16 *v37; // r15
  int v38; // esi
  __int64 v39; // r9
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  int v43; // ecx
  _BYTE v45[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+34h] [rbp-CCh] BYREF
  int v47; // [rsp+38h] [rbp-C8h]
  int v48; // [rsp+3Ch] [rbp-C4h]
  int v49; // [rsp+40h] [rbp-C0h] BYREF
  int v50; // [rsp+44h] [rbp-BCh]
  int v51; // [rsp+48h] [rbp-B8h]
  int v52; // [rsp+4Ch] [rbp-B4h]
  FILE *v53; // [rsp+50h] [rbp-B0h]
  int v54; // [rsp+58h] [rbp-A8h]
  int v55; // [rsp+5Ch] [rbp-A4h]
  unsigned int v56; // [rsp+60h] [rbp-A0h] BYREF
  char *v57; // [rsp+68h] [rbp-98h]
  _BYTE v58[512]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v59[8]; // [rsp+270h] [rbp+170h] BYREF

  v53 = a1;
  v54 = 0;
  v5 = 0;
  v52 = 0;
  v6 = 0;
  v48 = 0;
  v7 = 0;
  v47 = 0;
  v8 = 0LL;
  v55 = 0;
  memset(v58, 0, sizeof(v58));
  v50 = 0;
  if ( !a1 || !a2 )
    goto LABEL_186;
  v10 = *a2;
  LODWORD(v11) = 0;
  v46 = 0;
  v12 = 0;
  v49 = 0;
  if ( !v10 )
    return (unsigned int)v46;
  do
  {
    v13 = a2++;
    v57 = a2;
    if ( v46 < 0 )
      break;
    if ( (unsigned __int8)(v10 - 32) > 0x5Au )
      v14 = 0;
    else
      v14 = _lookuptable_s[v10 - 32] & 0xF;
    v15 = (unsigned int)(v14 + v12 + 8 * v14);
    v12 = _lookuptable_s[v15] >> 4;
    v51 = v12;
    switch ( v12 )
    {
      case 8:
        goto LABEL_186;
      case 0:
        goto LABEL_157;
      case 1:
        v6 = -1;
        v55 = 0;
        v48 = -1;
        v7 = 0;
        v52 = 0;
        v5 = 0;
        v47 = 0;
        v50 = 0;
        break;
      case 2:
        switch ( v10 )
        {
          case ' ':
            v5 |= 2u;
            break;
          case '#':
            v5 |= 0x80u;
            break;
          case '+':
            v5 |= 1u;
            break;
          case '-':
            v5 |= 4u;
            break;
          case '0':
            v5 |= 8u;
            break;
        }
        break;
      case 3:
        if ( v10 == 42 )
        {
          v42 = *a3;
          a3 += 2;
          v43 = v5 | 4;
          if ( v42 >= 0 )
            v43 = v5;
          v5 = v43;
          v52 = abs32(v42);
        }
        else
        {
          v52 = v10 + 2 * (5 * v52 - 24);
        }
        break;
      case 4:
        v6 = 0;
        v48 = 0;
        break;
      case 5:
        if ( v10 != 42 )
        {
          v6 = v10 + 2 * (5 * v6 - 24);
          goto LABEL_162;
        }
        v6 = *a3;
        a3 += 2;
        v48 = v6;
        if ( v6 < 0 )
        {
          v6 = -1;
LABEL_162:
          v48 = v6;
        }
        break;
      case 6:
        switch ( v10 )
        {
          case 'I':
            goto LABEL_139;
          case 'h':
            v5 |= 0x20u;
            goto LABEL_182;
          case 'j':
            goto LABEL_139;
          case 'l':
            v40 = 4096;
            if ( *a2 != 108 )
              v40 = 16;
            v5 |= v40;
            if ( *a2 != 108 )
              a2 = v13;
            ++a2;
            goto LABEL_182;
          case 't':
            goto LABEL_139;
          case 'w':
            v5 |= 0x800u;
            goto LABEL_182;
          case 'z':
LABEL_139:
            v5 |= 0x8000u;
            if ( v10 == 73 )
            {
              if ( *a2 == 54 && v13[2] == 52 )
              {
                a2 = v13 + 3;
              }
              else
              {
                if ( *a2 != 51 || v13[2] != 50 )
                {
LABEL_154:
                  LOBYTE(v15) = *a2 - 88;
                  if ( (unsigned __int8)v15 <= 0x20u )
                  {
                    v41 = 0x120821001LL;
                    if ( _bittest64(&v41, v15) )
                      goto LABEL_182;
                  }
                  v51 = 0;
LABEL_157:
                  v50 = 0;
                  write_char_0(v10, v53, &v46);
LABEL_181:
                  v12 = v51;
                  goto LABEL_182;
                }
                a2 = v13 + 3;
                v5 &= ~0x8000u;
              }
            }
            else if ( v10 != 106 )
            {
              goto LABEL_154;
            }
            break;
        }
        break;
      case 7:
        if ( v10 > 105 )
        {
          switch ( v10 )
          {
            case 'n':
              goto LABEL_186;
            case 'o':
              v16 = 8LL;
              if ( (v5 & 0x80u) != 0 )
                v5 |= 0x200u;
              goto LABEL_27;
            case 'p':
              v6 = 16;
              v5 |= 0x8000u;
              goto LABEL_74;
          }
          if ( v10 != 115 )
          {
            if ( v10 != 117 )
            {
              if ( v10 != 120 )
                goto LABEL_106;
              v23 = 39;
              goto LABEL_75;
            }
LABEL_26:
            v16 = 10LL;
LABEL_27:
            a3 += 2;
            if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
            {
              v17 = *((_QWORD *)a3 - 1);
            }
            else if ( (v5 & 0x20) != 0 )
            {
              if ( (v5 & 0x40) != 0 )
                v17 = *((__int16 *)a3 - 4);
              else
                v17 = *((unsigned __int16 *)a3 - 4);
            }
            else if ( (v5 & 0x40) != 0 )
            {
              v17 = *(a3 - 2);
            }
            else
            {
              v17 = (unsigned int)*(a3 - 2);
            }
            if ( (v5 & 0x40) != 0 && v17 < 0 )
            {
              v17 = -v17;
              v5 |= 0x100u;
            }
            v25 = (unsigned int)v17;
            if ( (v5 & 0x9000) != 0 )
              v25 = v17;
            if ( v6 >= 0 )
            {
              v5 &= ~8u;
              if ( v6 > 512 )
                v6 = 512;
            }
            else
            {
              v6 = 1;
            }
            v26 = &v58[511];
            v27 = v25 != 0 ? v7 : 0;
            v28 = v54;
            v47 = v27;
            v29 = v27;
            while ( 1 )
            {
              v30 = v6--;
              if ( v30 <= 0 && !v25 )
                break;
              v31 = v25 % v16;
              v25 /= v16;
              v32 = v31 + 48;
              if ( (int)v31 + 48 > 57 )
                v32 = v31 + v28 + 48;
              *v26-- = v32;
            }
            v48 = v6;
            v33 = (unsigned int)&v58[144] + 367 - (_DWORD)v26;
            v7 = v29;
            v8 = v26 + 1;
            v49 = v33;
            LODWORD(v11) = v33;
            if ( (v5 & 0x200) != 0 )
            {
              if ( !v33 || (v34 = *v8 == 48, v47 = v29, !v34) )
              {
                --v8;
                v47 = v29;
                LODWORD(v11) = v33 + 1;
                v7 = v29;
                v49 = v33 + 1;
                *v8 = 48;
              }
            }
            goto LABEL_106;
          }
        }
        else
        {
          if ( v10 == 105 )
            goto LABEL_25;
          if ( v10 == 67 )
          {
            if ( (v5 & 0x830) == 0 )
              v5 |= 0x800u;
            goto LABEL_50;
          }
          if ( v10 != 83 )
          {
            if ( v10 != 88 )
            {
              if ( v10 != 90 )
              {
                if ( v10 != 99 )
                {
                  if ( v10 == 100 )
                  {
LABEL_25:
                    v5 |= 0x40u;
                    goto LABEL_26;
                  }
LABEL_106:
                  if ( v55 )
                    goto LABEL_181;
                  if ( (v5 & 0x40) != 0 )
                  {
                    if ( (v5 & 0x100) != 0 )
                    {
                      v45[0] = 45;
                      goto LABEL_114;
                    }
                    if ( (v5 & 1) != 0 )
                    {
                      v45[0] = 43;
                      goto LABEL_114;
                    }
                    if ( (v5 & 2) != 0 )
                    {
                      v45[0] = 32;
LABEL_114:
                      v7 = 1;
                      v47 = 1;
                    }
                  }
                  v35 = v52 - v11 - v7;
                  if ( (v5 & 0xC) == 0 )
                    write_multi_char_0(32, v35, v53, &v46);
                  write_string_1(v45, v7, v53, &v46);
                  v36 = v53;
                  if ( (v5 & 0xC) == 8 )
                    write_multi_char_0(48, v35, v53, &v46);
                  if ( v50 && (int)v11 > 0 )
                  {
                    v37 = (unsigned __int16 *)v8;
                    v38 = v11;
                    while ( 1 )
                    {
                      v39 = *v37++;
                      --v38;
                      if ( (unsigned int)safecrt_wctomb_s(&v56, v59, 6LL, v39) || !v56 )
                        break;
                      write_string_1(v59, v56, v53, &v46);
                      if ( !v38 )
                        goto LABEL_127;
                    }
                    v46 = -1;
LABEL_127:
                    v7 = v47;
                    v36 = v53;
                  }
                  else
                  {
                    write_string_1(v8, (unsigned int)v11, v36, &v46);
                  }
                  if ( v46 >= 0 && (v5 & 4) != 0 )
                  {
                    write_multi_char_0(32, v35, v36, &v46);
                    v6 = v48;
                    a2 = v57;
                  }
                  else
                  {
                    a2 = v57;
                    v6 = v48;
                  }
                  goto LABEL_181;
                }
LABEL_50:
                a3 += 2;
                if ( (v5 & 0x810) != 0 )
                {
                  v22 = safecrt_wctomb_s(&v49, v58, 512LL, *((unsigned __int16 *)a3 - 4));
                  LODWORD(v11) = v49;
                  if ( v22 )
                    v55 = 1;
                }
                else
                {
                  LODWORD(v11) = 1;
                  v58[0] = *((_BYTE *)a3 - 8);
                  v49 = 1;
                }
                v8 = v58;
                goto LABEL_106;
              }
              v18 = *(char **)a3;
              a3 += 2;
              if ( v18 && (v8 = (char *)*((_QWORD *)v18 + 1)) != 0LL )
              {
                if ( *((_WORD *)v18 + 1) < *(_WORD *)v18 )
                  goto LABEL_186;
                v19 = *(_WORD *)v18;
                LODWORD(v11) = *(unsigned __int16 *)v18;
                if ( (v5 & 0x800) != 0 )
                {
                  if ( (v11 & 1) != 0 || ((unsigned __int8)v8 & 1) != 0 )
                    goto LABEL_186;
                  v50 = 1;
                  LODWORD(v11) = v19 >> 1;
                }
                else
                {
                  v50 = 0;
                }
              }
              else
              {
                v8 = "(null)";
                LODWORD(v11) = 6;
              }
LABEL_39:
              v49 = v11;
              goto LABEL_106;
            }
LABEL_74:
            v23 = 7;
LABEL_75:
            v54 = v23;
            if ( (v5 & 0x80u) != 0 )
            {
              v45[0] = 48;
              v45[1] = v23 + 81;
              v7 = 2;
            }
            v16 = 16LL;
            goto LABEL_27;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x800u;
        }
        v8 = *(char **)a3;
        v20 = v6;
        if ( v6 == -1 )
          v20 = 0x7FFFFFFF;
        a3 += 2;
        if ( (v5 & 0x810) != 0 )
        {
          v21 = (const wchar_t *)v8;
          if ( !v8 )
          {
            v8 = (char *)L"(null)";
            v21 = L"(null)";
          }
          v50 = 1;
          while ( v20 )
          {
            --v20;
            if ( !*v21 )
              break;
            ++v21;
          }
          v11 = ((char *)v21 - v8) >> 1;
        }
        else
        {
          v24 = "(null)";
          if ( v8 )
            v24 = v8;
          v8 = (char *)v24;
          while ( v20 )
          {
            --v20;
            if ( !*v24 )
              break;
            ++v24;
          }
          LODWORD(v11) = (_DWORD)v24 - (_DWORD)v8;
        }
        goto LABEL_39;
    }
LABEL_182:
    v10 = *a2;
  }
  while ( *a2 );
  if ( !v12 || v12 == 7 )
    return (unsigned int)v46;
LABEL_186:
  xHalTimerWatchdogStop();
  return 0xFFFFFFFFLL;
}
